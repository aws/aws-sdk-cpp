/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/AzureScopeItem.h>

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
 * <p>The resources to collect telemetry from, for one cloud provider. Specify one
 * provider.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryManifestSource">AWS
 * API Reference</a></p>
 */
class TelemetryManifestSource {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryManifestSource() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryManifestSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryManifestSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Azure scope items. Each <code>AzureScopeItem</code> specifies a set of
   * Azure resources and the telemetry types to collect from them. You can specify up
   * to 100 scope items.</p>
   */
  inline const Aws::Vector<AzureScopeItem>& GetAzure() const { return m_azure; }
  inline bool AzureHasBeenSet() const { return m_azureHasBeenSet; }
  template <typename AzureT = Aws::Vector<AzureScopeItem>>
  void SetAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure = std::forward<AzureT>(value);
  }
  template <typename AzureT = Aws::Vector<AzureScopeItem>>
  TelemetryManifestSource& WithAzure(AzureT&& value) {
    SetAzure(std::forward<AzureT>(value));
    return *this;
  }
  template <typename AzureT = AzureScopeItem>
  TelemetryManifestSource& AddAzure(AzureT&& value) {
    m_azureHasBeenSet = true;
    m_azure.emplace_back(std::forward<AzureT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::Vector<AzureScopeItem> m_azure;
  bool m_azureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
