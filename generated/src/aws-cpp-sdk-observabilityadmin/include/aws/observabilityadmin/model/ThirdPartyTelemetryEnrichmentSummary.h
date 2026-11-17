/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentStatus.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetrySource.h>

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
 * <p>Summary information about a third-party telemetry enrichment, as returned by
 * <code>ListThirdPartyTelemetryEnrichments</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/observabilityadmin-2018-05-10/ThirdPartyTelemetryEnrichmentSummary">AWS
 * API Reference</a></p>
 */
class ThirdPartyTelemetryEnrichmentSummary {
 public:
  AWS_OBSERVABILITYADMIN_API ThirdPartyTelemetryEnrichmentSummary() = default;
  AWS_OBSERVABILITYADMIN_API ThirdPartyTelemetryEnrichmentSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API ThirdPartyTelemetryEnrichmentSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OBSERVABILITYADMIN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The name of the enrichment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  ThirdPartyTelemetryEnrichmentSummary& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The third-party telemetry source of the enrichment.</p>
   */
  inline ThirdPartyTelemetrySource GetTelemetrySource() const { return m_telemetrySource; }
  inline bool TelemetrySourceHasBeenSet() const { return m_telemetrySourceHasBeenSet; }
  inline void SetTelemetrySource(ThirdPartyTelemetrySource value) {
    m_telemetrySourceHasBeenSet = true;
    m_telemetrySource = value;
  }
  inline ThirdPartyTelemetryEnrichmentSummary& WithTelemetrySource(ThirdPartyTelemetrySource value) {
    SetTelemetrySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the enrichment. Valid values:</p> <ul> <li> <p>
   * <code>Initializing</code> - CloudWatch is setting up the enrichment. Some
   * telemetry can be enriched before setup completes.</p> </li> <li> <p>
   * <code>Running</code> - The enrichment is active.</p> </li> <li> <p>
   * <code>Stopped</code> - The enrichment is stopped.</p> </li> <li> <p>
   * <code>Impaired</code> - The enrichment has a problem. <code>StatusReason</code>
   * describes the problem.</p> </li> </ul>
   */
  inline ThirdPartyTelemetryEnrichmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ThirdPartyTelemetryEnrichmentSummary& WithStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_name;

  ThirdPartyTelemetrySource m_telemetrySource{ThirdPartyTelemetrySource::NOT_SET};

  ThirdPartyTelemetryEnrichmentStatus m_status{ThirdPartyTelemetryEnrichmentStatus::NOT_SET};
  bool m_nameHasBeenSet = false;
  bool m_telemetrySourceHasBeenSet = false;
  bool m_statusHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
