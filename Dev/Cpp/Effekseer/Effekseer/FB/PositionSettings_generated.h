// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_POSITIONSETTINGS_EFFEKSEER_FB_H_
#define FLATBUFFERS_GENERATED_POSITIONSETTINGS_EFFEKSEER_FB_H_

#include "flatbuffers/flatbuffers.h"

#include "CommonStructures_generated.h"
#include "FCurve_generated.h"
#include "Easing_generated.h"

namespace Effekseer {
namespace FB {

struct PositionSettings_Fixed;
struct PositionSettings_FixedBuilder;

struct PositionSettings_PVA;
struct PositionSettings_PVABuilder;

struct PositionSettings_Easing;
struct PositionSettings_EasingBuilder;

struct PositionSettings_FCurve;
struct PositionSettings_FCurveBuilder;

struct PositionSettings_NurbsCurve;
struct PositionSettings_NurbsCurveBuilder;

struct PositionSettings_ViewOffset;
struct PositionSettings_ViewOffsetBuilder;

struct PositionSettings;
struct PositionSettingsBuilder;

enum class PositionType : int32_t {
  PositionType_None = -1,
  PositionType_Fixed = 0,
  PositionType_PVA = 1,
  PositionType_Easing = 2,
  PositionType_FCurve = 3,
  PositionType_NurbsCurve = 4,
  PositionType_ViewOffset = 5,
  MIN = PositionType_None,
  MAX = PositionType_ViewOffset
};

inline const PositionType (&EnumValuesPositionType())[7] {
  static const PositionType values[] = {
    PositionType::PositionType_None,
    PositionType::PositionType_Fixed,
    PositionType::PositionType_PVA,
    PositionType::PositionType_Easing,
    PositionType::PositionType_FCurve,
    PositionType::PositionType_NurbsCurve,
    PositionType::PositionType_ViewOffset
  };
  return values;
}

inline const char * const *EnumNamesPositionType() {
  static const char * const names[8] = {
    "PositionType_None",
    "PositionType_Fixed",
    "PositionType_PVA",
    "PositionType_Easing",
    "PositionType_FCurve",
    "PositionType_NurbsCurve",
    "PositionType_ViewOffset",
    nullptr
  };
  return names;
}

inline const char *EnumNamePositionType(PositionType e) {
  if (flatbuffers::IsOutRange(e, PositionType::PositionType_None, PositionType::PositionType_ViewOffset)) return "";
  const size_t index = static_cast<size_t>(e) - static_cast<size_t>(PositionType::PositionType_None);
  return EnumNamesPositionType()[index];
}

struct PositionSettings_Fixed FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettings_FixedBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_REF_EQ = 4,
    VT_VALUE = 6
  };
  int32_t ref_eq() const {
    return GetField<int32_t>(VT_REF_EQ, -1);
  }
  const Effekseer::FB::Vec3F *value() const {
    return GetStruct<const Effekseer::FB::Vec3F *>(VT_VALUE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_REF_EQ) &&
           VerifyField<Effekseer::FB::Vec3F>(verifier, VT_VALUE) &&
           verifier.EndTable();
  }
};

struct PositionSettings_FixedBuilder {
  typedef PositionSettings_Fixed Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_ref_eq(int32_t ref_eq) {
    fbb_.AddElement<int32_t>(PositionSettings_Fixed::VT_REF_EQ, ref_eq, -1);
  }
  void add_value(const Effekseer::FB::Vec3F *value) {
    fbb_.AddStruct(PositionSettings_Fixed::VT_VALUE, value);
  }
  explicit PositionSettings_FixedBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings_Fixed> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings_Fixed>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings_Fixed> CreatePositionSettings_Fixed(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t ref_eq = -1,
    const Effekseer::FB::Vec3F *value = 0) {
  PositionSettings_FixedBuilder builder_(_fbb);
  builder_.add_value(value);
  builder_.add_ref_eq(ref_eq);
  return builder_.Finish();
}

struct PositionSettings_PVA FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettings_PVABuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_POS = 4,
    VT_VEL = 6,
    VT_ACC = 8
  };
  const Effekseer::FB::Vec3FRange *pos() const {
    return GetStruct<const Effekseer::FB::Vec3FRange *>(VT_POS);
  }
  const Effekseer::FB::Vec3FRange *vel() const {
    return GetStruct<const Effekseer::FB::Vec3FRange *>(VT_VEL);
  }
  const Effekseer::FB::Vec3FRange *acc() const {
    return GetStruct<const Effekseer::FB::Vec3FRange *>(VT_ACC);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Effekseer::FB::Vec3FRange>(verifier, VT_POS) &&
           VerifyField<Effekseer::FB::Vec3FRange>(verifier, VT_VEL) &&
           VerifyField<Effekseer::FB::Vec3FRange>(verifier, VT_ACC) &&
           verifier.EndTable();
  }
};

