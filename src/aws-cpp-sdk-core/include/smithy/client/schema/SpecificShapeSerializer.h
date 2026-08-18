#pragma once

#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <functional>

namespace smithy {
namespace schema {

// A ShapeSerializer whose writes default to no-ops; subclasses override only the
// writes they support. Also usable directly as a null/discard serializer.
class SMITHY_API SpecificShapeSerializer : public ShapeSerializer {
 public:
  void WriteStruct(const Schema&, const SerializableStruct&) override {}
  void WriteList(const Schema&, size_t, const std::function<void(ShapeSerializer&)>&) override {}
  void WriteMap(const Schema&, size_t, const std::function<void(MapSerializer&)>&) override {}
  void WriteBoolean(const Schema&, bool) override {}
  void WriteInteger(const Schema&, int) override {}
  void WriteLong(const Schema&, int64_t) override {}
  void WriteFloat(const Schema&, float) override {}
  void WriteDouble(const Schema&, double) override {}
  void WriteString(const Schema&, const Aws::String&) override {}
  void WriteTimestamp(const Schema&, const Aws::Utils::DateTime&) override {}
  void WriteBlob(const Schema&, const Aws::Utils::ByteBuffer&) override {}
  void WriteEnum(const Schema&, int) override {}
  void WriteNull(const Schema&) override {}
};

}  // namespace schema
}  // namespace smithy
