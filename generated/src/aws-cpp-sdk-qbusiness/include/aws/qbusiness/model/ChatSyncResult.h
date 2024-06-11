﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/ActionReview.h>
#include <aws/qbusiness/model/AuthChallengeRequest.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/qbusiness/model/SourceAttribution.h>
#include <aws/qbusiness/model/AttachmentOutput.h>
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


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const{ return m_conversationId; }
    inline void SetConversationId(const Aws::String& value) { m_conversationId = value; }
    inline void SetConversationId(Aws::String&& value) { m_conversationId = std::move(value); }
    inline void SetConversationId(const char* value) { m_conversationId.assign(value); }
    inline ChatSyncResult& WithConversationId(const Aws::String& value) { SetConversationId(value); return *this;}
    inline ChatSyncResult& WithConversationId(Aws::String&& value) { SetConversationId(std::move(value)); return *this;}
    inline ChatSyncResult& WithConversationId(const char* value) { SetConversationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline const Aws::String& GetSystemMessage() const{ return m_systemMessage; }
    inline void SetSystemMessage(const Aws::String& value) { m_systemMessage = value; }
    inline void SetSystemMessage(Aws::String&& value) { m_systemMessage = std::move(value); }
    inline void SetSystemMessage(const char* value) { m_systemMessage.assign(value); }
    inline ChatSyncResult& WithSystemMessage(const Aws::String& value) { SetSystemMessage(value); return *this;}
    inline ChatSyncResult& WithSystemMessage(Aws::String&& value) { SetSystemMessage(std::move(value)); return *this;}
    inline ChatSyncResult& WithSystemMessage(const char* value) { SetSystemMessage(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business AI generated message within the
     * conversation.</p>
     */
    inline const Aws::String& GetSystemMessageId() const{ return m_systemMessageId; }
    inline void SetSystemMessageId(const Aws::String& value) { m_systemMessageId = value; }
    inline void SetSystemMessageId(Aws::String&& value) { m_systemMessageId = std::move(value); }
    inline void SetSystemMessageId(const char* value) { m_systemMessageId.assign(value); }
    inline ChatSyncResult& WithSystemMessageId(const Aws::String& value) { SetSystemMessageId(value); return *this;}
    inline ChatSyncResult& WithSystemMessageId(Aws::String&& value) { SetSystemMessageId(std::move(value)); return *this;}
    inline ChatSyncResult& WithSystemMessageId(const char* value) { SetSystemMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business end user text input message within the
     * conversation.</p>
     */
    inline const Aws::String& GetUserMessageId() const{ return m_userMessageId; }
    inline void SetUserMessageId(const Aws::String& value) { m_userMessageId = value; }
    inline void SetUserMessageId(Aws::String&& value) { m_userMessageId = std::move(value); }
    inline void SetUserMessageId(const char* value) { m_userMessageId.assign(value); }
    inline ChatSyncResult& WithUserMessageId(const Aws::String& value) { SetUserMessageId(value); return *this;}
    inline ChatSyncResult& WithUserMessageId(Aws::String&& value) { SetUserMessageId(std::move(value)); return *this;}
    inline ChatSyncResult& WithUserMessageId(const char* value) { SetUserMessageId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline const ActionReview& GetActionReview() const{ return m_actionReview; }
    inline void SetActionReview(const ActionReview& value) { m_actionReview = value; }
    inline void SetActionReview(ActionReview&& value) { m_actionReview = std::move(value); }
    inline ChatSyncResult& WithActionReview(const ActionReview& value) { SetActionReview(value); return *this;}
    inline ChatSyncResult& WithActionReview(ActionReview&& value) { SetActionReview(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline const AuthChallengeRequest& GetAuthChallengeRequest() const{ return m_authChallengeRequest; }
    inline void SetAuthChallengeRequest(const AuthChallengeRequest& value) { m_authChallengeRequest = value; }
    inline void SetAuthChallengeRequest(AuthChallengeRequest&& value) { m_authChallengeRequest = std::move(value); }
    inline ChatSyncResult& WithAuthChallengeRequest(const AuthChallengeRequest& value) { SetAuthChallengeRequest(value); return *this;}
    inline ChatSyncResult& WithAuthChallengeRequest(AuthChallengeRequest&& value) { SetAuthChallengeRequest(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline const Aws::Vector<SourceAttribution>& GetSourceAttributions() const{ return m_sourceAttributions; }
    inline void SetSourceAttributions(const Aws::Vector<SourceAttribution>& value) { m_sourceAttributions = value; }
    inline void SetSourceAttributions(Aws::Vector<SourceAttribution>&& value) { m_sourceAttributions = std::move(value); }
    inline ChatSyncResult& WithSourceAttributions(const Aws::Vector<SourceAttribution>& value) { SetSourceAttributions(value); return *this;}
    inline ChatSyncResult& WithSourceAttributions(Aws::Vector<SourceAttribution>&& value) { SetSourceAttributions(std::move(value)); return *this;}
    inline ChatSyncResult& AddSourceAttributions(const SourceAttribution& value) { m_sourceAttributions.push_back(value); return *this; }
    inline ChatSyncResult& AddSourceAttributions(SourceAttribution&& value) { m_sourceAttributions.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline const Aws::Vector<AttachmentOutput>& GetFailedAttachments() const{ return m_failedAttachments; }
    inline void SetFailedAttachments(const Aws::Vector<AttachmentOutput>& value) { m_failedAttachments = value; }
    inline void SetFailedAttachments(Aws::Vector<AttachmentOutput>&& value) { m_failedAttachments = std::move(value); }
    inline ChatSyncResult& WithFailedAttachments(const Aws::Vector<AttachmentOutput>& value) { SetFailedAttachments(value); return *this;}
    inline ChatSyncResult& WithFailedAttachments(Aws::Vector<AttachmentOutput>&& value) { SetFailedAttachments(std::move(value)); return *this;}
    inline ChatSyncResult& AddFailedAttachments(const AttachmentOutput& value) { m_failedAttachments.push_back(value); return *this; }
    inline ChatSyncResult& AddFailedAttachments(AttachmentOutput&& value) { m_failedAttachments.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ChatSyncResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ChatSyncResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ChatSyncResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;

    Aws::String m_systemMessage;

    Aws::String m_systemMessageId;

    Aws::String m_userMessageId;

    ActionReview m_actionReview;

    AuthChallengeRequest m_authChallengeRequest;

    Aws::Vector<SourceAttribution> m_sourceAttributions;

    Aws::Vector<AttachmentOutput> m_failedAttachments;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
