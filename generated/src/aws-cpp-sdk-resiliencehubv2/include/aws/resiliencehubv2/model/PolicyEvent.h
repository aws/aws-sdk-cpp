/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>
#include <aws/resiliencehubv2/model/EventActor.h>
#include <aws/resiliencehubv2/model/PolicyEventDetails.h>
#include <aws/resiliencehubv2/model/PolicyEventType.h>

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
 * <p>An event on the timeline of a resilience policy.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/PolicyEvent">AWS
 * API Reference</a></p>
 */
class PolicyEvent {
 public:
  AWS_RESILIENCEHUBV2_API PolicyEvent() = default;
  AWS_RESILIENCEHUBV2_API PolicyEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API PolicyEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The identifier of the event.</p>
   */
  inline const Aws::String& GetEventId() const { return m_eventId; }
  inline bool EventIdHasBeenSet() const { return m_eventIdHasBeenSet; }
  template <typename EventIdT = Aws::String>
  void SetEventId(EventIdT&& value) {
    m_eventIdHasBeenSet = true;
    m_eventId = std::forward<EventIdT>(value);
  }
  template <typename EventIdT = Aws::String>
  PolicyEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The time the event occurred.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  PolicyEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the event.</p>
   */
  inline PolicyEventType GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  inline void SetEventType(PolicyEventType value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = value;
  }
  inline PolicyEvent& WithEventType(PolicyEventType value) {
    SetEventType(value);
    return *this;
  }
  ///@}

  ///@{

  inline const Aws::String& GetPolicyArn() const { return m_policyArn; }
  inline bool PolicyArnHasBeenSet() const { return m_policyArnHasBeenSet; }
  template <typename PolicyArnT = Aws::String>
  void SetPolicyArn(PolicyArnT&& value) {
    m_policyArnHasBeenSet = true;
    m_policyArn = std::forward<PolicyArnT>(value);
  }
  template <typename PolicyArnT = Aws::String>
  PolicyEvent& WithPolicyArn(PolicyArnT&& value) {
    SetPolicyArn(std::forward<PolicyArnT>(value));
    return *this;
  }
  ///@}

  ///@{

  inline const EventActor& GetActor() const { return m_actor; }
  inline bool ActorHasBeenSet() const { return m_actorHasBeenSet; }
  template <typename ActorT = EventActor>
  void SetActor(ActorT&& value) {
    m_actorHasBeenSet = true;
    m_actor = std::forward<ActorT>(value);
  }
  template <typename ActorT = EventActor>
  PolicyEvent& WithActor(ActorT&& value) {
    SetActor(std::forward<ActorT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The details of the event.</p>
   */
  inline const PolicyEventDetails& GetEventDetails() const { return m_eventDetails; }
  inline bool EventDetailsHasBeenSet() const { return m_eventDetailsHasBeenSet; }
  template <typename EventDetailsT = PolicyEventDetails>
  void SetEventDetails(EventDetailsT&& value) {
    m_eventDetailsHasBeenSet = true;
    m_eventDetails = std::forward<EventDetailsT>(value);
  }
  template <typename EventDetailsT = PolicyEventDetails>
  PolicyEvent& WithEventDetails(EventDetailsT&& value) {
    SetEventDetails(std::forward<EventDetailsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::Utils::DateTime m_timestamp{};

  PolicyEventType m_eventType{PolicyEventType::NOT_SET};

  Aws::String m_policyArn;

  EventActor m_actor;

  PolicyEventDetails m_eventDetails;
  bool m_eventIdHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_policyArnHasBeenSet = false;
  bool m_actorHasBeenSet = false;
  bool m_eventDetailsHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
