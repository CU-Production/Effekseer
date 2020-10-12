#if 0
//
// Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
//
//   fxc /Zpc /Tps_3_0 /Emain /Fh
//    ShaderHeader/EffekseerRenderer.Standard_Lighting_PS.h
//    Shader/standard_renderer_lighting_PS.fx
//
//
// Parameters:
//
//   sampler2D Sampler_g_alphaSampler;
//   sampler2D Sampler_g_blendAlphaSampler;
//   sampler2D Sampler_g_blendSampler;
//   sampler2D Sampler_g_blendUVDistortionSampler;
//   sampler2D Sampler_g_colorSampler;
//   sampler2D Sampler_g_normalSampler;
//   sampler2D Sampler_g_uvDistortionSampler;
//   float4 _209_fBlendTextureParameter;
//   float4 _209_fEdgeColor;
//   float4 _209_fEdgeParameter;
//   float4 _209_fEmissiveScaling;
//   float4 _209_fFlipbookParameter;
//   float4 _209_fLightAmbient;
//   float4 _209_fLightDirection;
//   float4 _209_fUVDistortionParameter;
//
//
// Registers:
//
//   Name                               Reg   Size
//   ---------------------------------- ----- ----
//   _209_fLightDirection               c0       1
//   _209_fLightAmbient                 c2       1
//   _209_fFlipbookParameter            c3       1
//   _209_fUVDistortionParameter        c4       1
//   _209_fBlendTextureParameter        c5       1
//   _209_fEmissiveScaling              c6       1
//   _209_fEdgeColor                    c7       1
//   _209_fEdgeParameter                c8       1
//   Sampler_g_colorSampler             s0       1
//   Sampler_g_normalSampler            s1       1
//   Sampler_g_alphaSampler             s2       1
//   Sampler_g_uvDistortionSampler      s3       1
//   Sampler_g_blendSampler             s4       1
//   Sampler_g_blendAlphaSampler        s5       1
//   Sampler_g_blendUVDistortionSampler s6       1
//

    ps_3_0
    def c1, -0.5, -1, -2, -3
    def c9, 2, -1, 0, -0
    dcl_texcoord_centroid v0
    dcl_texcoord1_centroid v1.xy
    dcl_texcoord2 v2.xyz
    dcl_texcoord3 v3.xyz
    dcl_texcoord4 v4.xyz
    dcl_texcoord5 v5
    dcl_texcoord6 v6
    dcl_texcoord7 v7
    dcl_texcoord8 v8.xy
    dcl_2d s0
    dcl_2d s1
    dcl_2d s2
    dcl_2d s3
    dcl_2d s4
    dcl_2d s5
    dcl_2d s6
    texld r0, v5.zwzw, s3
    mad r0.xy, r0, c9.x, c9.y
    mad r0.z, r0.y, -c4.w, c4.z
    mad r0.yw, r0.xxzz, c4.x, v1.xxzy
    texld r1, r0.ywzw, s0
    mul r1, r1, v0
    mad r2.xy, r0.xzzw, c4.x, v7.zwzw
    texld r2, r2, s0
    mov r3.y, c9.y
    add r3.x, r3.y, c3.y
    mad r2, r2, v0, -r1
    mad r2, v8.x, r2, r1
    cmp r2, -r3_abs.x, r2, r1
    cmp r1, -c3.x, r1, r2
    mad r0.xz, r0, c4.x, v5.xyyw
    texld r2, r0.xzzw, s2
    mul r0.x, r2.w, r2.x
    mul r0.z, r0.x, r1.w
    max r2.x, v8.y, c9.z
    mad r2.x, r1.w, -r0.x, r2.x
    cmp r2, r2.x, c9.y, c9.w
    texkill r2
    texld r2, r0.ywzw, s1
    add r2.xyz, r2, c1.x
    add r2.xyz, r2, r2
    mul r3.xyz, r2.y, v4
    mad r2.xyw, r2.x, v3.xyzz, r3.xyzz
    mad r2.xyz, r2.z, v2, r2.xyww
    nrm r3.xyz, r2
    dp3 r0.y, c0, r3
    max r2.x, r0.y, c9.z
    texld r3, v6.zwzw, s6
    mad r3.xy, r3, c9.x, c9.y
    mad r3.z, r3.y, -c4.w, c4.z
    mad r0.yw, r3.xxzz, c4.y, v7.xxzy
    texld r4, r0.ywzw, s4
    mad r0.yw, r3.xxzz, c4.y, v6.xxzy
    texld r3, r0.ywzw, s5
    mul r0.y, r3.w, r3.x
    mul r0.y, r0.y, r4.w
    abs r0.w, c5.x
    mul r2.yzw, r0.y, r4.xxyz
    lrp r3.xyz, r0.y, r4, r1
    mov r5.yzw, c1
    add r5.xyz, r5.yzww, c5.x
    mad r6.xyz, r4, r0.y, r1
    mad r4.xyz, r4, -r0.y, r1
    mul r2.yzw, r1.xxyz, r2
    cmp r1.xyz, -r5_abs.z, r2.yzww, r1
    cmp r1.xyz, -r5_abs.y, r4, r1
    cmp r1.xyz, -r5_abs.x, r6, r1
    cmp r1.xyz, -r0.w, r3, r1
    mul r1.xyz, r1, c6.x
    add r2.xyz, r2.x, c2
    mov r0.y, c8.y
    mul r3.xyz, r0.y, c7
    mad r0.x, r1.w, r0.x, -v8.y
    add r0.x, r0.x, -c8.x
    frc r0.y, -r0.x
    add r0.x, r0.y, r0.x
    mad r1.xyz, r1, r2, -r3
    mad oC0.xyz, r0.x, r1, r3
    mov oC0.w, r0.z

