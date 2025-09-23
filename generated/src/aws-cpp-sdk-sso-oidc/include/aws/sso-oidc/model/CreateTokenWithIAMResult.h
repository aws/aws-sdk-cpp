/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sso-oidc/SSOOIDC_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sso-oidc/model/AwsAdditionalDetails.h>
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
    AWS_SSOOIDC_API CreateTokenWithIAMResult() = default;
    AWS_SSOOIDC_API CreateTokenWithIAMResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SSOOIDC_API CreateTokenWithIAMResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A bearer token to access Amazon Web Services accounts and applications
     * assigned to a user.</p>
     */
    inline const Aws::String& GetAccessToken() const { return m_accessToken; }
    template<typename AccessTokenT = Aws::String>
    void SetAccessToken(AccessTokenT&& value) { m_accessTokenHasBeenSet = true; m_accessToken = std::forward<AccessTokenT>(value); }
    template<typename AccessTokenT = Aws::String>
    CreateTokenWithIAMResult& WithAccessToken(AccessTokenT&& value) { SetAccessToken(std::forward<AccessTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Used to notify the requester that the returned token is an access token. The
     * supported token type is <code>Bearer</code>.</p>
     */
    inline const Aws::String& GetTokenType() const { return m_tokenType; }
    template<typename TokenTypeT = Aws::String>
    void SetTokenType(TokenTypeT&& value) { m_tokenTypeHasBeenSet = true; m_tokenType = std::forward<TokenTypeT>(value); }
    template<typename TokenTypeT = Aws::String>
    CreateTokenWithIAMResult& WithTokenType(TokenTypeT&& value) { SetTokenType(std::forward<TokenTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the time in seconds when an access token will expire.</p>
     */
    inline int GetExpiresIn() const { return m_expiresIn; }
    inline void SetExpiresIn(int value) { m_expiresInHasBeenSet = true; m_expiresIn = value; }
    inline CreateTokenWithIAMResult& WithExpiresIn(int value) { SetExpiresIn(value); return *this;}
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
    CreateTokenWithIAMResult& WithRefreshToken(RefreshTokenT&& value) { SetRefreshToken(std::forward<RefreshTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A JSON Web Token (JWT) that identifies the user associated with the issued
     * access token. </p>
     */
    inline const Aws::String& GetIdToken() const { return m_idToken; }
    template<typename IdTokenT = Aws::String>
    void SetIdToken(IdTokenT&& value) { m_idTokenHasBeenSet = true; m_idToken = std::forward<IdTokenT>(value); }
    template<typename IdTokenT = Aws::String>
    CreateTokenWithIAMResult& WithIdToken(IdTokenT&& value) { SetIdToken(std::forward<IdTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates the type of tokens that are issued by IAM Identity Center. The
     * following values are supported: </p> <p>* Access Token -
     * <code>urn:ietf:params:oauth:token-type:access_token</code> </p> <p>* Refresh
     * Token - <code>urn:ietf:params:oauth:token-type:refresh_token</code> </p>
     */
    inline const Aws::String& GetIssuedTokenType() const { return m_issuedTokenType; }
    template<typename IssuedTokenTypeT = Aws::String>
    void SetIssuedTokenType(IssuedTokenTypeT&& value) { m_issuedTokenTypeHasBeenSet = true; m_issuedTokenType = std::forward<IssuedTokenTypeT>(value); }
    template<typename IssuedTokenTypeT = Aws::String>
    CreateTokenWithIAMResult& WithIssuedTokenType(IssuedTokenTypeT&& value) { SetIssuedTokenType(std::forward<IssuedTokenTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The list of scopes for which authorization is granted. The access token that
     * is issued is limited to the scopes that are granted.</p>
     */
    inline const Aws::Vector<Aws::String>& GetScope() const { return m_scope; }
    template<typename ScopeT = Aws::Vector<Aws::String>>
    void SetScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope = std::forward<ScopeT>(value); }
    template<typename ScopeT = Aws::Vector<Aws::String>>
    CreateTokenWithIAMResult& WithScope(ScopeT&& value) { SetScope(std::forward<ScopeT>(value)); return *this;}
    template<typename ScopeT = Aws::String>
    CreateTokenWithIAMResult& AddScope(ScopeT&& value) { m_scopeHasBeenSet = true; m_scope.emplace_back(std::forward<ScopeT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A structure containing information from IAM Identity Center managed user and
     * group information.</p>
     */
    inline const AwsAdditionalDetails& GetAwsAdditionalDetails() const { return m_awsAdditionalDetails; }
    template<typename AwsAdditionalDetailsT = AwsAdditionalDetails>
    void SetAwsAdditionalDetails(AwsAdditionalDetailsT&& value) { m_awsAdditionalDetailsHasBeenSet = true; m_awsAdditionalDetails = std::forward<AwsAdditionalDetailsT>(value); }
    template<typename AwsAdditionalDetailsT = AwsAdditionalDetails>
    CreateTokenWithIAMResult& WithAwsAdditionalDetails(AwsAdditionalDetailsT&& value) { SetAwsAdditionalDetails(std::forward<AwsAdditionalDetailsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateTokenWithIAMResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
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

    Aws::String m_issuedTokenType;
    bool m_issuedTokenTypeHasBeenSet = false;

    Aws::Vector<Aws::String> m_scope;
    bool m_scopeHasBeenSet = false;

    AwsAdditionalDetails m_awsAdditionalDetails;
    bool m_awsAdditionalDetailsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SSOOIDC
} // namespace Aws
