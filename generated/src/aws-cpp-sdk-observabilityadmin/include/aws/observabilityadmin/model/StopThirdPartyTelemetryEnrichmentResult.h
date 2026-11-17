/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetryEnrichmentStatus.h>
#include <aws/observabilityadmin/model/ThirdPartyTelemetrySource.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ObservabilityAdmin {
namespace Model {
class StopThirdPartyTelemetryEnrichmentResult {
 public:
  AWS_OBSERVABILITYADMIN_API StopThirdPartyTelemetryEnrichmentResult() = default;
  AWS_OBSERVABILITYADMIN_API StopThirdPartyTelemetryEnrichmentResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API StopThirdPartyTelemetryEnrichmentResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The name of the enrichment.</p>
   */
  inline const Aws::String& GetName() const { return m_name; }
  template <typename NameT = Aws::String>
  void SetName(NameT&& value) {
    m_nameHasBeenSet = true;
    m_name = std::forward<NameT>(value);
  }
  template <typename NameT = Aws::String>
  StopThirdPartyTelemetryEnrichmentResult& WithName(NameT&& value) {
    SetName(std::forward<NameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The third-party telemetry source of the enrichment.</p>
   */
  inline ThirdPartyTelemetrySource GetTelemetrySource() const { return m_telemetrySource; }
  inline void SetTelemetrySource(ThirdPartyTelemetrySource value) {
    m_telemetrySourceHasBeenSet = true;
    m_telemetrySource = value;
  }
  inline StopThirdPartyTelemetryEnrichmentResult& WithTelemetrySource(ThirdPartyTelemetrySource value) {
    SetTelemetrySource(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The status of the enrichment after the stop operation. Valid values:</p> <ul>
   * <li> <p> <code>Initializing</code> - CloudWatch is setting up the enrichment.
   * Some telemetry can be enriched before setup completes.</p> </li> <li> <p>
   * <code>Running</code> - The enrichment is active.</p> </li> <li> <p>
   * <code>Stopped</code> - The enrichment is stopped.</p> </li> <li> <p>
   * <code>Impaired</code> - The enrichment has a problem. <code>StatusReason</code>
   * describes the problem.</p> </li> </ul>
   */
  inline ThirdPartyTelemetryEnrichmentStatus GetStatus() const { return m_status; }
  inline void SetStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StopThirdPartyTelemetryEnrichmentResult& WithStatus(ThirdPartyTelemetryEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason for the current status. This field is present when the status is
   * <code>Impaired</code>.</p>
   */
  inline const Aws::String& GetStatusReason() const { return m_statusReason; }
  template <typename StatusReasonT = Aws::String>
  void SetStatusReason(StatusReasonT&& value) {
    m_statusReasonHasBeenSet = true;
    m_statusReason = std::forward<StatusReasonT>(value);
  }
  template <typename StatusReasonT = Aws::String>
  StopThirdPartyTelemetryEnrichmentResult& WithStatusReason(StatusReasonT&& value) {
    SetStatusReason(std::forward<StatusReasonT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetRequestId() const { return m_requestId; }
  template <typename RequestIdT = Aws::String>
  void SetRequestId(RequestIdT&& value) {
    m_requestIdHasBeenSet = true;
    m_requestId = std::forward<RequestIdT>(value);
  }
  template <typename RequestIdT = Aws::String>
  StopThirdPartyTelemetryEnrichmentResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::String m_name;

  ThirdPartyTelemetrySource m_telemetrySource{ThirdPartyTelemetrySource::NOT_SET};

  ThirdPartyTelemetryEnrichmentStatus m_status{ThirdPartyTelemetryEnrichmentStatus::NOT_SET};

  Aws::String m_statusReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_nameHasBeenSet = false;
  bool m_telemetrySourceHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
