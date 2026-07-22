#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

#include <cstdint>

namespace smithy {
namespace schema {

class SMITHY_API ShapeSerializer {
 public:
  virtual ~ShapeSerializer() = default;

  virtual bool BeginStructure(const Schema& schema) = 0;
  virtual void EndStructure() = 0;

  virtual void WriteBoolean(const Schema& schema, bool value) = 0;
  virtual void WriteInteger(const Schema& schema, int value) = 0;
  virtual void WriteLong(const Schema& schema, int64_t value) = 0;
  virtual void WriteFloat(const Schema& schema, float value) = 0;
  virtual void WriteDouble(const Schema& schema, double value) = 0;
  virtual void WriteString(const Schema& schema, const Aws::String& value) = 0;
  virtual void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) = 0;
  virtual void WriteBlob(const Schema& schema, const Aws::Utils::ByteBuffer& value) = 0;
  virtual void WriteEnum(const Schema& schema, int value) = 0;
  virtual void WriteNull(const Schema& schema) = 0;

  virtual bool BeginList(const Schema& schema, size_t count) = 0;
  virtual void EndList() = 0;

  virtual bool BeginMap(const Schema& schema, size_t count) = 0;
  virtual void WriteMapKey(const Aws::String& key) = 0;
  virtual void EndMap() = 0;

  virtual bool BeginNestedStructure(const Schema& schema) = 0;
  virtual void EndNestedStructure() = 0;
};

}  // namespace schema
}  // namespace smithy
