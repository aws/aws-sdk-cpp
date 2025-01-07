/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qconnect/QConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qconnect/model/Participant.h>
#include <aws/core/utils/DateTime.h>
#include <aws/qconnect/model/MessageData.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QConnect
{
namespace Model
{

  /**
   * <p>The message output.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qconnect-2020-10-19/MessageOutput">AWS
   * API Reference</a></p>
   */
  class MessageOutput
  {
  public:
    AWS_QCONNECT_API MessageOutput();
    AWS_QCONNECT_API MessageOutput(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API MessageOutput& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QCONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of a message.</p>
     */
    inline const Aws::String& GetMessageId() const{ return m_messageId; }
    inline bool MessageIdHasBeenSet() const { return m_messageIdHasBeenSet; }
    inline void SetMessageId(const Aws::String& value) { m_messageIdHasBeenSet = true; m_messageId = value; }
    inline void SetMessageId(Aws::String&& value) { m_messageIdHasBeenSet = true; m_messageId = std::move(value); }
    inline void SetMessageId(const char* value) { m_messageIdHasBeenSet = true; m_messageId.assign(value); }
    inline MessageOutput& WithMessageId(const Aws::String& value) { SetMessageId(value); return *this;}
    inline MessageOutput& WithMessageId(Aws::String&& value) { SetMessageId(std::move(value)); return *this;}
    inline MessageOutput& WithMessageId(const char* value) { SetMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The participant of a message.</p>
     */
    inline const Participant& GetParticipant() const{ return m_participant; }
    inline bool ParticipantHasBeenSet() const { return m_participantHasBeenSet; }
    inline void SetParticipant(const Participant& value) { m_participantHasBeenSet = true; m_participant = value; }
    inline void SetParticipant(Participant&& value) { m_participantHasBeenSet = true; m_participant = std::move(value); }
    inline MessageOutput& WithParticipant(const Participant& value) { SetParticipant(value); return *this;}
    inline MessageOutput& WithParticipant(Participant&& value) { SetParticipant(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The timestamp of a message.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }
    inline MessageOutput& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}
    inline MessageOutput& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The value of a message data.</p>
     */
    inline const MessageData& GetValue() const{ return m_value; }
    inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
    inline void SetValue(const MessageData& value) { m_valueHasBeenSet = true; m_value = value; }
    inline void SetValue(MessageData&& value) { m_valueHasBeenSet = true; m_value = std::move(value); }
    inline MessageOutput& WithValue(const MessageData& value) { SetValue(value); return *this;}
    inline MessageOutput& WithValue(MessageData&& value) { SetValue(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_messageId;
    bool m_messageIdHasBeenSet = false;

    Participant m_participant;
    bool m_participantHasBeenSet = false;

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    MessageData m_value;
    bool m_valueHasBeenSet = false;
  };

} // namespace Model
} // namespace QConnect
} // namespace Aws
