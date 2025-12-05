/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QuickSight {
namespace Model {

/**
 * <p>Read-only configuration details for OAuth2 authorization code grant flow,
 * including endpoints and client information.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ReadAuthorizationCodeGrantDetails">AWS
 * API Reference</a></p>
 */
class ReadAuthorizationCodeGrantDetails {
 public:
  AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantDetails() = default;
  AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ReadAuthorizationCodeGrantDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client identifier for the OAuth2 authorization code grant flow.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  ReadAuthorizationCodeGrantDetails& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization server endpoint used to obtain access tokens via the
   * authorization code grant flow.</p>
   */
  inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
  inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
  template <typename TokenEndpointT = Aws::String>
  void SetTokenEndpoint(TokenEndpointT&& value) {
    m_tokenEndpointHasBeenSet = true;
    m_tokenEndpoint = std::forward<TokenEndpointT>(value);
  }
  template <typename TokenEndpointT = Aws::String>
  ReadAuthorizationCodeGrantDetails& WithTokenEndpoint(TokenEndpointT&& value) {
    SetTokenEndpoint(std::forward<TokenEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization server endpoint used to obtain authorization codes from the
   * resource owner.</p>
   */
  inline const Aws::String& GetAuthorizationEndpoint() const { return m_authorizationEndpoint; }
  inline bool AuthorizationEndpointHasBeenSet() const { return m_authorizationEndpointHasBeenSet; }
  template <typename AuthorizationEndpointT = Aws::String>
  void SetAuthorizationEndpoint(AuthorizationEndpointT&& value) {
    m_authorizationEndpointHasBeenSet = true;
    m_authorizationEndpoint = std::forward<AuthorizationEndpointT>(value);
  }
  template <typename AuthorizationEndpointT = Aws::String>
  ReadAuthorizationCodeGrantDetails& WithAuthorizationEndpoint(AuthorizationEndpointT&& value) {
    SetAuthorizationEndpoint(std::forward<AuthorizationEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_tokenEndpoint;

  Aws::String m_authorizationEndpoint;
  bool m_clientIdHasBeenSet = false;
  bool m_tokenEndpointHasBeenSet = false;
  bool m_authorizationEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
