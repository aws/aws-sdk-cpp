/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/service-quotas/ServiceQuotas_EXPORTS.h>
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
class StartQuotaUtilizationReportResult {
 public:
  AWS_SERVICEQUOTAS_API StartQuotaUtilizationReportResult() = default;
  AWS_SERVICEQUOTAS_API StartQuotaUtilizationReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_SERVICEQUOTAS_API StartQuotaUtilizationReportResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>A unique identifier for the quota utilization report. Use this identifier
   * with the <code>GetQuotaUtilizationReport</code> operation to retrieve the report
   * results.</p>
   */
  inline const Aws::String& GetReportId() const { return m_reportId; }
  template <typename ReportIdT = Aws::String>
  void SetReportId(ReportIdT&& value) {
    m_reportIdHasBeenSet = true;
    m_reportId = std::forward<ReportIdT>(value);
  }
  template <typename ReportIdT = Aws::String>
  StartQuotaUtilizationReportResult& WithReportId(ReportIdT&& value) {
    SetReportId(std::forward<ReportIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the report generation. The status will be
   * <code>PENDING</code> when the report is first initiated.</p>
   */
  inline ReportStatus GetStatus() const { return m_status; }
  inline void SetStatus(ReportStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline StartQuotaUtilizationReportResult& WithStatus(ReportStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional message providing additional information about the report
   * generation status. This field may contain details about the report initiation or
   * indicate if an existing recent report is being reused.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  StartQuotaUtilizationReportResult& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
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
  StartQuotaUtilizationReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_reportId;

  ReportStatus m_status{ReportStatus::NOT_SET};

  Aws::String m_message;

  Aws::String m_requestId;
  bool m_reportIdHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace ServiceQuotas
}  // namespace Aws
