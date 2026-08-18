/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/marketplace-catalog/MarketplaceCatalog_EXPORTS.h>
#include <aws/marketplace-catalog/model/AssessmentSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace MarketplaceCatalog {
namespace Model {
class ListAssessmentsResult {
 public:
  AWS_MARKETPLACECATALOG_API ListAssessmentsResult() = default;
  AWS_MARKETPLACECATALOG_API ListAssessmentsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_MARKETPLACECATALOG_API ListAssessmentsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>An array of <code>AssessmentSummary</code> objects.</p>
   */
  inline const Aws::Vector<AssessmentSummary>& GetAssessmentSummaryList() const { return m_assessmentSummaryList; }
  template <typename AssessmentSummaryListT = Aws::Vector<AssessmentSummary>>
  void SetAssessmentSummaryList(AssessmentSummaryListT&& value) {
    m_assessmentSummaryListHasBeenSet = true;
    m_assessmentSummaryList = std::forward<AssessmentSummaryListT>(value);
  }
  template <typename AssessmentSummaryListT = Aws::Vector<AssessmentSummary>>
  ListAssessmentsResult& WithAssessmentSummaryList(AssessmentSummaryListT&& value) {
    SetAssessmentSummaryList(std::forward<AssessmentSummaryListT>(value));
    return *this;
  }
  template <typename AssessmentSummaryListT = AssessmentSummary>
  ListAssessmentsResult& AddAssessmentSummaryList(AssessmentSummaryListT&& value) {
    m_assessmentSummaryListHasBeenSet = true;
    m_assessmentSummaryList.emplace_back(std::forward<AssessmentSummaryListT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value of the next token, if it exists. <code>null</code> if there are no
   * more results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  ListAssessmentsResult& WithNextToken(NextTokenT&& value) {
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
  ListAssessmentsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<AssessmentSummary> m_assessmentSummaryList;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_assessmentSummaryListHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace MarketplaceCatalog
}  // namespace Aws
