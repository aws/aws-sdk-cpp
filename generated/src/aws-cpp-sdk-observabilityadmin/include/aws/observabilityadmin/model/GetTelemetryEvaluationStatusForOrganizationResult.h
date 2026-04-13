/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/observabilityadmin/ObservabilityAdmin_EXPORTS.h>
#include <aws/observabilityadmin/model/RegionStatus.h>
#include <aws/observabilityadmin/model/Status.h>

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
class GetTelemetryEvaluationStatusForOrganizationResult {
 public:
  AWS_OBSERVABILITYADMIN_API GetTelemetryEvaluationStatusForOrganizationResult() = default;
  AWS_OBSERVABILITYADMIN_API GetTelemetryEvaluationStatusForOrganizationResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OBSERVABILITYADMIN_API GetTelemetryEvaluationStatusForOrganizationResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p> The onboarding status of the telemetry config feature for the organization.
   * </p>
   */
  inline Status GetStatus() const { return m_status; }
  inline void SetStatus(Status value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetTelemetryEvaluationStatusForOrganizationResult& WithStatus(Status value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> This field describes the reason for the failure status. The field will only
   * be populated if <code>Status</code> is <code>FAILED_START</code> or
   * <code>FAILED_STOP</code>. </p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetTelemetryEvaluationStatusForOrganizationResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The Amazon Web Services Region that is designated as the home region for
   * multi-region telemetry evaluation for the organization. The home region is the
   * single management point for all multi-region operations on this organization.
   * This field is only present when multi-region telemetry evaluation is active.
   * </p>
   */
  inline const Aws::String& GetHomeRegion() const { return m_homeRegion; }
  template <typename HomeRegionT = Aws::String>
  void SetHomeRegion(HomeRegionT&& value) {
    m_homeRegionHasBeenSet = true;
    m_homeRegion = std::forward<HomeRegionT>(value);
  }
  template <typename HomeRegionT = Aws::String>
  GetTelemetryEvaluationStatusForOrganizationResult& WithHomeRegion(HomeRegionT&& value) {
    SetHomeRegion(std::forward<HomeRegionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> A list of per-region telemetry evaluation statuses for the organization.
   * Each entry indicates the evaluation status for a specific spoke region included
   * in the multi-region configuration. This field is only present when multi-region
   * telemetry evaluation is active. </p>
   */
  inline const Aws::Vector<RegionStatus>& GetRegionStatuses() const { return m_regionStatuses; }
  template <typename RegionStatusesT = Aws::Vector<RegionStatus>>
  void SetRegionStatuses(RegionStatusesT&& value) {
    m_regionStatusesHasBeenSet = true;
    m_regionStatuses = std::forward<RegionStatusesT>(value);
  }
  template <typename RegionStatusesT = Aws::Vector<RegionStatus>>
  GetTelemetryEvaluationStatusForOrganizationResult& WithRegionStatuses(RegionStatusesT&& value) {
    SetRegionStatuses(std::forward<RegionStatusesT>(value));
    return *this;
  }
  template <typename RegionStatusesT = RegionStatus>
  GetTelemetryEvaluationStatusForOrganizationResult& AddRegionStatuses(RegionStatusesT&& value) {
    m_regionStatusesHasBeenSet = true;
    m_regionStatuses.emplace_back(std::forward<RegionStatusesT>(value));
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
  GetTelemetryEvaluationStatusForOrganizationResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Status m_status{Status::NOT_SET};

  Aws::String m_failureReason;

  Aws::String m_homeRegion;

  Aws::Vector<RegionStatus> m_regionStatuses;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_statusHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_homeRegionHasBeenSet = false;
  bool m_regionStatusesHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ObservabilityAdmin
}  // namespace Aws
