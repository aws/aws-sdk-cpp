/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
  class CreateTokenWithIAMResult
  {
  public:
    AWS_SSOOIDC_API CreateTokenWithIAMResult();
    AWS_SSOOIDC_API CreateTokenWithIAMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API CreateTokenWithIAMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline const Aws::String& GetAccessToken() const{ return m_accessToken; }

    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline void SetAccessToken(const Aws::String& value) { m_accessToken = value; }

    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline void SetAccessToken(Aws::String&& value) { m_accessToken = std::move(value); }

    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline void SetAccessToken(const char* value) { m_accessToken.assign(value); }

    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline CreateTokenWithIAMResult& WithAccessToken(const Aws::String& value) { SetAccessToken(value); return *this;}

    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline CreateTokenWithIAMResult& WithAccessToken(Aws::String&& value) { SetAccessToken(std::move(value)); return *this;}

    /**
     * <p>A bearer token to access AWS accounts and applications assigned to a
     * user.</p>
     */
    inline CreateTokenWithIAMResult& WithAccessToken(const char* value) { SetAccessToken(value); return *this;}


    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline const Aws::String& GetTokenType() const{ return m_tokenType; }

    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline void SetTokenType(const Aws::String& value) { m_tokenType = value; }

    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline void SetTokenType(Aws::String&& value) { m_tokenType = std::move(value); }

    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline void SetTokenType(const char* value) { m_tokenType.assign(value); }

    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline CreateTokenWithIAMResult& WithTokenType(const Aws::String& value) { SetTokenType(value); return *this;}

    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline CreateTokenWithIAMResult& WithTokenType(Aws::String&& value) { SetTokenType(std::move(value)); return *this;}

    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline CreateTokenWithIAMResult& WithTokenType(const char* value) { SetTokenType(value); return *this;}


    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline int GetExpiresIn() const{ return m_expiresIn; }

    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline void SetExpiresIn(int value) { m_expiresIn = value; }

    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline CreateTokenWithIAMResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}


    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline const Aws::String& GetRefreshToken() const{ return m_refreshToken; }

    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline void SetRefreshToken(const Aws::String& value) { m_refreshToken = value; }

    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline void SetRefreshToken(Aws::String&& value) { m_refreshToken = std::move(value); }

    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline void SetRefreshToken(const char* value) { m_refreshToken.assign(value); }

    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline CreateTokenWithIAMResult& WithRefreshToken(const Aws::String& value) { SetRefreshToken(value); return *this;}

    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline CreateTokenWithIAMResult& WithRefreshToken(Aws::String&& value) { SetRefreshToken(std::move(value)); return *this;}

    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline CreateTokenWithIAMResult& WithRefreshToken(const char* value) { SetRefreshToken(value); return *this;}


    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline const Aws::String& GetIdToken() const{ return m_idToken; }

    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline void SetIdToken(const Aws::String& value) { m_idToken = value; }

    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline void SetIdToken(Aws::String&& value) { m_idToken = std::move(value); }

    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline void SetIdToken(const char* value) { m_idToken.assign(value); }

    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline CreateTokenWithIAMResult& WithIdToken(const Aws::String& value) { SetIdToken(value); return *this;}

    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline CreateTokenWithIAMResult& WithIdToken(Aws::String&& value) { SetIdToken(std::move(value)); return *this;}

    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline CreateTokenWithIAMResult& WithIdToken(const char* value) { SetIdToken(value); return *this;}


    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline const Aws::String& GetIssuedTokenType() const{ return m_issuedTokenType; }

    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline void SetIssuedTokenType(const Aws::String& value) { m_issuedTokenType = value; }

    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline void SetIssuedTokenType(Aws::String&& value) { m_issuedTokenType = std::move(value); }

    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline void SetIssuedTokenType(const char* value) { m_issuedTokenType.assign(value); }

    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline CreateTokenWithIAMResult& WithIssuedTokenType(const Aws::String& value) { SetIssuedTokenType(value); return *this;}

    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline CreateTokenWithIAMResult& WithIssuedTokenType(Aws::String&& value) { SetIssuedTokenType(std::move(value)); return *this;}

    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline CreateTokenWithIAMResult& WithIssuedTokenType(const char* value) { SetIssuedTokenType(value); return *this;}


    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const{ return m_scope; }

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline void SetScope(const Aws::Vector<Aws::String>& value) { m_scope = value; }

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline void SetScope(Aws::Vector<Aws::String>&& value) { m_scope = std::move(value); }

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline CreateTokenWithIAMResult& WithScope(const Aws::Vector<Aws::String>& value) { SetScope(value); return *this;}

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline CreateTokenWithIAMResult& WithScope(Aws::Vector<Aws::String>&& value) { SetScope(std::move(value)); return *this;}

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline CreateTokenWithIAMResult& AddScope(const Aws::String& value) { m_scope.push_back(value); return *this; }

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline CreateTokenWithIAMResult& AddScope(Aws::String&& value) { m_scope.push_back(std::move(value)); return *this; }

    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline CreateTokenWithIAMResult& AddScope(const char* value) { m_scope.push_back(value); return *this; }


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline CreateTokenWithIAMResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline CreateTokenWithIAMResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline CreateTokenWithIAMResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_accessToken;

    Aws::String m_tokenType;

    int m_expiresIn;

    Aws::String m_refreshToken;

    Aws::String m_idToken;

    Aws::String m_issuedTokenType;

    Aws::Vector<Aws::String> m_scope;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
