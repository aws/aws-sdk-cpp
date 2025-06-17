/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mpa/model/ApprovalStrategyResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/ApprovalTeamStatus.h>
#include <aws/mpa/model/ApprovalTeamStatusCode.h>
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
   * <p>Contains details for an approval team</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mpa-2022-07-26/ListApprovalTeamsResponseApprovalTeam">AWS
   * API Reference</a></p>
   */
  class ListApprovalTeamsResponseApprovalTeam
  {
  public:
    AWS_MPA_API ListApprovalTeamsResponseApprovalTeam() = default;
    AWS_MPA_API ListApprovalTeamsResponseApprovalTeam(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API ListApprovalTeamsResponseApprovalTeam& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MPA_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Timestamp when the team was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ListApprovalTeamsResponseApprovalTeam& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An <code>ApprovalStrategyResponse</code> object. Contains details for how an
     * approval team grants approval.</p>
     */
    inline const ApprovalStrategyResponse& GetApprovalStrategy() const { return m_approvalStrategy; }
    inline bool ApprovalStrategyHasBeenSet() const { return m_approvalStrategyHasBeenSet; }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    void SetApprovalStrategy(ApprovalStrategyT&& value) { m_approvalStrategyHasBeenSet = true; m_approvalStrategy = std::forward<ApprovalStrategyT>(value); }
    template<typename ApprovalStrategyT = ApprovalStrategyResponse>
    ListApprovalTeamsResponseApprovalTeam& WithApprovalStrategy(ApprovalStrategyT&& value) { SetApprovalStrategy(std::forward<ApprovalStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Total number of approvers in the team.</p>
     */
    inline int GetNumberOfApprovers() const { return m_numberOfApprovers; }
    inline bool NumberOfApproversHasBeenSet() const { return m_numberOfApproversHasBeenSet; }
    inline void SetNumberOfApprovers(int value) { m_numberOfApproversHasBeenSet = true; m_numberOfApprovers = value; }
    inline ListApprovalTeamsResponseApprovalTeam& WithNumberOfApprovers(int value) { SetNumberOfApprovers(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Amazon Resource Name (ARN) for the team.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    ListApprovalTeamsResponseApprovalTeam& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Name of the team.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    ListApprovalTeamsResponseApprovalTeam& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
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
    ListApprovalTeamsResponseApprovalTeam& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    inline ListApprovalTeamsResponseApprovalTeam& WithStatus(ApprovalTeamStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Status code for the team. For more information, see <a
     * href="https://docs.aws.amazon.com/mpa/latest/userguide/mpa-health.html">Team
     * health</a> in the <i>Multi-party approval User Guide</i>.</p>
     */
    inline ApprovalTeamStatusCode GetStatusCode() const { return m_statusCode; }
    inline bool StatusCodeHasBeenSet() const { return m_statusCodeHasBeenSet; }
    inline void SetStatusCode(ApprovalTeamStatusCode value) { m_statusCodeHasBeenSet = true; m_statusCode = value; }
    inline ListApprovalTeamsResponseApprovalTeam& WithStatusCode(ApprovalTeamStatusCode value) { SetStatusCode(value); return *this;}
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
    ListApprovalTeamsResponseApprovalTeam& WithStatusMessage(StatusMessageT&& value) { SetStatusMessage(std::forward<StatusMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    ApprovalStrategyResponse m_approvalStrategy;
    bool m_approvalStrategyHasBeenSet = false;

    int m_numberOfApprovers{0};
    bool m_numberOfApproversHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    ApprovalTeamStatus m_status{ApprovalTeamStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ApprovalTeamStatusCode m_statusCode{ApprovalTeamStatusCode::NOT_SET};
    bool m_statusCodeHasBeenSet = false;

    Aws::String m_statusMessage;
    bool m_statusMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
