/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/qconnect/model/Participant.h>
#include <aws/qconnect/model/SpanMessageValue.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace QConnect {
namespace Model {

/**
 * <p>A message in the conversation history with participant role and content
 * values</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/SpanMessage">AWS
 * API Reference</a></p>
 */
class SpanMessage {
 public:
  AWS_QCONNECT_API SpanMessage() = default;
  AWS_QCONNECT_API SpanMessage(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API SpanMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Unique message identifier</p>
   */
  inline const Aws::String& GetMessageId() const { return m_messageId; }
  inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
  template <typename MessageIdT = Aws::String>
  void SetMessageId(MessageIdT&& value) {
    m_messageIdHasBeenSet = true;
    m_messageId = std::forward<MessageIdT>(value);
  }
  template <typename MessageIdT = Aws::String>
  SpanMessage& WithMessageId(MessageIdT&& value) {
    SetMessageId(std::forward<MessageIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Message source role</p>
   */
  inline Participant GetParticipant() const { return m_participant; }
  inline bool ParticipantHasBeenSet() const { return m_participantHasBeenSet; }
  inline void SetParticipant(Participant value) {
    m_participantHasBeenSet = true;
    m_participant = value;
  }
  inline SpanMessage& WithParticipant(Participant value) {
    SetParticipant(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Message timestamp</p>
   */
  inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
  inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
  template <typename TimestampT = Aws::Utils::DateTime>
  void SetTimestamp(TimestampT&& value) {
    m_timestampHasBeenSet = true;
    m_timestamp = std::forward<TimestampT>(value);
  }
  template <typename TimestampT = Aws::Utils::DateTime>
  SpanMessage& WithTimestamp(TimestampT&& value) {
    SetTimestamp(std::forward<TimestampT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Message content values (text, tool use, tool result)</p>
   */
  inline const Aws::Vector<SpanMessageValue>& GetValues() const { return m_values; }
  inline bool ValuesHasBeenSet() const { return m_valuesHasBeenSet; }
  template <typename ValuesT = Aws::Vector<SpanMessageValue>>
  void SetValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values = std::forward<ValuesT>(value);
  }
  template <typename ValuesT = Aws::Vector<SpanMessageValue>>
  SpanMessage& WithValues(ValuesT&& value) {
    SetValues(std::forward<ValuesT>(value));
    return *this;
  }
  template <typename ValuesT = SpanMessageValue>
  SpanMessage& AddValues(ValuesT&& value) {
    m_valuesHasBeenSet = true;
    m_values.emplace_back(std::forward<ValuesT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_messageId;
  bool m_messageIdHasBeenSet = false;

  Participant m_participant{Participant::NOT_SET};
  bool m_participantHasBeenSet = false;

  Aws::Utils::DateTime m_timestamp{};
  bool m_timestampHasBeenSet = false;

  Aws::Vector<SpanMessageValue> m_values;
  bool m_valuesHasBeenSet = false;
};

}  // namespace Model
}  // namespace QConnect
}  // namespace Aws
