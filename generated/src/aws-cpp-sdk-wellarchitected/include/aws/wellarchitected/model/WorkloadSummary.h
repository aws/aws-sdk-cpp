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
    AWS_WELLARCHITECTED_API WorkloadSummary();
    AWS_WELLARCHITECTED_API WorkloadSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API WorkloadSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetWorkloadId() const{ return m_workloadId; }

    
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }

    
    inline void SetWorkloadId(const Aws::String& value) { m_workloadIdHasBeenSet = true; m_workloadId = value; }

    
    inline void SetWorkloadId(Aws::String&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::move(value); }

    
    inline void SetWorkloadId(const char* value) { m_workloadIdHasBeenSet = true; m_workloadId.assign(value); }

    
    inline WorkloadSummary& WithWorkloadId(const Aws::String& value) { SetWorkloadId(value); return *this;}

    
    inline WorkloadSummary& WithWorkloadId(Aws::String&& value) { SetWorkloadId(std::move(value)); return *this;}

    
    inline WorkloadSummary& WithWorkloadId(const char* value) { SetWorkloadId(value); return *this;}


    
    inline const Aws::String& GetWorkloadArn() const{ return m_workloadArn; }

    
    inline bool WorkloadArnHasBeenSet() const { return m_workloadArnHasBeenSet; }

    
    inline void SetWorkloadArn(const Aws::String& value) { m_workloadArnHasBeenSet = true; m_workloadArn = value; }

    
    inline void SetWorkloadArn(Aws::String&& value) { m_workloadArnHasBeenSet = true; m_workloadArn = std::move(value); }

    
    inline void SetWorkloadArn(const char* value) { m_workloadArnHasBeenSet = true; m_workloadArn.assign(value); }

    
    inline WorkloadSummary& WithWorkloadArn(const Aws::String& value) { SetWorkloadArn(value); return *this;}

    
    inline WorkloadSummary& WithWorkloadArn(Aws::String&& value) { SetWorkloadArn(std::move(value)); return *this;}

    
    inline WorkloadSummary& WithWorkloadArn(const char* value) { SetWorkloadArn(value); return *this;}


    
    inline const Aws::String& GetWorkloadName() const{ return m_workloadName; }

    
    inline bool WorkloadNameHasBeenSet() const { return m_workloadNameHasBeenSet; }

    
    inline void SetWorkloadName(const Aws::String& value) { m_workloadNameHasBeenSet = true; m_workloadName = value; }

    
    inline void SetWorkloadName(Aws::String&& value) { m_workloadNameHasBeenSet = true; m_workloadName = std::move(value); }

    
    inline void SetWorkloadName(const char* value) { m_workloadNameHasBeenSet = true; m_workloadName.assign(value); }

    
    inline WorkloadSummary& WithWorkloadName(const Aws::String& value) { SetWorkloadName(value); return *this;}

    
    inline WorkloadSummary& WithWorkloadName(Aws::String&& value) { SetWorkloadName(std::move(value)); return *this;}

    
    inline WorkloadSummary& WithWorkloadName(const char* value) { SetWorkloadName(value); return *this;}


    
    inline const Aws::String& GetOwner() const{ return m_owner; }

    
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }

    
    inline void SetOwner(const Aws::String& value) { m_ownerHasBeenSet = true; m_owner = value; }

    
    inline void SetOwner(Aws::String&& value) { m_ownerHasBeenSet = true; m_owner = std::move(value); }

    
    inline void SetOwner(const char* value) { m_ownerHasBeenSet = true; m_owner.assign(value); }

    
    inline WorkloadSummary& WithOwner(const Aws::String& value) { SetOwner(value); return *this;}

    
    inline WorkloadSummary& WithOwner(Aws::String&& value) { SetOwner(std::move(value)); return *this;}

    
    inline WorkloadSummary& WithOwner(const char* value) { SetOwner(value); return *this;}


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline WorkloadSummary& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline WorkloadSummary& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::Vector<Aws::String>& GetLenses() const{ return m_lenses; }

    
    inline bool LensesHasBeenSet() const { return m_lensesHasBeenSet; }

    
    inline void SetLenses(const Aws::Vector<Aws::String>& value) { m_lensesHasBeenSet = true; m_lenses = value; }

    
    inline void SetLenses(Aws::Vector<Aws::String>&& value) { m_lensesHasBeenSet = true; m_lenses = std::move(value); }

    
    inline WorkloadSummary& WithLenses(const Aws::Vector<Aws::String>& value) { SetLenses(value); return *this;}

    
    inline WorkloadSummary& WithLenses(Aws::Vector<Aws::String>&& value) { SetLenses(std::move(value)); return *this;}

    
    inline WorkloadSummary& AddLenses(const Aws::String& value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }

    
    inline WorkloadSummary& AddLenses(Aws::String&& value) { m_lensesHasBeenSet = true; m_lenses.push_back(std::move(value)); return *this; }

    
    inline WorkloadSummary& AddLenses(const char* value) { m_lensesHasBeenSet = true; m_lenses.push_back(value); return *this; }


    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }

    
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }

    
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }

    
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }

    
    inline WorkloadSummary& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}

    
    inline WorkloadSummary& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}

    
    inline WorkloadSummary& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }

    
    inline WorkloadSummary& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }


    
    inline const WorkloadImprovementStatus& GetImprovementStatus() const{ return m_improvementStatus; }

    
    inline bool ImprovementStatusHasBeenSet() const { return m_improvementStatusHasBeenSet; }

    
    inline void SetImprovementStatus(const WorkloadImprovementStatus& value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = value; }

    
    inline void SetImprovementStatus(WorkloadImprovementStatus&& value) { m_improvementStatusHasBeenSet = true; m_improvementStatus = std::move(value); }

    
    inline WorkloadSummary& WithImprovementStatus(const WorkloadImprovementStatus& value) { SetImprovementStatus(value); return *this;}

    
    inline WorkloadSummary& WithImprovementStatus(WorkloadImprovementStatus&& value) { SetImprovementStatus(std::move(value)); return *this;}

  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_workloadArn;
    bool m_workloadArnHasBeenSet = false;

    Aws::String m_workloadName;
    bool m_workloadNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::Vector<Aws::String> m_lenses;
    bool m_lensesHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    WorkloadImprovementStatus m_improvementStatus;
    bool m_improvementStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
