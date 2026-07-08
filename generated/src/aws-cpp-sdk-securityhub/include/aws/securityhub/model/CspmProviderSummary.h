/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/securityhub/model/CspmConnectorProviderName.h>
#include <aws/securityhub/model/CspmConnectorStatus.h>
#include <aws/securityhub/model/CspmProviderDetail.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SecurityHub {
namespace Model {

/**
 * <p>A summary of the cloud provider configuration for a connector.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/CspmProviderSummary">AWS
 * API Reference</a></p>
 */
class CspmProviderSummary {
 public:
  AWS_SECURITYHUB_API CspmProviderSummary() = default;
  AWS_SECURITYHUB_API CspmProviderSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API CspmProviderSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the cloud provider.</p>
   */
  inline CspmConnectorProviderName GetProviderName() const { return m_providerName; }
  inline bool ProviderNameHasBeenSet() const { return m_providerNameHasBeenSet; }
  inline void SetProviderName(CspmConnectorProviderName value) {
    m_providerNameHasBeenSet = true;
    m_providerName = value;
  }
  inline CspmProviderSummary& WithProviderName(CspmConnectorProviderName value) {
    SetProviderName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The connectivity status of the connector.</p>
   */
  inline CspmConnectorStatus GetConnectorStatus() const { return m_connectorStatus; }
  inline bool ConnectorStatusHasBeenSet() const { return m_connectorStatusHasBeenSet; }
  inline void SetConnectorStatus(CspmConnectorStatus value) {
    m_connectorStatusHasBeenSet = true;
    m_connectorStatus = value;
  }
  inline CspmProviderSummary& WithConnectorStatus(CspmConnectorStatus value) {
    SetConnectorStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The provider configuration details.</p>
   */
  inline const CspmProviderDetail& GetProviderConfiguration() const { return m_providerConfiguration; }
  inline bool ProviderConfigurationHasBeenSet() const { return m_providerConfigurationHasBeenSet; }
  template <typename ProviderConfigurationT = CspmProviderDetail>
  void SetProviderConfiguration(ProviderConfigurationT&& value) {
    m_providerConfigurationHasBeenSet = true;
    m_providerConfiguration = std::forward<ProviderConfigurationT>(value);
  }
  template <typename ProviderConfigurationT = CspmProviderDetail>
  CspmProviderSummary& WithProviderConfiguration(ProviderConfigurationT&& value) {
    SetProviderConfiguration(std::forward<ProviderConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  CspmConnectorProviderName m_providerName{CspmConnectorProviderName::NOT_SET};

  CspmConnectorStatus m_connectorStatus{CspmConnectorStatus::NOT_SET};

  CspmProviderDetail m_providerConfiguration;
  bool m_providerNameHasBeenSet = false;
  bool m_connectorStatusHasBeenSet = false;
  bool m_providerConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityHub
}  // namespace Aws
