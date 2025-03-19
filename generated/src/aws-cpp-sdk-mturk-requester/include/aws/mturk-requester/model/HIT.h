/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/mturk-requester/model/HITStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/HITReviewStatus.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>
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
namespace MTurk
{
namespace Model
{

  /**
   * <p> The HIT data structure represents a single HIT, including all the
   * information necessary for a Worker to accept and complete the HIT.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mturk-requester-2017-01-17/HIT">AWS
   * API Reference</a></p>
   */
  class HIT
  {
  public:
    AWS_MTURK_API HIT() = default;
    AWS_MTURK_API HIT(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API HIT& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MTURK_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p> A unique identifier for the HIT.</p>
     */
    inline const Aws::String& GetHITId() const { return m_hITId; }
    inline bool HITIdHasBeenSet() const { return m_hITIdHasBeenSet; }
    template<typename HITIdT = Aws::String>
    void SetHITId(HITIdT&& value) { m_hITIdHasBeenSet = true; m_hITId = std::forward<HITIdT>(value); }
    template<typename HITIdT = Aws::String>
    HIT& WithHITId(HITIdT&& value) { SetHITId(std::forward<HITIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the HIT type of this HIT</p>
     */
    inline const Aws::String& GetHITTypeId() const { return m_hITTypeId; }
    inline bool HITTypeIdHasBeenSet() const { return m_hITTypeIdHasBeenSet; }
    template<typename HITTypeIdT = Aws::String>
    void SetHITTypeId(HITTypeIdT&& value) { m_hITTypeIdHasBeenSet = true; m_hITTypeId = std::forward<HITTypeIdT>(value); }
    template<typename HITTypeIdT = Aws::String>
    HIT& WithHITTypeId(HITTypeIdT&& value) { SetHITTypeId(std::forward<HITTypeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the HIT Group of this HIT.</p>
     */
    inline const Aws::String& GetHITGroupId() const { return m_hITGroupId; }
    inline bool HITGroupIdHasBeenSet() const { return m_hITGroupIdHasBeenSet; }
    template<typename HITGroupIdT = Aws::String>
    void SetHITGroupId(HITGroupIdT&& value) { m_hITGroupIdHasBeenSet = true; m_hITGroupId = std::forward<HITGroupIdT>(value); }
    template<typename HITGroupIdT = Aws::String>
    HIT& WithHITGroupId(HITGroupIdT&& value) { SetHITGroupId(std::forward<HITGroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The ID of the HIT Layout of this HIT.</p>
     */
    inline const Aws::String& GetHITLayoutId() const { return m_hITLayoutId; }
    inline bool HITLayoutIdHasBeenSet() const { return m_hITLayoutIdHasBeenSet; }
    template<typename HITLayoutIdT = Aws::String>
    void SetHITLayoutId(HITLayoutIdT&& value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId = std::forward<HITLayoutIdT>(value); }
    template<typename HITLayoutIdT = Aws::String>
    HIT& WithHITLayoutId(HITLayoutIdT&& value) { SetHITLayoutId(std::forward<HITLayoutIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The date and time the HIT was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    HIT& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The title of the HIT.</p>
     */
    inline const Aws::String& GetTitle() const { return m_title; }
    inline bool TitleHasBeenSet() const { return m_titleHasBeenSet; }
    template<typename TitleT = Aws::String>
    void SetTitle(TitleT&& value) { m_titleHasBeenSet = true; m_title = std::forward<TitleT>(value); }
    template<typename TitleT = Aws::String>
    HIT& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> A general description of the HIT.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    HIT& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data the Worker completing the HIT uses produce the results. This is
     * either either a QuestionForm, HTMLQuestion or an ExternalQuestion data
     * structure.</p>
     */
    inline const Aws::String& GetQuestion() const { return m_question; }
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
    template<typename QuestionT = Aws::String>
    void SetQuestion(QuestionT&& value) { m_questionHasBeenSet = true; m_question = std::forward<QuestionT>(value); }
    template<typename QuestionT = Aws::String>
    HIT& WithQuestion(QuestionT&& value) { SetQuestion(std::forward<QuestionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> One or more words or phrases that describe the HIT, separated by commas.
     * Search terms similar to the keywords of a HIT are more likely to have the HIT in
     * the search results.</p>
     */
    inline const Aws::String& GetKeywords() const { return m_keywords; }
    inline bool KeywordsHasBeenSet() const { return m_keywordsHasBeenSet; }
    template<typename KeywordsT = Aws::String>
    void SetKeywords(KeywordsT&& value) { m_keywordsHasBeenSet = true; m_keywords = std::forward<KeywordsT>(value); }
    template<typename KeywordsT = Aws::String>
    HIT& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the HIT and its assignments. Valid Values are Assignable |
     * Unassignable | Reviewable | Reviewing | Disposed. </p>
     */
    inline HITStatus GetHITStatus() const { return m_hITStatus; }
    inline bool HITStatusHasBeenSet() const { return m_hITStatusHasBeenSet; }
    inline void SetHITStatus(HITStatus value) { m_hITStatusHasBeenSet = true; m_hITStatus = value; }
    inline HIT& WithHITStatus(HITStatus value) { SetHITStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline int GetMaxAssignments() const { return m_maxAssignments; }
    inline bool MaxAssignmentsHasBeenSet() const { return m_maxAssignmentsHasBeenSet; }
    inline void SetMaxAssignments(int value) { m_maxAssignmentsHasBeenSet = true; m_maxAssignments = value; }
    inline HIT& WithMaxAssignments(int value) { SetMaxAssignments(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetReward() const { return m_reward; }
    inline bool RewardHasBeenSet() const { return m_rewardHasBeenSet; }
    template<typename RewardT = Aws::String>
    void SetReward(RewardT&& value) { m_rewardHasBeenSet = true; m_reward = std::forward<RewardT>(value); }
    template<typename RewardT = Aws::String>
    HIT& WithReward(RewardT&& value) { SetReward(std::forward<RewardT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time, in seconds, after the Worker submits an assignment for
     * the HIT that the results are automatically approved by Amazon Mechanical Turk.
     * This is the amount of time the Requester has to reject an assignment submitted
     * by a Worker before the assignment is auto-approved and the Worker is paid. </p>
     */
    inline long long GetAutoApprovalDelayInSeconds() const { return m_autoApprovalDelayInSeconds; }
    inline bool AutoApprovalDelayInSecondsHasBeenSet() const { return m_autoApprovalDelayInSecondsHasBeenSet; }
    inline void SetAutoApprovalDelayInSeconds(long long value) { m_autoApprovalDelayInSecondsHasBeenSet = true; m_autoApprovalDelayInSeconds = value; }
    inline HIT& WithAutoApprovalDelayInSeconds(long long value) { SetAutoApprovalDelayInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time the HIT expires.</p>
     */
    inline const Aws::Utils::DateTime& GetExpiration() const { return m_expiration; }
    inline bool ExpirationHasBeenSet() const { return m_expirationHasBeenSet; }
    template<typename ExpirationT = Aws::Utils::DateTime>
    void SetExpiration(ExpirationT&& value) { m_expirationHasBeenSet = true; m_expiration = std::forward<ExpirationT>(value); }
    template<typename ExpirationT = Aws::Utils::DateTime>
    HIT& WithExpiration(ExpirationT&& value) { SetExpiration(std::forward<ExpirationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The length of time, in seconds, that a Worker has to complete the HIT after
     * accepting it.</p>
     */
    inline long long GetAssignmentDurationInSeconds() const { return m_assignmentDurationInSeconds; }
    inline bool AssignmentDurationInSecondsHasBeenSet() const { return m_assignmentDurationInSecondsHasBeenSet; }
    inline void SetAssignmentDurationInSeconds(long long value) { m_assignmentDurationInSecondsHasBeenSet = true; m_assignmentDurationInSeconds = value; }
    inline HIT& WithAssignmentDurationInSeconds(long long value) { SetAssignmentDurationInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An arbitrary data field the Requester who created the HIT can use. This
     * field is visible only to the creator of the HIT.</p>
     */
    inline const Aws::String& GetRequesterAnnotation() const { return m_requesterAnnotation; }
    inline bool RequesterAnnotationHasBeenSet() const { return m_requesterAnnotationHasBeenSet; }
    template<typename RequesterAnnotationT = Aws::String>
    void SetRequesterAnnotation(RequesterAnnotationT&& value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation = std::forward<RequesterAnnotationT>(value); }
    template<typename RequesterAnnotationT = Aws::String>
    HIT& WithRequesterAnnotation(RequesterAnnotationT&& value) { SetRequesterAnnotation(std::forward<RequesterAnnotationT>(value)); return *this;}
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
    HIT& WithQualificationRequirements(QualificationRequirementsT&& value) { SetQualificationRequirements(std::forward<QualificationRequirementsT>(value)); return *this;}
    template<typename QualificationRequirementsT = QualificationRequirement>
    HIT& AddQualificationRequirements(QualificationRequirementsT&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.emplace_back(std::forward<QualificationRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> Indicates the review status of the HIT. Valid Values are NotReviewed |
     * MarkedForReview | ReviewedAppropriate | ReviewedInappropriate.</p>
     */
    inline HITReviewStatus GetHITReviewStatus() const { return m_hITReviewStatus; }
    inline bool HITReviewStatusHasBeenSet() const { return m_hITReviewStatusHasBeenSet; }
    inline void SetHITReviewStatus(HITReviewStatus value) { m_hITReviewStatusHasBeenSet = true; m_hITReviewStatus = value; }
    inline HIT& WithHITReviewStatus(HITReviewStatus value) { SetHITReviewStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of assignments for this HIT that are being previewed or have been
     * accepted by Workers, but have not yet been submitted, returned, or
     * abandoned.</p>
     */
    inline int GetNumberOfAssignmentsPending() const { return m_numberOfAssignmentsPending; }
    inline bool NumberOfAssignmentsPendingHasBeenSet() const { return m_numberOfAssignmentsPendingHasBeenSet; }
    inline void SetNumberOfAssignmentsPending(int value) { m_numberOfAssignmentsPendingHasBeenSet = true; m_numberOfAssignmentsPending = value; }
    inline HIT& WithNumberOfAssignmentsPending(int value) { SetNumberOfAssignmentsPending(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of assignments for this HIT that are available for Workers to
     * accept.</p>
     */
    inline int GetNumberOfAssignmentsAvailable() const { return m_numberOfAssignmentsAvailable; }
    inline bool NumberOfAssignmentsAvailableHasBeenSet() const { return m_numberOfAssignmentsAvailableHasBeenSet; }
    inline void SetNumberOfAssignmentsAvailable(int value) { m_numberOfAssignmentsAvailableHasBeenSet = true; m_numberOfAssignmentsAvailable = value; }
    inline HIT& WithNumberOfAssignmentsAvailable(int value) { SetNumberOfAssignmentsAvailable(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of assignments for this HIT that have been approved or
     * rejected.</p>
     */
    inline int GetNumberOfAssignmentsCompleted() const { return m_numberOfAssignmentsCompleted; }
    inline bool NumberOfAssignmentsCompletedHasBeenSet() const { return m_numberOfAssignmentsCompletedHasBeenSet; }
    inline void SetNumberOfAssignmentsCompleted(int value) { m_numberOfAssignmentsCompletedHasBeenSet = true; m_numberOfAssignmentsCompleted = value; }
    inline HIT& WithNumberOfAssignmentsCompleted(int value) { SetNumberOfAssignmentsCompleted(value); return *this;}
    ///@}
  private:

    Aws::String m_hITId;
    bool m_hITIdHasBeenSet = false;

    Aws::String m_hITTypeId;
    bool m_hITTypeIdHasBeenSet = false;

    Aws::String m_hITGroupId;
    bool m_hITGroupIdHasBeenSet = false;

    Aws::String m_hITLayoutId;
    bool m_hITLayoutIdHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::String m_title;
    bool m_titleHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    Aws::String m_question;
    bool m_questionHasBeenSet = false;

    Aws::String m_keywords;
    bool m_keywordsHasBeenSet = false;

    HITStatus m_hITStatus{HITStatus::NOT_SET};
    bool m_hITStatusHasBeenSet = false;

    int m_maxAssignments{0};
    bool m_maxAssignmentsHasBeenSet = false;

    Aws::String m_reward;
    bool m_rewardHasBeenSet = false;

    long long m_autoApprovalDelayInSeconds{0};
    bool m_autoApprovalDelayInSecondsHasBeenSet = false;

    Aws::Utils::DateTime m_expiration{};
    bool m_expirationHasBeenSet = false;

    long long m_assignmentDurationInSeconds{0};
    bool m_assignmentDurationInSecondsHasBeenSet = false;

    Aws::String m_requesterAnnotation;
    bool m_requesterAnnotationHasBeenSet = false;

    Aws::Vector<QualificationRequirement> m_qualificationRequirements;
    bool m_qualificationRequirementsHasBeenSet = false;

    HITReviewStatus m_hITReviewStatus{HITReviewStatus::NOT_SET};
    bool m_hITReviewStatusHasBeenSet = false;

    int m_numberOfAssignmentsPending{0};
    bool m_numberOfAssignmentsPendingHasBeenSet = false;

    int m_numberOfAssignmentsAvailable{0};
    bool m_numberOfAssignmentsAvailableHasBeenSet = false;

    int m_numberOfAssignmentsCompleted{0};
    bool m_numberOfAssignmentsCompletedHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
