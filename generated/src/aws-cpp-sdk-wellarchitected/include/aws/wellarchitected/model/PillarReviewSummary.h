/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
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
   * <p>A pillar review summary of a lens review.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/PillarReviewSummary">AWS
   * API Reference</a></p>
   */
  class PillarReviewSummary
  {
  public:
    AWS_WELLARCHITECTED_API PillarReviewSummary() = default;
    AWS_WELLARCHITECTED_API PillarReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API PillarReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    PillarReviewSummary& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarName() const { return m_pillarName; }
    inline bool PillarNameHasBeenSet() const { return m_pillarNameHasBeenSet; }
    template<typename PillarNameT = Aws::String>
    void SetPillarName(PillarNameT&& value) { m_pillarNameHasBeenSet = true; m_pillarName = std::forward<PillarNameT>(value); }
    template<typename PillarNameT = Aws::String>
    PillarReviewSummary& WithPillarName(PillarNameT&& value) { SetPillarName(std::forward<PillarNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    PillarReviewSummary& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const { return m_riskCounts; }
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    void SetRiskCounts(RiskCountsT&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::forward<RiskCountsT>(value); }
    template<typename RiskCountsT = Aws::Map<Risk, int>>
    PillarReviewSummary& WithRiskCounts(RiskCountsT&& value) { SetRiskCounts(std::forward<RiskCountsT>(value)); return *this;}
    inline PillarReviewSummary& AddRiskCounts(Risk key, int value) {
      m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::Map<Risk, int>& GetPrioritizedRiskCounts() const { return m_prioritizedRiskCounts; }
    inline bool PrioritizedRiskCountsHasBeenSet() const { return m_prioritizedRiskCountsHasBeenSet; }
    template<typename PrioritizedRiskCountsT = Aws::Map<Risk, int>>
    void SetPrioritizedRiskCounts(PrioritizedRiskCountsT&& value) { m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts = std::forward<PrioritizedRiskCountsT>(value); }
    template<typename PrioritizedRiskCountsT = Aws::Map<Risk, int>>
    PillarReviewSummary& WithPrioritizedRiskCounts(PrioritizedRiskCountsT&& value) { SetPrioritizedRiskCounts(std::forward<PrioritizedRiskCountsT>(value)); return *this;}
    inline PillarReviewSummary& AddPrioritizedRiskCounts(Risk key, int value) {
      m_prioritizedRiskCountsHasBeenSet = true; m_prioritizedRiskCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_pillarName;
    bool m_pillarNameHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;

    Aws::Map<Risk, int> m_prioritizedRiskCounts;
    bool m_prioritizedRiskCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
