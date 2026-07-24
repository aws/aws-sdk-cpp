#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>

#include <cstdint>

namespace smithy {
namespace schema {

class SMITHY_API ShapeDeserializer {
 public:
  virtual ~ShapeDeserializer() = default;

  virtual bool ReadBoolean() = 0;
  virtual int ReadInteger() = 0;
  virtual int64_t ReadLong() = 0;
  virtual float ReadFloat() = 0;
  virtual double ReadDouble() = 0;
  virtual Aws::String ReadString() = 0;
  virtual Aws::Utils::DateTime ReadTimestamp() = 0;
  virtual Aws::Utils::ByteBuffer ReadBlob() = 0;
  virtual int ReadEnum() = 0;

  virtual void BeginStruct() = 0;
  virtual void EndStruct() = 0;

  virtual size_t BeginList() = 0;
  virtual void EndList() = 0;

  virtual size_t BeginMap() = 0;
  virtual void EndMap() = 0;

  virtual Aws::String ReadKey() = 0;
  virtual bool IsBreak() = 0;
  virtual bool IsNull() = 0;
  virtual void ReadNull() = 0;
  virtual void SkipValue() = 0;
};

}  // namespace schema
}  // namespace smithy
