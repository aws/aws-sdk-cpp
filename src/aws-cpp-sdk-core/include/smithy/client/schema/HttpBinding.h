/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/client/AWSError.h>
#include <aws/core/client/CoreErrors.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/crt/Optional.h>
#include <aws/crt/Types.h>
#include <smithy/Smithy_EXPORTS.h>
#include <smithy/client/schema/OperationRequestContext.h>

#include <cstdint>

namespace smithy {
namespace schema {

class ClientProtocol;
class Schema;
class SerializableStruct;

/** Where a member travels in an HTTP-binding protocol message (Smithy HTTP binding traits). */
enum class HttpBinding : uint8_t { Body, Header, PrefixHeaders, Query, QueryParams, Label, Payload, Status };

enum class HttpBindingDirection : uint8_t { Request, Response };

/**
 * Classifies a member by its HTTP binding trait. First match wins: header, query, prefix headers, label,
 * query params, payload, response code, else body. Bindings that do not exist in a direction fold into
 * the body: a response's query / label / query params, and a request's response code.
 */
SMITHY_API HttpBinding ClassifyHttpMember(const Schema& member, HttpBindingDirection direction);

/**
 * The HTTP-bound parts of a request, produced from the input shape and the operation's URI pattern. The
 * client applies them on top of the resolved endpoint.
 */
struct SMITHY_API HttpRequestParts {
  /** Encoded path from the operation's URI pattern (labels substituted); empty to keep the endpoint path. */
  Aws::String path;
  /** Encoded query string without the leading {@code ?}: URI literals, then {@code @httpQuery}, then {@code @httpQueryParams}. */
  Aws::String query;
  /** Expanded {@code @endpoint} host prefix; empty for none. */
  Aws::String hostPrefix;
  /** Header-bound members, by header name. */
  Aws::Http::HeaderValueCollection headers;
  /** The body bytes; absent when the message has no body. */
  Aws::Crt::Optional<Aws::String> body;
  /** Content-Type for {@link body}; empty when there is no body or a modeled Content-Type header member set it. */
  Aws::String contentType;
};

using HttpRequestOutcome = Aws::Utils::Outcome<HttpRequestParts, Aws::Client::AWSError<Aws::Client::CoreErrors>>;

/**
 * Serializes {@code input} for an HTTP-binding protocol: header / prefix-header / query / query-param /
 * label / host-label members are formatted per the Smithy HTTP binding rules, the {@code @httpPayload}
 * member (if any) becomes the body, otherwise the body members are serialized through
 * {@code bodyProtocol.SerializeInput}.
 *
 * @param allowEmptyStructPayload send an empty structure body (e.g. {@code {}}) for an unset structure payload
 */
SMITHY_API HttpRequestOutcome SerializeHttpBindings(const OperationRequestContext& operation, const SerializableStruct& input,
                                                    const ClientProtocol& bodyProtocol, bool allowEmptyStructPayload);

/**
 * Deserializes a response into {@code output} for an HTTP-binding protocol: headers, prefix headers and
 * the status code first, then the {@code @httpPayload} member, then the body members through
 * {@code bodyProtocol.CreateOutputDeserializer}.
 */
SMITHY_API void DeserializeHttpBindings(int statusCode, const Aws::Http::HeaderValueCollection& headers, Aws::Crt::ByteCursor body,
                                        SerializableStruct& output, const ClientProtocol& bodyProtocol);

}  // namespace schema
}  // namespace smithy
