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
    AWS_SSOOIDC_API RegisterClientResult();
    AWS_SSOOIDC_API RegisterClientResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API RegisterClientResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline const Aws::String& GetClientId() const{ return m_clientId; }

    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline void SetClientId(const Aws::String& value) { m_clientId = value; }

    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline void SetClientId(Aws::String&& value) { m_clientId = std::move(value); }

    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline void SetClientId(const char* value) { m_clientId.assign(value); }

    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline RegisterClientResult& WithClientId(const Aws::String& value) { SetClientId(value); return *this;}

    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline RegisterClientResult& WithClientId(Aws::String&& value) { SetClientId(std::move(value)); return *this;}

    /**
     * <p>The unique identifier string for each client. This client uses this
     * identifier to get authenticated by the service in subsequent calls.</p>
     */
    inline RegisterClientResult& WithClientId(const char* value) { SetClientId(value); return *this;}


    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline const Aws::String& GetClientSecret() const{ return m_clientSecret; }

    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline void SetClientSecret(const Aws::String& value) { m_clientSecret = value; }

    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline void SetClientSecret(Aws::String&& value) { m_clientSecret = std::move(value); }

    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline void SetClientSecret(const char* value) { m_clientSecret.assign(value); }

    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline RegisterClientResult& WithClientSecret(const Aws::String& value) { SetClientSecret(value); return *this;}

    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline RegisterClientResult& WithClientSecret(Aws::String&& value) { SetClientSecret(std::move(value)); return *this;}

    /**
     * <p>A secret string generated for the client. The client will use this string to
     * get authenticated by the service in subsequent calls.</p>
     */
    inline RegisterClientResult& WithClientSecret(const char* value) { SetClientSecret(value); return *this;}


    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> were issued.</p>
     */
    inline long long GetClientIdIssuedAt() const{ return m_clientIdIssuedAt; }

    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> were issued.</p>
     */
    inline void SetClientIdIssuedAt(long long value) { m_clientIdIssuedAt = value; }

    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> were issued.</p>
     */
    inline RegisterClientResult& WithClientIdIssuedAt(long long value) { SetClientIdIssuedAt(value); return *this;}


    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> will become invalid.</p>
     */
    inline long long GetClientSecretExpiresAt() const{ return m_clientSecretExpiresAt; }

    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> will become invalid.</p>
     */
    inline void SetClientSecretExpiresAt(long long value) { m_clientSecretExpiresAt = value; }

    /**
     * <p>Indicates the time at which the <code>clientId</code> and
     * <code>clientSecret</code> will become invalid.</p>
     */
    inline RegisterClientResult& WithClientSecretExpiresAt(long long value) { SetClientSecretExpiresAt(value); return *this;}


    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline const Aws::String& GetAuthorizationEndpoint() const{ return m_authorizationEndpoint; }

    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline void SetAuthorizationEndpoint(const Aws::String& value) { m_authorizationEndpoint = value; }

    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline void SetAuthorizationEndpoint(Aws::String&& value) { m_authorizationEndpoint = std::move(value); }

    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline void SetAuthorizationEndpoint(const char* value) { m_authorizationEndpoint.assign(value); }

    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline RegisterClientResult& WithAuthorizationEndpoint(const Aws::String& value) { SetAuthorizationEndpoint(value); return *this;}

    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline RegisterClientResult& WithAuthorizationEndpoint(Aws::String&& value) { SetAuthorizationEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint where the client can request authorization.</p>
     */
    inline RegisterClientResult& WithAuthorizationEndpoint(const char* value) { SetAuthorizationEndpoint(value); return *this;}


    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline const Aws::String& GetTokenEndpoint() const{ return m_tokenEndpoint; }

    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline void SetTokenEndpoint(const Aws::String& value) { m_tokenEndpoint = value; }

    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline void SetTokenEndpoint(Aws::String&& value) { m_tokenEndpoint = std::move(value); }

    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline void SetTokenEndpoint(const char* value) { m_tokenEndpoint.assign(value); }

    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline RegisterClientResult& WithTokenEndpoint(const Aws::String& value) { SetTokenEndpoint(value); return *this;}

    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline RegisterClientResult& WithTokenEndpoint(Aws::String&& value) { SetTokenEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint where the client can get an access token.</p>
     */
    inline RegisterClientResult& WithTokenEndpoint(const char* value) { SetTokenEndpoint(value); return *this;}

  private:

    Aws::String m_clientId;

    Aws::String m_clientSecret;

    long long m_clientIdIssuedAt;

    long long m_clientSecretExpiresAt;

    Aws::String m_authorizationEndpoint;

    Aws::String m_tokenEndpoint;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
