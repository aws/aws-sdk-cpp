/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/EventSearchSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {
class SearchEventsResult {
 public:
  AWS_OPENSEARCHMEMORY_API SearchEventsResult() = default;
  AWS_OPENSEARCHMEMORY_API SearchEventsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API SearchEventsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The matching event chunks, in the order <code>sort</code> requests, or most
   * relevant first when it has none. Empty when nothing matches. Each result is the
   * matching chunk of an event. Call <code>GetEvent</code> for the whole event.</p>
   */
  inline const Aws::Vector<EventSearchSummary>& GetEvents() const { return m_events; }
  template <typename EventsT = Aws::Vector<EventSearchSummary>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<EventSearchSummary>>
  SearchEventsResult& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  template <typename EventsT = EventSearchSummary>
  SearchEventsResult& AddEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events.emplace_back(std::forward<EventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The token for the next set of results. Absent when there are no more
   * results.</p>
   */
  inline const Aws::String& GetNextToken() const { return m_nextToken; }
  template <typename NextTokenT = Aws::String>
  void SetNextToken(NextTokenT&& value) {
    m_nextTokenHasBeenSet = true;
    m_nextToken = std::forward<NextTokenT>(value);
  }
  template <typename NextTokenT = Aws::String>
  SearchEventsResult& WithNextToken(NextTokenT&& value) {
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
  SearchEventsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EventSearchSummary> m_events;

  Aws::String m_nextToken;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_eventsHasBeenSet = false;
  bool m_nextTokenHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
