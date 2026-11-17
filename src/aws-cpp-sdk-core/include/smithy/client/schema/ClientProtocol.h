#pragma once

#include <aws/core/utils/memory/AWSMemory.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Types.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/Codec.h>
#include <smithy/client/schema/HttpBinding.h>
#include <smithy/client/schema/OperationRequestContext.h>

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
  virtual Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const = 0;

  virtual SerializerOutcome SerializeRequest(const OperationRequestContext& operation, const Schema& inputSchema,
                                             const SerializableStruct& input) const;

  virtual void DeserializeResponse(const OperationRequestContext& operation, Aws::Crt::ByteCursor data,
                                   SerializableStruct& output) const;

  /**
   * The HTTP request parts for {@code input}. Default (RPC protocols): only the body, from
   * {@link SerializeRequest}, with no path / query / header bindings.
   */
  virtual HttpRequestOutcome SerializeHttpRequest(const OperationRequestContext& operation, const SerializableStruct& input) const;

  /** Deserializes a whole HTTP response into {@code output}. Default (RPC protocols): only the body, via {@link DeserializeResponse}. */
  virtual void DeserializeHttpResponse(const OperationRequestContext& operation, int statusCode,
                                       const Aws::Http::HeaderValueCollection& headers, Aws::Crt::ByteCursor body,
                                       SerializableStruct& output) const;
};

/**
 * A protocol that binds members to HTTP headers, query string, URI labels, status code and payload per
 * the Smithy HTTP binding traits (restJson1, restXml). Subclasses provide the body codec through
 * {@link SerializeInput} / {@link CreateOutputDeserializer}.
 */
class SMITHY_API HttpBindingProtocol : public ClientProtocol {
 public:
  HttpRequestOutcome SerializeHttpRequest(const OperationRequestContext& operation, const SerializableStruct& input) const override;
  void DeserializeHttpResponse(const OperationRequestContext& operation, int statusCode, const Aws::Http::HeaderValueCollection& headers,
                               Aws::Crt::ByteCursor body, SerializableStruct& output) const override;

 protected:
  /** Whether an unset structure {@code @httpPayload} still sends an empty structure body (restJson1: {@code {}}). */
  virtual bool AllowsEmptyStructPayload() const { return false; }
};

class SMITHY_API RestJsonProtocol final : public HttpBindingProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;

 protected:
  bool AllowsEmptyStructPayload() const override { return true; }

 private:
  JsonCodec m_codec;
};

class SMITHY_API AwsJson10Protocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;

 private:
  JsonCodec m_codec;
};

class SMITHY_API AwsJson11Protocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;

 private:
  JsonCodec m_codec;
};

class SMITHY_API RpcV2CborProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;

 private:
  CborCodec m_codec;
};

class SMITHY_API RestXmlProtocol final : public HttpBindingProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;

 private:
  XmlCodec m_codec;
};

class SMITHY_API AwsQueryProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;
  SerializerOutcome SerializeRequest(const OperationRequestContext& operation, const Schema& inputSchema,
                                     const SerializableStruct& input) const override;
  void DeserializeResponse(const OperationRequestContext& operation, Aws::Crt::ByteCursor data,
                           SerializableStruct& output) const override;
};

class SMITHY_API Ec2QueryProtocol final : public ClientProtocol {
 public:
  Aws::String GetProtocolId() const override;
  Aws::String GetContentType() const override;
  SerializerOutcome SerializeInput(const Schema& schema, const SerializableStruct& input) const override;
  Aws::UniquePtr<ShapeDeserializer> CreateOutputDeserializer(Aws::Crt::ByteCursor data) const override;
  SerializerOutcome SerializeRequest(const OperationRequestContext& operation, const Schema& inputSchema,
                                     const SerializableStruct& input) const override;
};

}  // namespace schema
}  // namespace smithy
