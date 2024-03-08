/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ActionReview.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/AttachmentOutput.h>
#include <aws/qbusiness/model/SourceAttribution.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{
  class ChatSyncResult
  {
  public:
    AWS_QBUSINESS_API ChatSyncResult();
    AWS_QBUSINESS_API ChatSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ChatSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>A request from Amazon Q to the end user for information Amazon Q needs to
     * successfully complete a requested plugin action.</p>
     */
    inline const ActionReview& GetActionReview() const{ return m_actionReview; }

    /**
     * <p>A request from Amazon Q to the end user for information Amazon Q needs to
     * successfully complete a requested plugin action.</p>
     */
    inline void SetActionReview(const ActionReview& value) { m_actionReview = value; }

    /**
     * <p>A request from Amazon Q to the end user for information Amazon Q needs to
     * successfully complete a requested plugin action.</p>
     */
    inline void SetActionReview(ActionReview&& value) { m_actionReview = std::move(value); }

    /**
     * <p>A request from Amazon Q to the end user for information Amazon Q needs to
     * successfully complete a requested plugin action.</p>
     */
    inline ChatSyncResult& WithActionReview(const ActionReview& value) { SetActionReview(value); return *this;}

    /**
     * <p>A request from Amazon Q to the end user for information Amazon Q needs to
     * successfully complete a requested plugin action.</p>
     */
    inline ChatSyncResult& WithActionReview(ActionReview&& value) { SetActionReview(std::move(value)); return *this;}


    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(const Aws::String& value) { m_conversationId = value; }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(Aws::String&& value) { m_conversationId = std::move(value); }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline void SetConversationId(const char* value) { m_conversationId.assign(value); }

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline ChatSyncResult& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline ChatSyncResult& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}

    /**
     * <p>The identifier of the Amazon Q conversation.</p>
     */
    inline ChatSyncResult& WithConversationId(const char* value) { SetConversationId(value); return *this;}


    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline const Aws::Vector<AttachmentOutput>& GetFailedAttachments() const{ return m_failedAttachments; }

    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline void SetFailedAttachments(const Aws::Vector<AttachmentOutput>& value) { m_failedAttachments = value; }

    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline void SetFailedAttachments(Aws::Vector<AttachmentOutput>&& value) { m_failedAttachments = std::move(value); }

    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline ChatSyncResult& WithFailedAttachments(const Aws::Vector<AttachmentOutput>& value) { SetFailedAttachments(value); return *this;}

    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline ChatSyncResult& WithFailedAttachments(Aws::Vector<AttachmentOutput>&& value) { SetFailedAttachments(std::move(value)); return *this;}

    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline ChatSyncResult& AddFailedAttachments(const AttachmentOutput& value) { m_failedAttachments.push_back(value); return *this; }

    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline ChatSyncResult& AddFailedAttachments(AttachmentOutput&& value) { m_failedAttachments.push_back(std::move(value)); return *this; }


    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline const Aws::Vector<SourceAttribution>& GetSourceAttributions() const{ return m_sourceAttributions; }

    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline void SetSourceAttributions(const Aws::Vector<SourceAttribution>& value) { m_sourceAttributions = value; }

    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline void SetSourceAttributions(Aws::Vector<SourceAttribution>&& value) { m_sourceAttributions = std::move(value); }

    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline ChatSyncResult& WithSourceAttributions(const Aws::Vector<SourceAttribution>& value) { SetSourceAttributions(value); return *this;}

    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline ChatSyncResult& WithSourceAttributions(Aws::Vector<SourceAttribution>&& value) { SetSourceAttributions(std::move(value)); return *this;}

    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline ChatSyncResult& AddSourceAttributions(const SourceAttribution& value) { m_sourceAttributions.push_back(value); return *this; }

    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline ChatSyncResult& AddSourceAttributions(SourceAttribution&& value) { m_sourceAttributions.push_back(std::move(value)); return *this; }


    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline const Aws::String& GetSystemMessage() const{ return m_systemMessage; }

    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline void SetSystemMessage(const Aws::String& value) { m_systemMessage = value; }

    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline void SetSystemMessage(Aws::String&& value) { m_systemMessage = std::move(value); }

    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline void SetSystemMessage(const char* value) { m_systemMessage.assign(value); }

    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline ChatSyncResult& WithSystemMessage(const Aws::String& value) { SetSystemMessage(value); return *this;}

    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline ChatSyncResult& WithSystemMessage(Aws::String&& value) { SetSystemMessage(std::move(value)); return *this;}

    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline ChatSyncResult& WithSystemMessage(const char* value) { SetSystemMessage(value); return *this;}


    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline const Aws::String& GetSystemMessageId() const{ return m_systemMessageId; }

    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline void SetSystemMessageId(const Aws::String& value) { m_systemMessageId = value; }

    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline void SetSystemMessageId(Aws::String&& value) { m_systemMessageId = std::move(value); }

    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline void SetSystemMessageId(const char* value) { m_systemMessageId.assign(value); }

    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline ChatSyncResult& WithSystemMessageId(const Aws::String& value) { SetSystemMessageId(value); return *this;}

    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline ChatSyncResult& WithSystemMessageId(Aws::String&& value) { SetSystemMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Q AI generated message within the
     * conversation.</p>
     */
    inline ChatSyncResult& WithSystemMessageId(const char* value) { SetSystemMessageId(value); return *this;}


    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline const Aws::String& GetUserMessageId() const{ return m_userMessageId; }

    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline void SetUserMessageId(const Aws::String& value) { m_userMessageId = value; }

    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline void SetUserMessageId(Aws::String&& value) { m_userMessageId = std::move(value); }

    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline void SetUserMessageId(const char* value) { m_userMessageId.assign(value); }

    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline ChatSyncResult& WithUserMessageId(const Aws::String& value) { SetUserMessageId(value); return *this;}

    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline ChatSyncResult& WithUserMessageId(Aws::String&& value) { SetUserMessageId(std::move(value)); return *this;}

    /**
     * <p>The identifier of an Amazon Q end user text input message within the
     * conversation.</p>
     */
    inline ChatSyncResult& WithUserMessageId(const char* value) { SetUserMessageId(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline ChatSyncResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline ChatSyncResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline ChatSyncResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    ActionReview m_actionReview;

    Aws::String m_conversationId;

    Aws::Vector<AttachmentOutput> m_failedAttachments;

    Aws::Vector<SourceAttribution> m_sourceAttributions;

    Aws::String m_systemMessage;

    Aws::String m_systemMessageId;

    Aws::String m_userMessageId;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
