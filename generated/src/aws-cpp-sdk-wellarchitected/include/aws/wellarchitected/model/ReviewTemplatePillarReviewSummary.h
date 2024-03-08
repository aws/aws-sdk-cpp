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
    AWS_WELLARCHITECTED_API ReviewTemplatePillarReviewSummary();
    AWS_WELLARCHITECTED_API ReviewTemplatePillarReviewSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplatePillarReviewSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetPillarId() const{ return m_pillarId; }

    
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }

    
    inline void SetPillarId(const Aws::String& value) { m_pillarIdHasBeenSet = true; m_pillarId = value; }

    
    inline void SetPillarId(Aws::String&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::move(value); }

    
    inline void SetPillarId(const char* value) { m_pillarIdHasBeenSet = true; m_pillarId.assign(value); }

    
    inline ReviewTemplatePillarReviewSummary& WithPillarId(const Aws::String& value) { SetPillarId(value); return *this;}

    
    inline ReviewTemplatePillarReviewSummary& WithPillarId(Aws::String&& value) { SetPillarId(std::move(value)); return *this;}

    
    inline ReviewTemplatePillarReviewSummary& WithPillarId(const char* value) { SetPillarId(value); return *this;}


    
    inline const Aws::String& GetPillarName() const{ return m_pillarName; }

    
    inline bool PillarNameHasBeenSet() const { return m_pillarNameHasBeenSet; }

    
    inline void SetPillarName(const Aws::String& value) { m_pillarNameHasBeenSet = true; m_pillarName = value; }

    
    inline void SetPillarName(Aws::String&& value) { m_pillarNameHasBeenSet = true; m_pillarName = std::move(value); }

    
    inline void SetPillarName(const char* value) { m_pillarNameHasBeenSet = true; m_pillarName.assign(value); }

    
    inline ReviewTemplatePillarReviewSummary& WithPillarName(const Aws::String& value) { SetPillarName(value); return *this;}

    
    inline ReviewTemplatePillarReviewSummary& WithPillarName(Aws::String&& value) { SetPillarName(std::move(value)); return *this;}

    
    inline ReviewTemplatePillarReviewSummary& WithPillarName(const char* value) { SetPillarName(value); return *this;}


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline ReviewTemplatePillarReviewSummary& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline ReviewTemplatePillarReviewSummary& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline ReviewTemplatePillarReviewSummary& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline const Aws::Map<Question, int>& GetQuestionCounts() const{ return m_questionCounts; }

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline bool QuestionCountsHasBeenSet() const { return m_questionCountsHasBeenSet; }

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline void SetQuestionCounts(const Aws::Map<Question, int>& value) { m_questionCountsHasBeenSet = true; m_questionCounts = value; }

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline void SetQuestionCounts(Aws::Map<Question, int>&& value) { m_questionCountsHasBeenSet = true; m_questionCounts = std::move(value); }

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline ReviewTemplatePillarReviewSummary& WithQuestionCounts(const Aws::Map<Question, int>& value) { SetQuestionCounts(value); return *this;}

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline ReviewTemplatePillarReviewSummary& WithQuestionCounts(Aws::Map<Question, int>&& value) { SetQuestionCounts(std::move(value)); return *this;}

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline ReviewTemplatePillarReviewSummary& AddQuestionCounts(const Question& key, int value) { m_questionCountsHasBeenSet = true; m_questionCounts.emplace(key, value); return *this; }

    /**
     * <p>A count of how many questions are answered and unanswered in the requested
     * pillar of the lens review.</p>
     */
    inline ReviewTemplatePillarReviewSummary& AddQuestionCounts(Question&& key, int value) { m_questionCountsHasBeenSet = true; m_questionCounts.emplace(std::move(key), value); return *this; }

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
