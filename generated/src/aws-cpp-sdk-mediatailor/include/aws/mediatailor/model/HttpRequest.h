/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/CompressionMethod.h>
#include <aws/mediatailor/model/Method.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace MediaTailor {
namespace Model {

/**
 * <p>HTTP request configuration parameters that define how MediaTailor
 * communicates with the ad decision server.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/HttpRequest">AWS
 * API Reference</a></p>
 */
class HttpRequest {
 public:
  AWS_MEDIATAILOR_API HttpRequest() = default;
  AWS_MEDIATAILOR_API HttpRequest(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API HttpRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP method to use when making requests to the ad decision server.
   * Supported values are <code>GET</code> and <code>POST</code>.</p>
   */
  inline Method GetMethod() const { return m_method; }
  inline bool MethodHasBeenSet() const { return m_methodHasBeenSet; }
  inline void SetMethod(Method value) {
    m_methodHasBeenSet = true;
    m_method = value;
  }
  inline HttpRequest& WithMethod(Method value) {
    SetMethod(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The request body content to send with HTTP requests to the ad decision
   * server. This value is only eligible for <code>POST</code> requests.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  HttpRequest& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Custom HTTP headers to include in requests to the ad decision server. Specify
   * headers as key-value pairs. This value is only eligible for <code>POST</code>
   * requests.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const { return m_headers; }
  inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
  template <typename HeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers = std::forward<HeadersT>(value);
  }
  template <typename HeadersT = Aws::Map<Aws::String, Aws::String>>
  HttpRequest& WithHeaders(HeadersT&& value) {
    SetHeaders(std::forward<HeadersT>(value));
    return *this;
  }
  template <typename HeadersKeyT = Aws::String, typename HeadersValueT = Aws::String>
  HttpRequest& AddHeaders(HeadersKeyT&& key, HeadersValueT&& value) {
    m_headersHasBeenSet = true;
    m_headers.emplace(std::forward<HeadersKeyT>(key), std::forward<HeadersValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The compression method to apply to requests sent to the ad decision server.
   * Supported values are <code>NONE</code> and <code>GZIP</code>. This value is only
   * eligible for <code>POST</code> requests.</p>
   */
  inline CompressionMethod GetCompressRequest() const { return m_compressRequest; }
  inline bool CompressRequestHasBeenSet() const { return m_compressRequestHasBeenSet; }
  inline void SetCompressRequest(CompressionMethod value) {
    m_compressRequestHasBeenSet = true;
    m_compressRequest = value;
  }
  inline HttpRequest& WithCompressRequest(CompressionMethod value) {
    SetCompressRequest(value);
    return *this;
  }
  ///@}
 private:
  Method m_method{Method::NOT_SET};

  Aws::String m_body;

  Aws::Map<Aws::String, Aws::String> m_headers;

  CompressionMethod m_compressRequest{CompressionMethod::NOT_SET};
  bool m_methodHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_headersHasBeenSet = false;
  bool m_compressRequestHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
