#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>

namespace smithy {
namespace schema {

class Schema;
class SerializableStruct;
class ShapeDeserializer;

class SMITHY_API Codec {
 public:
  using SerializerOutcome = Aws::Utils::Outcome<Aws::String, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

  virtual ~Codec() = default;

  virtual SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const = 0;

  virtual Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(const unsigned char* data, size_t length) const = 0;
};

class SMITHY_API JsonCodec final : public Codec {
 public:
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(const unsigned char* data, size_t length) const override;
};

class SMITHY_API XmlCodec final : public Codec {
 public:
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(const unsigned char* data, size_t length) const override;
};

class SMITHY_API CborCodec final : public Codec {
 public:
  SerializerOutcome Serialize(const Schema& schema, const SerializableStruct& shape) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateDeserializer(const unsigned char* data, size_t length) const override;
};

}
}
