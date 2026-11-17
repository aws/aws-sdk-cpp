/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureInfrastructure.h>

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
 * <p>The choices for the infrastructure that the setup creates. Specify one
 * provider, which must match the provider in <code>Source</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryManifestInfrastructure">AWS
 * API Reference</a></p>
 */
class TelemetryManifestInfrastructure {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryManifestInfrastructure() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryManifestInfrastructure(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryManifestInfrastructure& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The choices for the Azure infrastructure that the setup creates.</p>
   */
  inline const AzureInfrastructure& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = AzureInfrastructure>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = AzureInfrastructure>
  TelemetryManifestInfrastructure& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  AzureInfrastructure m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
