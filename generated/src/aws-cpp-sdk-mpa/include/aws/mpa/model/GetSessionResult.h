/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/ApprovalStrategyResponse.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/mpa/model/SessionStatus.h>
#include <aws/mpa/model/SessionStatusCode.h>
#include <aws/mpa/model/SessionExecutionStatus.h>
#include <aws/mpa/model/ActionCompletionStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mpa/model/GetSessionResponseApproverResponse.h>
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
namespace MPA
{
namespace Model
{
  class GetSessionResult
  {
  public:
    AWS_MPA_API GetSessionResult() = default;
    AWS_MPA_API GetSessionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API GetSessionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    GetSessionResult& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the approval team.</p>
     */
    inline const Aws::String& GetApprovalTeamArn() const { return m_approvalTeamArn; }
    template<typename ApprovalTeamArnT = Aws::String>
    void SetApprovalTeamArn(ApprovalTeamArnT&& value) { m_approvalTeamArnHasBeenSet = true; m_approvalTeamArn = std::forward<ApprovalTeamArnT>(value); }
    template<typename ApprovalTeamArnT = Aws::String>
    GetSessionResult& WithApprovalTeamArn(ApprovalTeamArnT&& value) { SetApprovalTeamArn(std::forward<ApprovalTeamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the approval team.</p>
     */
    inline const Aws::String& GetApprovalTeamName() const { return m_approvalTeamName; }
    template<typename ApprovalTeamNameT = Aws::String>
    void SetApprovalTeamName(ApprovalTeamNameT&& value) { m_approvalTeamNameHasBeenSet = true; m_approvalTeamName = std::forward<ApprovalTeamNameT>(value); }
    template<typename ApprovalTeamNameT = Aws::String>
    GetSessionResult& WithApprovalTeamName(ApprovalTeamNameT&& value) { SetApprovalTeamName(std::forward<ApprovalTeamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the protected operation.</p>
     */
    inline const Aws::String& GetProtectedResourceArn() const { return m_protectedResourceArn; }
    template<typename ProtectedResourceArnT = Aws::String>
    void SetProtectedResourceArn(ProtectedResourceArnT&& value) { m_protectedResourceArnHasBeenSet = true; m_protectedResourceArn = std::forward<ProtectedResourceArnT>(value); }
    template<typename ProtectedResourceArnT = Aws::String>
    GetSessionResult& WithProtectedResourceArn(ProtectedResourceArnT&& value) { SetProtectedResourceArn(std::forward<ProtectedResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ApprovalStrategyResponse</code> object. Contains details for how the
     * team grants approval</p>
     */
    inline const ApprovalStrategyResponse& GetApprovalStrategy() const { return m_approvalStrategy; }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    void SetApprovalStrategy(ApprovalStrategyT&& value) { m_approvalStrategyHasBeenSet = true; m_approvalStrategy = std::forward<ApprovalStrategyT>(value); }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    GetSessionResult& WithApprovalStrategy(ApprovalStrategyT&& value) { SetApprovalStrategy(std::forward<ApprovalStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of approvers in the session.</p>
     */
    inline int GetNumberOfApprovers() const { return m_numberOfApprovers; }
    inline void SetNumberOfApprovers(int value) { m_numberOfApproversHasBeenSet = true; m_numberOfApprovers = value; }
    inline GetSessionResult& WithNumberOfApprovers(int value) { SetNumberOfApprovers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the session was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTime() const { return m_initiationTime; }
    template<typename InitiationTimeT = Aws::Utils::DateTime>
    void SetInitiationTime(InitiationTimeT&& value) { m_initiationTimeHasBeenSet = true; m_initiationTime = std::forward<InitiationTimeT>(value); }
    template<typename InitiationTimeT = Aws::Utils::DateTime>
    GetSessionResult& WithInitiationTime(InitiationTimeT&& value) { SetInitiationTime(std::forward<InitiationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the session will expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    GetSessionResult& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the session completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    GetSessionResult& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the session.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetSessionResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Metadata for the session.</p>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetMetadata() const { return m_metadata; }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    void SetMetadata(MetadataT&& value) { m_metadataHasBeenSet = true; m_metadata = std::forward<MetadataT>(value); }
    template<typename MetadataT = Aws::Map<Aws::String, Aws::String>>
    GetSessionResult& WithMetadata(MetadataT&& value) { SetMetadata(std::forward<MetadataT>(value)); return *this;}
    template<typename MetadataKeyT = Aws::String, typename MetadataValueT = Aws::String>
    GetSessionResult& AddMetadata(MetadataKeyT&& key, MetadataValueT&& value) {
      m_metadataHasBeenSet = true; m_metadata.emplace(std::forward<MetadataKeyT>(key), std::forward<MetadataValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Status for the session. For example, if the team has approved the requested
     * operation.</p>
     */
    inline SessionStatus GetStatus() const { return m_status; }
    inline void SetStatus(SessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetSessionResult& WithStatus(SessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code of the session.</p>
     */
    inline SessionStatusCode GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(SessionStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline GetSessionResult& WithStatusCode(SessionStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the status for session.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetSessionResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the protected operation. For example, if the operation is
     * <code>PENDING</code>.</p>
     */
    inline SessionExecutionStatus GetExecutionStatus() const { return m_executionStatus; }
    inline void SetExecutionStatus(SessionExecutionStatus value) { m_executionStatusHasBeenSet = true; m_executionStatus = value; }
    inline GetSessionResult& WithExecutionStatus(SessionExecutionStatus value) { SetExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the protected operation.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    GetSessionResult& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">Service
     * principal</a> for the service associated with the protected operation.</p>
     */
    inline const Aws::String& GetRequesterServicePrincipal() const { return m_requesterServicePrincipal; }
    template<typename RequesterServicePrincipalT = Aws::String>
    void SetRequesterServicePrincipal(RequesterServicePrincipalT&& value) { m_requesterServicePrincipalHasBeenSet = true; m_requesterServicePrincipal = std::forward<RequesterServicePrincipalT>(value); }
    template<typename RequesterServicePrincipalT = Aws::String>
    GetSessionResult& WithRequesterServicePrincipal(RequesterServicePrincipalT&& value) { SetRequesterServicePrincipal(std::forward<RequesterServicePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/intro-structure.html#intro-structure-request">IAM
     * principal</a> that made the operation request.</p>
     */
    inline const Aws::String& GetRequesterPrincipalArn() const { return m_requesterPrincipalArn; }
    template<typename RequesterPrincipalArnT = Aws::String>
    void SetRequesterPrincipalArn(RequesterPrincipalArnT&& value) { m_requesterPrincipalArnHasBeenSet = true; m_requesterPrincipalArn = std::forward<RequesterPrincipalArnT>(value); }
    template<typename RequesterPrincipalArnT = Aws::String>
    GetSessionResult& WithRequesterPrincipalArn(RequesterPrincipalArnT&& value) { SetRequesterPrincipalArn(std::forward<RequesterPrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the account that made the operation request.</p>
     */
    inline const Aws::String& GetRequesterAccountId() const { return m_requesterAccountId; }
    template<typename RequesterAccountIdT = Aws::String>
    void SetRequesterAccountId(RequesterAccountIdT&& value) { m_requesterAccountIdHasBeenSet = true; m_requesterAccountId = std::forward<RequesterAccountIdT>(value); }
    template<typename RequesterAccountIdT = Aws::String>
    GetSessionResult& WithRequesterAccountId(RequesterAccountIdT&& value) { SetRequesterAccountId(std::forward<RequesterAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Region where the operation request originated.</p>
     */
    inline const Aws::String& GetRequesterRegion() const { return m_requesterRegion; }
    template<typename RequesterRegionT = Aws::String>
    void SetRequesterRegion(RequesterRegionT&& value) { m_requesterRegionHasBeenSet = true; m_requesterRegion = std::forward<RequesterRegionT>(value); }
    template<typename RequesterRegionT = Aws::String>
    GetSessionResult& WithRequesterRegion(RequesterRegionT&& value) { SetRequesterRegion(std::forward<RequesterRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message from the account that made the operation request</p>
     */
    inline const Aws::String& GetRequesterComment() const { return m_requesterComment; }
    template<typename RequesterCommentT = Aws::String>
    void SetRequesterComment(RequesterCommentT&& value) { m_requesterCommentHasBeenSet = true; m_requesterComment = std::forward<RequesterCommentT>(value); }
    template<typename RequesterCommentT = Aws::String>
    GetSessionResult& WithRequesterComment(RequesterCommentT&& value) { SetRequesterComment(std::forward<RequesterCommentT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Strategy for executing the protected operation.
     * <code>AUTO_COMPLETION_UPON_APPROVAL</code> means the operation is automatically
     * executed using the requester's permissions, if approved.</p>
     */
    inline ActionCompletionStrategy GetActionCompletionStrategy() const { return m_actionCompletionStrategy; }
    inline void SetActionCompletionStrategy(ActionCompletionStrategy value) { m_actionCompletionStrategyHasBeenSet = true; m_actionCompletionStrategy = value; }
    inline GetSessionResult& WithActionCompletionStrategy(ActionCompletionStrategy value) { SetActionCompletionStrategy(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>GetSessionResponseApproverResponse</code> objects. Contains
     * details for approver responses in the session.</p>
     */
    inline const Aws::Vector<GetSessionResponseApproverResponse>& GetApproverResponses() const { return m_approverResponses; }
    template<typename ApproverResponsesT = Aws::Vector<GetSessionResponseApproverResponse>>
    void SetApproverResponses(ApproverResponsesT&& value) { m_approverResponsesHasBeenSet = true; m_approverResponses = std::forward<ApproverResponsesT>(value); }
    template<typename ApproverResponsesT = Aws::Vector<GetSessionResponseApproverResponse>>
    GetSessionResult& WithApproverResponses(ApproverResponsesT&& value) { SetApproverResponses(std::forward<ApproverResponsesT>(value)); return *this;}
    template<typename ApproverResponsesT = GetSessionResponseApproverResponse>
    GetSessionResult& AddApproverResponses(ApproverResponsesT&& value) { m_approverResponsesHasBeenSet = true; m_approverResponses.emplace_back(std::forward<ApproverResponsesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetSessionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_approvalTeamArn;
    bool m_approvalTeamArnHasBeenSet = false;

    Aws::String m_approvalTeamName;
    bool m_approvalTeamNameHasBeenSet = false;

    Aws::String m_protectedResourceArn;
    bool m_protectedResourceArnHasBeenSet = false;

    ApprovalStrategyResponse m_approvalStrategy;
    bool m_approvalStrategyHasBeenSet = false;

    int m_numberOfApprovers{0};
    bool m_numberOfApproversHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTime{};
    bool m_initiationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime{};
    bool m_expirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_metadata;
    bool m_metadataHasBeenSet = false;

    SessionStatus m_status{SessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SessionStatusCode m_statusCode{SessionStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    SessionExecutionStatus m_executionStatus{SessionExecutionStatus::NOT_SET};
    bool m_executionStatusHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_requesterServicePrincipal;
    bool m_requesterServicePrincipalHasBeenSet = false;

    Aws::String m_requesterPrincipalArn;
    bool m_requesterPrincipalArnHasBeenSet = false;

    Aws::String m_requesterAccountId;
    bool m_requesterAccountIdHasBeenSet = false;

    Aws::String m_requesterRegion;
    bool m_requesterRegionHasBeenSet = false;

    Aws::String m_requesterComment;
    bool m_requesterCommentHasBeenSet = false;

    ActionCompletionStrategy m_actionCompletionStrategy{ActionCompletionStrategy::NOT_SET};
    bool m_actionCompletionStrategyHasBeenSet = false;

    Aws::Vector<GetSessionResponseApproverResponse> m_approverResponses;
    bool m_approverResponsesHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
