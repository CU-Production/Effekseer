﻿using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;

namespace Effekseer.IO
{
	class MaterialCacheGenerator
	{
		public static void GenerateMaterialCaches()
		{
			var exporter = new Binary.Exporter();
			exporter.Export(Core.Root);

			foreach(var path in exporter.Materials)
			{
				var materialPath = Utils.Misc.GetAbsolutePath(Core.Root.GetPath().GetAbsolutePath(), path);
				GenerateMaterialCache(materialPath);
			}
		}
		
		public static void GenerateMaterialCache(string absolutePath)
		{
			if (string.IsNullOrEmpty(absolutePath))
				return;

			var generator = new swig.CompiledMaterialGenerator();

			string appDirectory = Application.EntryDirectory;
			string fullPath = System.IO.Path.Combine(appDirectory, "tools/");

			generator.Initialize(fullPath);

			generator.Compile(CreateBinaryFilePath(absolutePath), absolutePath);

			generator.Dispose();
		}
		public static string CreateBinaryFilePath(string absolutePath)
		{
			return absolutePath + "d";
		}
	}
}

