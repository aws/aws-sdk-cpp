/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryPipelineConfiguration.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class ValidateTelemetryPipelineConfigurationRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API ValidateTelemetryPipelineConfigurationRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ValidateTelemetryPipelineConfiguration"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The pipeline configuration to validate for syntax and compatibility.</p>
   */
  inline const TelemetryPipelineConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  ValidateTelemetryPipelineConfigurationRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetryPipelineConfiguration m_configuration;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
