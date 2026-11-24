/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wafv2/WAFV2_EXPORTS.h>
#include <aws/wafv2/model/EventActorSummary.h>

#include <utility>

namespace Aws {
template <typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils {
namespace Json {
class JsonValue;
}  // namespace Json
}  // namespace Utils
namespace WAFV2 {
namespace Model {
class ListEventActorsResult {
 public:
  AWS_WAFV2_API ListEventActorsResult() = default;
  AWS_WAFV2_API ListEventActorsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_WAFV2_API ListEventActorsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The list of event actor summaries.</p>
   */
  inline const Aws::Vector<EventActorSummary>& GetEventActors() const { return m_eventActors; }
  template <typename EventActorsT = Aws::Vector<EventActorSummary>>
  void SetEventActors(EventActorsT&& value) {
    m_eventActorsHasBeenSet = true;
    m_eventActors = std::forward<EventActorsT>(value);
  }
  template <typename EventActorsT = Aws::Vector<EventActorSummary>>
  ListEventActorsResult& WithEventActors(EventActorsT&& value) {
    SetEventActors(std::forward<EventActorsT>(value));
    return *this;
  }
  template <typename EventActorsT = EventActorSummary>
  ListEventActorsResult& AddEventActors(EventActorsT&& value) {
    m_eventActorsHasBeenSet = true;
    m_eventActors.emplace_back(std::forward<EventActorsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When you request a list of objects with a <code>Limit</code> setting, if the
   * number of objects that are still available for retrieval exceeds the limit, WAF
   * returns a <code>NextMarker</code> value in the response. To retrieve the next
   * batch of objects, provide the marker from the prior call in your next
   * request.</p>
   */
  inline const Aws::String& GetNextMarker() const { return m_nextMarker; }
  template <typename NextMarkerT = Aws::String>
  void SetNextMarker(NextMarkerT&& value) {
    m_nextMarkerHasBeenSet = true;
    m_nextMarker = std::forward<NextMarkerT>(value);
  }
  template <typename NextMarkerT = Aws::String>
  ListEventActorsResult& WithNextMarker(NextMarkerT&& value) {
    SetNextMarker(std::forward<NextMarkerT>(value));
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
  ListEventActorsResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<EventActorSummary> m_eventActors;

  Aws::String m_nextMarker;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_eventActorsHasBeenSet = false;
  bool m_nextMarkerHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace WAFV2
}  // namespace Aws
