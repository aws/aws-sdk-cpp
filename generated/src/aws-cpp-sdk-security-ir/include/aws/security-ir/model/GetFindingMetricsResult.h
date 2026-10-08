/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/security-ir/SecurityIR_EXPORTS.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace SecurityIR {
namespace Model {
/**
 * <p>Finding-lifecycle metrics for a membership over the requested date
 * range.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/security-ir-2018-05-10/GetFindingMetricsResponse">AWS
 * API Reference</a></p>
 */
class GetFindingMetricsResult {
 public:
  AWS_SECURITYIR_API GetFindingMetricsResult() = default;
  AWS_SECURITYIR_API GetFindingMetricsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SECURITYIR_API GetFindingMetricsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The number of findings ingested from AWS Security Hub during the requested
   * date range.</p>
   */
  inline long long GetFindingsIngestedSecurityHub() const { return m_findingsIngestedSecurityHub; }
  inline void SetFindingsIngestedSecurityHub(long long value) {
    m_findingsIngestedSecurityHubHasBeenSet = true;
    m_findingsIngestedSecurityHub = value;
  }
  inline GetFindingMetricsResult& WithFindingsIngestedSecurityHub(long long value) {
    SetFindingsIngestedSecurityHub(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings ingested from Amazon GuardDuty during the requested
   * date range.</p>
   */
  inline long long GetFindingsIngestedGuardDuty() const { return m_findingsIngestedGuardDuty; }
  inline void SetFindingsIngestedGuardDuty(long long value) {
    m_findingsIngestedGuardDutyHasBeenSet = true;
    m_findingsIngestedGuardDuty = value;
  }
  inline GetFindingMetricsResult& WithFindingsIngestedGuardDuty(long long value) {
    SetFindingsIngestedGuardDuty(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings triaged during the requested date range.</p>
   */
  inline long long GetFindingsTriaged() const { return m_findingsTriaged; }
  inline void SetFindingsTriaged(long long value) {
    m_findingsTriagedHasBeenSet = true;
    m_findingsTriaged = value;
  }
  inline GetFindingMetricsResult& WithFindingsTriaged(long long value) {
    SetFindingsTriaged(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of triaged findings that were closed as false positives during the
   * requested date range.</p>
   */
  inline long long GetFindingsTriagedFalsePositive() const { return m_findingsTriagedFalsePositive; }
  inline void SetFindingsTriagedFalsePositive(long long value) {
    m_findingsTriagedFalsePositiveHasBeenSet = true;
    m_findingsTriagedFalsePositive = value;
  }
  inline GetFindingMetricsResult& WithFindingsTriagedFalsePositive(long long value) {
    SetFindingsTriagedFalsePositive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings investigated during the requested date range.</p>
   */
  inline long long GetFindingsInvestigated() const { return m_findingsInvestigated; }
  inline void SetFindingsInvestigated(long long value) {
    m_findingsInvestigatedHasBeenSet = true;
    m_findingsInvestigated = value;
  }
  inline GetFindingMetricsResult& WithFindingsInvestigated(long long value) {
    SetFindingsInvestigated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of investigated findings that were closed as false positives
   * during the requested date range.</p>
   */
  inline long long GetFindingsInvestigatedFalsePositive() const { return m_findingsInvestigatedFalsePositive; }
  inline void SetFindingsInvestigatedFalsePositive(long long value) {
    m_findingsInvestigatedFalsePositiveHasBeenSet = true;
    m_findingsInvestigatedFalsePositive = value;
  }
  inline GetFindingMetricsResult& WithFindingsInvestigatedFalsePositive(long long value) {
    SetFindingsInvestigatedFalsePositive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings escalated during the requested date range.</p>
   */
  inline long long GetFindingsEscalated() const { return m_findingsEscalated; }
  inline void SetFindingsEscalated(long long value) {
    m_findingsEscalatedHasBeenSet = true;
    m_findingsEscalated = value;
  }
  inline GetFindingMetricsResult& WithFindingsEscalated(long long value) {
    SetFindingsEscalated(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of escalated findings that were closed as false positives during
   * the requested date range.</p>
   */
  inline long long GetFindingsEscalatedFalsePositive() const { return m_findingsEscalatedFalsePositive; }
  inline void SetFindingsEscalatedFalsePositive(long long value) {
    m_findingsEscalatedFalsePositiveHasBeenSet = true;
    m_findingsEscalatedFalsePositive = value;
  }
  inline GetFindingMetricsResult& WithFindingsEscalatedFalsePositive(long long value) {
    SetFindingsEscalatedFalsePositive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings confirmed as true positives during the requested date
   * range.</p>
   */
  inline long long GetFindingsTruePositive() const { return m_findingsTruePositive; }
  inline void SetFindingsTruePositive(long long value) {
    m_findingsTruePositiveHasBeenSet = true;
    m_findingsTruePositive = value;
  }
  inline GetFindingMetricsResult& WithFindingsTruePositive(long long value) {
    SetFindingsTruePositive(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings whose investigation was in progress during the
   * requested date range.</p>
   */
  inline long long GetFindingsInvestigatedInProgress() const { return m_findingsInvestigatedInProgress; }
  inline void SetFindingsInvestigatedInProgress(long long value) {
    m_findingsInvestigatedInProgressHasBeenSet = true;
    m_findingsInvestigatedInProgress = value;
  }
  inline GetFindingMetricsResult& WithFindingsInvestigatedInProgress(long long value) {
    SetFindingsInvestigatedInProgress(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of findings whose escalation was in progress during the requested
   * date range.</p>
   */
  inline long long GetFindingsEscalatedInProgress() const { return m_findingsEscalatedInProgress; }
  inline void SetFindingsEscalatedInProgress(long long value) {
    m_findingsEscalatedInProgressHasBeenSet = true;
    m_findingsEscalatedInProgress = value;
  }
  inline GetFindingMetricsResult& WithFindingsEscalatedInProgress(long long value) {
    SetFindingsEscalatedInProgress(value);
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
  GetFindingMetricsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  long long m_findingsIngestedSecurityHub{0};

  long long m_findingsIngestedGuardDuty{0};

  long long m_findingsTriaged{0};

  long long m_findingsTriagedFalsePositive{0};

  long long m_findingsInvestigated{0};

  long long m_findingsInvestigatedFalsePositive{0};

  long long m_findingsEscalated{0};

  long long m_findingsEscalatedFalsePositive{0};

  long long m_findingsTruePositive{0};

  long long m_findingsInvestigatedInProgress{0};

  long long m_findingsEscalatedInProgress{0};

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_findingsIngestedSecurityHubHasBeenSet = false;
  bool m_findingsIngestedGuardDutyHasBeenSet = false;
  bool m_findingsTriagedHasBeenSet = false;
  bool m_findingsTriagedFalsePositiveHasBeenSet = false;
  bool m_findingsInvestigatedHasBeenSet = false;
  bool m_findingsInvestigatedFalsePositiveHasBeenSet = false;
  bool m_findingsEscalatedHasBeenSet = false;
  bool m_findingsEscalatedFalsePositiveHasBeenSet = false;
  bool m_findingsTruePositiveHasBeenSet = false;
  bool m_findingsInvestigatedInProgressHasBeenSet = false;
  bool m_findingsEscalatedInProgressHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SecurityIR
}  // namespace Aws
