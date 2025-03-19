/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/WorkloadEnvironment.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/WorkloadImprovementStatus.h>
#include <aws/wellarchitected/model/WorkloadDiscoveryConfig.h>
#include <aws/wellarchitected/model/WorkloadJiraConfigurationInput.h>
#include <utility>

namespace Aws
{
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to update a workload.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/UpdateWorkloadInput">AWS
   * API Reference</a></p>
   */
  class UpdateWorkloadRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API UpdateWorkloadRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateWorkload"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    UpdateWorkloadRequest& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    UpdateWorkloadRequest& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetDescription() const { return m_description; }
    inline bool DescriptionHasBeenSet() const { return m_descriptionHasBeenSet; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    UpdateWorkloadRequest& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline WorkloadEnvironment GetEnvironment() const { return m_environment; }
    inline bool EnvironmentHasBeenSet() const { return m_environmentHasBeenSet; }
    inline void SetEnvironment(WorkloadEnvironment value) { m_environmentHasBeenSet = true; m_environment = value; }
    inline UpdateWorkloadRequest& WithEnvironment(WorkloadEnvironment value) { SetEnvironment(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAccountIds() const { return m_accountIds; }
    inline bool AccountIdsHasBeenSet() const { return m_accountIdsHasBeenSet; }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    void SetAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds = std::forward<AccountIdsT>(value); }
    template<typename AccountIdsT = Aws::Vector<Aws::String>>
    UpdateWorkloadRequest& WithAccountIds(AccountIdsT&& value) { SetAccountIds(std::forward<AccountIdsT>(value)); return *this;}
    template<typename AccountIdsT = Aws::String>
    UpdateWorkloadRequest& AddAccountIds(AccountIdsT&& value) { m_accountIdsHasBeenSet = true; m_accountIds.emplace_back(std::forward<AccountIdsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetAwsRegions() const { return m_awsRegions; }
    inline bool AwsRegionsHasBeenSet() const { return m_awsRegionsHasBeenSet; }
    template<typename AwsRegionsT = Aws::Vector<Aws::String>>
    void SetAwsRegions(AwsRegionsT&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions = std::forward<AwsRegionsT>(value); }
    template<typename AwsRegionsT = Aws::Vector<Aws::String>>
    UpdateWorkloadRequest& WithAwsRegions(AwsRegionsT&& value) { SetAwsRegions(std::forward<AwsRegionsT>(value)); return *this;}
    template<typename AwsRegionsT = Aws::String>
    UpdateWorkloadRequest& AddAwsRegions(AwsRegionsT&& value) { m_awsRegionsHasBeenSet = true; m_awsRegions.emplace_back(std::forward<AwsRegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetNonAwsRegions() const { return m_nonAwsRegions; }
    inline bool NonAwsRegionsHasBeenSet() const { return m_nonAwsRegionsHasBeenSet; }
    template<typename NonAwsRegionsT = Aws::Vector<Aws::String>>
    void SetNonAwsRegions(NonAwsRegionsT&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions = std::forward<NonAwsRegionsT>(value); }
    template<typename NonAwsRegionsT = Aws::Vector<Aws::String>>
    UpdateWorkloadRequest& WithNonAwsRegions(NonAwsRegionsT&& value) { SetNonAwsRegions(std::forward<NonAwsRegionsT>(value)); return *this;}
    template<typename NonAwsRegionsT = Aws::String>
    UpdateWorkloadRequest& AddNonAwsRegions(NonAwsRegionsT&& value) { m_nonAwsRegionsHasBeenSet = true; m_nonAwsRegions.emplace_back(std::forward<NonAwsRegionsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetPillarPriorities() const { return m_pillarPriorities; }
    inline bool PillarPrioritiesHasBeenSet() const { return m_pillarPrioritiesHasBeenSet; }
    template<typename PillarPrioritiesT = Aws::Vector<Aws::String>>
    void SetPillarPriorities(PillarPrioritiesT&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities = std::forward<PillarPrioritiesT>(value); }
    template<typename PillarPrioritiesT = Aws::Vector<Aws::String>>
    UpdateWorkloadRequest& WithPillarPriorities(PillarPrioritiesT&& value) { SetPillarPriorities(std::forward<PillarPrioritiesT>(value)); return *this;}
    template<typename PillarPrioritiesT = Aws::String>
    UpdateWorkloadRequest& AddPillarPriorities(PillarPrioritiesT&& value) { m_pillarPrioritiesHasBeenSet = true; m_pillarPriorities.emplace_back(std::forward<PillarPrioritiesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetArchitecturalDesign() const { return m_architecturalDesign; }
    inline bool ArchitecturalDesignHasBeenSet() const { return m_architecturalDesignHasBeenSet; }
    template<typename ArchitecturalDesignT = Aws::String>
    void SetArchitecturalDesign(ArchitecturalDesignT&& value) { m_architecturalDesignHasBeenSet = true; m_architecturalDesign = std::forward<ArchitecturalDesignT>(value); }
    template<typename ArchitecturalDesignT = Aws::String>
    UpdateWorkloadRequest& WithArchitecturalDesign(ArchitecturalDesignT&& value) { SetArchitecturalDesign(std::forward<ArchitecturalDesignT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetReviewOwner() const { return m_reviewOwner; }
    inline bool ReviewOwnerHasBeenSet() const { return m_reviewOwnerHasBeenSet; }
    template<typename ReviewOwnerT = Aws::String>
    void SetReviewOwner(ReviewOwnerT&& value) { m_reviewOwnerHasBeenSet = true; m_reviewOwner = std::forward<ReviewOwnerT>(value); }
    template<typename ReviewOwnerT = Aws::String>
    UpdateWorkloadRequest& WithReviewOwner(ReviewOwnerT&& value) { SetReviewOwner(std::forward<ReviewOwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Flag indicating whether the workload owner has acknowledged that the
     * <i>Review owner</i> field is required.</p> <p>If a <b>Review owner</b> is not
     * added to the workload within 60 days of acknowledgement, access to the workload
     * is restricted until an owner is added.</p>
     */
    inline bool GetIsReviewOwnerUpdateAcknowledged() const { return m_isReviewOwnerUpdateAcknowledged; }
    inline bool IsReviewOwnerUpdateAcknowledgedHasBeenSet() const { return m_isReviewOwnerUpdateAcknowledgedHasBeenSet; }
    inline void SetIsReviewOwnerUpdateAcknowledged(bool value) { m_isReviewOwnerUpdateAcknowledgedHasBeenSet = true; m_isReviewOwnerUpdateAcknowledged = value; }
    inline UpdateWorkloadRequest& WithIsReviewOwnerUpdateAcknowledged(bool value) { SetIsReviewOwnerUpdateAcknowledged(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetIndustryType() const { return m_industryType; }
    inline bool IndustryTypeHasBeenSet() const { return m_industryTypeHasBeenSet; }
    template<typename IndustryTypeT = Aws::String>
    void SetIndustryType(IndustryTypeT&& value) { m_industryTypeHasBeenSet = true; m_industryType = std::forward<IndustryTypeT>(value); }
    template<typename IndustryTypeT = Aws::String>
    UpdateWorkloadRequest& WithIndustryType(IndustryTypeT&& value) { SetIndustryType(std::forward<IndustryTypeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetIndustry() const { return m_industry; }
    inline bool IndustryHasBeenSet() const { return m_industryHasBeenSet; }
    template<typename IndustryT = Aws::String>
    void SetIndustry(IndustryT&& value) { m_industryHasBeenSet = true; m_industry = std::forward<IndustryT>(value); }
    template<typename IndustryT = Aws::String>
    UpdateWorkloadRequest& WithIndustry(IndustryT&& value) { SetIndustry(std::forward<IndustryT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    UpdateWorkloadRequest& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline WorkloadImprovementStatus GetImprovementStatus() const { return m_improvementStatus; }
    inline bool ImprovementStatusHasBeenSet() const { return m_improvementStatusHasBeenSet; }
    inline void SetImprovementStatus(WorkloadImprovementStatus value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = value; }
    inline UpdateWorkloadRequest& WithImprovementStatus(WorkloadImprovementStatus value) { SetImprovementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Well-Architected discovery configuration settings to associate to the
     * workload.</p>
     */
    inline const WorkloadDiscoveryConfig& GetDiscoveryConfig() const { return m_discoveryConfig; }
    inline bool DiscoveryConfigHasBeenSet() const { return m_discoveryConfigHasBeenSet; }
    template<typename DiscoveryConfigT = WorkloadDiscoveryConfig>
    void SetDiscoveryConfig(DiscoveryConfigT&& value) { m_discoveryConfigHasBeenSet = true; m_discoveryConfig = std::forward<DiscoveryConfigT>(value); }
    template<typename DiscoveryConfigT = WorkloadDiscoveryConfig>
    UpdateWorkloadRequest& WithDiscoveryConfig(DiscoveryConfigT&& value) { SetDiscoveryConfig(std::forward<DiscoveryConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>List of AppRegistry application ARNs to associate to the workload.</p>
     */
    inline const Aws::Vector<Aws::String>& GetApplications() const { return m_applications; }
    inline bool ApplicationsHasBeenSet() const { return m_applicationsHasBeenSet; }
    template<typename ApplicationsT = Aws::Vector<Aws::String>>
    void SetApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications = std::forward<ApplicationsT>(value); }
    template<typename ApplicationsT = Aws::Vector<Aws::String>>
    UpdateWorkloadRequest& WithApplications(ApplicationsT&& value) { SetApplications(std::forward<ApplicationsT>(value)); return *this;}
    template<typename ApplicationsT = Aws::String>
    UpdateWorkloadRequest& AddApplications(ApplicationsT&& value) { m_applicationsHasBeenSet = true; m_applications.emplace_back(std::forward<ApplicationsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>Configuration of the Jira integration.</p>
     */
    inline const WorkloadJiraConfigurationInput& GetJiraConfiguration() const { return m_jiraConfiguration; }
    inline bool JiraConfigurationHasBeenSet() const { return m_jiraConfigurationHasBeenSet; }
    template<typename JiraConfigurationT = WorkloadJiraConfigurationInput>
    void SetJiraConfiguration(JiraConfigurationT&& value) { m_jiraConfigurationHasBeenSet = true; m_jiraConfiguration = std::forward<JiraConfigurationT>(value); }
    template<typename JiraConfigurationT = WorkloadJiraConfigurationInput>
    UpdateWorkloadRequest& WithJiraConfiguration(JiraConfigurationT&& value) { SetJiraConfiguration(std::forward<JiraConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    WorkloadEnvironment m_environment{WorkloadEnvironment::NOT_SET};
    bool m_environmentHasBeenSet = false;

    Aws::Vector<Aws::String> m_accountIds;
    bool m_accountIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_awsRegions;
    bool m_awsRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_nonAwsRegions;
    bool m_nonAwsRegionsHasBeenSet = false;

    Aws::Vector<Aws::String> m_pillarPriorities;
    bool m_pillarPrioritiesHasBeenSet = false;

    Aws::String m_architecturalDesign;
    bool m_architecturalDesignHasBeenSet = false;

    Aws::String m_reviewOwner;
    bool m_reviewOwnerHasBeenSet = false;

    bool m_isReviewOwnerUpdateAcknowledged{false};
    bool m_isReviewOwnerUpdateAcknowledgedHasBeenSet = false;

    Aws::String m_industryType;
    bool m_industryTypeHasBeenSet = false;

    Aws::String m_industry;
    bool m_industryHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    WorkloadImprovementStatus m_improvementStatus{WorkloadImprovementStatus::NOT_SET};
    bool m_improvementStatusHasBeenSet = false;

    WorkloadDiscoveryConfig m_discoveryConfig;
    bool m_discoveryConfigHasBeenSet = false;

    Aws::Vector<Aws::String> m_applications;
    bool m_applicationsHasBeenSet = false;

    WorkloadJiraConfigurationInput m_jiraConfiguration;
    bool m_jiraConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
