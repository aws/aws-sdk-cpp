/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryPipelineConfiguration.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class UpdateTelemetryPipelineRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API UpdateTelemetryPipelineRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "UpdateTelemetryPipeline"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The ARN of the telemetry pipeline to update.</p>
   */
  inline const Aws::String& GetPipelineIdentifier() const { return m_pipelineIdentifier; }
  inline bool PipelineIdentifierHasBeenSet() const { return m_pipelineIdentifierHasBeenSet; }
  template <typename PipelineIdentifierT = Aws::String>
  void SetPipelineIdentifier(PipelineIdentifierT&& value) {
    m_pipelineIdentifierHasBeenSet = true;
    m_pipelineIdentifier = std::forward<PipelineIdentifierT>(value);
  }
  template <typename PipelineIdentifierT = Aws::String>
  UpdateTelemetryPipelineRequest& WithPipelineIdentifier(PipelineIdentifierT&& value) {
    SetPipelineIdentifier(std::forward<PipelineIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The new configuration for the telemetry pipeline, including updated sources,
   * processors, and destinations.</p>
   */
  inline const TelemetryPipelineConfiguration& GetConfiguration() const { return m_configuration; }
  inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  void SetConfiguration(ConfigurationT&& value) {
    m_configurationHasBeenSet = true;
    m_configuration = std::forward<ConfigurationT>(value);
  }
  template <typename ConfigurationT = TelemetryPipelineConfiguration>
  UpdateTelemetryPipelineRequest& WithConfiguration(ConfigurationT&& value) {
    SetConfiguration(std::forward<ConfigurationT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_pipelineIdentifier;

  TelemetryPipelineConfiguration m_configuration;
  bool m_pipelineIdentifierHasBeenSet = false;
  bool m_configurationHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
