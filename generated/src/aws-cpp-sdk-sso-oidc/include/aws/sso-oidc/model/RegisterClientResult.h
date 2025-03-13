/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SSOOIDC
{
namespace Model
{
  class RegisterClientResult
  {
  public:
    AWS_SSOOIDC_API RegisterClientResult() = default;
    AWS_SSOOIDC_API RegisterClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API RegisterClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline const Aws::String& GetClientId() const { return m_clientId; }
    template<typename ClientIdT = Aws::String>
    void SetClientId(ClientIdT&& value) { m_clientIdHasBeenSet = true; m_clientId = std::forward<ClientIdT>(value); }
    template<typename ClientIdT = Aws::String>
    RegisterClientResult& WithClientId(ClientIdT&& value) { SetClientId(std::forward<ClientIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
    template<typename ClientSecretT = Aws::String>
    void SetClientSecret(ClientSecretT&& value) { m_clientSecretHasBeenSet = true; m_clientSecret = std::forward<ClientSecretT>(value); }
    template<typename ClientSecretT = Aws::String>
    RegisterClientResult& WithClientSecret(ClientSecretT&& value) { SetClientSecret(std::forward<ClientSecretT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> were issued.</p>
     */
    inline long long GetClientIdIssuedAt() const { return m_clientIdIssuedAt; }
    inline void SetClientIdIssuedAt(long long value) { m_clientIdIssuedAtHasBeenSet = true; m_clientIdIssuedAt = value; }
    inline RegisterClientResult& WithClientIdIssuedAt(long long value) { SetClientIdIssuedAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> will become invalid.</p>
     */
    inline long long GetClientSecretExpiresAt() const { return m_clientSecretExpiresAt; }
    inline void SetClientSecretExpiresAt(long long value) { m_clientSecretExpiresAtHasBeenSet = true; m_clientSecretExpiresAt = value; }
    inline RegisterClientResult& WithClientSecretExpiresAt(long long value) { SetClientSecretExpiresAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint that the client can use to request authorization.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
    template<typename AuthorizationEndpointT = Aws::String>
    void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) { m_authorizationEndpointHasBeenSet = true; m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value); }
    template<typename AuthorizationEndpointT = Aws::String>
    RegisterClientResult& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) { SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An endpoint that the client can use to create tokens.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
    template<typename TokenEndpointT = Aws::String>
    void SetTokenEndpoint(TokenEndpointT&& value) { m_tokenEndpointHasBeenSet = true; m_tokenEndpoint = std::forward<TokenEndpointT>(value); }
    template<typename TokenEndpointT = Aws::String>
    RegisterClientResult& WithTokenEndpoint(TokenEndpointT&& value) { SetTokenEndpoint(std::forward<TokenEndpointT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    RegisterClientResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clientId;
    bool m_clientIdHasBeenSet = false;

    Aws::String m_clientSecret;
    bool m_clientSecretHasBeenSet = false;

    long long m_clientIdIssuedAt{0};
    bool m_clientIdIssuedAtHasBeenSet = false;

    long long m_clientSecretExpiresAt{0};
    bool m_clientSecretExpiresAtHasBeenSet = false;

    Aws::String m_authorizationEndpoint;
    bool m_authorizationEndpointHasBeenSet = false;

    Aws::String m_tokenEndpoint;
    bool m_tokenEndpointHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
