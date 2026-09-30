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

// Per-protocol codec configuration threaded to the ShapeSerializer/ShapeDeserializer a codec creates.
// Not part of the Codec interface (per the serialization/schema-decoupling SEP). Extensible: future
// knobs (useJsonName, defaultNamespace) become new fields without changing serde signatures.
struct CodecSettings {
  CodecSettings() = default;
  // Non-explicit: lets callers pass a bare Format where a CodecSettings is expected (matches the
  // pre-existing single-Format JsonCodec constructor call sites). Also required under C++11, where a
  // member with a default initializer is not an aggregate and brace-init needs a real constructor.
  CodecSettings(TimestampFormatTrait::Format defaultTimestampFormat)  // NOLINT(google-explicit-constructor)
      : defaultTimestampFormat(defaultTimestampFormat) {}

  TimestampFormatTrait::Format defaultTimestampFormat = TimestampFormatTrait::Format::EPOCH_SECONDS;
};

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
  explicit JsonCodec(CodecSettings settings = {}) : m_settings(settings) {}
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(Aws::Crt::ByteCursor data) const override;

 private:
  CodecSettings m_settings;
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
