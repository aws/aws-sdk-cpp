/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/partnercentral-selling/PartnerCentralSelling_EXPORTS.h>
#include <aws/partnercentral-selling/model/BulkReportStatus.h>
#include <aws/partnercentral-selling/model/BulkReportType.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace PartnerCentralSelling {
namespace Model {
/**
 * <p>Information about get customer account bulk job report url
 * response.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/partnercentral-selling-2022-07-26/GetCustomerAccountBulkJobReportUrlResponse">AWS
 * API Reference</a></p>
 */
class GetCustomerAccountBulkJobReportUrlResult {
 public:
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountBulkJobReportUrlResult() = default;
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountBulkJobReportUrlResult(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_PARTNERCENTRALSELLING_API GetCustomerAccountBulkJobReportUrlResult& operator=(
      const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The status of the report. The <code>Url</code> is returned only when the
   * status is <code>AVAILABLE</code>.</p>
   */
  inline BulkReportStatus GetReportStatus() const { return m_reportStatus; }
  inline void SetReportStatus(BulkReportStatus value) {
    m_reportStatusHasBeenSet = true;
    m_reportStatus = value;
  }
  inline GetCustomerAccountBulkJobReportUrlResult& WithReportStatus(BulkReportStatus value) {
    SetReportStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The records that the report covers.</p>
   */
  inline BulkReportType GetReportType() const { return m_reportType; }
  inline void SetReportType(BulkReportType value) {
    m_reportTypeHasBeenSet = true;
    m_reportType = value;
  }
  inline GetCustomerAccountBulkJobReportUrlResult& WithReportType(BulkReportType value) {
    SetReportType(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A temporary URL for downloading the report. Present only when
   * <code>ReportStatus</code> is <code>AVAILABLE</code>.</p>
   */
  inline const Aws::String& GetUrl() const { return m_url; }
  template <typename UrlT = Aws::String>
  void SetUrl(UrlT&& value) {
    m_urlHasBeenSet = true;
    m_url = std::forward<UrlT>(value);
  }
  template <typename UrlT = Aws::String>
  GetCustomerAccountBulkJobReportUrlResult& WithUrl(UrlT&& value) {
    SetUrl(std::forward<UrlT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time when the URL expires. Present only when
   * <code>ReportStatus</code> is <code>AVAILABLE</code>.</p>
   */
  inline const Aws::Utils::DateTime& GetExpiresAt() const { return m_expiresAt; }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  void SetExpiresAt(ExpiresAtT&& value) {
    m_expiresAtHasBeenSet = true;
    m_expiresAt = std::forward<ExpiresAtT>(value);
  }
  template <typename ExpiresAtT = Aws::Utils::DateTime>
  GetCustomerAccountBulkJobReportUrlResult& WithExpiresAt(ExpiresAtT&& value) {
    SetExpiresAt(std::forward<ExpiresAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The reason that the report couldn't be generated. Present only when
   * <code>ReportStatus</code> is <code>FAILED</code>.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  GetCustomerAccountBulkJobReportUrlResult& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
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
  GetCustomerAccountBulkJobReportUrlResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  BulkReportStatus m_reportStatus{BulkReportStatus::NOT_SET};

  BulkReportType m_reportType{BulkReportType::NOT_SET};

  Aws::String m_url;

  Aws::Utils::DateTime m_expiresAt{};

  Aws::String m_failureReason;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportStatusHasBeenSet = false;
  bool m_reportTypeHasBeenSet = false;
  bool m_urlHasBeenSet = false;
  bool m_expiresAtHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace PartnerCentralSelling
}  // namespace Aws
