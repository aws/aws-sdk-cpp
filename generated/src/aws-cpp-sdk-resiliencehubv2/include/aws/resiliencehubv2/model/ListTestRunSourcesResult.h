/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestRunSourceSummary.h>

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
class ListTestRunSourcesResult {
 public:
  AWS_RESILIENCEHUBV2_API ListTestRunSourcesResult() = default;
  AWS_RESILIENCEHUBV2_API ListTestRunSourcesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListTestRunSourcesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of monitoring source snapshots.</p>
   */
  inline const Aws::Vector<TestRunSourceSummary>& GetTestRunSources() const { return m_testRunSources; }
  template <typename TestRunSourcesT = Aws::Vector<TestRunSourceSummary>>
  void SetTestRunSources(TestRunSourcesT&& value) {
    m_testRunSourcesHasBeenSet = true;
    m_testRunSources = std::forward<TestRunSourcesT>(value);
  }
  template <typename TestRunSourcesT = Aws::Vector<TestRunSourceSummary>>
  ListTestRunSourcesResult& WithTestRunSources(TestRunSourcesT&& value) {
    SetTestRunSources(std::forward<TestRunSourcesT>(value));
    return *this;
  }
  template <typename TestRunSourcesT = TestRunSourceSummary>
  ListTestRunSourcesResult& AddTestRunSources(TestRunSourcesT&& value) {
    m_testRunSourcesHasBeenSet = true;
    m_testRunSources.emplace_back(std::forward<TestRunSourcesT>(value));
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
  ListTestRunSourcesResult& WithNextToken(NextTokenT&& value) {
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
  ListTestRunSourcesResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TestRunSourceSummary> m_testRunSources;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_testRunSourcesHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