// approximately 65 instruction slots used (8 texture, 57 arithmetic)
#endif

const BYTE g_ps30_main[] =
{
      0,   3, 255, 255, 254, 255, 
    222,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  65,   3, 
      0,   0,   0,   3, 255, 255, 
     15,   0,   0,   0,  28,   0, 
      0,   0,  16,   1,   0,   0, 
     58,   3,   0,   0,  72,   1, 
      0,   0,   3,   0,   2,   0, 
      1,   0,  10,   0,  96,   1, 
      0,   0,   0,   0,   0,   0, 
    112,   1,   0,   0,   3,   0, 
      5,   0,   1,   0,  22,   0, 
    140,   1,   0,   0,   0,   0, 
      0,   0, 156,   1,   0,   0, 
      3,   0,   4,   0,   1,   0, 
     18,   0, 180,   1,   0,   0, 
      0,   0,   0,   0, 196,   1, 
      0,   0,   3,   0,   6,   0, 
      1,   0,  26,   0, 232,   1, 
      0,   0,   0,   0,   0,   0, 
    248,   1,   0,   0,   3,   0, 
      0,   0,   1,   0,   2,   0, 
     16,   2,   0,   0,   0,   0, 
      0,   0,  32,   2,   0,   0, 
      3,   0,   1,   0,   1,   0, 
      6,   0,  56,   2,   0,   0, 
      0,   0,   0,   0,  72,   2, 
      0,   0,   3,   0,   3,   0, 
      1,   0,  14,   0, 104,   2, 
      0,   0,   0,   0,   0,   0, 
    120,   2,   0,   0,   2,   0, 
      5,   0,   1,   0,  22,   0, 
    148,   2,   0,   0,   0,   0, 
      0,   0, 164,   2,   0,   0, 
      2,   0,   7,   0,   1,   0, 
     30,   0, 148,   2,   0,   0, 
      0,   0,   0,   0, 180,   2, 
      0,   0,   2,   0,   8,   0, 
      1,   0,  34,   0, 148,   2, 
      0,   0,   0,   0,   0,   0, 
    200,   2,   0,   0,   2,   0, 
      6,   0,   1,   0,  26,   0, 
    148,   2,   0,   0,   0,   0, 
      0,   0, 222,   2,   0,   0, 
      2,   0,   3,   0,   1,   0, 
     14,   0, 148,   2,   0,   0, 
      0,   0,   0,   0, 246,   2, 
      0,   0,   2,   0,   2,   0, 
      1,   0,  10,   0, 148,   2, 
      0,   0,   0,   0,   0,   0, 
      9,   3,   0,   0,   2,   0, 
      0,   0,   1,   0,   2,   0, 
    148,   2,   0,   0,   0,   0, 
      0,   0,  30,   3,   0,   0, 
      2,   0,   4,   0,   1,   0, 
     18,   0, 148,   2,   0,   0, 
      0,   0,   0,   0,  83,  97, 
    109, 112, 108, 101, 114,  95, 
    103,  95,  97, 108, 112, 104, 
     97,  83,  97, 109, 112, 108, 
    101, 114,   0, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  83,  97, 109, 112, 
    108, 101, 114,  95, 103,  95, 
     98, 108, 101, 110, 100,  65, 
    108, 112, 104,  97,  83,  97, 
    109, 112, 108, 101, 114,   0, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  83,  97, 
    109, 112, 108, 101, 114,  95, 
    103,  95,  98, 108, 101, 110, 
    100,  83,  97, 109, 112, 108, 
    101, 114,   0, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  83,  97, 109, 112, 
    108, 101, 114,  95, 103,  95, 
     98, 108, 101, 110, 100,  85, 
     86,  68, 105, 115, 116, 111, 
    114, 116, 105, 111, 110,  83, 
     97, 109, 112, 108, 101, 114, 
      0, 171,   4,   0,  12,   0, 
      1,   0,   1,   0,   1,   0, 
      0,   0,   0,   0,   0,   0, 
     83,  97, 109, 112, 108, 101, 
    114,  95, 103,  95,  99, 111, 
    108, 111, 114,  83,  97, 109, 
    112, 108, 101, 114,   0, 171, 
      4,   0,  12,   0,   1,   0, 
      1,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  83,  97, 
    109, 112, 108, 101, 114,  95, 
    103,  95, 110, 111, 114, 109, 
     97, 108,  83,  97, 109, 112, 
    108, 101, 114,   0,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  83,  97, 109, 112, 
    108, 101, 114,  95, 103,  95, 
    117, 118,  68, 105, 115, 116, 
    111, 114, 116, 105, 111, 110, 
     83,  97, 109, 112, 108, 101, 
    114,   0, 171, 171,   4,   0, 
     12,   0,   1,   0,   1,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,  95,  50,  48,  57, 
     95, 102,  66, 108, 101, 110, 
    100,  84, 101, 120, 116, 117, 
    114, 101,  80,  97, 114,  97, 
    109, 101, 116, 101, 114,   0, 
      1,   0,   3,   0,   1,   0, 
      4,   0,   1,   0,   0,   0, 
      0,   0,   0,   0,  95,  50, 
     48,  57,  95, 102,  69, 100, 
    103, 101,  67, 111, 108, 111, 
    114,   0,  95,  50,  48,  57, 
     95, 102,  69, 100, 103, 101, 
     80,  97, 114,  97, 109, 101, 
    116, 101, 114,   0,  95,  50, 
     48,  57,  95, 102,  69, 109, 
    105, 115, 115, 105, 118, 101, 
     83,  99,  97, 108, 105, 110, 
    103,   0,  95,  50,  48,  57, 
     95, 102,  70, 108, 105, 112, 
     98, 111, 111, 107,  80,  97, 
    114,  97, 109, 101, 116, 101, 
    114,   0,  95,  50,  48,  57, 
     95, 102,  76, 105, 103, 104, 
    116,  65, 109,  98, 105, 101, 
    110, 116,   0,  95,  50,  48, 
     57,  95, 102,  76, 105, 103, 
    104, 116,  68, 105, 114, 101, 
     99, 116, 105, 111, 110,   0, 
     95,  50,  48,  57,  95, 102, 
     85,  86,  68, 105, 115, 116, 
    111, 114, 116, 105, 111, 110, 
     80,  97, 114,  97, 109, 101, 
    116, 101, 114,   0, 112, 115, 
     95,  51,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
    171, 171,  81,   0,   0,   5, 
      1,   0,  15, 160,   0,   0, 
      0, 191,   0,   0, 128, 191, 
      0,   0,   0, 192,   0,   0, 
     64, 192,  81,   0,   0,   5, 
      9,   0,  15, 160,   0,   0, 
      0,  64,   0,   0, 128, 191, 
      0,   0,   0,   0,   0,   0, 
      0, 128,  31,   0,   0,   2, 
      5,   0,   0, 128,   0,   0, 
     79, 144,  31,   0,   0,   2, 
      5,   0,   1, 128,   1,   0, 
     67, 144,  31,   0,   0,   2, 
      5,   0,   2, 128,   2,   0, 
      7, 144,  31,   0,   0,   2, 
      5,   0,   3, 128,   3,   0, 
      7, 144,  31,   0,   0,   2, 
      5,   0,   4, 128,   4,   0, 
      7, 144,  31,   0,   0,   2, 
      5,   0,   5, 128,   5,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   6, 128,   6,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   7, 128,   7,   0, 
     15, 144,  31,   0,   0,   2, 
      5,   0,   8, 128,   8,   0, 
      3, 144,  31,   0,   0,   2, 
      0,   0,   0, 144,   0,   8, 
     15, 160,  31,   0,   0,   2, 
      0,   0,   0, 144,   1,   8, 
     15, 160,  31,   0,   0,   2, 
      0,   0,   0, 144,   2,   8, 
     15, 160,  31,   0,   0,   2, 
      0,   0,   0, 144,   3,   8, 
     15, 160,  31,   0,   0,   2, 
      0,   0,   0, 144,   4,   8, 
     15, 160,  31,   0,   0,   2, 
      0,   0,   0, 144,   5,   8, 
     15, 160,  31,   0,   0,   2, 
      0,   0,   0, 144,   6,   8, 
     15, 160,  66,   0,   0,   3, 
      0,   0,  15, 128,   5,   0, 
    238, 144,   3,   8, 228, 160, 
      4,   0,   0,   4,   0,   0, 
      3, 128,   0,   0, 228, 128, 
      9,   0,   0, 160,   9,   0, 
     85, 160,   4,   0,   0,   4, 
      0,   0,   4, 128,   0,   0, 
     85, 128,   4,   0, 255, 161, 
      4,   0, 170, 160,   4,   0, 
      0,   4,   0,   0,  10, 128, 
      0,   0, 160, 128,   4,   0, 
      0, 160,   1,   0,  96, 144, 
     66,   0,   0,   3,   1,   0, 
     15, 128,   0,   0, 237, 128, 
      0,   8, 228, 160,   5,   0, 
      0,   3,   1,   0,  15, 128, 
      1,   0, 228, 128,   0,   0, 
    228, 144,   4,   0,   0,   4, 
      2,   0,   3, 128,   0,   0, 
    232, 128,   4,   0,   0, 160, 
      7,   0, 238, 144,  66,   0, 
      0,   3,   2,   0,  15, 128, 
      2,   0, 228, 128,   0,   8, 
    228, 160,   1,   0,   0,   2, 
      3,   0,   2, 128,   9,   0, 
     85, 160,   2,   0,   0,   3, 
      3,   0,   1, 128,   3,   0, 
     85, 128,   3,   0,  85, 160, 
      4,   0,   0,   4,   2,   0, 
     15, 128,   2,   0, 228, 128, 
      0,   0, 228, 144,   1,   0, 
    228, 129,   4,   0,   0,   4, 
      2,   0,  15, 128,   8,   0, 
      0, 144,   2,   0, 228, 128, 
      1,   0, 228, 128,  88,   0, 
      0,   4,   2,   0,  15, 128, 
      3,   0,   0, 140,   2,   0, 
    228, 128,   1,   0, 228, 128, 
     88,   0,   0,   4,   1,   0, 
     15, 128,   3,   0,   0, 161, 
      1,   0, 228, 128,   2,   0, 
    228, 128,   4,   0,   0,   4, 
      0,   0,   5, 128,   0,   0, 
    228, 128,   4,   0,   0, 160, 
      5,   0, 212, 144,  66,   0, 
      0,   3,   2,   0,  15, 128, 
      0,   0, 232, 128,   2,   8, 
    228, 160,   5,   0,   0,   3, 
      0,   0,   1, 128,   2,   0, 
    255, 128,   2,   0,   0, 128, 
      5,   0,   0,   3,   0,   0, 
      4, 128,   0,   0,   0, 128, 
      1,   0, 255, 128,  11,   0, 
      0,   3,   2,   0,   1, 128, 
      8,   0,  85, 144,   9,   0, 
    170, 160,   4,   0,   0,   4, 
      2,   0,   1, 128,   1,   0, 
    255, 128,   0,   0,   0, 129, 
      2,   0,   0, 128,  88,   0, 
      0,   4,   2,   0,  15, 128, 
      2,   0,   0, 128,   9,   0, 
     85, 160,   9,   0, 255, 160, 
     65,   0,   0,   1,   2,   0, 
     15, 128,  66,   0,   0,   3, 
      2,   0,  15, 128,   0,   0, 
    237, 128,   1,   8, 228, 160, 
      2,   0,   0,   3,   2,   0, 
      7, 128,   2,   0, 228, 128, 
      1,   0,   0, 160,   2,   0, 
      0,   3,   2,   0,   7, 128, 
      2,   0, 228, 128,   2,   0, 
    228, 128,   5,   0,   0,   3, 
      3,   0,   7, 128,   2,   0, 
     85, 128,   4,   0, 228, 144, 
      4,   0,   0,   4,   2,   0, 
     11, 128,   2,   0,   0, 128, 
      3,   0, 164, 144,   3,   0, 
    164, 128,   4,   0,   0,   4, 
      2,   0,   7, 128,   2,   0, 
    170, 128,   2,   0, 228, 144, 
      2,   0, 244, 128,  36,   0, 
      0,   2,   3,   0,   7, 128, 
      2,   0, 228, 128,   8,   0, 
      0,   3,   0,   0,   2, 128, 
      0,   0, 228, 160,   3,   0, 
    228, 128,  11,   0,   0,   3, 
      2,   0,   1, 128,   0,   0, 
     85, 128,   9,   0, 170, 160, 
     66,   0,   0,   3,   3,   0, 
     15, 128,   6,   0, 238, 144, 
      6,   8, 228, 160,   4,   0, 
      0,   4,   3,   0,   3, 128, 
      3,   0, 228, 128,   9,   0, 
      0, 160,   9,   0,  85, 160, 
      4,   0,   0,   4,   3,   0, 
      4, 128,   3,   0,  85, 128, 
      4,   0, 255, 161,   4,   0, 
    170, 160,   4,   0,   0,   4, 
      0,   0,  10, 128,   3,   0, 
    160, 128,   4,   0,  85, 160, 
      7,   0,  96, 144,  66,   0, 
      0,   3,   4,   0,  15, 128, 
      0,   0, 237, 128,   4,   8, 
    228, 160,   4,   0,   0,   4, 
      0,   0,  10, 128,   3,   0, 
    160, 128,   4,   0,  85, 160, 
      6,   0,  96, 144,  66,   0, 
      0,   3,   3,   0,  15, 128, 
      0,   0, 237, 128,   5,   8, 
    228, 160,   5,   0,   0,   3, 
      0,   0,   2, 128,   3,   0, 
    255, 128,   3,   0,   0, 128, 
      5,   0,   0,   3,   0,   0, 
      2, 128,   0,   0,  85, 128, 
      4,   0, 255, 128,  35,   0, 
      0,   2,   0,   0,   8, 128, 
      5,   0,   0, 160,   5,   0, 
      0,   3,   2,   0,  14, 128, 
      0,   0,  85, 128,   4,   0, 
    144, 128,  18,   0,   0,   4, 
      3,   0,   7, 128,   0,   0, 
     85, 128,   4,   0, 228, 128, 
      1,   0, 228, 128,   1,   0, 
      0,   2,   5,   0,  14, 128, 
      1,   0, 228, 160,   2,   0, 
      0,   3,   5,   0,   7, 128, 
      5,   0, 249, 128,   5,   0, 
      0, 160,   4,   0,   0,   4, 
      6,   0,   7, 128,   4,   0, 
    228, 128,   0,   0,  85, 128, 
      1,   0, 228, 128,   4,   0, 
      0,   4,   4,   0,   7, 128, 
      4,   0, 228, 128,   0,   0, 
     85, 129,   1,   0, 228, 128, 
      5,   0,   0,   3,   2,   0, 
     14, 128,   1,   0, 144, 128, 
      2,   0, 228, 128,  88,   0, 
      0,   4,   1,   0,   7, 128, 
      5,   0, 170, 140,   2,   0, 
    249, 128,   1,   0, 228, 128, 
     88,   0,   0,   4,   1,   0, 
      7, 128,   5,   0,  85, 140, 
      4,   0, 228, 128,   1,   0, 
    228, 128,  88,   0,   0,   4, 
      1,   0,   7, 128,   5,   0, 
      0, 140,   6,   0, 228, 128, 
      1,   0, 228, 128,  88,   0, 
      0,   4,   1,   0,   7, 128, 
      0,   0, 255, 129,   3,   0, 
    228, 128,   1,   0, 228, 128, 
      5,   0,   0,   3,   1,   0, 
      7, 128,   1,   0, 228, 128, 
      6,   0,   0, 160,   2,   0, 
      0,   3,   2,   0,   7, 128, 
      2,   0,   0, 128,   2,   0, 
    228, 160,   1,   0,   0,   2, 
      0,   0,   2, 128,   8,   0, 
     85, 160,   5,   0,   0,   3, 
      3,   0,   7, 128,   0,   0, 
     85, 128,   7,   0, 228, 160, 
      4,   0,   0,   4,   0,   0, 
      1, 128,   1,   0, 255, 128, 
      0,   0,   0, 128,   8,   0, 
     85, 145,   2,   0,   0,   3, 
      0,   0,   1, 128,   0,   0, 
      0, 128,   8,   0,   0, 161, 
     19,   0,   0,   2,   0,   0, 
      2, 128,   0,   0,   0, 129, 
      2,   0,   0,   3,   0,   0, 
      1, 128,   0,   0,  85, 128, 
      0,   0,   0, 128,   4,   0, 
      0,   4,   1,   0,   7, 128, 
      1,   0, 228, 128,   2,   0, 
    228, 128,   3,   0, 228, 129, 
      4,   0,   0,   4,   0,   8, 
      7, 128,   0,   0,   0, 128, 
      1,   0, 228, 128,   3,   0, 
    228, 128,   1,   0,   0,   2, 
      0,   8,   8, 128,   0,   0, 
    170, 128, 255, 255,   0,   0
};
