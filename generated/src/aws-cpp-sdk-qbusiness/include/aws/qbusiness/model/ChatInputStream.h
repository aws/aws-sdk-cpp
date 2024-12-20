/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ConfigurationEvent.h>
#include <aws/qbusiness/model/TextInputEvent.h>
#include <aws/qbusiness/model/AttachmentInputEvent.h>
#include <aws/qbusiness/model/ActionExecutionEvent.h>
#include <aws/qbusiness/model/EndOfInputEvent.h>
#include <aws/qbusiness/model/AuthChallengeResponseEvent.h>
#include <utility>
#include <aws/core/utils/event/EventStream.h>
#include <aws/core/utils/json/JsonSerializer.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   * <p>The streaming input for the <code>Chat</code> API.</p><p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/ChatInputStream">AWS
   * API Reference</a></p>
   */
  class AWS_QBUSINESS_API ChatInputStream : public Aws::Utils::Event::EventEncoderStream
  {
  public:
    ChatInputStream& WriteConfigurationEvent(const ConfigurationEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("configurationEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    ChatInputStream& WriteTextInputEvent(const TextInputEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("textEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("text/plain"));
       msg.WriteEventPayload(value.GetUserMessage());
       WriteEvent(msg);
       return *this;
    }
    ChatInputStream& WriteAttachmentInputEvent(const AttachmentInputEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("attachmentEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    ChatInputStream& WriteActionExecutionEvent(const ActionExecutionEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("actionExecutionEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }
    ChatInputStream& WriteEndOfInputEvent(const EndOfInputEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("endOfInputEvent"));
       AWS_UNREFERENCED_PARAM(value);
       WriteEvent(msg);
       return *this;
    }
    ChatInputStream& WriteAuthChallengeResponseEvent(const AuthChallengeResponseEvent& value)
    {
       Aws::Utils::Event::Message msg;
       msg.InsertEventHeader(":message-type", Aws::String("event"));
       msg.InsertEventHeader(":event-type", Aws::String("authChallengeResponseEvent"));
       msg.InsertEventHeader(":content-type", Aws::String("application/json"));
       msg.WriteEventPayload(value.Jsonize().View().WriteCompact());
       WriteEvent(msg);
       return *this;
    }

  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
