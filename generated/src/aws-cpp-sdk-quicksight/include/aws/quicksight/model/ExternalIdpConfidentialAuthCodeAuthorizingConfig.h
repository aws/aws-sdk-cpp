/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/model/ExternalIdpConfidentialClientSecret.h>

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
 * authorization code flow with a confidential client. Client secret values are
 * never included.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/ExternalIdpConfidentialAuthCodeAuthorizingConfig">AWS
 * API Reference</a></p>
 */
class ExternalIdpConfidentialAuthCodeAuthorizingConfig {
 public:
  AWS_QUICKSIGHT_API ExternalIdpConfidentialAuthCodeAuthorizingConfig() = default;
  AWS_QUICKSIGHT_API ExternalIdpConfidentialAuthCodeAuthorizingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_QUICKSIGHT_API ExternalIdpConfidentialAuthCodeAuthorizingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ExternalIdpConfidentialAuthCodeAuthorizingConfig& WithClientId(ClientIdT&& value) {
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
  ExternalIdpConfidentialAuthCodeAuthorizingConfig& WithIssuerUrl(IssuerUrlT&& value) {
    SetIssuerUrl(std::forward<IssuerUrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The client secrets of the confidential client, with the Amazon Web Services
   * Secrets Manager ARN for each Region. Secret values are never included.</p>
   */
  inline const Aws::Vector<ExternalIdpConfidentialClientSecret>& GetClientSecrets() const { return m_clientSecrets; }
  inline bool ClientSecretsHasBeenSet() const { return m_clientSecretsHasBeenSet; }
  template <typename ClientSecretsT = Aws::Vector<ExternalIdpConfidentialClientSecret>>
  void SetClientSecrets(ClientSecretsT&& value) {
    m_clientSecretsHasBeenSet = true;
    m_clientSecrets = std::forward<ClientSecretsT>(value);
  }
  template <typename ClientSecretsT = Aws::Vector<ExternalIdpConfidentialClientSecret>>
  ExternalIdpConfidentialAuthCodeAuthorizingConfig& WithClientSecrets(ClientSecretsT&& value) {
    SetClientSecrets(std::forward<ClientSecretsT>(value));
    return *this;
  }
  template <typename ClientSecretsT = ExternalIdpConfidentialClientSecret>
  ExternalIdpConfidentialAuthCodeAuthorizingConfig& AddClientSecrets(ClientSecretsT&& value) {
    m_clientSecretsHasBeenSet = true;
    m_clientSecrets.emplace_back(std::forward<ClientSecretsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clientId;

  Aws::String m_issuerUrl;

  Aws::Vector<ExternalIdpConfidentialClientSecret> m_clientSecrets;
  bool m_clientIdHasBeenSet = false;
  bool m_issuerUrlHasBeenSet = false;
  bool m_clientSecretsHasBeenSet = false;
};

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
