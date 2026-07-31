/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/resiliencehubv2/Resiliencehubv2_EXPORTS.h>

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
 * <p>A single event in a test run's timeline.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/resiliencehubv2-2026-02-17/TestRunEvent">AWS
 * API Reference</a></p>
 */
class TestRunEvent {
 public:
  AWS_RESILIENCEHUBV2_API TestRunEvent() = default;
  AWS_RESILIENCEHUBV2_API TestRunEvent(Aws::Utils::Json::JsonView jsonValue);
  AWS_RESILIENCEHUBV2_API TestRunEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
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
  TestRunEvent& WithEventId(EventIdT&& value) {
    SetEventId(std::forward<EventIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The type of the event, such as action_started, action_completed, or
   * rto_recovery_detected.</p>
   */
  inline const Aws::String& GetEventType() const { return m_eventType; }
  inline bool EventTypeHasBeenSet() const { return m_eventTypeHasBeenSet; }
  template <typename EventTypeT = Aws::String>
  void SetEventType(EventTypeT&& value) {
    m_eventTypeHasBeenSet = true;
    m_eventType = std::forward<EventTypeT>(value);
  }
  template <typename EventTypeT = Aws::String>
  TestRunEvent& WithEventType(EventTypeT&& value) {
    SetEventType(std::forward<EventTypeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A human-readable description of what happened.</p>
   */
  inline const Aws::String& GetMessage() const { return m_message; }
  inline bool MessageHasBeenSet() const { return m_messageHasBeenSet; }
  template <typename MessageT = Aws::String>
  void SetMessage(MessageT&& value) {
    m_messageHasBeenSet = true;
    m_message = std::forward<MessageT>(value);
  }
  template <typename MessageT = Aws::String>
  TestRunEvent& WithMessage(MessageT&& value) {
    SetMessage(std::forward<MessageT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the event occurred.</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  TestRunEvent& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Machine-parseable key-value attributes for the event.</p>
   */
  inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
  inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  void SetAttributes(AttributesT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes = std::forward<AttributesT>(value);
  }
  template <typename AttributesT = Aws::Map<Aws::String, Aws::String>>
  TestRunEvent& WithAttributes(AttributesT&& value) {
    SetAttributes(std::forward<AttributesT>(value));
    return *this;
  }
  template <typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
  TestRunEvent& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
    m_attributesHasBeenSet = true;
    m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_eventId;

  Aws::String m_eventType;

  Aws::String m_message;

  Aws::Utils::DateTime m_timestamp{};

  Aws::Map<Aws::String, Aws::String> m_attributes;
  bool m_eventIdHasBeenSet = false;
  bool m_eventTypeHasBeenSet = false;
  bool m_messageHasBeenSet = false;
  bool m_timestampHasBeenSet = false;
  bool m_attributesHasBeenSet = false;
};

}  // namespace Model
}  // namespace resiliencehubv2
}  // namespace Aws
