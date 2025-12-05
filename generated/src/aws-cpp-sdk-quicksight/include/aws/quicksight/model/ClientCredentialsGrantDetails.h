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
 * <p>Configuration details for OAuth2 client credentials grant flow, including
 * client ID, client secret, token endpoint, and optional scopes.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ClientCredentialsGrantDetails">AWS
 * API Reference</a></p>
 */
class ClientCredentialsGrantDetails {
 public:
  AWS_QUICKSIGHT_API ClientCredentialsGrantDetails() = default;
  AWS_QUICKSIGHT_API ClientCredentialsGrantDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ClientCredentialsGrantDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The client identifier issued to the client during the registration process
   * with the authorization server.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  ClientCredentialsGrantDetails& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secret issued to the client during the registration process with
   * the authorization server.</p>
   */
  inline const Aws::String& GetClientSecret() const { return m_clientSecret; }
  inline bool ClientSecretHasBeenSet() const { return m_clientSecretHasBeenSet; }
  template <typename ClientSecretT = Aws::String>
  void SetClientSecret(ClientSecretT&& value) {
    m_clientSecretHasBeenSet = true;
    m_clientSecret = std::forward<ClientSecretT>(value);
  }
  template <typename ClientSecretT = Aws::String>
  ClientCredentialsGrantDetails& WithClientSecret(ClientSecretT&& value) {
    SetClientSecret(std::forward<ClientSecretT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The authorization server endpoint used to obtain access tokens via the client
   * credentials grant flow.</p>
   */
  inline const Aws::String& GetTokenEndpoint() const { return m_tokenEndpoint; }
  inline bool TokenEndpointHasBeenSet() const { return m_tokenEndpointHasBeenSet; }
  template <typename TokenEndpointT = Aws::String>
  void SetTokenEndpoint(TokenEndpointT&& value) {
    m_tokenEndpointHasBeenSet = true;
    m_tokenEndpoint = std::forward<TokenEndpointT>(value);
  }
  template <typename TokenEndpointT = Aws::String>
  ClientCredentialsGrantDetails& WithTokenEndpoint(TokenEndpointT&& value) {
    SetTokenEndpoint(std::forward<TokenEndpointT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_clientSecret;

  Aws::String m_tokenEndpoint;
  bool m_clientIdHasBeenSet = false;
  bool m_clientSecretHasBeenSet = false;
  bool m_tokenEndpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
