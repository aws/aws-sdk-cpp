/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wickr/Wickr_EXPORTS.h>
#include <aws/wickr/model/OidcConfigInfo.h>
#include <aws/wickr/model/OidcTokenInfo.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace Wickr {
namespace Model {
class GetOidcInfoResult {
 public:
  AWS_WICKR_API GetOidcInfoResult() = default;
  AWS_WICKR_API GetOidcInfoResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WICKR_API GetOidcInfoResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The OpenID Connect configuration information for the network, including
   * issuer, client ID, scopes, and other SSO settings.</p>
   */
  inline const OidcConfigInfo& GetOpenidConnectInfo() const { return m_openidConnectInfo; }
  template <typename OpenidConnectInfoT = OidcConfigInfo>
  void SetOpenidConnectInfo(OpenidConnectInfoT&& value) {
    m_openidConnectInfoHasBeenSet = true;
    m_openidConnectInfo = std::forward<OpenidConnectInfoT>(value);
  }
  template <typename OpenidConnectInfoT = OidcConfigInfo>
  GetOidcInfoResult& WithOpenidConnectInfo(OpenidConnectInfoT&& value) {
    SetOpenidConnectInfo(std::forward<OpenidConnectInfoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>OAuth token information including access token, refresh token, and expiration
   * details (only present if token parameters were provided in the request).</p>
   */
  inline const OidcTokenInfo& GetTokenInfo() const { return m_tokenInfo; }
  template <typename TokenInfoT = OidcTokenInfo>
  void SetTokenInfo(TokenInfoT&& value) {
    m_tokenInfoHasBeenSet = true;
    m_tokenInfo = std::forward<TokenInfoT>(value);
  }
  template <typename TokenInfoT = OidcTokenInfo>
  GetOidcInfoResult& WithTokenInfo(TokenInfoT&& value) {
    SetTokenInfo(std::forward<TokenInfoT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  GetOidcInfoResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  OidcConfigInfo m_openidConnectInfo;

  OidcTokenInfo m_tokenInfo;

  Aws::String m_requestId;
  bool m_openidConnectInfoHasBeenSet = false;
  bool m_tokenInfoHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace Wickr
}  // namespace Aws
