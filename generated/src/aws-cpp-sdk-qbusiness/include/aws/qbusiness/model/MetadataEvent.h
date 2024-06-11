﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/SourceAttribution.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>A metadata event for a AI-generated text output message in a Amazon Q
   * Business conversation, containing associated metadata generated.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/MetadataEvent">AWS
   * API Reference</a></p>
   */
  class MetadataEvent
  {
  public:
    AWS_QBUSINESS_API MetadataEvent();
    AWS_QBUSINESS_API MetadataEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API MetadataEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the conversation with which the generated metadata is
     * associated.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline bool ConversationIdHasBeenSet() const { return m_conversationIdHasBeenSet; }
    inline void SetConversationId(const Aws::String& value) { m_conversationIdHasBeenSet = true; m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationIdHasBeenSet = true; m_conversationId.assign(value); }
    inline MetadataEvent& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline MetadataEvent& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline MetadataEvent& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business end user text input message within the
     * conversation.</p>
     */
    inline const Aws::String& GetUserMessageId() const{ return m_userMessageId; }
    inline bool UserMessageIdHasBeenSet() const { return m_userMessageIdHasBeenSet; }
    inline void SetUserMessageId(const Aws::String& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = value; }
    inline void SetUserMessageId(Aws::String&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::move(value); }
    inline void SetUserMessageId(const char* value) { m_userMessageIdHasBeenSet = true; m_userMessageId.assign(value); }
    inline MetadataEvent& WithUserMessageId(const Aws::String& value) { SetUserMessageId(value); return *this;}
    inline MetadataEvent& WithUserMessageId(Aws::String&& value) { SetUserMessageId(std::move(value)); return *this;}
    inline MetadataEvent& WithUserMessageId(const char* value) { SetUserMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business AI generated message within the
     * conversation.</p>
     */
    inline const Aws::String& GetSystemMessageId() const{ return m_systemMessageId; }
    inline bool SystemMessageIdHasBeenSet() const { return m_systemMessageIdHasBeenSet; }
    inline void SetSystemMessageId(const Aws::String& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = value; }
    inline void SetSystemMessageId(Aws::String&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::move(value); }
    inline void SetSystemMessageId(const char* value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId.assign(value); }
    inline MetadataEvent& WithSystemMessageId(const Aws::String& value) { SetSystemMessageId(value); return *this;}
    inline MetadataEvent& WithSystemMessageId(Aws::String&& value) { SetSystemMessageId(std::move(value)); return *this;}
    inline MetadataEvent& WithSystemMessageId(const char* value) { SetSystemMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline const Aws::Vector<SourceAttribution>& GetSourceAttributions() const{ return m_sourceAttributions; }
    inline bool SourceAttributionsHasBeenSet() const { return m_sourceAttributionsHasBeenSet; }
    inline void SetSourceAttributions(const Aws::Vector<SourceAttribution>& value) { m_sourceAttributionsHasBeenSet = true; m_sourceAttributions = value; }
    inline void SetSourceAttributions(Aws::Vector<SourceAttribution>&& value) { m_sourceAttributionsHasBeenSet = true; m_sourceAttributions = std::move(value); }
    inline MetadataEvent& WithSourceAttributions(const Aws::Vector<SourceAttribution>& value) { SetSourceAttributions(value); return *this;}
    inline MetadataEvent& WithSourceAttributions(Aws::Vector<SourceAttribution>&& value) { SetSourceAttributions(std::move(value)); return *this;}
    inline MetadataEvent& AddSourceAttributions(const SourceAttribution& value) { m_sourceAttributionsHasBeenSet = true; m_sourceAttributions.push_back(value); return *this; }
    inline MetadataEvent& AddSourceAttributions(SourceAttribution&& value) { m_sourceAttributionsHasBeenSet = true; m_sourceAttributions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The final text output message generated by the system.</p>
     */
    inline const Aws::String& GetFinalTextMessage() const{ return m_finalTextMessage; }
    inline bool FinalTextMessageHasBeenSet() const { return m_finalTextMessageHasBeenSet; }
    inline void SetFinalTextMessage(const Aws::String& value) { m_finalTextMessageHasBeenSet = true; m_finalTextMessage = value; }
    inline void SetFinalTextMessage(Aws::String&& value) { m_finalTextMessageHasBeenSet = true; m_finalTextMessage = std::move(value); }
    inline void SetFinalTextMessage(const char* value) { m_finalTextMessageHasBeenSet = true; m_finalTextMessage.assign(value); }
    inline MetadataEvent& WithFinalTextMessage(const Aws::String& value) { SetFinalTextMessage(value); return *this;}
    inline MetadataEvent& WithFinalTextMessage(Aws::String&& value) { SetFinalTextMessage(std::move(value)); return *this;}
    inline MetadataEvent& WithFinalTextMessage(const char* value) { SetFinalTextMessage(value); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_userMessageId;
    bool m_userMessageIdHasBeenSet = false;

    Aws::String m_systemMessageId;
    bool m_systemMessageIdHasBeenSet = false;

    Aws::Vector<SourceAttribution> m_sourceAttributions;
    bool m_sourceAttributionsHasBeenSet = false;

    Aws::String m_finalTextMessage;
    bool m_finalTextMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
