/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/HttpRequest.h>

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
 * <p>Configuration parameters for customizing HTTP requests sent to the ad
 * decision server (ADS). This allows you to specify the HTTP method, headers,
 * request body, and compression settings for ADS requests.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/AdDecisionServerConfiguration">AWS
 * API Reference</a></p>
 */
class AdDecisionServerConfiguration {
 public:
  AWS_MEDIATAILOR_API AdDecisionServerConfiguration() = default;
  AWS_MEDIATAILOR_API AdDecisionServerConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API AdDecisionServerConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The HTTP request configuration parameters for the ad decision server.</p>
   */
  inline const HttpRequest& GetHttpRequest() const { return m_httpRequest; }
  inline bool HttpRequestHasBeenSet() const { return m_httpRequestHasBeenSet; }
  template <typename HttpRequestT = HttpRequest>
  void SetHttpRequest(HttpRequestT&& value) {
    m_httpRequestHasBeenSet = true;
    m_httpRequest = std::forward<HttpRequestT>(value);
  }
  template <typename HttpRequestT = HttpRequest>
  AdDecisionServerConfiguration& WithHttpRequest(HttpRequestT&& value) {
    SetHttpRequest(std::forward<HttpRequestT>(value));
    return *this;
  }
  ///@}
 private:
  HttpRequest m_httpRequest;
  bool m_httpRequestHasBeenSet = false;
};

}  // namespace Model
}  // namespace MediaTailor
}  // namespace Aws
