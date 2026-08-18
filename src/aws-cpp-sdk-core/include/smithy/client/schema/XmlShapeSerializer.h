#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/ShapeSerializer.h>

#include <functional>

namespace smithy {
namespace schema {

class SMITHY_API XmlShapeSerializer final : public ShapeSerializer {
 public:
  using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;
  XmlShapeSerializer();
  ~XmlShapeSerializer();

  void WriteStruct(const Schema& schema, const SerializableStruct& value) override;
  void WriteList(const Schema& schema, size_t size, const std::function<void(ShapeSerializer&)>& consumer) override;
  void WriteMap(const Schema& schema, size_t size, const std::function<void(MapSerializer&)>& consumer) override;

  void WriteBoolean(const Schema& schema, bool value) override;
  void WriteInteger(const Schema& schema, int value) override;
  void WriteLong(const Schema& schema, int64_t value) override;
  void WriteFloat(const Schema& schema, float value) override;
  void WriteDouble(const Schema& schema, double value) override;
  void WriteString(const Schema& schema, const Aws::String& value) override;
  void WriteTimestamp(const Schema& schema, const Aws::Utils::DateTime& value) override;
  void WriteBlob(const Schema& schema, const Aws::Utils::ByteBuffer& value) override;
  void WriteEnum(const Schema& schema, int value) override;
  void WriteNull(const Schema& schema) override;

  SerializerOutcome GetPayload();

 private:
  class Impl;
  Aws::UniquePtr<Impl> m_impl;
};

}  // namespace schema
}  // namespace smithy
