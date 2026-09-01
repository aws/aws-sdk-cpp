#pragma once

#include <aws/core/utils/Array.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Schema.h>

#include <cstdint>
#include <functional>

namespace smithy {
namespace schema {

class SMITHY_API ShapeDeserializer {
 public:
  virtual ~ShapeDeserializer() = default;

  using StructMemberConsumer = std::function<void(const Schema& memberSchema, ShapeDeserializer& deserializer)>;

  using ListElementConsumer = std::function<void(ShapeDeserializer& deserializer)>;

  using MapEntryConsumer = std::function<void(const Aws::String& key, ShapeDeserializer& deserializer)>;

  virtual void ReadStruct(const Schema& schema, const StructMemberConsumer& consumer) = 0;
  virtual void ReadList(const Schema& schema, const ListElementConsumer& consumer) = 0;
  virtual void ReadMap(const Schema& schema, const MapEntryConsumer& consumer) = 0;

  virtual Aws::Crt::Optional<bool> ReadBoolean(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<int> ReadInteger(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<int64_t> ReadLong(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<float> ReadFloat(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<double> ReadDouble(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<Aws::String> ReadString(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<Aws::Utils::DateTime> ReadTimestamp(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<Aws::Utils::ByteBuffer> ReadBlob(const Schema& schema) = 0;
  virtual Aws::Crt::Optional<int> ReadEnum(const Schema& schema) = 0;

  virtual bool IsNull() = 0;
};

}
}
