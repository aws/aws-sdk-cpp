/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureTelemetrySourceConfigurationInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {

/**
 * <p>The configuration of the third-party telemetry source that a new enrichment
 * collects resource metadata from. Specify exactly one member.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetrySourceConfigurationInput">AWS
 * API Reference</a></p>
 */
class TelemetrySourceConfigurationInput {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetrySourceConfigurationInput() = default;
  AWS_OBSERVABILITYADMIN_API TelemetrySourceConfigurationInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetrySourceConfigurationInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration for a Microsoft Azure source.</p>
   */
  inline const AzureTelemetrySourceConfigurationInput& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureTelemetrySourceConfigurationInput>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureTelemetrySourceConfigurationInput>
  TelemetrySourceConfigurationInput& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  AzureTelemetrySourceConfigurationInput m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
