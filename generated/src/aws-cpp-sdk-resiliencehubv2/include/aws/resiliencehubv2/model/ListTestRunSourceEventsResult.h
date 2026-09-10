/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/TestRunSourceEvent.h>

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
class ListTestRunSourceEventsResult {
 public:
  AWS_RESILIENCEHUBV2_API ListTestRunSourceEventsResult() = default;
  AWS_RESILIENCEHUBV2_API ListTestRunSourceEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_RESILIENCEHUBV2_API ListTestRunSourceEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of source events, in chronological order.</p>
   */
  inline const Aws::Vector<TestRunSourceEvent>& GetTestRunSourceEvents() const { return m_testRunSourceEvents; }
  template <typename TestRunSourceEventsT = Aws::Vector<TestRunSourceEvent>>
  void SetTestRunSourceEvents(TestRunSourceEventsT&& value) {
    m_testRunSourceEventsHasBeenSet = true;
    m_testRunSourceEvents = std::forward<TestRunSourceEventsT>(value);
  }
  template <typename TestRunSourceEventsT = Aws::Vector<TestRunSourceEvent>>
  ListTestRunSourceEventsResult& WithTestRunSourceEvents(TestRunSourceEventsT&& value) {
    SetTestRunSourceEvents(std::forward<TestRunSourceEventsT>(value));
    return *this;
  }
  template <typename TestRunSourceEventsT = TestRunSourceEvent>
  ListTestRunSourceEventsResult& AddTestRunSourceEvents(TestRunSourceEventsT&& value) {
    m_testRunSourceEventsHasBeenSet = true;
    m_testRunSourceEvents.emplace_back(std::forward<TestRunSourceEventsT>(value));
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
  ListTestRunSourceEventsResult& WithNextToken(NextTokenT&& value) {
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
  ListTestRunSourceEventsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<TestRunSourceEvent> m_testRunSourceEvents;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_testRunSourceEventsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
