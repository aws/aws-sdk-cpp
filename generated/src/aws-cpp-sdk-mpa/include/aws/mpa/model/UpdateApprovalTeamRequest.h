/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mpa/MPA_EXPORTS.h>
#include <aws/mpa/MPARequest.h>
#include <aws/mpa/model/ApprovalStrategy.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mpa/model/ApprovalTeamRequestApprover.h>
#include <utility>

namespace Aws
{
namespace MPA
{
namespace Model
{

  /**
   */
  class UpdateApprovalTeamRequest : public MPARequest
  {
  public:
    AWS_MPA_API UpdateApprovalTeamRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateApprovalTeam"; }

    AWS_MPA_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>An <code>ApprovalStrategy</code> object. Contains details for how the team
     * grants approval.</p>
     */
    inline const ApprovalStrategy& GetApprovalStrategy() const { return m_approvalStrategy; }
    inline bool ApprovalStrategyHasBeenSet() const { return m_approvalStrategyHasBeenSet; }
    template<typename ApprovalStrategyT = ApprovalStrategy>
    void SetApprovalStrategy(ApprovalStrategyT&& value) { m_approvalStrategyHasBeenSet = true; m_approvalStrategy = std::forward<ApprovalStrategyT>(value); }
    template<typename ApprovalStrategyT = ApprovalStrategy>
    UpdateApprovalTeamRequest& WithApprovalStrategy(ApprovalStrategyT&& value) { SetApprovalStrategy(std::forward<ApprovalStrategyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An array of <code>ApprovalTeamRequestApprover</code> objects. Contains
     * details for the approvers in the team.</p>
     */
    inline const Aws::Vector<ApprovalTeamRequestApprover>& GetApprovers() const { return m_approvers; }
    inline bool ApproversHasBeenSet() const { return m_approversHasBeenSet; }
    template<typename ApproversT = Aws::Vector<ApprovalTeamRequestApprover>>
    void SetApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers = std::forward<ApproversT>(value); }
    template<typename ApproversT = Aws::Vector<ApprovalTeamRequestApprover>>
    UpdateApprovalTeamRequest& WithApprovers(ApproversT&& value) { SetApprovers(std::forward<ApproversT>(value)); return *this;}
    template<typename ApproversT = ApprovalTeamRequestApprover>
    UpdateApprovalTeamRequest& AddApprovers(ApproversT&& value) { m_approversHasBeenSet = true; m_approvers.emplace_back(std::forward<ApproversT>(value)); return *this; }
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
    UpdateApprovalTeamRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
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
    UpdateApprovalTeamRequest& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}
  private:

    ApprovalStrategy m_approvalStrategy;
    bool m_approvalStrategyHasBeenSet = false;

    Aws::Vector<ApprovalTeamRequestApprover> m_approvers;
    bool m_approversHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;
  };

} // namespace Model
} // namespace MPA
} // namespace Aws
