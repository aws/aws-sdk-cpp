#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/ShapeDeserializer.h>

namespace smithy {
namespace schema {

class SMITHY_API CborShapeDeserializer final : public ShapeDeserializer {
 public:
  CborShapeDeserializer(const unsigned char* data, size_t length);
  ~CborShapeDeserializer();

  bool ReadBoolean() override;
  int ReadInteger() override;
  int64_t ReadLong() override;
  float ReadFloat() override;
  double ReadDouble() override;
  Aws::String ReadString() override;
  Aws::Utils::DateTime ReadTimestamp() override;
  Aws::Utils::ByteBuffer ReadBlob() override;
  int ReadEnum() override;

  void BeginStruct() override;
  void EndStruct() override;

  size_t BeginList() override;
  void EndList() override;

  size_t BeginMap() override;
  void EndMap() override;

  Aws::String ReadKey() override;
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
