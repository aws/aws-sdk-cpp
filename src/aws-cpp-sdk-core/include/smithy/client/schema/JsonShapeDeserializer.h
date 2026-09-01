#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/ShapeDeserializer.h>

namespace smithy {
namespace schema {

class SMITHY_API JsonShapeDeserializer final : public ShapeDeserializer {
 public:
  JsonShapeDeserializer(const unsigned char* data, size_t length);
  ~JsonShapeDeserializer();

  void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) override;
  void ReadList(const Schema& schema, const ListElementConsumer& consumer) override;
  void ReadMap(const Schema& schema, const MapEntryConsumer& consumer) override;

  Aws::Crt::Optional<bool> ReadBoolean(const Schema& schema) override;
  Aws::Crt::Optional<int> ReadInteger(const Schema& schema) override;
  Aws::Crt::Optional<int64_t> ReadLong(const Schema& schema) override;
  Aws::Crt::Optional<float> ReadFloat(const Schema& schema) override;
  Aws::Crt::Optional<double> ReadDouble(const Schema& schema) override;
  Aws::Crt::Optional<Aws::String> ReadString(const Schema& schema) override;
  Aws::Crt::Optional<Aws::Utils::DateTime> ReadTimestamp(const Schema& schema) override;
  Aws::Crt::Optional<Aws::Utils::ByteBuffer> ReadBlob(const Schema& schema) override;
  Aws::Crt::Optional<int> ReadEnum(const Schema& schema) override;

  bool IsNull() override;

 private:
  class Impl;
  Aws::UniquePtr<Impl> m_impl;
};

}
}
