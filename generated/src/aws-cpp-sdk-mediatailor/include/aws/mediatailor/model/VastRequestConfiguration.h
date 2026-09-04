/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/MethodType.h>
#include <aws/mediatailor/model/RuntimeType.h>

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
 * <p>The configuration for a <code>VAST_REQUEST</code> function. Specifies the
 * HTTP method, URL, headers, body, timeout, and output expressions for a request
 * to a VAST endpoint. MediaTailor parses the response as VAST and resolves wrapper
 * redirects, then makes the parsed ads available to the function's output
 * expressions. For more information, see <a
 * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions-types.html">Function
 * types and composition</a> in the <i>MediaTailor User Guide</i>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/VastRequestConfiguration">AWS
 * API Reference</a></p>
 */
class VastRequestConfiguration {
 public:
  AWS_MEDIATAILOR_API VastRequestConfiguration() = default;
  AWS_MEDIATAILOR_API VastRequestConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API VastRequestConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The expression language used to evaluate expressions in the function
   * configuration. Set this to <code>JSONata</code>.</p>
   */
  inline RuntimeType GetRuntime() const { return m_runtime; }
  inline bool RuntimeHasBeenSet() const { return m_runtimeHasBeenSet; }
  inline void SetRuntime(RuntimeType value) {
    m_runtimeHasBeenSet = true;
    m_runtime = value;
  }
  inline VastRequestConfiguration& WithRuntime(RuntimeType value) {
    SetRuntime(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of output bindings. Each key is a namespaced output path (such as
   * <code>temp.wrappedAds</code>), and each value is an expression that MediaTailor
   * evaluates at runtime. Output expressions in a <code>VAST_REQUEST</code> function
   * can reference the <code>response</code> object, which exposes
   * <code>response.parsedAds</code> — the ads parsed from the VAST response after
   * schema validation and wrapper resolution — and <code>response.statusCode</code>.
   * For more information about expression syntax, see <a
   * href="https://docs.aws.amazon.com/mediatailor/latest/ug/monetization-functions-jsonata.html">JSONata
   * expression reference</a> in the <i>MediaTailor User Guide</i>.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetOutput() const { return m_output; }
  inline bool OutputHasBeenSet() const { return m_outputHasBeenSet; }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  void SetOutput(OutputT&& value) {
    m_outputHasBeenSet = true;
    m_output = std::forward<OutputT>(value);
  }
  template <typename OutputT = Aws::Map<Aws::String, Aws::String>>
  VastRequestConfiguration& WithOutput(OutputT&& value) {
    SetOutput(std::forward<OutputT>(value));
    return *this;
  }
  template <typename OutputKeyT = Aws::String, typename OutputValueT = Aws::String>
  VastRequestConfiguration& AddOutput(OutputKeyT&& key, OutputValueT&& value) {
    m_outputHasBeenSet = true;
    m_output.emplace(std::forward<OutputKeyT>(key), std::forward<OutputValueT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The HTTP method for the request to the VAST endpoint. Valid values:
   * <code>GET</code> and <code>POST</code>. Use <code>POST</code> to send a bid
   * request body, such as an OpenRTB payload.</p>
   */
  inline MethodType GetMethodType() const { return m_methodType; }
  inline bool MethodTypeHasBeenSet() const { return m_methodTypeHasBeenSet; }
  inline void SetMethodType(MethodType value) {
    m_methodTypeHasBeenSet = true;
    m_methodType = value;
  }
  inline VastRequestConfiguration& WithMethodType(MethodType value) {
    SetMethodType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum time, in milliseconds, that MediaTailor waits for a response from
   * the VAST endpoint. The timeout covers the entire response, including any wrapper
   * redirects that MediaTailor follows. If the call exceeds this timeout,
   * MediaTailor proceeds with an empty ad list and continues output expression
   * evaluation. Valid values: <code>100</code> to <code>2000</code>.</p>
   */
  inline int GetRequestTimeoutMilliseconds() const { return m_requestTimeoutMilliseconds; }
  inline bool RequestTimeoutMillisecondsHasBeenSet() const { return m_requestTimeoutMillisecondsHasBeenSet; }
  inline void SetRequestTimeoutMilliseconds(int value) {
    m_requestTimeoutMillisecondsHasBeenSet = true;
    m_requestTimeoutMilliseconds = value;
  }
  inline VastRequestConfiguration& WithRequestTimeoutMilliseconds(int value) {
    SetRequestTimeoutMilliseconds(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An expression that evaluates to the VAST endpoint URL. Use
   * <code>{%...%}</code> delimiters for dynamic expressions. A literal value must be
   * an <code>https://</code> URL. The maximum length is 25,000 characters.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  inline bool UrlHasBeenSet() const { return m_urlHasBeenSet; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  VastRequestConfiguration& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An expression that evaluates to the request body. Used with <code>POST</code>
   * requests, for example to send an OpenRTB bid request. The maximum length is
   * 100,000 characters.</p>
   */
  inline const Aws::String& GetBody() const { return m_body; }
  inline bool BodyHasBeenSet() const { return m_bodyHasBeenSet; }
  template <typename BodyT = Aws::String>
  void SetBody(BodyT&& value) {
    m_bodyHasBeenSet = true;
    m_body = std::forward<BodyT>(value);
  }
  template <typename BodyT = Aws::String>
  VastRequestConfiguration& WithBody(BodyT&& value) {
    SetBody(std::forward<BodyT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of HTTP header names to expression values. MediaTailor evaluates each
   * header value expression at runtime and includes the result in the outbound
   * request. Headers beginning with <code>X-Amz-</code> are reserved by the service,
   * and method override headers are not allowed.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetHeaders() const { return m_headers; }
  inline bool HeadersHasBeenSet() const { return m_headersHasBeenSet; }
  template <typename HeadersT = Aws::Map<Aws::String, Aws::String>>
  void SetHeaders(HeadersT&& value) {
    m_headersHasBeenSet = true;
    m_headers = std::forward<HeadersT>(value);
  }
  template <typename HeadersT = Aws::Map<Aws::String, Aws::String>>
  VastRequestConfiguration& WithHeaders(HeadersT&& value) {
    SetHeaders(std::forward<HeadersT>(value));
    return *this;
  }
  template <typename HeadersKeyT = Aws::String, typename HeadersValueT = Aws::String>
  VastRequestConfiguration& AddHeaders(HeadersKeyT&& key, HeadersValueT&& value) {
    m_headersHasBeenSet = true;
    m_headers.emplace(std::forward<HeadersKeyT>(key), std::forward<HeadersValueT>(value));
    return *this;
  }
  ///@}
 private:
  RuntimeType m_runtime{RuntimeType::NOT_SET};

  Aws::Map<Aws::String, Aws::String> m_output;

  MethodType m_methodType{MethodType::NOT_SET};

  int m_requestTimeoutMilliseconds{0};

  Aws::String m_url;

  Aws::String m_body;

  Aws::Map<Aws::String, Aws::String> m_headers;
  bool m_runtimeHasBeenSet = false;
  bool m_outputHasBeenSet = false;
  bool m_methodTypeHasBeenSet = false;
  bool m_requestTimeoutMillisecondsHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_bodyHasBeenSet = false;
  bool m_headersHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
