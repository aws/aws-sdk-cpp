/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/SessionStatus.h>
#include <aws/mpa/model/SessionStatusCode.h>
#include <aws/mpa/model/ActionCompletionStrategy.h>
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
namespace MPA
{
namespace Model
{

  /**
   * <p>Contains details for an approval session. For more information, see <a
   * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Session</a>
   * in the <i>Multi-party approval User Guide</i> </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListSessionsResponseSession">AWS
   * API Reference</a></p>
   */
  class ListSessionsResponseSession
  {
  public:
    AWS_MPA_API ListSessionsResponseSession() = default;
    AWS_MPA_API ListSessionsResponseSession(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API ListSessionsResponseSession& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the session.</p>
     */
    inline const Aws::String& GetSessionArn() const { return m_sessionArn; }
    inline bool SessionArnHasBeenSet() const { return m_sessionArnHasBeenSet; }
    template<typename SessionArnT = Aws::String>
    void SetSessionArn(SessionArnT&& value) { m_sessionArnHasBeenSet = true; m_sessionArn = std::forward<SessionArnT>(value); }
    template<typename SessionArnT = Aws::String>
    ListSessionsResponseSession& WithSessionArn(SessionArnT&& value) { SetSessionArn(std::forward<SessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the approval team.</p>
     */
    inline const Aws::String& GetApprovalTeamName() const { return m_approvalTeamName; }
    inline bool ApprovalTeamNameHasBeenSet() const { return m_approvalTeamNameHasBeenSet; }
    template<typename ApprovalTeamNameT = Aws::String>
    void SetApprovalTeamName(ApprovalTeamNameT&& value) { m_approvalTeamNameHasBeenSet = true; m_approvalTeamName = std::forward<ApprovalTeamNameT>(value); }
    template<typename ApprovalTeamNameT = Aws::String>
    ListSessionsResponseSession& WithApprovalTeamName(ApprovalTeamNameT&& value) { SetApprovalTeamName(std::forward<ApprovalTeamNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the approval team.</p>
     */
    inline const Aws::String& GetApprovalTeamArn() const { return m_approvalTeamArn; }
    inline bool ApprovalTeamArnHasBeenSet() const { return m_approvalTeamArnHasBeenSet; }
    template<typename ApprovalTeamArnT = Aws::String>
    void SetApprovalTeamArn(ApprovalTeamArnT&& value) { m_approvalTeamArnHasBeenSet = true; m_approvalTeamArn = std::forward<ApprovalTeamArnT>(value); }
    template<typename ApprovalTeamArnT = Aws::String>
    ListSessionsResponseSession& WithApprovalTeamArn(ApprovalTeamArnT&& value) { SetApprovalTeamArn(std::forward<ApprovalTeamArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the session was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetInitiationTime() const { return m_initiationTime; }
    inline bool InitiationTimeHasBeenSet() const { return m_initiationTimeHasBeenSet; }
    template<typename InitiationTimeT = Aws::Utils::DateTime>
    void SetInitiationTime(InitiationTimeT&& value) { m_initiationTimeHasBeenSet = true; m_initiationTime = std::forward<InitiationTimeT>(value); }
    template<typename InitiationTimeT = Aws::Utils::DateTime>
    ListSessionsResponseSession& WithInitiationTime(InitiationTimeT&& value) { SetInitiationTime(std::forward<InitiationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the session was expire.</p>
     */
    inline const Aws::Utils::DateTime& GetExpirationTime() const { return m_expirationTime; }
    inline bool ExpirationTimeHasBeenSet() const { return m_expirationTimeHasBeenSet; }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    void SetExpirationTime(ExpirationTimeT&& value) { m_expirationTimeHasBeenSet = true; m_expirationTime = std::forward<ExpirationTimeT>(value); }
    template<typename ExpirationTimeT = Aws::Utils::DateTime>
    ListSessionsResponseSession& WithExpirationTime(ExpirationTimeT&& value) { SetExpirationTime(std::forward<ExpirationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Timestamp when the session was completed.</p>
     */
    inline const Aws::Utils::DateTime& GetCompletionTime() const { return m_completionTime; }
    inline bool CompletionTimeHasBeenSet() const { return m_completionTimeHasBeenSet; }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    void SetCompletionTime(CompletionTimeT&& value) { m_completionTimeHasBeenSet = true; m_completionTime = std::forward<CompletionTimeT>(value); }
    template<typename CompletionTimeT = Aws::Utils::DateTime>
    ListSessionsResponseSession& WithCompletionTime(CompletionTimeT&& value) { SetCompletionTime(std::forward<CompletionTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the team.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    ListSessionsResponseSession& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the protected operation.</p>
     */
    inline const Aws::String& GetActionName() const { return m_actionName; }
    inline bool ActionNameHasBeenSet() const { return m_actionNameHasBeenSet; }
    template<typename ActionNameT = Aws::String>
    void SetActionName(ActionNameT&& value) { m_actionNameHasBeenSet = true; m_actionName = std::forward<ActionNameT>(value); }
    template<typename ActionNameT = Aws::String>
    ListSessionsResponseSession& WithActionName(ActionNameT&& value) { SetActionName(std::forward<ActionNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the protected operation.</p>
     */
    inline const Aws::String& GetProtectedResourceArn() const { return m_protectedResourceArn; }
    inline bool ProtectedResourceArnHasBeenSet() const { return m_protectedResourceArnHasBeenSet; }
    template<typename ProtectedResourceArnT = Aws::String>
    void SetProtectedResourceArn(ProtectedResourceArnT&& value) { m_protectedResourceArnHasBeenSet = true; m_protectedResourceArn = std::forward<ProtectedResourceArnT>(value); }
    template<typename ProtectedResourceArnT = Aws::String>
    ListSessionsResponseSession& WithProtectedResourceArn(ProtectedResourceArnT&& value) { SetProtectedResourceArn(std::forward<ProtectedResourceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/reference_policies_elements_principal.html#principal-services">Service
     * principal</a> for the service associated with the protected operation.</p>
     */
    inline const Aws::String& GetRequesterServicePrincipal() const { return m_requesterServicePrincipal; }
    inline bool RequesterServicePrincipalHasBeenSet() const { return m_requesterServicePrincipalHasBeenSet; }
    template<typename RequesterServicePrincipalT = Aws::String>
    void SetRequesterServicePrincipal(RequesterServicePrincipalT&& value) { m_requesterServicePrincipalHasBeenSet = true; m_requesterServicePrincipal = std::forward<RequesterServicePrincipalT>(value); }
    template<typename RequesterServicePrincipalT = Aws::String>
    ListSessionsResponseSession& WithRequesterServicePrincipal(RequesterServicePrincipalT&& value) { SetRequesterServicePrincipal(std::forward<RequesterServicePrincipalT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> <a
     * href="https://docs.aws.amazon.com/IAM/latest/UserGuide/intro-structure.html#intro-structure-request">IAM
     * principal</a> that made the operation request.</p>
     */
    inline const Aws::String& GetRequesterPrincipalArn() const { return m_requesterPrincipalArn; }
    inline bool RequesterPrincipalArnHasBeenSet() const { return m_requesterPrincipalArnHasBeenSet; }
    template<typename RequesterPrincipalArnT = Aws::String>
    void SetRequesterPrincipalArn(RequesterPrincipalArnT&& value) { m_requesterPrincipalArnHasBeenSet = true; m_requesterPrincipalArn = std::forward<RequesterPrincipalArnT>(value); }
    template<typename RequesterPrincipalArnT = Aws::String>
    ListSessionsResponseSession& WithRequesterPrincipalArn(RequesterPrincipalArnT&& value) { SetRequesterPrincipalArn(std::forward<RequesterPrincipalArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Web Services Region where the operation request originated.</p>
     */
    inline const Aws::String& GetRequesterRegion() const { return m_requesterRegion; }
    inline bool RequesterRegionHasBeenSet() const { return m_requesterRegionHasBeenSet; }
    template<typename RequesterRegionT = Aws::String>
    void SetRequesterRegion(RequesterRegionT&& value) { m_requesterRegionHasBeenSet = true; m_requesterRegion = std::forward<RequesterRegionT>(value); }
    template<typename RequesterRegionT = Aws::String>
    ListSessionsResponseSession& WithRequesterRegion(RequesterRegionT&& value) { SetRequesterRegion(std::forward<RequesterRegionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>ID for the account that made the operation request.</p>
     */
    inline const Aws::String& GetRequesterAccountId() const { return m_requesterAccountId; }
    inline bool RequesterAccountIdHasBeenSet() const { return m_requesterAccountIdHasBeenSet; }
    template<typename RequesterAccountIdT = Aws::String>
    void SetRequesterAccountId(RequesterAccountIdT&& value) { m_requesterAccountIdHasBeenSet = true; m_requesterAccountId = std::forward<RequesterAccountIdT>(value); }
    template<typename RequesterAccountIdT = Aws::String>
    ListSessionsResponseSession& WithRequesterAccountId(RequesterAccountIdT&& value) { SetRequesterAccountId(std::forward<RequesterAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the protected operation. For example, if the operation is
     * <code>PENDING</code>.</p>
     */
    inline SessionStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(SessionStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline ListSessionsResponseSession& WithStatus(SessionStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code of the session.</p>
     */
    inline SessionStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(SessionStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline ListSessionsResponseSession& WithStatusCode(SessionStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the status for session.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    ListSessionsResponseSession& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Strategy for executing the protected operation.
     * <code>AUTO_COMPLETION_UPON_APPROVAL</code> means the operation is executed
     * automatically using the requester's permissions, if approved.</p>
     */
    inline ActionCompletionStrategy GetActionCompletionStrategy() const { return m_actionCompletionStrategy; }
    inline bool ActionCompletionStrategyHasBeenSet() const { return m_actionCompletionStrategyHasBeenSet; }
    inline void SetActionCompletionStrategy(ActionCompletionStrategy value) { m_actionCompletionStrategyHasBeenSet = true; m_actionCompletionStrategy = value; }
    inline ListSessionsResponseSession& WithActionCompletionStrategy(ActionCompletionStrategy value) { SetActionCompletionStrategy(value); return *this;}
    ///@}
  private:

    Aws::String m_sessionArn;
    bool m_sessionArnHasBeenSet = false;

    Aws::String m_approvalTeamName;
    bool m_approvalTeamNameHasBeenSet = false;

    Aws::String m_approvalTeamArn;
    bool m_approvalTeamArnHasBeenSet = false;

    Aws::Utils::DateTime m_initiationTime{};
    bool m_initiationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_expirationTime{};
    bool m_expirationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_completionTime{};
    bool m_completionTimeHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_actionName;
    bool m_actionNameHasBeenSet = false;

    Aws::String m_protectedResourceArn;
    bool m_protectedResourceArnHasBeenSet = false;

    Aws::String m_requesterServicePrincipal;
    bool m_requesterServicePrincipalHasBeenSet = false;

    Aws::String m_requesterPrincipalArn;
    bool m_requesterPrincipalArnHasBeenSet = false;

    Aws::String m_requesterRegion;
    bool m_requesterRegionHasBeenSet = false;

    Aws::String m_requesterAccountId;
    bool m_requesterAccountIdHasBeenSet = false;

    SessionStatus m_status{SessionStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    SessionStatusCode m_statusCode{SessionStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    ActionCompletionStrategy m_actionCompletionStrategy{ActionCompletionStrategy::NOT_SET};
    bool m_actionCompletionStrategyHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
