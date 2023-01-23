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
    AWS_WELLARCHITECTED_API PillarReviewSummary();
    AWS_WELLARCHITECTED_API PillarReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API PillarReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline PillarReviewSummary& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline PillarReviewSummary& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline PillarReviewSummary& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::String& GetPillarName() const{ return m_pillarName; }

    
    inline bool PillarNameHasBeenSet() const { return m_pillarNameHasBeenSet; }

    
    inline void SetPillarName(const Aws::String& value) { m_pillarNameHasBeenSet = true; m_pillarName = value; }

    
    inline void SetPillarName(Aws::String&& value) { m_pillarNameHasBeenSet = true; m_pillarName = std::move(value); }

    
    inline void SetPillarName(const char* value) { m_pillarNameHasBeenSet = true; m_pillarName.assign(value); }

    
    inline PillarReviewSummary& WithPillarName(const Aws::String& value) { SetPillarName(value); return *this;}

    
    inline PillarReviewSummary& WithPillarName(Aws::String&& value) { SetPillarName(std::move(value)); return *this;}

    
    inline PillarReviewSummary& WithPillarName(const char* value) { SetPillarName(value); return *this;}


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline PillarReviewSummary& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline PillarReviewSummary& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline PillarReviewSummary& WithNotes(const char* value) { SetNotes(value); return *this;}


    
    inline const Aws::Map<Risk, int>& GetRiskCounts() const{ return m_riskCounts; }

    
    inline bool RiskCountsHasBeenSet() const { return m_riskCountsHasBeenSet; }

    
    inline void SetRiskCounts(const Aws::Map<Risk, int>& value) { m_riskCountsHasBeenSet = true; m_riskCounts = value; }

    
    inline void SetRiskCounts(Aws::Map<Risk, int>&& value) { m_riskCountsHasBeenSet = true; m_riskCounts = std::move(value); }

    
    inline PillarReviewSummary& WithRiskCounts(const Aws::Map<Risk, int>& value) { SetRiskCounts(value); return *this;}

    
    inline PillarReviewSummary& WithRiskCounts(Aws::Map<Risk, int>&& value) { SetRiskCounts(std::move(value)); return *this;}

    
    inline PillarReviewSummary& AddRiskCounts(const Risk& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(key, value); return *this; }

    
    inline PillarReviewSummary& AddRiskCounts(Risk&& key, int value) { m_riskCountsHasBeenSet = true; m_riskCounts.emplace(std::move(key), value); return *this; }

  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_pillarName;
    bool m_pillarNameHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Risk, int> m_riskCounts;
    bool m_riskCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