struct PositionSettings_PVABuilder {
  typedef PositionSettings_PVA Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_pos(const Effekseer::FB::Vec3FRange *pos) {
    fbb_.AddStruct(PositionSettings_PVA::VT_POS, pos);
  }
  void add_vel(const Effekseer::FB::Vec3FRange *vel) {
    fbb_.AddStruct(PositionSettings_PVA::VT_VEL, vel);
  }
  void add_acc(const Effekseer::FB::Vec3FRange *acc) {
    fbb_.AddStruct(PositionSettings_PVA::VT_ACC, acc);
  }
  explicit PositionSettings_PVABuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings_PVA> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings_PVA>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings_PVA> CreatePositionSettings_PVA(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Effekseer::FB::Vec3FRange *pos = 0,
    const Effekseer::FB::Vec3FRange *vel = 0,
    const Effekseer::FB::Vec3FRange *acc = 0) {
  PositionSettings_PVABuilder builder_(_fbb);
  builder_.add_acc(acc);
  builder_.add_vel(vel);
  builder_.add_pos(pos);
  return builder_.Finish();
}

struct PositionSettings_Easing FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettings_EasingBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_LOCATION = 4
  };
  const Effekseer::FB::EasingVec3F *location() const {
    return GetPointer<const Effekseer::FB::EasingVec3F *>(VT_LOCATION);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_LOCATION) &&
           verifier.VerifyTable(location()) &&
           verifier.EndTable();
  }
};

struct PositionSettings_EasingBuilder {
  typedef PositionSettings_Easing Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_location(flatbuffers::Offset<Effekseer::FB::EasingVec3F> location) {
    fbb_.AddOffset(PositionSettings_Easing::VT_LOCATION, location);
  }
  explicit PositionSettings_EasingBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings_Easing> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings_Easing>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings_Easing> CreatePositionSettings_Easing(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Effekseer::FB::EasingVec3F> location = 0) {
  PositionSettings_EasingBuilder builder_(_fbb);
  builder_.add_location(location);
  return builder_.Finish();
}

struct PositionSettings_FCurve FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettings_FCurveBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_FCURVE = 4
  };
  const Effekseer::FB::FCurveGroup *fcurve() const {
    return GetPointer<const Effekseer::FB::FCurveGroup *>(VT_FCURVE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_FCURVE) &&
           verifier.VerifyTable(fcurve()) &&
           verifier.EndTable();
  }
};

struct PositionSettings_FCurveBuilder {
  typedef PositionSettings_FCurve Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_fcurve(flatbuffers::Offset<Effekseer::FB::FCurveGroup> fcurve) {
    fbb_.AddOffset(PositionSettings_FCurve::VT_FCURVE, fcurve);
  }
  explicit PositionSettings_FCurveBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings_FCurve> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings_FCurve>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings_FCurve> CreatePositionSettings_FCurve(
    flatbuffers::FlatBufferBuilder &_fbb,
    flatbuffers::Offset<Effekseer::FB::FCurveGroup> fcurve = 0) {
  PositionSettings_FCurveBuilder builder_(_fbb);
  builder_.add_fcurve(fcurve);
  return builder_.Finish();
}

struct PositionSettings_NurbsCurve FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettings_NurbsCurveBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_INDEX = 4,
    VT_SCALE = 6,
    VT_MOVE_SPEED = 8,
    VT_LOOP_TYPE = 10
  };
  int32_t index() const {
    return GetField<int32_t>(VT_INDEX, 0);
  }
  float scale() const {
    return GetField<float>(VT_SCALE, 0.0f);
  }
  float move_speed() const {
    return GetField<float>(VT_MOVE_SPEED, 0.0f);
  }
  int32_t loop_type() const {
    return GetField<int32_t>(VT_LOOP_TYPE, 0);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_INDEX) &&
           VerifyField<float>(verifier, VT_SCALE) &&
           VerifyField<float>(verifier, VT_MOVE_SPEED) &&
           VerifyField<int32_t>(verifier, VT_LOOP_TYPE) &&
           verifier.EndTable();
  }
};

