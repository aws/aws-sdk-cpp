/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/Question.h>
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
   * <p>Summary of a review template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ReviewTemplatePillarReviewSummary">AWS
   * API Reference</a></p>
   */
  class ReviewTemplatePillarReviewSummary
  {
  public:
    AWS_WELLARCHITECTED_API ReviewTemplatePillarReviewSummary() = default;
    AWS_WELLARCHITECTED_API ReviewTemplatePillarReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplatePillarReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    ReviewTemplatePillarReviewSummary& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarName() const { return m_pillarName; }
    inline bool PillarNameHasBeenSet() const { return m_pillarNameHasBeenSet; }
    template<typename PillarNameT = Aws::String>
    void SetPillarName(PillarNameT&& value) { m_pillarNameHasBeenSet = true; m_pillarName = std::forward<PillarNameT>(value); }
    template<typename PillarNameT = Aws::String>
    ReviewTemplatePillarReviewSummary& WithPillarName(PillarNameT&& value) { SetPillarName(std::forward<PillarNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    ReviewTemplatePillarReviewSummary& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline const Aws::Map<Question, int>& GetQuestionCounts() const { return m_questionCounts; }
    inline bool QuestionCountsHasBeenSet() const { return m_questionCountsHasBeenSet; }
    template<typename QuestionCountsT = Aws::Map<Question, int>>
    void SetQuestionCounts(QuestionCountsT&& value) { m_questionCountsHasBeenSet = true; m_questionCounts = std::forward<QuestionCountsT>(value); }
    template<typename QuestionCountsT = Aws::Map<Question, int>>
    ReviewTemplatePillarReviewSummary& WithQuestionCounts(QuestionCountsT&& value) { SetQuestionCounts(std::forward<QuestionCountsT>(value)); return *this;}
    inline ReviewTemplatePillarReviewSummary& AddQuestionCounts(Question key, int value) {
      m_questionCountsHasBeenSet = true; m_questionCounts.emplace(key, value); return *this;
    }
    ///@}
  private:

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    Aws::String m_pillarName;
    bool m_pillarNameHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Question, int> m_questionCounts;
    bool m_questionCountsHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
