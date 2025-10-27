/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/AuthorizationCodeGrantCredentialsDetails.h>
#include <aws/quicksight/model/AuthorizationCodeGrantCredentialsSource.h>

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
 * <p>Metadata for OAuth 2.0 authorization code grant authentication.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AuthorizationCodeGrantMetadata">AWS
 * API Reference</a></p>
 */
class AuthorizationCodeGrantMetadata {
 public:
  AWS_QUICKSIGHT_API AuthorizationCodeGrantMetadata() = default;
  AWS_QUICKSIGHT_API AuthorizationCodeGrantMetadata(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API AuthorizationCodeGrantMetadata& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The base URL endpoint for the external service.</p>
   */
  inline const Aws::String& GetBaseEndpoint() const { return m_baseEndpoint; }
  inline bool BaseEndpointHasBeenSet() const { return m_baseEndpointHasBeenSet; }
  template <typename BaseEndpointT = Aws::String>
  void SetBaseEndpoint(BaseEndpointT&& value) {
    m_baseEndpointHasBeenSet = true;
    m_baseEndpoint = std::forward<BaseEndpointT>(value);
  }
  template <typename BaseEndpointT = Aws::String>
  AuthorizationCodeGrantMetadata& WithBaseEndpoint(BaseEndpointT&& value) {
    SetBaseEndpoint(std::forward<BaseEndpointT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The redirect URL for the OAuth authorization flow.</p>
   */
  inline const Aws::String& GetRedirectUrl() const { return m_redirectUrl; }
  inline bool RedirectUrlHasBeenSet() const { return m_redirectUrlHasBeenSet; }
  template <typename RedirectUrlT = Aws::String>
  void SetRedirectUrl(RedirectUrlT&& value) {
    m_redirectUrlHasBeenSet = true;
    m_redirectUrl = std::forward<RedirectUrlT>(value);
  }
  template <typename RedirectUrlT = Aws::String>
  AuthorizationCodeGrantMetadata& WithRedirectUrl(RedirectUrlT&& value) {
    SetRedirectUrl(std::forward<RedirectUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The source of the authorization code grant credentials.</p>
   */
  inline AuthorizationCodeGrantCredentialsSource GetAuthorizationCodeGrantCredentialsSource() const {
    return m_authorizationCodeGrantCredentialsSource;
  }
  inline bool AuthorizationCodeGrantCredentialsSourceHasBeenSet() const { return m_authorizationCodeGrantCredentialsSourceHasBeenSet; }
  inline void SetAuthorizationCodeGrantCredentialsSource(AuthorizationCodeGrantCredentialsSource value) {
    m_authorizationCodeGrantCredentialsSourceHasBeenSet = true;
    m_authorizationCodeGrantCredentialsSource = value;
  }
  inline AuthorizationCodeGrantMetadata& WithAuthorizationCodeGrantCredentialsSource(AuthorizationCodeGrantCredentialsSource value) {
    SetAuthorizationCodeGrantCredentialsSource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed credentials configuration for authorization code grant.</p>
   */
  inline const AuthorizationCodeGrantCredentialsDetails& GetAuthorizationCodeGrantCredentialsDetails() const {
    return m_authorizationCodeGrantCredentialsDetails;
  }
  inline bool AuthorizationCodeGrantCredentialsDetailsHasBeenSet() const { return m_authorizationCodeGrantCredentialsDetailsHasBeenSet; }
  template <typename AuthorizationCodeGrantCredentialsDetailsT = AuthorizationCodeGrantCredentialsDetails>
  void SetAuthorizationCodeGrantCredentialsDetails(AuthorizationCodeGrantCredentialsDetailsT&& value) {
    m_authorizationCodeGrantCredentialsDetailsHasBeenSet = true;
    m_authorizationCodeGrantCredentialsDetails = std::forward<AuthorizationCodeGrantCredentialsDetailsT>(value);
  }
  template <typename AuthorizationCodeGrantCredentialsDetailsT = AuthorizationCodeGrantCredentialsDetails>
  AuthorizationCodeGrantMetadata& WithAuthorizationCodeGrantCredentialsDetails(AuthorizationCodeGrantCredentialsDetailsT&& value) {
    SetAuthorizationCodeGrantCredentialsDetails(std::forward<AuthorizationCodeGrantCredentialsDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_baseEndpoint;
  bool m_baseEndpointHasBeenSet = false;

  Aws::String m_redirectUrl;
  bool m_redirectUrlHasBeenSet = false;

  AuthorizationCodeGrantCredentialsSource m_authorizationCodeGrantCredentialsSource{AuthorizationCodeGrantCredentialsSource::NOT_SET};
  bool m_authorizationCodeGrantCredentialsSourceHasBeenSet = false;

  AuthorizationCodeGrantCredentialsDetails m_authorizationCodeGrantCredentialsDetails;
  bool m_authorizationCodeGrantCredentialsDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
