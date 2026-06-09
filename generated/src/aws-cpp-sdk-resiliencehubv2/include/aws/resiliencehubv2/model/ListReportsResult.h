/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
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
class ListReportsResult {
 public:
  AWS_RESILIENCEHUBV2_API ListReportsResult() = default;
  AWS_RESILIENCEHUBV2_API ListReportsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListReportsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of report generation results.</p>
   */
  inline const Aws::Vector<ReportGenerationResult>& GetReportGenerationResults() const { return m_reportGenerationResults; }
  template <typename ReportGenerationResultsT = Aws::Vector<ReportGenerationResult>>
  void SetReportGenerationResults(ReportGenerationResultsT&& value) {
    m_reportGenerationResultsHasBeenSet = true;
    m_reportGenerationResults = std::forward<ReportGenerationResultsT>(value);
  }
  template <typename ReportGenerationResultsT = Aws::Vector<ReportGenerationResult>>
  ListReportsResult& WithReportGenerationResults(ReportGenerationResultsT&& value) {
    SetReportGenerationResults(std::forward<ReportGenerationResultsT>(value));
    return *this;
  }
  template <typename ReportGenerationResultsT = ReportGenerationResult>
  ListReportsResult& AddReportGenerationResults(ReportGenerationResultsT&& value) {
    m_reportGenerationResultsHasBeenSet = true;
    m_reportGenerationResults.emplace_back(std::forward<ReportGenerationResultsT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListReportsResult& WithNextToken(NextTokenT&& value) {
    SetNextToken(std::forward<NextTokenT>(value));
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
  ListReportsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<ReportGenerationResult> m_reportGenerationResults;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_reportGenerationResultsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
