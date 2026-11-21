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
 * <p>The configuration for an external OpenID Connect IdP that uses the
 * authorization code flow with PKCE and a public client.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ExternalIdpPublicAuthCodeAuthorizingConfig">AWS
 * API Reference</a></p>
 */
class ExternalIdpPublicAuthCodeAuthorizingConfig {
 public:
  AWS_QUICKSIGHT_API ExternalIdpPublicAuthCodeAuthorizingConfig() = default;
  AWS_QUICKSIGHT_API ExternalIdpPublicAuthCodeAuthorizingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ExternalIdpPublicAuthCodeAuthorizingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The OAuth 2.0 client ID.</p>
   */
  inline const Aws::String& GetClientId() const { return m_clientId; }
  inline bool ClientIdHasBeenSet() const { return m_clientIdHasBeenSet; }
  template <typename ClientIdT = Aws::String>
  void SetClientId(ClientIdT&& value) {
    m_clientIdHasBeenSet = true;
    m_clientId = std::forward<ClientIdT>(value);
  }
  template <typename ClientIdT = Aws::String>
  ExternalIdpPublicAuthCodeAuthorizingConfig& WithClientId(ClientIdT&& value) {
    SetClientId(std::forward<ClientIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The issuer URL of the external OpenID Connect IdP.</p>
   */
  inline const Aws::String& GetIssuerUrl() const { return m_issuerUrl; }
  inline bool IssuerUrlHasBeenSet() const { return m_issuerUrlHasBeenSet; }
  template <typename IssuerUrlT = Aws::String>
  void SetIssuerUrl(IssuerUrlT&& value) {
    m_issuerUrlHasBeenSet = true;
    m_issuerUrl = std::forward<IssuerUrlT>(value);
  }
  template <typename IssuerUrlT = Aws::String>
  ExternalIdpPublicAuthCodeAuthorizingConfig& WithIssuerUrl(IssuerUrlT&& value) {
    SetIssuerUrl(std::forward<IssuerUrlT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_issuerUrl;
  bool m_clientIdHasBeenSet = false;
  bool m_issuerUrlHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
