/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/signin/SigninRequest.h>
#include <aws/signin/Signin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Signin {
namespace Model {

/**
 * <p>Input structure for RevokeOAuth2TokenWithIAM operation</p> <p>RFC 7009 §2.1
 * revocation request. Contains the refresh_token to revoke.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/RevokeOAuth2TokenWithIAMRequest">AWS
 * API Reference</a></p>
 */
class RevokeOAuth2TokenWithIAMRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API RevokeOAuth2TokenWithIAMRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "RevokeOAuth2TokenWithIAM"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The refresh_token to revoke. Must be a refresh_token issued by AWS Sign-In
   * (prefix &quot;ASOR&quot;); access_tokens are not accepted for revocation.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  RevokeOAuth2TokenWithIAMRequest& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_token;
  bool m_tokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
