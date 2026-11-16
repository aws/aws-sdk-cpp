/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearchmemory/OpenSearchMemory_EXPORTS.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace OpenSearchMemory {
namespace Model {

/**
 * <p>The stored event's identifiers. Call <code>GetEvent</code> for the
 * payload.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/opensearchmemory-2026-08-24/EventDetail">AWS
 * API Reference</a></p>
 */
class EventDetail {
 public:
  AWS_OPENSEARCHMEMORY_API EventDetail() = default;
  AWS_OPENSEARCHMEMORY_API EventDetail(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API EventDetail& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_OPENSEARCHMEMORY_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The event's ID, assigned by the service. Use it with <code>GetEvent</code>
   * and <code>DeleteEvent</code>.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  EventDetail& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the space.</p>
   */
  inline const Aws::String& GetSpaceId() const { return m_spaceId; }
  inline bool SpaceIdHasBeenSet() const { return m_spaceIdHasBeenSet; }
  template <typename SpaceIdT = Aws::String>
  void SetSpaceId(SpaceIdT&& value) {
    m_spaceIdHasBeenSet = true;
    m_spaceId = std::forward<SpaceIdT>(value);
  }
  template <typename SpaceIdT = Aws::String>
  EventDetail& WithSpaceId(SpaceIdT&& value) {
    SetSpaceId(std::forward<SpaceIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the actor the event belongs to.</p>
   */
  inline const Aws::String& GetActorId() const { return m_actorId; }
  inline bool ActorIdHasBeenSet() const { return m_actorIdHasBeenSet; }
  template <typename ActorIdT = Aws::String>
  void SetActorId(ActorIdT&& value) {
    m_actorIdHasBeenSet = true;
    m_actorId = std::forward<ActorIdT>(value);
  }
  template <typename ActorIdT = Aws::String>
  EventDetail& WithActorId(ActorIdT&& value) {
    SetActorId(std::forward<ActorIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ID of the session the event belongs to, including one the service
   * generated.</p>
   */
  inline const Aws::String& GetSessionId() const { return m_sessionId; }
  inline bool SessionIdHasBeenSet() const { return m_sessionIdHasBeenSet; }
  template <typename SessionIdT = Aws::String>
  void SetSessionId(SessionIdT&& value) {
    m_sessionIdHasBeenSet = true;
    m_sessionId = std::forward<SessionIdT>(value);
  }
  template <typename SessionIdT = Aws::String>
  EventDetail& WithSessionId(SessionIdT&& value) {
    SetSessionId(std::forward<SessionIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>When the event occurred: the value supplied, or the time the request was
   * received.</p>
   */
  inline const Aws::Utils::DateTime& GetEventTimestamp() const { return m_eventTimestamp; }
  inline bool EventTimestampHasBeenSet() const { return m_eventTimestampHasBeenSet; }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  void SetEventTimestamp(EventTimestampT&& value) {
    m_eventTimestampHasBeenSet = true;
    m_eventTimestamp = std::forward<EventTimestampT>(value);
  }
  template <typename EventTimestampT = Aws::Utils::DateTime>
  EventDetail& WithEventTimestamp(EventTimestampT&& value) {
    SetEventTimestamp(std::forward<EventTimestampT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::String m_spaceId;

  Aws::String m_actorId;

  Aws::String m_sessionId;

  Aws::Utils::DateTime m_eventTimestamp{};
  bool m_eventIdHasBeenSet = false;
  bool m_spaceIdHasBeenSet = false;
  bool m_actorIdHasBeenSet = false;
  bool m_sessionIdHasBeenSet = false;
  bool m_eventTimestampHasBeenSet = false;
};

}  // namespace Model
}  // namespace OpenSearchMemory
}  // namespace Aws