struct PositionSettings_NurbsCurveBuilder {
  typedef PositionSettings_NurbsCurve Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_index(int32_t index) {
    fbb_.AddElement<int32_t>(PositionSettings_NurbsCurve::VT_INDEX, index, 0);
  }
  void add_scale(float scale) {
    fbb_.AddElement<float>(PositionSettings_NurbsCurve::VT_SCALE, scale, 0.0f);
  }
  void add_move_speed(float move_speed) {
    fbb_.AddElement<float>(PositionSettings_NurbsCurve::VT_MOVE_SPEED, move_speed, 0.0f);
  }
  void add_loop_type(int32_t loop_type) {
    fbb_.AddElement<int32_t>(PositionSettings_NurbsCurve::VT_LOOP_TYPE, loop_type, 0);
  }
  explicit PositionSettings_NurbsCurveBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings_NurbsCurve> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings_NurbsCurve>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings_NurbsCurve> CreatePositionSettings_NurbsCurve(
    flatbuffers::FlatBufferBuilder &_fbb,
    int32_t index = 0,
    float scale = 0.0f,
    float move_speed = 0.0f,
    int32_t loop_type = 0) {
  PositionSettings_NurbsCurveBuilder builder_(_fbb);
  builder_.add_loop_type(loop_type);
  builder_.add_move_speed(move_speed);
  builder_.add_scale(scale);
  builder_.add_index(index);
  return builder_.Finish();
}

struct PositionSettings_ViewOffset FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettings_ViewOffsetBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_DISTANCE = 4
  };
  const Effekseer::FB::FloatRange *distance() const {
    return GetStruct<const Effekseer::FB::FloatRange *>(VT_DISTANCE);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<Effekseer::FB::FloatRange>(verifier, VT_DISTANCE) &&
           verifier.EndTable();
  }
};

struct PositionSettings_ViewOffsetBuilder {
  typedef PositionSettings_ViewOffset Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_distance(const Effekseer::FB::FloatRange *distance) {
    fbb_.AddStruct(PositionSettings_ViewOffset::VT_DISTANCE, distance);
  }
  explicit PositionSettings_ViewOffsetBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings_ViewOffset> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings_ViewOffset>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings_ViewOffset> CreatePositionSettings_ViewOffset(
    flatbuffers::FlatBufferBuilder &_fbb,
    const Effekseer::FB::FloatRange *distance = 0) {
  PositionSettings_ViewOffsetBuilder builder_(_fbb);
  builder_.add_distance(distance);
  return builder_.Finish();
}

struct PositionSettings FLATBUFFERS_FINAL_CLASS : private flatbuffers::Table {
  typedef PositionSettingsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_TYPE = 4,
    VT_FIXED = 6,
    VT_PVA = 8,
    VT_EASING = 10,
    VT_FCURVE = 12,
    VT_NURBS_CURVE = 14,
    VT_VIEW_OFFSET = 16
  };
  Effekseer::FB::PositionType type() const {
    return static_cast<Effekseer::FB::PositionType>(GetField<int32_t>(VT_TYPE, 0));
  }
  const Effekseer::FB::PositionSettings_Fixed *fixed() const {
    return GetPointer<const Effekseer::FB::PositionSettings_Fixed *>(VT_FIXED);
  }
  const Effekseer::FB::PositionSettings_PVA *pva() const {
    return GetPointer<const Effekseer::FB::PositionSettings_PVA *>(VT_PVA);
  }
  const Effekseer::FB::PositionSettings_Easing *easing() const {
    return GetPointer<const Effekseer::FB::PositionSettings_Easing *>(VT_EASING);
  }
  const Effekseer::FB::PositionSettings_FCurve *fcurve() const {
    return GetPointer<const Effekseer::FB::PositionSettings_FCurve *>(VT_FCURVE);
  }
  const Effekseer::FB::PositionSettings_NurbsCurve *nurbs_curve() const {
    return GetPointer<const Effekseer::FB::PositionSettings_NurbsCurve *>(VT_NURBS_CURVE);
  }
  const Effekseer::FB::PositionSettings_ViewOffset *view_offset() const {
    return GetPointer<const Effekseer::FB::PositionSettings_ViewOffset *>(VT_VIEW_OFFSET);
  }
  bool Verify(flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyField<int32_t>(verifier, VT_TYPE) &&
           VerifyOffset(verifier, VT_FIXED) &&
           verifier.VerifyTable(fixed()) &&
           VerifyOffset(verifier, VT_PVA) &&
           verifier.VerifyTable(pva()) &&
           VerifyOffset(verifier, VT_EASING) &&
           verifier.VerifyTable(easing()) &&
           VerifyOffset(verifier, VT_FCURVE) &&
           verifier.VerifyTable(fcurve()) &&
           VerifyOffset(verifier, VT_NURBS_CURVE) &&
           verifier.VerifyTable(nurbs_curve()) &&
           VerifyOffset(verifier, VT_VIEW_OFFSET) &&
           verifier.VerifyTable(view_offset()) &&
           verifier.EndTable();
  }
};

