/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/TelemetryManifestInfrastructure.h>
#include <aws/observabilityadmin/model/TelemetryManifestSource.h>

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
 * <p>Declares which resources in a cloud provider to collect telemetry from and
 * which telemetry types to collect.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/TelemetryManifest">AWS
 * API Reference</a></p>
 */
class TelemetryManifest {
 public:
  AWS_OBSERVABILITYADMIN_API TelemetryManifest() = default;
  AWS_OBSERVABILITYADMIN_API TelemetryManifest(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API TelemetryManifest& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The resources to collect telemetry from and the telemetry types to
   * collect.</p>
   */
  inline const TelemetryManifestSource& GetSource() const { return m_source; }
  inline bool SourceHasBeenSet() const { return m_sourceHasBeenSet; }
  template <typename SourceT = TelemetryManifestSource>
  void SetSource(SourceT&& value) {
    m_sourceHasBeenSet = true;
    m_source = std::forward<SourceT>(value);
  }
  template <typename SourceT = TelemetryManifestSource>
  TelemetryManifest& WithSource(SourceT&& value) {
    SetSource(std::forward<SourceT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The choices for the infrastructure that the setup creates in your cloud
   * provider, such as the subscription that contains the Event Hubs and their size.
   * If you omit this value, the setup uses default settings. If an
   * <code>AzureScopeItem</code> collects <code>ResourceLogs</code>, you must specify
   * at least the Azure <code>SubscriptionId</code>.</p>
   */
  inline const TelemetryManifestInfrastructure& GetInfrastructure() const { return m_infrastructure; }
  inline bool InfrastructureHasBeenSet() const { return m_infrastructureHasBeenSet; }
  template <typename InfrastructureT = TelemetryManifestInfrastructure>
  void SetInfrastructure(InfrastructureT&& value) {
    m_infrastructureHasBeenSet = true;
    m_infrastructure = std::forward<InfrastructureT>(value);
  }
  template <typename InfrastructureT = TelemetryManifestInfrastructure>
  TelemetryManifest& WithInfrastructure(InfrastructureT&& value) {
    SetInfrastructure(std::forward<InfrastructureT>(value));
    return *this;
  }
  ///@}
 private:
  TelemetryManifestSource m_source;

  TelemetryManifestInfrastructure m_infrastructure;
  bool m_sourceHasBeenSet = false;
  bool m_infrastructureHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
