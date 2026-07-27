#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>

#include <cstdint>

namespace smithy {
namespace schema {

class SMITHY_API ShapeDeserializer {
 public:
  virtual ~ShapeDeserializer() = default;

  virtual Aws::Crt::Optional<bool> ReadBoolean() = 0;
  virtual Aws::Crt::Optional<int> ReadInteger() = 0;
  virtual Aws::Crt::Optional<int64_t> ReadLong() = 0;
  virtual Aws::Crt::Optional<float> ReadFloat() = 0;
  virtual Aws::Crt::Optional<double> ReadDouble() = 0;
  virtual Aws::Crt::Optional<Aws::String> ReadString() = 0;
  virtual Aws::Crt::Optional<Aws::Utils::DateTime> ReadTimestamp() = 0;
  virtual Aws::Crt::Optional<Aws::Utils::ByteBuffer> ReadBlob() = 0;
  virtual Aws::Crt::Optional<int> ReadEnum() = 0;

  virtual size_t BeginStruct() = 0;
  virtual void EndStruct() = 0;

  virtual size_t BeginList() = 0;
  virtual void EndList() = 0;

  virtual size_t BeginMap() = 0;
  virtual void EndMap() = 0;

  virtual Aws::Crt::Optional<Aws::String> ReadKey() = 0;
  virtual bool IsBreak() = 0;
  virtual bool IsNull() = 0;
  virtual void ReadNull() = 0;
  virtual void SkipValue() = 0;
};

}  // namespace schema
}  // namespace smithy