struct PositionSettingsBuilder {
  typedef PositionSettings Table;
  flatbuffers::FlatBufferBuilder &fbb_;
  flatbuffers::uoffset_t start_;
  void add_type(Effekseer::FB::PositionType type) {
    fbb_.AddElement<int32_t>(PositionSettings::VT_TYPE, static_cast<int32_t>(type), 0);
  }
  void add_fixed(flatbuffers::Offset<Effekseer::FB::PositionSettings_Fixed> fixed) {
    fbb_.AddOffset(PositionSettings::VT_FIXED, fixed);
  }
  void add_pva(flatbuffers::Offset<Effekseer::FB::PositionSettings_PVA> pva) {
    fbb_.AddOffset(PositionSettings::VT_PVA, pva);
  }
  void add_easing(flatbuffers::Offset<Effekseer::FB::PositionSettings_Easing> easing) {
    fbb_.AddOffset(PositionSettings::VT_EASING, easing);
  }
  void add_fcurve(flatbuffers::Offset<Effekseer::FB::PositionSettings_FCurve> fcurve) {
    fbb_.AddOffset(PositionSettings::VT_FCURVE, fcurve);
  }
  void add_nurbs_curve(flatbuffers::Offset<Effekseer::FB::PositionSettings_NurbsCurve> nurbs_curve) {
    fbb_.AddOffset(PositionSettings::VT_NURBS_CURVE, nurbs_curve);
  }
  void add_view_offset(flatbuffers::Offset<Effekseer::FB::PositionSettings_ViewOffset> view_offset) {
    fbb_.AddOffset(PositionSettings::VT_VIEW_OFFSET, view_offset);
  }
  explicit PositionSettingsBuilder(flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  flatbuffers::Offset<PositionSettings> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = flatbuffers::Offset<PositionSettings>(end);
    return o;
  }
};

inline flatbuffers::Offset<PositionSettings> CreatePositionSettings(
    flatbuffers::FlatBufferBuilder &_fbb,
    Effekseer::FB::PositionType type = Effekseer::FB::PositionType::PositionType_Fixed,
    flatbuffers::Offset<Effekseer::FB::PositionSettings_Fixed> fixed = 0,
    flatbuffers::Offset<Effekseer::FB::PositionSettings_PVA> pva = 0,
    flatbuffers::Offset<Effekseer::FB::PositionSettings_Easing> easing = 0,
    flatbuffers::Offset<Effekseer::FB::PositionSettings_FCurve> fcurve = 0,
    flatbuffers::Offset<Effekseer::FB::PositionSettings_NurbsCurve> nurbs_curve = 0,
    flatbuffers::Offset<Effekseer::FB::PositionSettings_ViewOffset> view_offset = 0) {
  PositionSettingsBuilder builder_(_fbb);
  builder_.add_view_offset(view_offset);
  builder_.add_nurbs_curve(nurbs_curve);
  builder_.add_fcurve(fcurve);
  builder_.add_easing(easing);
  builder_.add_pva(pva);
  builder_.add_fixed(fixed);
  builder_.add_type(type);
  return builder_.Finish();
}

}  // namespace FB
}  // namespace Effekseer

#endif  // FLATBUFFERS_GENERATED_POSITIONSETTINGS_EFFEKSEER_FB_H_
