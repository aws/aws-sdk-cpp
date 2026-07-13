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
 * <p>Input structure for IntrospectOAuth2TokenWithIAM operation</p> <p>RFC 7662
 * §2.1 introspection request. Contains the token to inspect and an optional hint
 * about the token's type.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/IntrospectOAuth2TokenWithIAMRequest">AWS
 * API Reference</a></p>
 */
class IntrospectOAuth2TokenWithIAMRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API IntrospectOAuth2TokenWithIAMRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "IntrospectOAuth2TokenWithIAM"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The string value of the token to introspect. May be either an access_token or
   * a refresh_token issued by AWS Sign-In.</p>
   */
  inline const Aws::String& GetToken() const { return m_token; }
  inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
  template <typename TokenT = Aws::String>
  void SetToken(TokenT&& value) {
    m_tokenHasBeenSet = true;
    m_token = std::forward<TokenT>(value);
  }
  template <typename TokenT = Aws::String>
  IntrospectOAuth2TokenWithIAMRequest& WithToken(TokenT&& value) {
    SetToken(std::forward<TokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Optional hint about the type of the token submitted for introspection. The
   * server uses this hint to optimize lookup, but still falls back to the other
   * token type on miss. Allowed values: access_token, refresh_token.</p>
   */
  inline const Aws::String& GetTokenTypeHint() const { return m_tokenTypeHint; }
  inline bool TokenTypeHintHasBeenSet() const { return m_tokenTypeHintHasBeenSet; }
  template <typename TokenTypeHintT = Aws::String>
  void SetTokenTypeHint(TokenTypeHintT&& value) {
    m_tokenTypeHintHasBeenSet = true;
    m_tokenTypeHint = std::forward<TokenTypeHintT>(value);
  }
  template <typename TokenTypeHintT = Aws::String>
  IntrospectOAuth2TokenWithIAMRequest& WithTokenTypeHint(TokenTypeHintT&& value) {
    SetTokenTypeHint(std::forward<TokenTypeHintT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_token;

  Aws::String m_tokenTypeHint;
  bool m_tokenHasBeenSet = false;
  bool m_tokenTypeHintHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
