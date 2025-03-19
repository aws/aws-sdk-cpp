/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/WorkloadImprovementStatus.h>
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
   * <p>A workload summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/WorkloadSummary">AWS
   * API Reference</a></p>
   */
  class WorkloadSummary
  {
  public:
    AWS_WELLARCHITECTED_API WorkloadSummary() = default;
    AWS_WELLARCHITECTED_API WorkloadSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    WorkloadSummary& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadArn() const { return m_workloadArn; }
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }
    template<typename WorkloadArnT = Aws::String>
    void SetWorkloadArn(WorkloadArnT&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::forward<WorkloadArnT>(value); }
    template<typename WorkloadArnT = Aws::String>
    WorkloadSummary& WithWorkloadArn(WorkloadArnT&& value) { SetWorkloadArn(std::forward<WorkloadArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetWorkloadName() const { return m_workloadName; }
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }
    template<typename WorkloadNameT = Aws::String>
    void SetWorkloadName(WorkloadNameT&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::forward<WorkloadNameT>(value); }
    template<typename WorkloadNameT = Aws::String>
    WorkloadSummary& WithWorkloadName(WorkloadNameT&& value) { SetWorkloadName(std::forward<WorkloadNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    WorkloadSummary& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    WorkloadSummary& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<Aws::String>& GetLenses() const { return m_lenses; }
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }
    template<typename LensesT = Aws::Vector<Aws::String>>
    void SetLenses(LensesT&& value) { m_lensesHasBeenSet = true; m_lenses = std::forward<LensesT>(value); }
    template<typename LensesT = Aws::Vector<Aws::String>>
    WorkloadSummary& WithLenses(LensesT&& value) { SetLenses(std::forward<LensesT>(value)); return *this;}
    template<typename LensesT = Aws::String>
    WorkloadSummary& AddLenses(LensesT&& value) { m_lensesHasBeenSet = true; m_lenses.emplace_back(std::forward<LensesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const { return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    void SetRiskCounts(RiskCountsT&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::forward<RiskCountsT>(value); }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    WorkloadSummary& WithRiskCounts(RiskCountsT&& value) { SetRiskCounts(std::forward<RiskCountsT>(value)); return *this;}
    inline WorkloadSummary& AddRiskCounts(Risk key, int value) {
      m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline WorkloadImprovementStatus GetImprovementStatus() const { return m_improvementStatus; }
    inline bool ImprovementStatusHasBeenSet() const { return m_improvementStatusHasBeenSet; }
    inline void SetImprovementStatus(WorkloadImprovementStatus value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = value; }
    inline WorkloadSummary& WithImprovementStatus(WorkloadImprovementStatus value) { SetImprovementStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Profile associated with a workload.</p>
     */
    inline const Aws::Vector<WorkloadProfile>& GetProfiles() const { return m_profiles; }
    inline bool ProfilesHasBeenSet() const { return m_profilesHasBeenSet; }
    template<typename ProfilesT = Aws::Vector<WorkloadProfile>>
    void SetProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles = std::forward<ProfilesT>(value); }
    template<typename ProfilesT = Aws::Vector<WorkloadProfile>>
    WorkloadSummary& WithProfiles(ProfilesT&& value) { SetProfiles(std::forward<ProfilesT>(value)); return *this;}
    template<typename ProfilesT = WorkloadProfile>
    WorkloadSummary& AddProfiles(ProfilesT&& value) { m_profilesHasBeenSet = true; m_profiles.emplace_back(std::forward<ProfilesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetPrioritizedRiskCounts() const { return m_prioritizedRiskCounts; }
    inline bool PrioritizedRiskCountsHasBeenSet() const { return m_prioritizedRiskCountsHasBeenSet; }
    template<typename PrioritizedRiskCountsT = Aws::Map<Risk, int>>
    void SetPrioritizedRiskCounts(PrioritizedRiskCountsT&& value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts = std::forward<PrioritizedRiskCountsT>(value); }
    template<typename PrioritizedRiskCountsT = Aws::Map<Risk, int>>
    WorkloadSummary& WithPrioritizedRiskCounts(PrioritizedRiskCountsT&& value) { SetPrioritizedRiskCounts(std::forward<PrioritizedRiskCountsT>(value)); return *this;}
    inline WorkloadSummary& AddPrioritizedRiskCounts(Risk key, int value) {
      m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    WorkloadImprovementStatus m_improvementStatus{WorkloadImprovementStatus::NOT_SET};
    bool m_improvementStatusHasBeenSet = false;

    Aws::Vector<WorkloadProfile> m_profiles;
    bool m_profilesHasBeenSet = false;

    Aws::Map<Risk, int> m_prioritizedRiskCounts;
    bool m_prioritizedRiskCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
