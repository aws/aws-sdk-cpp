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
  class CreateTokenResult
  {
  public:
    AWS_SSOOIDC_API CreateTokenResult() = default;
    AWS_SSOOIDC_API CreateTokenResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API CreateTokenResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A bearer token to access Amazon Web Services accounts and applications
     * assigned to a user.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    CreateTokenResult& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to notify the client that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline const Aws::String& GetTokenType() const { return m_tokenType; }
    template<typename TokenTypeT = Aws::String>
    void SetTokenType(TokenTypeT&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = std::forward<TokenTypeT>(value); }
    template<typename TokenTypeT = Aws::String>
    CreateTokenResult& WithTokenType(TokenTypeT&& value) { SetTokenType(std::forward<TokenTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline int GetExpiresIn() const { return m_expiresIn; }
    inline void SetExpiresIn(int value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }
    inline CreateTokenResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that, if present, can be used to refresh a previously issued access
     * token that might have expired.</p> <p>For more information about the features
     * and limitations of the current IAM Identity Center OIDC implementation, see
     * <i>Considerations for Using this Guide</i> in the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p>
     */
    inline const Aws::String& GetRefreshToken() const { return m_refreshToken; }
    template<typename RefreshTokenT = Aws::String>
    void SetRefreshToken(RefreshTokenT&& value) { m_refreshTokenHasBeenSet = true; m_refreshToken = std::forward<RefreshTokenT>(value); }
    template<typename RefreshTokenT = Aws::String>
    CreateTokenResult& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>idToken</code> is not implemented or supported. For more
     * information about the features and limitations of the current IAM Identity
     * Center OIDC implementation, see <i>Considerations for Using this Guide</i> in
     * the <a
     * href="https://docs.aws.amazon.com/singlesignon/latest/OIDCAPIReference/Welcome.html">IAM
     * Identity Center OIDC API Reference</a>.</p> <p>A JSON Web Token (JWT) that
     * identifies who is associated with the issued access token. </p>
     */
    inline const Aws::String& GetIdToken() const { return m_idToken; }
    template<typename IdTokenT = Aws::String>
    void SetIdToken(IdTokenT&& value) { m_idTokenHasBeenSet = true; m_idToken = std::forward<IdTokenT>(value); }
    template<typename IdTokenT = Aws::String>
    CreateTokenResult& WithIdToken(IdTokenT&& value) { SetIdToken(std::forward<IdTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTokenResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accessToken;
    bool m_accessTokenHasBeenSet = false;

    Aws::String m_tokenType;
    bool m_tokenTypeHasBeenSet = false;

    int m_expiresIn{0};
    bool m_expiresInHasBeenSet = false;

    Aws::String m_refreshToken;
    bool m_refreshTokenHasBeenSet = false;

    Aws::String m_idToken;
    bool m_idTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
