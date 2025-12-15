/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
#include <aws/service-quotas/model/QuotaUtilizationInfo.h>
#include <aws/service-quotas/model/ReportStatus.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace ServiceQuotas {
namespace Model {
class GetQuotaUtilizationReportResult {
 public:
  AWS_SERVICEQUOTAS_API GetQuotaUtilizationReportResult() = default;
  AWS_SERVICEQUOTAS_API GetQuotaUtilizationReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SERVICEQUOTAS_API GetQuotaUtilizationReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The unique identifier for the quota utilization report.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  GetQuotaUtilizationReportResult& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the report generation. Possible values are:</p> <ul>
   * <li> <p> <code>PENDING</code> - The report generation is in progress. Retry this
   * operation after a few seconds.</p> </li> <li> <p> <code>IN_PROGRESS</code> - The
   * report is being processed. Continue polling until the status changes to
   * <code>COMPLETED</code>.</p> </li> <li> <p> <code>COMPLETED</code> - The report
   * is ready and quota utilization data is available in the response.</p> </li> <li>
   * <p> <code>FAILED</code> - The report generation failed. Check the
   * <code>ErrorCode</code> and <code>ErrorMessage</code> fields for details.</p>
   * </li> </ul>
   */
  inline ReportStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline GetQuotaUtilizationReportResult& WithStatus(ReportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the report was generated, in ISO 8601 format.</p>
   */
  inline const Aws::Utils::DateTime& GetGeneratedAt() const { return m_generatedAt; }
  template <typename GeneratedAtT = Aws::Utils::DateTime>
  void SetGeneratedAt(GeneratedAtT&& value) {
    m_generatedAtHasBeenSet = true;
    m_generatedAt = std::forward<GeneratedAtT>(value);
  }
  template <typename GeneratedAtT = Aws::Utils::DateTime>
  GetQuotaUtilizationReportResult& WithGeneratedAt(GeneratedAtT&& value) {
    SetGeneratedAt(std::forward<GeneratedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The total number of quotas included in the report across all pages.</p>
   */
  inline int GetTotalCount() const { return m_totalCount; }
  inline void SetTotalCount(int value) {
    m_totalCountHasBeenSet = true;
    m_totalCount = value;
  }
  inline GetQuotaUtilizationReportResult& WithTotalCount(int value) {
    SetTotalCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of quota utilization records, sorted by utilization percentage in
   * descending order. Each record includes the quota code, service code, service
   * name, quota name, namespace, utilization percentage, default value, applied
   * value, and whether the quota is adjustable. Up to 1,000 records are returned per
   * page.</p>
   */
  inline const Aws::Vector<QuotaUtilizationInfo>& GetQuotas() const { return m_quotas; }
  template <typename QuotasT = Aws::Vector<QuotaUtilizationInfo>>
  void SetQuotas(QuotasT&& value) {
    m_quotasHasBeenSet = true;
    m_quotas = std::forward<QuotasT>(value);
  }
  template <typename QuotasT = Aws::Vector<QuotaUtilizationInfo>>
  GetQuotaUtilizationReportResult& WithQuotas(QuotasT&& value) {
    SetQuotas(std::forward<QuotasT>(value));
    return *this;
  }
  template <typename QuotasT = QuotaUtilizationInfo>
  GetQuotaUtilizationReportResult& AddQuotas(QuotasT&& value) {
    m_quotasHasBeenSet = true;
    m_quotas.emplace_back(std::forward<QuotasT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A token that indicates more results are available. Include this token in the
   * next request to retrieve the next page of results. If this field is not present,
   * you have retrieved all available results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  GetQuotaUtilizationReportResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An error code indicating the reason for failure when the report status is
   * <code>FAILED</code>. This field is only present when the status is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetErrorCode() const { return m_errorCode; }
  template <typename ErrorCodeT = Aws::String>
  void SetErrorCode(ErrorCodeT&& value) {
    m_errorCodeHasBeenSet = true;
    m_errorCode = std::forward<ErrorCodeT>(value);
  }
  template <typename ErrorCodeT = Aws::String>
  GetQuotaUtilizationReportResult& WithErrorCode(ErrorCodeT&& value) {
    SetErrorCode(std::forward<ErrorCodeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A detailed error message describing the failure when the report status is
   * <code>FAILED</code>. This field is only present when the status is
   * <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetErrorMessage() const { return m_errorMessage; }
  template <typename ErrorMessageT = Aws::String>
  void SetErrorMessage(ErrorMessageT&& value) {
    m_errorMessageHasBeenSet = true;
    m_errorMessage = std::forward<ErrorMessageT>(value);
  }
  template <typename ErrorMessageT = Aws::String>
  GetQuotaUtilizationReportResult& WithErrorMessage(ErrorMessageT&& value) {
    SetErrorMessage(std::forward<ErrorMessageT>(value));
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
  GetQuotaUtilizationReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;

  ReportStatus m_status{ReportStatus::NOT_SET};

  Aws::Utils::DateTime m_generatedAt{};

  int m_totalCount{0};

  Aws::Vector<QuotaUtilizationInfo> m_quotas;

  Aws::String m_nextToken;

  Aws::String m_errorCode;

  Aws::String m_errorMessage;

  Aws::String m_requestId;
  bool m_reportIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_generatedAtHasBeenSet = false;
  bool m_totalCountHasBeenSet = false;
  bool m_quotasHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_errorCodeHasBeenSet = false;
  bool m_errorMessageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
