/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureTelemetrySourceConfigurationOutput.h>

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
 * <p>The third-party source configuration of an enrichment.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetrySourceConfigurationOutput">AWS
 * API Reference</a></p>
 */
class TelemetrySourceConfigurationOutput {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetrySourceConfigurationOutput() = default;
  AWS_OBSERVABILITYADMIN_API TelemetrySourceConfigurationOutput(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetrySourceConfigurationOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The configuration of the Microsoft Azure source.</p>
   */
  inline const AzureTelemetrySourceConfigurationOutput& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureTelemetrySourceConfigurationOutput>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureTelemetrySourceConfigurationOutput>
  TelemetrySourceConfigurationOutput& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  AzureTelemetrySourceConfigurationOutput m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
