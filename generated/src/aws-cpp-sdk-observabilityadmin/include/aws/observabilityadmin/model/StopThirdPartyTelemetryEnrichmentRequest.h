/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class StopThirdPartyTelemetryEnrichmentRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API StopThirdPartyTelemetryEnrichmentRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "StopThirdPartyTelemetryEnrichment"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>The identifier of the enrichment to stop. You can specify one of the
   * following:</p> <ul> <li> <p>The name of the enrichment.</p> </li> <li> <p>The
   * Amazon Resource Name (ARN) of the enrichment.</p> </li> </ul>
   */
  inline const Aws::String& GetTelemetryEnrichmentIdentifier() const { return m_telemetryEnrichmentIdentifier; }
  inline bool TelemetryEnrichmentIdentifierHasBeenSet() const { return m_telemetryEnrichmentIdentifierHasBeenSet; }
  template <typename TelemetryEnrichmentIdentifierT = Aws::String>
  void SetTelemetryEnrichmentIdentifier(TelemetryEnrichmentIdentifierT&& value) {
    m_telemetryEnrichmentIdentifierHasBeenSet = true;
    m_telemetryEnrichmentIdentifier = std::forward<TelemetryEnrichmentIdentifierT>(value);
  }
  template <typename TelemetryEnrichmentIdentifierT = Aws::String>
  StopThirdPartyTelemetryEnrichmentRequest& WithTelemetryEnrichmentIdentifier(TelemetryEnrichmentIdentifierT&& value) {
    SetTelemetryEnrichmentIdentifier(std::forward<TelemetryEnrichmentIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_telemetryEnrichmentIdentifier;
  bool m_telemetryEnrichmentIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
