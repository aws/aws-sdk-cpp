/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm/SSM_EXPORTS.h>
#include <aws/ssm/model/AzureConfiguration.h>
#include <aws/ssm/model/GcpConfiguration.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SSM {
namespace Model {

/**
 * <p>The configuration that provides access details and targets for connecting to
 * a third-party cloud environment.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/ssm-2014-11-06/CloudConnectorConfiguration">AWS
 * API Reference</a></p>
 */
class CloudConnectorConfiguration {
 public:
  AWS_SSM_API CloudConnectorConfiguration() = default;
  AWS_SSM_API CloudConnectorConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API CloudConnectorConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SSM_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The access details and targets for connecting to a Microsoft Azure
   * environment.</p>
   */
  inline const AzureConfiguration& GetAzureConfiguration() const { return m_azureConfiguration; }
  inline bool AzureConfigurationHasBeenSet() const { return m_azureConfigurationHasBeenSet; }
  template <typename AzureConfigurationT = AzureConfiguration>
  void SetAzureConfiguration(AzureConfigurationT&& value) {
    m_azureConfigurationHasBeenSet = true;
    m_azureConfiguration = std::forward<AzureConfigurationT>(value);
  }
  template <typename AzureConfigurationT = AzureConfiguration>
  CloudConnectorConfiguration& WithAzureConfiguration(AzureConfigurationT&& value) {
    SetAzureConfiguration(std::forward<AzureConfigurationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The access details and targets for connecting to a Google Cloud Platform
   * (GCP) environment.</p>
   */
  inline const GcpConfiguration& GetGcpConfiguration() const { return m_gcpConfiguration; }
  inline bool GcpConfigurationHasBeenSet() const { return m_gcpConfigurationHasBeenSet; }
  template <typename GcpConfigurationT = GcpConfiguration>
  void SetGcpConfiguration(GcpConfigurationT&& value) {
    m_gcpConfigurationHasBeenSet = true;
    m_gcpConfiguration = std::forward<GcpConfigurationT>(value);
  }
  template <typename GcpConfigurationT = GcpConfiguration>
  CloudConnectorConfiguration& WithGcpConfiguration(GcpConfigurationT&& value) {
    SetGcpConfiguration(std::forward<GcpConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  AzureConfiguration m_azureConfiguration;

  GcpConfiguration m_gcpConfiguration;
  bool m_azureConfigurationHasBeenSet = false;
  bool m_gcpConfigurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SSM
}  // namespace Aws
