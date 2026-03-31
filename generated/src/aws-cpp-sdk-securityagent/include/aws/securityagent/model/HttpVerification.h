/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/securityagent/SecurityAgent_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityAgent {
namespace Model {

/**
 * <p>Represents http route verification details</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityagent-2025-09-06/HttpVerification">AWS
 * API Reference</a></p>
 */
class HttpVerification {
 public:
  AWS_SECURITYAGENT_API HttpVerification() = default;
  AWS_SECURITYAGENT_API HttpVerification(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API HttpVerification& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYAGENT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Token used to verify domain ownership</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  HttpVerification& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Route path where verification token should be placed</p>
   */
  inline const Aws::String& GetRoutePath() const { return m_routePath; }
  inline bool RoutePathHasBeenSet() const { return m_routePathHasBeenSet; }
  template <typename RoutePathT = Aws::String>
  void SetRoutePath(RoutePathT&& value) {
    m_routePathHasBeenSet = true;
    m_routePath = std::forward<RoutePathT>(value);
  }
  template <typename RoutePathT = Aws::String>
  HttpVerification& WithRoutePath(RoutePathT&& value) {
    SetRoutePath(std::forward<RoutePathT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_token;

  Aws::String m_routePath;
  bool m_tokenHasBeenSet = false;
  bool m_routePathHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityAgent
}  // namespace Aws
