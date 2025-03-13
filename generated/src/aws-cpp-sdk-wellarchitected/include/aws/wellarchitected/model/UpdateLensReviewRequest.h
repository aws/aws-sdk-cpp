/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/JiraSelectedQuestionConfiguration.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input for update lens review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateLensReviewInput">AWS
   * API Reference</a></p>
   */
  class UpdateLensReviewRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateLensReviewRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateLensReview"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    UpdateLensReviewRequest& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    UpdateLensReviewRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensNotes() const { return m_lensNotes; }
    inline bool LensNotesHasBeenSet() const { return m_lensNotesHasBeenSet; }
    template<typename LensNotesT = Aws::String>
    void SetLensNotes(LensNotesT&& value) { m_lensNotesHasBeenSet = true; m_lensNotes = std::forward<LensNotesT>(value); }
    template<typename LensNotesT = Aws::String>
    UpdateLensReviewRequest& WithLensNotes(LensNotesT&& value) { SetLensNotes(std::forward<LensNotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Aws::String, Aws::String>& GetPillarNotes() const { return m_pillarNotes; }
    inline bool PillarNotesHasBeenSet() const { return m_pillarNotesHasBeenSet; }
    template<typename PillarNotesT = Aws::Map<Aws::String, Aws::String>>
    void SetPillarNotes(PillarNotesT&& value) { m_pillarNotesHasBeenSet = true; m_pillarNotes = std::forward<PillarNotesT>(value); }
    template<typename PillarNotesT = Aws::Map<Aws::String, Aws::String>>
    UpdateLensReviewRequest& WithPillarNotes(PillarNotesT&& value) { SetPillarNotes(std::forward<PillarNotesT>(value)); return *this;}
    template<typename PillarNotesKeyT = Aws::String, typename PillarNotesValueT = Aws::String>
    UpdateLensReviewRequest& AddPillarNotes(PillarNotesKeyT&& key, PillarNotesValueT&& value) {
      m_pillarNotesHasBeenSet = true; m_pillarNotes.emplace(std::forward<PillarNotesKeyT>(key), std::forward<PillarNotesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>Configuration of the Jira integration.</p>
     */
    inline const JiraSelectedQuestionConfiguration& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = JiraSelectedQuestionConfiguration>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = JiraSelectedQuestionConfiguration>
    UpdateLensReviewRequest& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensNotes;
    bool m_lensNotesHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_pillarNotes;
    bool m_pillarNotesHasBeenSet = false;

    JiraSelectedQuestionConfiguration m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
