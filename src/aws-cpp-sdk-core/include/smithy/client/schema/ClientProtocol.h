#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Codec.h>

namespace smithy {
namespace schema {

class Schema;
class SerializableStruct;
class ShapeDeserializer;

class SMITHY_API ClientProtocol {
 public:
  using SerializerOutcome = Codec::SerializerOutcome;

  virtual ~ClientProtocol() = default;

  virtual Aws::String GetProtocolId() const = 0;
  virtual Aws::String GetContentType() const = 0;
  virtual SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const = 0;
  virtual Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const = 0;
};

class SMITHY_API RestJsonProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;

 private:
  JsonCodec m_codec;
};

class SMITHY_API AwsJson10Protocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;

 private:
  JsonCodec m_codec;
};

class SMITHY_API AwsJson11Protocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;

 private:
  JsonCodec m_codec;
};

class SMITHY_API RpcV2CborProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;

 private:
  CborCodec m_codec;
};

class SMITHY_API RestXmlProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;

 private:
  XmlCodec m_codec;
};

class SMITHY_API AwsQueryProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;
};

class SMITHY_API Ec2QueryProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(const unsigned char* data, size_t length) const override;
};

}
}
