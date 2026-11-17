/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdminRequest.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentStatus.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetrySource.h>

#include <utility>

namespace Aws {
namespace ObservabilityAdmin {
namespace Model {

/**
 */
class ListThirdPartyTelemetryEnrichmentsRequest : public ObservabilityAdminRequest {
 public:
  AWS_OBSERVABILITYADMIN_API ListThirdPartyTelemetryEnrichmentsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "ListThirdPartyTelemetryEnrichments"; }

  AWS_OBSERVABILITYADMIN_API Aws::String SerializePayload() const override;

  ///@{
  /**
   * <p>Returns only the enrichments that have this status. Valid values:</p> <ul>
   * <li> <p> <code>Initializing</code> - CloudWatch is setting up the enrichment.
   * Some telemetry can be enriched before setup completes.</p> </li> <li> <p>
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
  inline ListThirdPartyTelemetryEnrichmentsRequest& WithStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Returns only the enrichments for this third-party telemetry source.</p>
   */
  inline ThirdPartyTelemetrySource GetTelemetrySource() const { return m_telemetrySource; }
  inline bool TelemetrySourceHasBeenSet() const { return m_telemetrySourceHasBeenSet; }
  inline void SetTelemetrySource(ThirdPartyTelemetrySource value) {
    m_telemetrySourceHasBeenSet = true;
    m_telemetrySource = value;
  }
  inline ListThirdPartyTelemetryEnrichmentsRequest& WithTelemetrySource(ThirdPartyTelemetrySource value) {
    SetTelemetrySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of results to return in a single call. If you omit this
   * parameter, the operation returns up to 100 results.</p>
   */
  inline int GetMaxResults() const { return m_maxResults; }
  inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
  inline void SetMaxResults(int value) {
    m_maxResultsHasBeenSet = true;
    m_maxResults = value;
  }
  inline ListThirdPartyTelemetryEnrichmentsRequest& WithMaxResults(int value) {
    SetMaxResults(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. A previous call generates this token.
   * If you omit this parameter, the operation returns the first page of results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListThirdPartyTelemetryEnrichmentsRequest& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}
 private:
  ThirdPartyTelemetryEnrichmentStatus m_status{ThirdPartyTelemetryEnrichmentStatus::NOT_SET};

  ThirdPartyTelemetrySource m_telemetrySource{ThirdPartyTelemetrySource::NOT_SET};

  int m_maxResults{0};

  Aws::String m_nextToken;
  bool m_statusHasBeenSet = false;
  bool m_telemetrySourceHasBeenSet = false;
  bool m_maxResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
