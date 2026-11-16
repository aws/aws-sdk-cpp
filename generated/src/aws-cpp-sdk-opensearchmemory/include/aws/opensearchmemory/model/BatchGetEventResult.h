/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/http/HttpResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>
#include <aws/opensearchmemory/model/BatchGetEventError.h>
#include <aws/opensearchmemory/model/Event.h>

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
class BatchGetEventResult {
 public:
  AWS_OPENSEARCHMEMORY_API BatchGetEventResult() = default;
  AWS_OPENSEARCHMEMORY_API BatchGetEventResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
  AWS_OPENSEARCHMEMORY_API BatchGetEventResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);

  ///@{
  /**
   * <p>The events found, in the order that you requested their IDs.</p>
   */
  inline const Aws::Vector<Event>& GetEvents() const { return m_events; }
  template <typename EventsT = Aws::Vector<Event>>
  void SetEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events = std::forward<EventsT>(value);
  }
  template <typename EventsT = Aws::Vector<Event>>
  BatchGetEventResult& WithEvents(EventsT&& value) {
    SetEvents(std::forward<EventsT>(value));
    return *this;
  }
  template <typename EventsT = Event>
  BatchGetEventResult& AddEvents(EventsT&& value) {
    m_eventsHasBeenSet = true;
    m_events.emplace_back(std::forward<EventsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An entry for each requested event that the call didn't return. Empty when the
   * call returned every event.</p>
   */
  inline const Aws::Vector<BatchGetEventError>& GetErrors() const { return m_errors; }
  template <typename ErrorsT = Aws::Vector<BatchGetEventError>>
  void SetErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors = std::forward<ErrorsT>(value);
  }
  template <typename ErrorsT = Aws::Vector<BatchGetEventError>>
  BatchGetEventResult& WithErrors(ErrorsT&& value) {
    SetErrors(std::forward<ErrorsT>(value));
    return *this;
  }
  template <typename ErrorsT = BatchGetEventError>
  BatchGetEventResult& AddErrors(ErrorsT&& value) {
    m_errorsHasBeenSet = true;
    m_errors.emplace_back(std::forward<ErrorsT>(value));
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
  BatchGetEventResult& WithRequestId(RequestIdT&& value) {
    SetRequestId(std::forward<RequestIdT>(value));
    return *this;
  }
  ///@}
  inline Aws::Http::HttpResponseCode GetHttpResponseCode() const { return m_HttpResponseCode; }

 private:
  Aws::Vector<Event> m_events;

  Aws::Vector<BatchGetEventError> m_errors;

  Aws::String m_requestId;
  Aws::Http::HttpResponseCode m_HttpResponseCode;
  bool m_eventsHasBeenSet = false;
  bool m_errorsHasBeenSet = false;
  bool m_requestIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
