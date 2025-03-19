/**
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
    AWS_QBUSINESS_API ChatSyncResult() = default;
    AWS_QBUSINESS_API ChatSyncResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_QBUSINESS_API ChatSyncResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business conversation.</p>
     */
    inline const Aws::String& GetConversationId() const { return m_conversationId; }
    template<typename ConversationIdT = Aws::String>
    void SetConversationId(ConversationIdT&& value) { m_conversationIdHasBeenSet = true; m_conversationId = std::forward<ConversationIdT>(value); }
    template<typename ConversationIdT = Aws::String>
    ChatSyncResult& WithConversationId(ConversationIdT&& value) { SetConversationId(std::forward<ConversationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An AI-generated message in a conversation.</p>
     */
    inline const Aws::String& GetSystemMessage() const { return m_systemMessage; }
    template<typename SystemMessageT = Aws::String>
    void SetSystemMessage(SystemMessageT&& value) { m_systemMessageHasBeenSet = true; m_systemMessage = std::forward<SystemMessageT>(value); }
    template<typename SystemMessageT = Aws::String>
    ChatSyncResult& WithSystemMessage(SystemMessageT&& value) { SetSystemMessage(std::forward<SystemMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business AI generated message within the
     * conversation.</p>
     */
    inline const Aws::String& GetSystemMessageId() const { return m_systemMessageId; }
    template<typename SystemMessageIdT = Aws::String>
    void SetSystemMessageId(SystemMessageIdT&& value) { m_systemMessageIdHasBeenSet = true; m_systemMessageId = std::forward<SystemMessageIdT>(value); }
    template<typename SystemMessageIdT = Aws::String>
    ChatSyncResult& WithSystemMessageId(SystemMessageIdT&& value) { SetSystemMessageId(std::forward<SystemMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of an Amazon Q Business end user text input message within the
     * conversation.</p>
     */
    inline const Aws::String& GetUserMessageId() const { return m_userMessageId; }
    template<typename UserMessageIdT = Aws::String>
    void SetUserMessageId(UserMessageIdT&& value) { m_userMessageIdHasBeenSet = true; m_userMessageId = std::forward<UserMessageIdT>(value); }
    template<typename UserMessageIdT = Aws::String>
    ChatSyncResult& WithUserMessageId(UserMessageIdT&& value) { SetUserMessageId(std::forward<UserMessageIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A request from Amazon Q Business to the end user for information Amazon Q
     * Business needs to successfully complete a requested plugin action.</p>
     */
    inline const ActionReview& GetActionReview() const { return m_actionReview; }
    template<typename ActionReviewT = ActionReview>
    void SetActionReview(ActionReviewT&& value) { m_actionReviewHasBeenSet = true; m_actionReview = std::forward<ActionReviewT>(value); }
    template<typename ActionReviewT = ActionReview>
    ChatSyncResult& WithActionReview(ActionReviewT&& value) { SetActionReview(std::forward<ActionReviewT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An authentication verification event activated by an end user request to use
     * a custom plugin.</p>
     */
    inline const AuthChallengeRequest& GetAuthChallengeRequest() const { return m_authChallengeRequest; }
    template<typename AuthChallengeRequestT = AuthChallengeRequest>
    void SetAuthChallengeRequest(AuthChallengeRequestT&& value) { m_authChallengeRequestHasBeenSet = true; m_authChallengeRequest = std::forward<AuthChallengeRequestT>(value); }
    template<typename AuthChallengeRequestT = AuthChallengeRequest>
    ChatSyncResult& WithAuthChallengeRequest(AuthChallengeRequestT&& value) { SetAuthChallengeRequest(std::forward<AuthChallengeRequestT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The source documents used to generate the conversation response.</p>
     */
    inline const Aws::Vector<SourceAttribution>& GetSourceAttributions() const { return m_sourceAttributions; }
    template<typename SourceAttributionsT = Aws::Vector<SourceAttribution>>
    void SetSourceAttributions(SourceAttributionsT&& value) { m_sourceAttributionsHasBeenSet = true; m_sourceAttributions = std::forward<SourceAttributionsT>(value); }
    template<typename SourceAttributionsT = Aws::Vector<SourceAttribution>>
    ChatSyncResult& WithSourceAttributions(SourceAttributionsT&& value) { SetSourceAttributions(std::forward<SourceAttributionsT>(value)); return *this;}
    template<typename SourceAttributionsT = SourceAttribution>
    ChatSyncResult& AddSourceAttributions(SourceAttributionsT&& value) { m_sourceAttributionsHasBeenSet = true; m_sourceAttributions.emplace_back(std::forward<SourceAttributionsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of files which failed to upload during chat.</p>
     */
    inline const Aws::Vector<AttachmentOutput>& GetFailedAttachments() const { return m_failedAttachments; }
    template<typename FailedAttachmentsT = Aws::Vector<AttachmentOutput>>
    void SetFailedAttachments(FailedAttachmentsT&& value) { m_failedAttachmentsHasBeenSet = true; m_failedAttachments = std::forward<FailedAttachmentsT>(value); }
    template<typename FailedAttachmentsT = Aws::Vector<AttachmentOutput>>
    ChatSyncResult& WithFailedAttachments(FailedAttachmentsT&& value) { SetFailedAttachments(std::forward<FailedAttachmentsT>(value)); return *this;}
    template<typename FailedAttachmentsT = AttachmentOutput>
    ChatSyncResult& AddFailedAttachments(FailedAttachmentsT&& value) { m_failedAttachmentsHasBeenSet = true; m_failedAttachments.emplace_back(std::forward<FailedAttachmentsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ChatSyncResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_conversationId;
    bool m_conversationIdHasBeenSet = false;

    Aws::String m_systemMessage;
    bool m_systemMessageHasBeenSet = false;

    Aws::String m_systemMessageId;
    bool m_systemMessageIdHasBeenSet = false;

    Aws::String m_userMessageId;
    bool m_userMessageIdHasBeenSet = false;

    ActionReview m_actionReview;
    bool m_actionReviewHasBeenSet = false;

    AuthChallengeRequest m_authChallengeRequest;
    bool m_authChallengeRequestHasBeenSet = false;

    Aws::Vector<SourceAttribution> m_sourceAttributions;
    bool m_sourceAttributionsHasBeenSet = false;

    Aws::Vector<AttachmentOutput> m_failedAttachments;
    bool m_failedAttachmentsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
