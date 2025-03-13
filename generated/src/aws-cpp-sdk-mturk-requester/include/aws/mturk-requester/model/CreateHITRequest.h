/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mturk-requester/MTurk_EXPORTS.h>
#include <aws/mturk-requester/MTurkRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/mturk-requester/model/ReviewPolicy.h>
#include <aws/mturk-requester/model/QualificationRequirement.h>
#include <aws/mturk-requester/model/HITLayoutParameter.h>
#include <utility>

namespace Aws
{
namespace MTurk
{
namespace Model
{

  /**
   */
  class CreateHITRequest : public MTurkRequest
  {
  public:
    AWS_MTURK_API CreateHITRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateHIT"; }

    AWS_MTURK_API Aws::String SerializePayload() const override;

    AWS_MTURK_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The number of times the HIT can be accepted and completed before the HIT
     * becomes unavailable. </p>
     */
    inline int GetMaxAssignments() const { return m_maxAssignments; }
    inline bool MaxAssignmentsHasBeenSet() const { return m_maxAssignmentsHasBeenSet; }
    inline void SetMaxAssignments(int value) { m_maxAssignmentsHasBeenSet = true; m_maxAssignments = value; }
    inline CreateHITRequest& WithMaxAssignments(int value) { SetMaxAssignments(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The number of seconds after an assignment for the HIT has been submitted,
     * after which the assignment is considered Approved automatically unless the
     * Requester explicitly rejects it. </p>
     */
    inline long long GetAutoApprovalDelayInSeconds() const { return m_autoApprovalDelayInSeconds; }
    inline bool AutoApprovalDelayInSecondsHasBeenSet() const { return m_autoApprovalDelayInSecondsHasBeenSet; }
    inline void SetAutoApprovalDelayInSeconds(long long value) { m_autoApprovalDelayInSecondsHasBeenSet = true; m_autoApprovalDelayInSeconds = value; }
    inline CreateHITRequest& WithAutoApprovalDelayInSeconds(long long value) { SetAutoApprovalDelayInSeconds(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> An amount of time, in seconds, after which the HIT is no longer available
     * for users to accept. After the lifetime of the HIT elapses, the HIT no longer
     * appears in HIT searches, even if not all of the assignments for the HIT have
     * been accepted. </p>
     */
    inline long long GetLifetimeInSeconds() const { return m_lifetimeInSeconds; }
    inline bool LifetimeInSecondsHasBeenSet() const { return m_lifetimeInSecondsHasBeenSet; }
    inline void SetLifetimeInSeconds(long long value) { m_lifetimeInSecondsHasBeenSet = true; m_lifetimeInSeconds = value; }
    inline CreateHITRequest& WithLifetimeInSeconds(long long value) { SetLifetimeInSeconds(value); return *this;}
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
    inline CreateHITRequest& WithAssignmentDurationInSeconds(long long value) { SetAssignmentDurationInSeconds(value); return *this;}
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
    CreateHITRequest& WithReward(RewardT&& value) { SetReward(std::forward<RewardT>(value)); return *this;}
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
    CreateHITRequest& WithTitle(TitleT&& value) { SetTitle(std::forward<TitleT>(value)); return *this;}
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
    CreateHITRequest& WithKeywords(KeywordsT&& value) { SetKeywords(std::forward<KeywordsT>(value)); return *this;}
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
    CreateHITRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The data the person completing the HIT uses to produce the results. </p> <p>
     * Constraints: Must be a QuestionForm data structure, an ExternalQuestion data
     * structure, or an HTMLQuestion data structure. The XML question data must not be
     * larger than 64 kilobytes (65,535 bytes) in size, including whitespace. </p>
     * <p>Either a Question parameter or a HITLayoutId parameter must be provided.</p>
     */
    inline const Aws::String& GetQuestion() const { return m_question; }
    inline bool QuestionHasBeenSet() const { return m_questionHasBeenSet; }
    template<typename QuestionT = Aws::String>
    void SetQuestion(QuestionT&& value) { m_questionHasBeenSet = true; m_question = std::forward<QuestionT>(value); }
    template<typename QuestionT = Aws::String>
    CreateHITRequest& WithQuestion(QuestionT&& value) { SetQuestion(std::forward<QuestionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> An arbitrary data field. The RequesterAnnotation parameter lets your
     * application attach arbitrary data to the HIT for tracking purposes. For example,
     * this parameter could be an identifier internal to the Requester's application
     * that corresponds with the HIT. </p> <p> The RequesterAnnotation parameter for a
     * HIT is only visible to the Requester who created the HIT. It is not shown to the
     * Worker, or any other Requester. </p> <p> The RequesterAnnotation parameter may
     * be different for each HIT you submit. It does not affect how your HITs are
     * grouped. </p>
     */
    inline const Aws::String& GetRequesterAnnotation() const { return m_requesterAnnotation; }
    inline bool RequesterAnnotationHasBeenSet() const { return m_requesterAnnotationHasBeenSet; }
    template<typename RequesterAnnotationT = Aws::String>
    void SetRequesterAnnotation(RequesterAnnotationT&& value) { m_requesterAnnotationHasBeenSet = true; m_requesterAnnotation = std::forward<RequesterAnnotationT>(value); }
    template<typename RequesterAnnotationT = Aws::String>
    CreateHITRequest& WithRequesterAnnotation(RequesterAnnotationT&& value) { SetRequesterAnnotation(std::forward<RequesterAnnotationT>(value)); return *this;}
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
    CreateHITRequest& WithQualificationRequirements(QualificationRequirementsT&& value) { SetQualificationRequirements(std::forward<QualificationRequirementsT>(value)); return *this;}
    template<typename QualificationRequirementsT = QualificationRequirement>
    CreateHITRequest& AddQualificationRequirements(QualificationRequirementsT&& value) { m_qualificationRequirementsHasBeenSet = true; m_qualificationRequirements.emplace_back(std::forward<QualificationRequirementsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> A unique identifier for this request which allows you to retry the call on
     * error without creating duplicate HITs. This is useful in cases such as network
     * timeouts where it is unclear whether or not the call succeeded on the server. If
     * the HIT already exists in the system from a previous call using the same
     * UniqueRequestToken, subsequent calls will return a
     * AWS.MechanicalTurk.HitAlreadyExists error with a message containing the HITId.
     * </p>  <p> Note: It is your responsibility to ensure uniqueness of the
     * token. The unique token expires after 24 hours. Subsequent calls using the same
     * UniqueRequestToken made after the 24 hour limit could create duplicate HITs.
     * </p> 
     */
    inline const Aws::String& GetUniqueRequestToken() const { return m_uniqueRequestToken; }
    inline bool UniqueRequestTokenHasBeenSet() const { return m_uniqueRequestTokenHasBeenSet; }
    template<typename UniqueRequestTokenT = Aws::String>
    void SetUniqueRequestToken(UniqueRequestTokenT&& value) { m_uniqueRequestTokenHasBeenSet = true; m_uniqueRequestToken = std::forward<UniqueRequestTokenT>(value); }
    template<typename UniqueRequestTokenT = Aws::String>
    CreateHITRequest& WithUniqueRequestToken(UniqueRequestTokenT&& value) { SetUniqueRequestToken(std::forward<UniqueRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The Assignment-level Review Policy applies to the assignments under the HIT.
     * You can specify for Mechanical Turk to take various actions based on the policy.
     * </p>
     */
    inline const ReviewPolicy& GetAssignmentReviewPolicy() const { return m_assignmentReviewPolicy; }
    inline bool AssignmentReviewPolicyHasBeenSet() const { return m_assignmentReviewPolicyHasBeenSet; }
    template<typename AssignmentReviewPolicyT = ReviewPolicy>
    void SetAssignmentReviewPolicy(AssignmentReviewPolicyT&& value) { m_assignmentReviewPolicyHasBeenSet = true; m_assignmentReviewPolicy = std::forward<AssignmentReviewPolicyT>(value); }
    template<typename AssignmentReviewPolicyT = ReviewPolicy>
    CreateHITRequest& WithAssignmentReviewPolicy(AssignmentReviewPolicyT&& value) { SetAssignmentReviewPolicy(std::forward<AssignmentReviewPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The HIT-level Review Policy applies to the HIT. You can specify for
     * Mechanical Turk to take various actions based on the policy. </p>
     */
    inline const ReviewPolicy& GetHITReviewPolicy() const { return m_hITReviewPolicy; }
    inline bool HITReviewPolicyHasBeenSet() const { return m_hITReviewPolicyHasBeenSet; }
    template<typename HITReviewPolicyT = ReviewPolicy>
    void SetHITReviewPolicy(HITReviewPolicyT&& value) { m_hITReviewPolicyHasBeenSet = true; m_hITReviewPolicy = std::forward<HITReviewPolicyT>(value); }
    template<typename HITReviewPolicyT = ReviewPolicy>
    CreateHITRequest& WithHITReviewPolicy(HITReviewPolicyT&& value) { SetHITReviewPolicy(std::forward<HITReviewPolicyT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The HITLayoutId allows you to use a pre-existing HIT design with placeholder
     * values and create an additional HIT by providing those values as
     * HITLayoutParameters. </p> <p> Constraints: Either a Question parameter or a
     * HITLayoutId parameter must be provided. </p>
     */
    inline const Aws::String& GetHITLayoutId() const { return m_hITLayoutId; }
    inline bool HITLayoutIdHasBeenSet() const { return m_hITLayoutIdHasBeenSet; }
    template<typename HITLayoutIdT = Aws::String>
    void SetHITLayoutId(HITLayoutIdT&& value) { m_hITLayoutIdHasBeenSet = true; m_hITLayoutId = std::forward<HITLayoutIdT>(value); }
    template<typename HITLayoutIdT = Aws::String>
    CreateHITRequest& WithHITLayoutId(HITLayoutIdT&& value) { SetHITLayoutId(std::forward<HITLayoutIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> If the HITLayoutId is provided, any placeholder values must be filled in
     * with values using the HITLayoutParameter structure. For more information, see
     * HITLayout. </p>
     */
    inline const Aws::Vector<HITLayoutParameter>& GetHITLayoutParameters() const { return m_hITLayoutParameters; }
    inline bool HITLayoutParametersHasBeenSet() const { return m_hITLayoutParametersHasBeenSet; }
    template<typename HITLayoutParametersT = Aws::Vector<HITLayoutParameter>>
    void SetHITLayoutParameters(HITLayoutParametersT&& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters = std::forward<HITLayoutParametersT>(value); }
    template<typename HITLayoutParametersT = Aws::Vector<HITLayoutParameter>>
    CreateHITRequest& WithHITLayoutParameters(HITLayoutParametersT&& value) { SetHITLayoutParameters(std::forward<HITLayoutParametersT>(value)); return *this;}
    template<typename HITLayoutParametersT = HITLayoutParameter>
    CreateHITRequest& AddHITLayoutParameters(HITLayoutParametersT&& value) { m_hITLayoutParametersHasBeenSet = true; m_hITLayoutParameters.emplace_back(std::forward<HITLayoutParametersT>(value)); return *this; }
    ///@}
  private:

    int m_maxAssignments{0};
    bool m_maxAssignmentsHasBeenSet = false;

    long long m_autoApprovalDelayInSeconds{0};
    bool m_autoApprovalDelayInSecondsHasBeenSet = false;

    long long m_lifetimeInSeconds{0};
    bool m_lifetimeInSecondsHasBeenSet = false;

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

    Aws::String m_question;
    bool m_questionHasBeenSet = false;

    Aws::String m_requesterAnnotation;
    bool m_requesterAnnotationHasBeenSet = false;

    Aws::Vector<QualificationRequirement> m_qualificationRequirements;
    bool m_qualificationRequirementsHasBeenSet = false;

    Aws::String m_uniqueRequestToken;
    bool m_uniqueRequestTokenHasBeenSet = false;

    ReviewPolicy m_assignmentReviewPolicy;
    bool m_assignmentReviewPolicyHasBeenSet = false;

    ReviewPolicy m_hITReviewPolicy;
    bool m_hITReviewPolicyHasBeenSet = false;

    Aws::String m_hITLayoutId;
    bool m_hITLayoutIdHasBeenSet = false;

    Aws::Vector<HITLayoutParameter> m_hITLayoutParameters;
    bool m_hITLayoutParametersHasBeenSet = false;
  };

} // namespace Model
} // namespace MTurk
} // namespace Aws
