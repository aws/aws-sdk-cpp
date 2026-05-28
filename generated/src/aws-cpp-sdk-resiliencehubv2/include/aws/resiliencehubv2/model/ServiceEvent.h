/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EventActor.h>
#include <aws/resiliencehubv2/model/ServiceEventDetails.h>
#include <aws/resiliencehubv2/model/ServiceEventType.h>

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
 * <p>Represents an event in the service event log.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/ServiceEvent">AWS
 * API Reference</a></p>
 */
class ServiceEvent {
 public:
  AWS_RESILIENCEHUBV2_API ServiceEvent() = default;
  AWS_RESILIENCEHUBV2_API ServiceEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API ServiceEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  ServiceEvent& WithEventId(EventIdT&& value) {
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
  ServiceEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the event.</p>
   */
  inline ServiceEventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(ServiceEventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline ServiceEvent& WithEventType(ServiceEventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetServiceArn() const { return m_serviceArn; }
  inline bool ServiceArnHasBeenSet() const { return m_serviceArnHasBeenSet; }
  template <typename ServiceArnT = Aws::String>
  void SetServiceArn(ServiceArnT&& value) {
    m_serviceArnHasBeenSet = true;
    m_serviceArn = std::forward<ServiceArnT>(value);
  }
  template <typename ServiceArnT = Aws::String>
  ServiceEvent& WithServiceArn(ServiceArnT&& value) {
    SetServiceArn(std::forward<ServiceArnT>(value));
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
  ServiceEvent& WithActor(ActorT&& value) {
    SetActor(std::forward<ActorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the event.</p>
   */
  inline const ServiceEventDetails& GetEventDetails() const { return m_eventDetails; }
  inline bool EventDetailsHasBeenSet() const { return m_eventDetailsHasBeenSet; }
  template <typename EventDetailsT = ServiceEventDetails>
  void SetEventDetails(EventDetailsT&& value) {
    m_eventDetailsHasBeenSet = true;
    m_eventDetails = std::forward<EventDetailsT>(value);
  }
  template <typename EventDetailsT = ServiceEventDetails>
  ServiceEvent& WithEventDetails(EventDetailsT&& value) {
    SetEventDetails(std::forward<EventDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::Utils::DateTime m_timestamp{};

  ServiceEventType m_eventType{ServiceEventType::NOT_SET};

  Aws::String m_serviceArn;

  EventActor m_actor;

  ServiceEventDetails m_eventDetails;
  bool m_eventIdHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_serviceArnHasBeenSet = false;
  bool m_actorHasBeenSet = false;
  bool m_eventDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
