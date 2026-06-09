/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EventActor.h>
#include <aws/resiliencehubv2/model/SystemEventDetails.h>
#include <aws/resiliencehubv2/model/SystemEventType.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace resiliencehubv2 {
namespace Model {

/**
 * <p>Represents an event in the system event log.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/SystemEvent">AWS
 * API Reference</a></p>
 */
class SystemEvent {
 public:
  AWS_RESILIENCEHUBV2_API SystemEvent() = default;
  AWS_RESILIENCEHUBV2_API SystemEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API SystemEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  SystemEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp of the event.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  SystemEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the event.</p>
   */
  inline SystemEventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(SystemEventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline SystemEvent& WithEventType(SystemEventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetSystemArn() const { return m_systemArn; }
  inline bool SystemArnHasBeenSet() const { return m_systemArnHasBeenSet; }
  template <typename SystemArnT = Aws::String>
  void SetSystemArn(SystemArnT&& value) {
    m_systemArnHasBeenSet = true;
    m_systemArn = std::forward<SystemArnT>(value);
  }
  template <typename SystemArnT = Aws::String>
  SystemEvent& WithSystemArn(SystemArnT&& value) {
    SetSystemArn(std::forward<SystemArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The actor that triggered the event.</p>
   */
  inline const EventActor& GetActor() const { return m_actor; }
  inline bool ActorHasBeenSet() const { return m_actorHasBeenSet; }
  template <typename ActorT = EventActor>
  void SetActor(ActorT&& value) {
    m_actorHasBeenSet = true;
    m_actor = std::forward<ActorT>(value);
  }
  template <typename ActorT = EventActor>
  SystemEvent& WithActor(ActorT&& value) {
    SetActor(std::forward<ActorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the event.</p>
   */
  inline const SystemEventDetails& GetEventDetails() const { return m_eventDetails; }
  inline bool EventDetailsHasBeenSet() const { return m_eventDetailsHasBeenSet; }
  template <typename EventDetailsT = SystemEventDetails>
  void SetEventDetails(EventDetailsT&& value) {
    m_eventDetailsHasBeenSet = true;
    m_eventDetails = std::forward<EventDetailsT>(value);
  }
  template <typename EventDetailsT = SystemEventDetails>
  SystemEvent& WithEventDetails(EventDetailsT&& value) {
    SetEventDetails(std::forward<EventDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::Utils::DateTime m_timestamp{};

  SystemEventType m_eventType{SystemEventType::NOT_SET};

  Aws::String m_systemArn;

  EventActor m_actor;

  SystemEventDetails m_eventDetails;
  bool m_eventIdHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_systemArnHasBeenSet = false;
  bool m_actorHasBeenSet = false;
  bool m_eventDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
