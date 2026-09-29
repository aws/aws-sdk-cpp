#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Types.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/SerdeTraits.h>
#include <smithy/client/schema/SerializableStruct.h>
#include <smithy/client/schema/ShapeDeserializer.h>

namespace smithy {
namespace schema {

class Schema;

class SMITHY_API Codec {
 public:
  using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

  virtual ~Codec() = default;

  virtual SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const = 0;

  virtual Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(Aws::Crt::ByteCursor data) const = 0;

  void DeserializeShape(Aws::Crt::ByteCursor data, SerializableStruct& shape) const {
    shape.Deserialize(*CreateDeserializer(data));
  }
};

class SMITHY_API JsonCodec final : public Codec {
 public:
  explicit JsonCodec(
      TimestampFormatTrait::Format defaultStringTimestampFormat = TimestampFormatTrait::Format::EPOCH_SECONDS)
      : m_defaultStringTimestampFormat(defaultStringTimestampFormat) {}
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(Aws::Crt::ByteCursor data) const override;

 private:
  TimestampFormatTrait::Format m_defaultStringTimestampFormat;
};

class SMITHY_API XmlCodec final : public Codec {
 public:
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(Aws::Crt::ByteCursor data) const override;
};

class SMITHY_API CborCodec final : public Codec {
 public:
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(Aws::Crt::ByteCursor data) const override;
};

}  // namespace schema
}  // namespace smithy
