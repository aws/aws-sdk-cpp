/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/wellarchitected/model/WorkloadSummary.h>
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
   * <p>A milestone summary return object.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/MilestoneSummary">AWS
   * API Reference</a></p>
   */
  class MilestoneSummary
  {
  public:
    AWS_WELLARCHITECTED_API MilestoneSummary() = default;
    AWS_WELLARCHITECTED_API MilestoneSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API MilestoneSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline int GetMilestoneNumber() const { return m_milestoneNumber; }
    inline bool MilestoneNumberHasBeenSet() const { return m_milestoneNumberHasBeenSet; }
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }
    inline MilestoneSummary& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetMilestoneName() const { return m_milestoneName; }
    inline bool MilestoneNameHasBeenSet() const { return m_milestoneNameHasBeenSet; }
    template<typename MilestoneNameT = Aws::String>
    void SetMilestoneName(MilestoneNameT&& value) { m_milestoneNameHasBeenSet = true; m_milestoneName = std::forward<MilestoneNameT>(value); }
    template<typename MilestoneNameT = Aws::String>
    MilestoneSummary& WithMilestoneName(MilestoneNameT&& value) { SetMilestoneName(std::forward<MilestoneNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetRecordedAt() const { return m_recordedAt; }
    inline bool RecordedAtHasBeenSet() const { return m_recordedAtHasBeenSet; }
    template<typename RecordedAtT = Aws::Utils::DateTime>
    void SetRecordedAt(RecordedAtT&& value) { m_recordedAtHasBeenSet = true; m_recordedAt = std::forward<RecordedAtT>(value); }
    template<typename RecordedAtT = Aws::Utils::DateTime>
    MilestoneSummary& WithRecordedAt(RecordedAtT&& value) { SetRecordedAt(std::forward<RecordedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const WorkloadSummary& GetWorkloadSummary() const { return m_workloadSummary; }
    inline bool WorkloadSummaryHasBeenSet() const { return m_workloadSummaryHasBeenSet; }
    template<typename WorkloadSummaryT = WorkloadSummary>
    void SetWorkloadSummary(WorkloadSummaryT&& value) { m_workloadSummaryHasBeenSet = true; m_workloadSummary = std::forward<WorkloadSummaryT>(value); }
    template<typename WorkloadSummaryT = WorkloadSummary>
    MilestoneSummary& WithWorkloadSummary(WorkloadSummaryT&& value) { SetWorkloadSummary(std::forward<WorkloadSummaryT>(value)); return *this;}
    ///@}
  private:

    int m_milestoneNumber{0};
    bool m_milestoneNumberHasBeenSet = false;

    Aws::String m_milestoneName;
    bool m_milestoneNameHasBeenSet = false;

    Aws::Utils::DateTime m_recordedAt{};
    bool m_recordedAtHasBeenSet = false;

    WorkloadSummary m_workloadSummary;
    bool m_workloadSummaryHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
