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
 * <p>Input structure for CreateOAuth2TokenWithTokenExchange
 * operation</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/signin-2023-01-01/CreateOAuth2TokenWithTokenExchangeRequest">AWS
 * API Reference</a></p>
 */
class CreateOAuth2TokenWithTokenExchangeRequest : public SigninRequest {
 public:
  AWS_SIGNIN_API CreateOAuth2TokenWithTokenExchangeRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateOAuth2TokenWithTokenExchange"; }

  AWS_SIGNIN_API Aws::String SerializePayload() const override;

  /**
   * Helper function to collect parameters (configurable and static hardcoded) required for endpoint computation.
   */
  AWS_SIGNIN_API EndpointParameters GetEndpointContextParams() const override;

  ///@{
  /**
   * <p>The OAuth 2.0 grant type. Currently supports
   * &quot;urn:ietf:params:oauth:grant-type:token-exchange&quot; and
   * &quot;urn:ietf:params:oauth:grant-type:jwt-bearer&quot;.</p>
   */
  inline const Aws::String& GetGrantType() const { return m_grantType; }
  inline bool GrantTypeHasBeenSet() const { return m_grantTypeHasBeenSet; }
  template <typename GrantTypeT = Aws::String>
  void SetGrantType(GrantTypeT&& value) {
    m_grantTypeHasBeenSet = true;
    m_grantType = std::forward<GrantTypeT>(value);
  }
  template <typename GrantTypeT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithGrantType(GrantTypeT&& value) {
    SetGrantType(std::forward<GrantTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The subject token that represents the identity of the party on whose behalf
   * the request is made. Required when
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:token-exchange&quot;.</p>
   */
  inline const Aws::String& GetSubjectToken() const { return m_subjectToken; }
  inline bool SubjectTokenHasBeenSet() const { return m_subjectTokenHasBeenSet; }
  template <typename SubjectTokenT = Aws::String>
  void SetSubjectToken(SubjectTokenT&& value) {
    m_subjectTokenHasBeenSet = true;
    m_subjectToken = std::forward<SubjectTokenT>(value);
  }
  template <typename SubjectTokenT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithSubjectToken(SubjectTokenT&& value) {
    SetSubjectToken(std::forward<SubjectTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token type of the subject token. Currently only supports
   * &quot;urn:ietf:params:oauth:token-type:jwt&quot;. Required when
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:token-exchange&quot;.</p>
   */
  inline const Aws::String& GetSubjectTokenType() const { return m_subjectTokenType; }
  inline bool SubjectTokenTypeHasBeenSet() const { return m_subjectTokenTypeHasBeenSet; }
  template <typename SubjectTokenTypeT = Aws::String>
  void SetSubjectTokenType(SubjectTokenTypeT&& value) {
    m_subjectTokenTypeHasBeenSet = true;
    m_subjectTokenType = std::forward<SubjectTokenTypeT>(value);
  }
  template <typename SubjectTokenTypeT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithSubjectTokenType(SubjectTokenTypeT&& value) {
    SetSubjectTokenType(std::forward<SubjectTokenTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JWT authorization grant, as defined in RFC 7523. Required when
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:jwt-bearer&quot;.</p>
   */
  inline const Aws::String& GetAssertion() const { return m_assertion; }
  inline bool AssertionHasBeenSet() const { return m_assertionHasBeenSet; }
  template <typename AssertionT = Aws::String>
  void SetAssertion(AssertionT&& value) {
    m_assertionHasBeenSet = true;
    m_assertion = std::forward<AssertionT>(value);
  }
  template <typename AssertionT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithAssertion(AssertionT&& value) {
    SetAssertion(std::forward<AssertionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth 2.0 client identifier. If provided with
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:jwt-bearer&quot;, must match
   * the assertion's &quot;client_id&quot; claim.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The OAuth resource for which the access token is requested:</p> <ul>
   * <li>&quot;grant_type=urn:ietf:params:oauth:grant-type:token-exchange&quot;:
   * Required. Must be a service principal. Example:
   * &quot;glue.amazonaws.com&quot;.</li>
   * <li>&quot;grant_type=urn:ietf:params:oauth:grant-type:jwt-bearer&quot;: Required
   * when the assertion has no &quot;resource&quot; claim, otherwise must match it.
   * Must be a URI. Example: &quot;https://aws-mcp.us-east-1.api.aws/mcp&quot;.</li>
   * </ul>
   */
  inline const Aws::String& GetResource() const { return m_resource; }
  inline bool ResourceHasBeenSet() const { return m_resourceHasBeenSet; }
  template <typename ResourceT = Aws::String>
  void SetResource(ResourceT&& value) {
    m_resourceHasBeenSet = true;
    m_resource = std::forward<ResourceT>(value);
  }
  template <typename ResourceT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithResource(ResourceT&& value) {
    SetResource(std::forward<ResourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The IAM managed policy Amazon Resource Names (ARNs) to apply as session
   * policies that further scope down the permissions of the issued access token,
   * provided as a space-delimited list. Example:
   * &quot;arn:aws:iam::444455556666:policy/MyPolicy&quot;.</p> <p>If provided with
   * &quot;grant_type=urn:ietf:params:oauth:grant-type:jwt-bearer&quot;, must match
   * the assertion's &quot;scope&quot; claim.</p>
   */
  inline const Aws::String& GetScope() const { return m_scope; }
  inline bool ScopeHasBeenSet() const { return m_scopeHasBeenSet; }
  template <typename ScopeT = Aws::String>
  void SetScope(ScopeT&& value) {
    m_scopeHasBeenSet = true;
    m_scope = std::forward<ScopeT>(value);
  }
  template <typename ScopeT = Aws::String>
  CreateOAuth2TokenWithTokenExchangeRequest& WithScope(ScopeT&& value) {
    SetScope(std::forward<ScopeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_grantType;

  Aws::String m_subjectToken;

  Aws::String m_subjectTokenType;

  Aws::String m_assertion;

  Aws::String m_clientId;

  Aws::String m_resource;

  Aws::String m_scope;
  bool m_grantTypeHasBeenSet = false;
  bool m_subjectTokenHasBeenSet = false;
  bool m_subjectTokenTypeHasBeenSet = false;
  bool m_assertionHasBeenSet = false;
  bool m_clientIdHasBeenSet = false;
  bool m_resourceHasBeenSet = false;
  bool m_scopeHasBeenSet = false;
};

}  // namespace Model
}  // namespace Signin
}  // namespace Aws
