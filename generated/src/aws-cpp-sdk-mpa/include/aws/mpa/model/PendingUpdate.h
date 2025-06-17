/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/ApprovalStrategyResponse.h>
#include <aws/mpa/model/ApprovalTeamStatus.h>
#include <aws/mpa/model/ApprovalTeamStatusCode.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/GetApprovalTeamResponseApprover.h>
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
   * <p>Contains details for the pending updates for an approval team, if
   * applicable.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/PendingUpdate">AWS
   * API Reference</a></p>
   */
  class PendingUpdate
  {
  public:
    AWS_MPA_API PendingUpdate() = default;
    AWS_MPA_API PendingUpdate(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API PendingUpdate& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Version ID for the team.</p>
     */
    inline const Aws::String& GetVersionId() const { return m_versionId; }
    inline bool VersionIdHasBeenSet() const { return m_versionIdHasBeenSet; }
    template<typename VersionIdT = Aws::String>
    void SetVersionId(VersionIdT&& value) { m_versionIdHasBeenSet = true; m_versionId = std::forward<VersionIdT>(value); }
    template<typename VersionIdT = Aws::String>
    PendingUpdate& WithVersionId(VersionIdT&& value) { SetVersionId(std::forward<VersionIdT>(value)); return *this;}
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
    PendingUpdate& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ApprovalStrategyResponse</code> object. Contains details for how the
     * team grants approval.</p>
     */
    inline const ApprovalStrategyResponse& GetApprovalStrategy() const { return m_approvalStrategy; }
    inline bool ApprovalStrategyHasBeenSet() const { return m_approvalStrategyHasBeenSet; }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    void SetApprovalStrategy(ApprovalStrategyT&& value) { m_approvalStrategyHasBeenSet = true; m_approvalStrategy = std::forward<ApprovalStrategyT>(value); }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    PendingUpdate& WithApprovalStrategy(ApprovalStrategyT&& value) { SetApprovalStrategy(std::forward<ApprovalStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of approvers in the team.</p>
     */
    inline int GetNumberOfApprovers() const { return m_numberOfApprovers; }
    inline bool NumberOfApproversHasBeenSet() const { return m_numberOfApproversHasBeenSet; }
    inline void SetNumberOfApprovers(int value) { m_numberOfApproversHasBeenSet = true; m_numberOfApprovers = value; }
    inline PendingUpdate& WithNumberOfApprovers(int value) { SetNumberOfApprovers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status for the team. For more information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Team
     * health</a> in the <i>Multi-party approval User Guide</i>.</p>
     */
    inline ApprovalTeamStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ApprovalTeamStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline PendingUpdate& WithStatus(ApprovalTeamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code for the update. For more information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Team
     * health</a> in the <i>Multi-party approval User Guide</i>.</p>
     */
    inline ApprovalTeamStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(ApprovalTeamStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline PendingUpdate& WithStatusCode(ApprovalTeamStatusCode value) { SetStatusCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Message describing the status for the team.</p>
     */
    inline const Aws::String& GetStatusMessage() const { return m_statusMessage; }
    inline bool StatusMessageHasBeenSet() const { return m_statusMessageHasBeenSet; }
    template<typename StatusMessageT = Aws::String>
    void SetStatusMessage(StatusMessageT&& value) { m_statusMessageHasBeenSet = true; m_statusMessage = std::forward<StatusMessageT>(value); }
    template<typename StatusMessageT = Aws::String>
    PendingUpdate& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>GetApprovalTeamResponseApprover </code> objects. Contains
     * details for the approvers in the team.</p>
     */
    inline const Aws::Vector<GetApprovalTeamResponseApprover>& GetApprovers() const { return m_approvers; }
    inline bool ApproversHasBeenSet() const { return m_approversHasBeenSet; }
    template<typename ApproversT = Aws::Vector<GetApprovalTeamResponseApprover>>
    void SetApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers = std::forward<ApproversT>(value); }
    template<typename ApproversT = Aws::Vector<GetApprovalTeamResponseApprover>>
    PendingUpdate& WithApprovers(ApproversT&& value) { SetApprovers(std::forward<ApproversT>(value)); return *this;}
    template<typename ApproversT = GetApprovalTeamResponseApprover>
    PendingUpdate& AddApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers.emplace_back(std::forward<ApproversT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Timestamp when the update request was initiated.</p>
     */
    inline const Aws::Utils::DateTime& GetUpdateInitiationTime() const { return m_updateInitiationTime; }
    inline bool UpdateInitiationTimeHasBeenSet() const { return m_updateInitiationTimeHasBeenSet; }
    template<typename UpdateInitiationTimeT = Aws::Utils::DateTime>
    void SetUpdateInitiationTime(UpdateInitiationTimeT&& value) { m_updateInitiationTimeHasBeenSet = true; m_updateInitiationTime = std::forward<UpdateInitiationTimeT>(value); }
    template<typename UpdateInitiationTimeT = Aws::Utils::DateTime>
    PendingUpdate& WithUpdateInitiationTime(UpdateInitiationTimeT&& value) { SetUpdateInitiationTime(std::forward<UpdateInitiationTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_versionId;
    bool m_versionIdHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApprovalStrategyResponse m_approvalStrategy;
    bool m_approvalStrategyHasBeenSet = false;

    int m_numberOfApprovers{0};
    bool m_numberOfApproversHasBeenSet = false;

    ApprovalTeamStatus m_status{ApprovalTeamStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ApprovalTeamStatusCode m_statusCode{ApprovalTeamStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;

    Aws::Vector<GetApprovalTeamResponseApprover> m_approvers;
    bool m_approversHasBeenSet = false;

    Aws::Utils::DateTime m_updateInitiationTime{};
    bool m_updateInitiationTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
