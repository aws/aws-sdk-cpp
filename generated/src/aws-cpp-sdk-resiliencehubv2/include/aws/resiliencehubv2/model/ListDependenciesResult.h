/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/DependencySummary.h>

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
class ListDependenciesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListDependenciesResult() = default;
  AWS_RESILIENCEHUBV2_API ListDependenciesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListDependenciesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of dependency summaries.</p>
   */
  inline const Aws::Vector<DependencySummary>& GetDependencySummaries() const { return m_dependencySummaries; }
  template <typename DependencySummariesT = Aws::Vector<DependencySummary>>
  void SetDependencySummaries(DependencySummariesT&& value) {
    m_dependencySummariesHasBeenSet = true;
    m_dependencySummaries = std::forward<DependencySummariesT>(value);
  }
  template <typename DependencySummariesT = Aws::Vector<DependencySummary>>
  ListDependenciesResult& WithDependencySummaries(DependencySummariesT&& value) {
    SetDependencySummaries(std::forward<DependencySummariesT>(value));
    return *this;
  }
  template <typename DependencySummariesT = DependencySummary>
  ListDependenciesResult& AddDependencySummaries(DependencySummariesT&& value) {
    m_dependencySummariesHasBeenSet = true;
    m_dependencySummaries.emplace_back(std::forward<DependencySummariesT>(value));
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
  ListDependenciesResult& WithNextToken(NextTokenT&& value) {
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
  ListDependenciesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<DependencySummary> m_dependencySummaries;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_dependencySummariesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
