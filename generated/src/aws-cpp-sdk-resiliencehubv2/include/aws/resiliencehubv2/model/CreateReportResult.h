/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/ReportGenerationResult.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {
class CreateReportResult {
 public:
  AWS_RESILIENCEHUBV2_API CreateReportResult() = default;
  AWS_RESILIENCEHUBV2_API CreateReportResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API CreateReportResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The result of the report generation request.</p>
   */
  inline const ReportGenerationResult& GetReportGenerationResult() const { return m_reportGenerationResult; }
  template <typename ReportGenerationResultT = ReportGenerationResult>
  void SetReportGenerationResult(ReportGenerationResultT&& value) {
    m_reportGenerationResultHasBeenSet = true;
    m_reportGenerationResult = std::forward<ReportGenerationResultT>(value);
  }
  template <typename ReportGenerationResultT = ReportGenerationResult>
  CreateReportResult& WithReportGenerationResult(ReportGenerationResultT&& value) {
    SetReportGenerationResult(std::forward<ReportGenerationResultT>(value));
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
  CreateReportResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  ReportGenerationResult m_reportGenerationResult;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportGenerationResultHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
