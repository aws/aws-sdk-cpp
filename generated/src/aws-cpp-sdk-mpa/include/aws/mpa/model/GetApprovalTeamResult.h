/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/ApprovalStrategyResponse.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/ApprovalTeamStatus.h>
#include <aws/mpa/model/ApprovalTeamStatusCode.h>
#include <aws/mpa/model/PendingUpdate.h>
#include <aws/mpa/model/GetApprovalTeamResponseApprover.h>
#include <aws/mpa/model/PolicyReference.h>
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
  class GetApprovalTeamResult
  {
  public:
    AWS_MPA_API GetApprovalTeamResult() = default;
    AWS_MPA_API GetApprovalTeamResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_MPA_API GetApprovalTeamResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Timestamp when the team was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    GetApprovalTeamResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ApprovalStrategyResponse</code> object. Contains details for how the
     * team grants approval.</p>
     */
    inline const ApprovalStrategyResponse& GetApprovalStrategy() const { return m_approvalStrategy; }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    void SetApprovalStrategy(ApprovalStrategyT&& value) { m_approvalStrategyHasBeenSet = true; m_approvalStrategy = std::forward<ApprovalStrategyT>(value); }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    GetApprovalTeamResult& WithApprovalStrategy(ApprovalStrategyT&& value) { SetApprovalStrategy(std::forward<ApprovalStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of approvers in the team.</p>
     */
    inline int GetNumberOfApprovers() const { return m_numberOfApprovers; }
    inline void SetNumberOfApprovers(int value) { m_numberOfApproversHasBeenSet = true; m_numberOfApprovers = value; }
    inline GetApprovalTeamResult& WithNumberOfApprovers(int value) { SetNumberOfApprovers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>GetApprovalTeamResponseApprover </code> objects. Contains
     * details for the approvers in the team.</p>
     */
    inline const Aws::Vector<GetApprovalTeamResponseApprover>& GetApprovers() const { return m_approvers; }
    template<typename ApproversT = Aws::Vector<GetApprovalTeamResponseApprover>>
    void SetApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers = std::forward<ApproversT>(value); }
    template<typename ApproversT = Aws::Vector<GetApprovalTeamResponseApprover>>
    GetApprovalTeamResult& WithApprovers(ApproversT&& value) { SetApprovers(std::forward<ApproversT>(value)); return *this;}
    template<typename ApproversT = GetApprovalTeamResponseApprover>
    GetApprovalTeamResult& AddApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers.emplace_back(std::forward<ApproversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the team.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    GetApprovalTeamResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description for the team.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    GetApprovalTeamResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the approval team.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    GetApprovalTeamResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the team. For more information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Team
     * health</a> in the <i>Multi-party approval User Guide</i>.</p>
     */
    inline ApprovalTeamStatus GetStatus() const { return m_status; }
    inline void SetStatus(ApprovalTeamStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline GetApprovalTeamResult& WithStatus(ApprovalTeamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code for the approval team. For more information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Team
     * health</a> in the <i>Multi-party approval User Guide</i>.</p>
     */
    inline ApprovalTeamStatusCode GetStatusCode() const { return m_statusCode; }
    inline void SetStatusCode(ApprovalTeamStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline GetApprovalTeamResult& WithStatusCode(ApprovalTeamStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the status for the team.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    GetApprovalTeamResult& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the session.</p>
     */
    inline const Aws::String& GetUpdateSessionArn() const { return m_updateSessionArn; }
    template<typename UpdateSessionArnT = Aws::String>
    void SetUpdateSessionArn(UpdateSessionArnT&& value) { m_updateSessionArnHasBeenSet = true; m_updateSessionArn = std::forward<UpdateSessionArnT>(value); }
    template<typename UpdateSessionArnT = Aws::String>
    GetApprovalTeamResult& WithUpdateSessionArn(UpdateSessionArnT&& value) { SetUpdateSessionArn(std::forward<UpdateSessionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Version ID for the team.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    GetApprovalTeamResult& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>PolicyReference</code> objects. Contains a list of policies
     * that define the permissions for team resources.</p> <p>The protected operation
     * for a service integration might require specific permissions. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-integrations.html">How
     * other services work with Multi-party approval</a> in the <i>Multi-party approval
     * User Guide</i>.</p>
     */
    inline const Aws::Vector<PolicyReference>& GetPolicies() const { return m_policies; }
    template<typename PoliciesT = Aws::Vector<PolicyReference>>
    void SetPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies = std::forward<PoliciesT>(value); }
    template<typename PoliciesT = Aws::Vector<PolicyReference>>
    GetApprovalTeamResult& WithPolicies(PoliciesT&& value) { SetPolicies(std::forward<PoliciesT>(value)); return *this;}
    template<typename PoliciesT = PolicyReference>
    GetApprovalTeamResult& AddPolicies(PoliciesT&& value) { m_policiesHasBeenSet = true; m_policies.emplace_back(std::forward<PoliciesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timestamp when the team was last updated.</p>
     */
    inline const Aws::Utils::DateTime& GetLastUpdateTime() const { return m_lastUpdateTime; }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    void SetLastUpdateTime(LastUpdateTimeT&& value) { m_lastUpdateTimeHasBeenSet = true; m_lastUpdateTime = std::forward<LastUpdateTimeT>(value); }
    template<typename LastUpdateTimeT = Aws::Utils::DateTime>
    GetApprovalTeamResult& WithLastUpdateTime(LastUpdateTimeT&& value) { SetLastUpdateTime(std::forward<LastUpdateTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A <code>PendingUpdate</code> object. Contains details for the pending updates
     * for the team, if applicable.</p>
     */
    inline const PendingUpdate& GetPendingUpdate() const { return m_pendingUpdate; }
    template<typename PendingUpdateT = PendingUpdate>
    void SetPendingUpdate(PendingUpdateT&& value) { m_pendingUpdateHasBeenSet = true; m_pendingUpdate = std::forward<PendingUpdateT>(value); }
    template<typename PendingUpdateT = PendingUpdate>
    GetApprovalTeamResult& WithPendingUpdate(PendingUpdateT&& value) { SetPendingUpdate(std::forward<PendingUpdateT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetApprovalTeamResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ApprovalStrategyResponse m_approvalStrategy;
    bool m_approvalStrategyHasBeenSet = false;

    int m_numberOfApprovers{0};
    bool m_numberOfApproversHasBeenSet = false;

    Aws::Vector<GetApprovalTeamResponseApprover> m_approvers;
    bool m_approversHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ApprovalTeamStatus m_status{ApprovalTeamStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ApprovalTeamStatusCode m_statusCode{ApprovalTeamStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::String m_updateSessionArn;
    bool m_updateSessionArnHasBeenSet = false;

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::Vector<PolicyReference> m_policies;
    bool m_policiesHasBeenSet = false;

    Aws::Utils::DateTime m_lastUpdateTime{};
    bool m_lastUpdateTimeHasBeenSet = false;

    PendingUpdate m_pendingUpdate;
    bool m_pendingUpdateHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
