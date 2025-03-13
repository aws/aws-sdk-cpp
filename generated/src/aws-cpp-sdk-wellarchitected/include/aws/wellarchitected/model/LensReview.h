/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/JiraSelectedQuestionConfiguration.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/PillarReviewSummary.h>
#include <aws/wellarchitected/model/Risk.h>
#include <aws/wellarchitected/model/WorkloadProfile.h>
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
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>A lens review of a question.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/LensReview">AWS
   * API Reference</a></p>
   */
  class LensReview
  {
  public:
    AWS_WELLARCHITECTED_API LensReview() = default;
    AWS_WELLARCHITECTED_API LensReview(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API LensReview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    LensReview& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    LensReview& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const { return m_lensVersion; }
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }
    template<typename LensVersionT = Aws::String>
    void SetLensVersion(LensVersionT&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::forward<LensVersionT>(value); }
    template<typename LensVersionT = Aws::String>
    LensReview& WithLensVersion(LensVersionT&& value) { SetLensVersion(std::forward<LensVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensName() const { return m_lensName; }
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }
    template<typename LensNameT = Aws::String>
    void SetLensName(LensNameT&& value) { m_lensNameHasBeenSet = true; m_lensName = std::forward<LensNameT>(value); }
    template<typename LensNameT = Aws::String>
    LensReview& WithLensName(LensNameT&& value) { SetLensName(std::forward<LensNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lens.</p>
     */
    inline LensStatus GetLensStatus() const { return m_lensStatus; }
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }
    inline void SetLensStatus(LensStatus value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }
    inline LensReview& WithLensStatus(LensStatus value) { SetLensStatus(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<PillarReviewSummary>& GetPillarReviewSummaries() const { return m_pillarReviewSummaries; }
    inline bool PillarReviewSummariesHasBeenSet() const { return m_pillarReviewSummariesHasBeenSet; }
    template<typename PillarReviewSummariesT = Aws::Vector<PillarReviewSummary>>
    void SetPillarReviewSummaries(PillarReviewSummariesT&& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries = std::forward<PillarReviewSummariesT>(value); }
    template<typename PillarReviewSummariesT = Aws::Vector<PillarReviewSummary>>
    LensReview& WithPillarReviewSummaries(PillarReviewSummariesT&& value) { SetPillarReviewSummaries(std::forward<PillarReviewSummariesT>(value)); return *this;}
    template<typename PillarReviewSummariesT = PillarReviewSummary>
    LensReview& AddPillarReviewSummaries(PillarReviewSummariesT&& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries.emplace_back(std::forward<PillarReviewSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Jira configuration status of the Lens review.</p>
     */
    inline const JiraSelectedQuestionConfiguration& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = JiraSelectedQuestionConfiguration>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = JiraSelectedQuestionConfiguration>
    LensReview& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    LensReview& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    LensReview& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const { return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    void SetRiskCounts(RiskCountsT&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::forward<RiskCountsT>(value); }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    LensReview& WithRiskCounts(RiskCountsT&& value) { SetRiskCounts(std::forward<RiskCountsT>(value)); return *this;}
    inline LensReview& AddRiskCounts(Risk key, int value) {
      m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    LensReview& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The profiles associated with the workload.</p>
     */
    inline const Aws::Vector<WorkloadProfile>& GetProfiles() const { return m_profiles; }
    inline bool ProfilesHasBeenSet() const { return m_profilesHasBeenSet; }
    template<typename ProfilesT = Aws::Vector<WorkloadProfile>>
    void SetProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles = std::forward<ProfilesT>(value); }
    template<typename ProfilesT = Aws::Vector<WorkloadProfile>>
    LensReview& WithProfiles(ProfilesT&& value) { SetProfiles(std::forward<ProfilesT>(value)); return *this;}
    template<typename ProfilesT = WorkloadProfile>
    LensReview& AddProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles.emplace_back(std::forward<ProfilesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetPrioritizedRiskCounts() const { return m_prioritizedRiskCounts; }
    inline bool PrioritizedRiskCountsHasBeenSet() const { return m_prioritizedRiskCountsHasBeenSet; }
    template<typename PrioritizedRiskCountsT = Aws::Map<Risk, int>>
    void SetPrioritizedRiskCounts(PrioritizedRiskCountsT&& value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts = std::forward<PrioritizedRiskCountsT>(value); }
    template<typename PrioritizedRiskCountsT = Aws::Map<Risk, int>>
    LensReview& WithPrioritizedRiskCounts(PrioritizedRiskCountsT&& value) { SetPrioritizedRiskCounts(std::forward<PrioritizedRiskCountsT>(value)); return *this;}
    inline LensReview& AddPrioritizedRiskCounts(Risk key, int value) {
      m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;

    LensStatus m_lensStatus{LensStatus::NOT_SET};
    bool m_lensStatusHasBeenSet = false;

    Aws::Vector<PillarReviewSummary> m_pillarReviewSummaries;
    bool m_pillarReviewSummariesHasBeenSet = false;

    JiraSelectedQuestionConfiguration m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<WorkloadProfile> m_profiles;
    bool m_profilesHasBeenSet = false;

    Aws::Map<Risk, int> m_prioritizedRiskCounts;
    bool m_prioritizedRiskCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
