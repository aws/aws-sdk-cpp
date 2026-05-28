/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/FindingSummary.h>

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
class ListFailureModeFindingsResult {
 public:
  AWS_RESILIENCEHUBV2_API ListFailureModeFindingsResult() = default;
  AWS_RESILIENCEHUBV2_API ListFailureModeFindingsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListFailureModeFindingsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of finding summaries.</p>
   */
  inline const Aws::Vector<FindingSummary>& GetFindingsSummary() const { return m_findingsSummary; }
  template <typename FindingsSummaryT = Aws::Vector<FindingSummary>>
  void SetFindingsSummary(FindingsSummaryT&& value) {
    m_findingsSummaryHasBeenSet = true;
    m_findingsSummary = std::forward<FindingsSummaryT>(value);
  }
  template <typename FindingsSummaryT = Aws::Vector<FindingSummary>>
  ListFailureModeFindingsResult& WithFindingsSummary(FindingsSummaryT&& value) {
    SetFindingsSummary(std::forward<FindingsSummaryT>(value));
    return *this;
  }
  template <typename FindingsSummaryT = FindingSummary>
  ListFailureModeFindingsResult& AddFindingsSummary(FindingsSummaryT&& value) {
    m_findingsSummaryHasBeenSet = true;
    m_findingsSummary.emplace_back(std::forward<FindingsSummaryT>(value));
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
  ListFailureModeFindingsResult& WithNextToken(NextTokenT&& value) {
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
  ListFailureModeFindingsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<FindingSummary> m_findingsSummary;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_findingsSummaryHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
