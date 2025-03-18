/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class CreateHITTypeRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API CreateHITTypeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHITType"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The number of seconds after an assignment for the HIT has been submitted,
     * after which the assignment is considered Approved automatically unless the
     * Requester explicitly rejects it. </p>
     */
    inline long long GetAutoApprovalDelayInSeconds() const { return m_autoApprovalDelayInSeconds; }
    inline bool AutoApprovalDelayInSecondsHasBeenSet() const { return m_autoApprovalDelayInSecondsHasBeenSet; }
    inline void SetAutoApprovalDelayInSeconds(long long value) { m_autoApprovalDelayInSecondsHasBeenSet = true; m_autoApprovalDelayInSeconds = value; }
    inline CreateHITTypeRequest& WithAutoApprovalDelayInSeconds(long long value) { SetAutoApprovalDelayInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of time, in seconds, that a Worker has to complete the HIT after
     * accepting it. If a Worker does not complete the assignment within the specified
     * duration, the assignment is considered abandoned. If the HIT is still active
     * (that is, its lifetime has not elapsed), the assignment becomes available for
     * other users to find and accept. </p>
     */
    inline long long GetAssignmentDurationInSeconds() const { return m_assignmentDurationInSeconds; }
    inline bool AssignmentDurationInSecondsHasBeenSet() const { return m_assignmentDurationInSecondsHasBeenSet; }
    inline void SetAssignmentDurationInSeconds(long long value) { m_assignmentDurationInSecondsHasBeenSet = true; m_assignmentDurationInSeconds = value; }
    inline CreateHITTypeRequest& WithAssignmentDurationInSeconds(long long value) { SetAssignmentDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The amount of money the Requester will pay a Worker for successfully
     * completing the HIT. </p>
     */
    inline const Aws::String& GetReward() const { return m_reward; }
    inline bool RewardHasBeenSet() const { return m_rewardHasBeenSet; }
    template<typename RewardT = Aws::String>
    void SetReward(RewardT&& value) { m_rewardHasBeenSet = true; m_reward = std::forward<RewardT>(value); }
    template<typename RewardT = Aws::String>
    CreateHITTypeRequest& WithReward(RewardT&& value) { SetReward(std::forward<RewardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of the HIT. A title should be short and descriptive about the kind
     * of task the HIT contains. On the Amazon Mechanical Turk web site, the HIT title
     * appears in search results, and everywhere the HIT is mentioned. </p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    CreateHITTypeRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * These words are used in searches to find HITs. </p>
     */
    inline const Aws::String& GetKeywords() const { return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    template<typename KeywordsT = Aws::String>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::String>
    CreateHITTypeRequest& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A general description of the HIT. A description includes detailed
     * information about the kind of task the HIT contains. On the Amazon Mechanical
     * Turk web site, the HIT description appears in the expanded view of search
     * results, and in the HIT and assignment screens. A good description gives the
     * user enough information to evaluate the HIT before accepting it. </p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    CreateHITTypeRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> Conditions that a Worker's Qualifications must meet in order to accept the
     * HIT. A HIT can have between zero and ten Qualification requirements. All
     * requirements must be met in order for a Worker to accept the HIT. Additionally,
     * other actions can be restricted using the <code>ActionsGuarded</code> field on
     * each <code>QualificationRequirement</code> structure. </p>
     */
    inline const Aws::Vector<QualificationRequirement>& GetQualificationRequirements() const { return m_qualificationRequirements; }
    inline bool QualificationRequirementsHasBeenSet() const { return m_qualificationRequirementsHasBeenSet; }
    template<typename QualificationRequirementsT = Aws::Vector<QualificationRequirement>>
    void SetQualificationRequirements(QualificationRequirementsT&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements = std::forward<QualificationRequirementsT>(value); }
    template<typename QualificationRequirementsT = Aws::Vector<QualificationRequirement>>
    CreateHITTypeRequest& WithQualificationRequirements(QualificationRequirementsT&& value) { SetQualificationRequirements(std::forward<QualificationRequirementsT>(value)); return *this;}
    template<typename QualificationRequirementsT = QualificationRequirement>
    CreateHITTypeRequest& AddQualificationRequirements(QualificationRequirementsT&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.emplace_back(std::forward<QualificationRequirementsT>(value)); return *this; }
    ///@}
  private:

    long long m_autoApprovalDelayInSeconds{0};
    bool m_autoApprovalDelayInSecondsHasBeenSet = false;

    long long m_assignmentDurationInSeconds{0};
    bool m_assignmentDurationInSecondsHasBeenSet = false;

    Aws::String m_reward;
    bool m_rewardHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::Vector<QualificationRequirement> m_qualificationRequirements;
    bool m_qualificationRequirementsHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
