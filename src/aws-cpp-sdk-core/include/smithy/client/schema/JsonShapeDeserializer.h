#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/ShapeDeserializer.h>

namespace smithy {
namespace schema {

class SMITHY_API JsonShapeDeserializer final : public ShapeDeserializer {
 public:
  JsonShapeDeserializer(const char* data, size_t length);
  ~JsonShapeDeserializer();

  Aws::Crt::Optional<bool> ReadBoolean() override;
  Aws::Crt::Optional<int> ReadInteger() override;
  Aws::Crt::Optional<int64_t> ReadLong() override;
  Aws::Crt::Optional<float> ReadFloat() override;
  Aws::Crt::Optional<double> ReadDouble() override;
  Aws::Crt::Optional<Aws::String> ReadString() override;
  Aws::Crt::Optional<Aws::Utils::DateTime> ReadTimestamp() override;
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> ReadBlob() override;
  Aws::Crt::Optional<int> ReadEnum() override;

  size_t BeginStruct() override;
  void EndStruct() override;

  size_t BeginList() override;
  void EndList() override;

  size_t BeginMap() override;
  void EndMap() override;

  Aws::Crt::Optional<Aws::String> ReadKey() override;
  bool IsBreak() override;
  bool IsNull() override;
  void ReadNull() override;
  void SkipValue() override;

 private:
  class Impl;
  Aws::UniquePtr<Impl> m_impl;
};

}  // namespace schema
}  // namespace smithy
