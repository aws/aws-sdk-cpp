/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/LensStatus.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/wellarchitected/model/ReviewTemplatePillarReviewSummary.h>
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
   * <p>The lens review of a review template.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ReviewTemplateLensReview">AWS
   * API Reference</a></p>
   */
  class ReviewTemplateLensReview
  {
  public:
    AWS_WELLARCHITECTED_API ReviewTemplateLensReview();
    AWS_WELLARCHITECTED_API ReviewTemplateLensReview(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplateLensReview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    
    inline const Aws::String& GetLensAlias() const{ return m_lensAlias; }

    
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }

    
    inline void SetLensAlias(const Aws::String& value) { m_lensAliasHasBeenSet = true; m_lensAlias = value; }

    
    inline void SetLensAlias(Aws::String&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::move(value); }

    
    inline void SetLensAlias(const char* value) { m_lensAliasHasBeenSet = true; m_lensAlias.assign(value); }

    
    inline ReviewTemplateLensReview& WithLensAlias(const Aws::String& value) { SetLensAlias(value); return *this;}

    
    inline ReviewTemplateLensReview& WithLensAlias(Aws::String&& value) { SetLensAlias(std::move(value)); return *this;}

    
    inline ReviewTemplateLensReview& WithLensAlias(const char* value) { SetLensAlias(value); return *this;}


    /**
     * <p>The lens ARN.</p>
     */
    inline const Aws::String& GetLensArn() const{ return m_lensArn; }

    /**
     * <p>The lens ARN.</p>
     */
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }

    /**
     * <p>The lens ARN.</p>
     */
    inline void SetLensArn(const Aws::String& value) { m_lensArnHasBeenSet = true; m_lensArn = value; }

    /**
     * <p>The lens ARN.</p>
     */
    inline void SetLensArn(Aws::String&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::move(value); }

    /**
     * <p>The lens ARN.</p>
     */
    inline void SetLensArn(const char* value) { m_lensArnHasBeenSet = true; m_lensArn.assign(value); }

    /**
     * <p>The lens ARN.</p>
     */
    inline ReviewTemplateLensReview& WithLensArn(const Aws::String& value) { SetLensArn(value); return *this;}

    /**
     * <p>The lens ARN.</p>
     */
    inline ReviewTemplateLensReview& WithLensArn(Aws::String&& value) { SetLensArn(std::move(value)); return *this;}

    /**
     * <p>The lens ARN.</p>
     */
    inline ReviewTemplateLensReview& WithLensArn(const char* value) { SetLensArn(value); return *this;}


    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const{ return m_lensVersion; }

    /**
     * <p>The version of the lens.</p>
     */
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }

    /**
     * <p>The version of the lens.</p>
     */
    inline void SetLensVersion(const Aws::String& value) { m_lensVersionHasBeenSet = true; m_lensVersion = value; }

    /**
     * <p>The version of the lens.</p>
     */
    inline void SetLensVersion(Aws::String&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::move(value); }

    /**
     * <p>The version of the lens.</p>
     */
    inline void SetLensVersion(const char* value) { m_lensVersionHasBeenSet = true; m_lensVersion.assign(value); }

    /**
     * <p>The version of the lens.</p>
     */
    inline ReviewTemplateLensReview& WithLensVersion(const Aws::String& value) { SetLensVersion(value); return *this;}

    /**
     * <p>The version of the lens.</p>
     */
    inline ReviewTemplateLensReview& WithLensVersion(Aws::String&& value) { SetLensVersion(std::move(value)); return *this;}

    /**
     * <p>The version of the lens.</p>
     */
    inline ReviewTemplateLensReview& WithLensVersion(const char* value) { SetLensVersion(value); return *this;}


    
    inline const Aws::String& GetLensName() const{ return m_lensName; }

    
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }

    
    inline void SetLensName(const Aws::String& value) { m_lensNameHasBeenSet = true; m_lensName = value; }

    
    inline void SetLensName(Aws::String&& value) { m_lensNameHasBeenSet = true; m_lensName = std::move(value); }

    
    inline void SetLensName(const char* value) { m_lensNameHasBeenSet = true; m_lensName.assign(value); }

    
    inline ReviewTemplateLensReview& WithLensName(const Aws::String& value) { SetLensName(value); return *this;}

    
    inline ReviewTemplateLensReview& WithLensName(Aws::String&& value) { SetLensName(std::move(value)); return *this;}

    
    inline ReviewTemplateLensReview& WithLensName(const char* value) { SetLensName(value); return *this;}


    /**
     * <p>The status of the lens.</p>
     */
    inline const LensStatus& GetLensStatus() const{ return m_lensStatus; }

    /**
     * <p>The status of the lens.</p>
     */
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }

    /**
     * <p>The status of the lens.</p>
     */
    inline void SetLensStatus(const LensStatus& value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }

    /**
     * <p>The status of the lens.</p>
     */
    inline void SetLensStatus(LensStatus&& value) { m_lensStatusHasBeenSet = true; m_lensStatus = std::move(value); }

    /**
     * <p>The status of the lens.</p>
     */
    inline ReviewTemplateLensReview& WithLensStatus(const LensStatus& value) { SetLensStatus(value); return *this;}

    /**
     * <p>The status of the lens.</p>
     */
    inline ReviewTemplateLensReview& WithLensStatus(LensStatus&& value) { SetLensStatus(std::move(value)); return *this;}


    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline const Aws::Vector<ReviewTemplatePillarReviewSummary>& GetPillarReviewSummaries() const{ return m_pillarReviewSummaries; }

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline bool PillarReviewSummariesHasBeenSet() const { return m_pillarReviewSummariesHasBeenSet; }

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline void SetPillarReviewSummaries(const Aws::Vector<ReviewTemplatePillarReviewSummary>& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries = value; }

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline void SetPillarReviewSummaries(Aws::Vector<ReviewTemplatePillarReviewSummary>&& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries = std::move(value); }

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline ReviewTemplateLensReview& WithPillarReviewSummaries(const Aws::Vector<ReviewTemplatePillarReviewSummary>& value) { SetPillarReviewSummaries(value); return *this;}

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline ReviewTemplateLensReview& WithPillarReviewSummaries(Aws::Vector<ReviewTemplatePillarReviewSummary>&& value) { SetPillarReviewSummaries(std::move(value)); return *this;}

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline ReviewTemplateLensReview& AddPillarReviewSummaries(const ReviewTemplatePillarReviewSummary& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries.push_back(value); return *this; }

    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline ReviewTemplateLensReview& AddPillarReviewSummaries(ReviewTemplatePillarReviewSummary&& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries.push_back(std::move(value)); return *this; }


    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const{ return m_updatedAt; }

    
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }

    
    inline void SetUpdatedAt(const Aws::Utils::DateTime& value) { m_updatedAtHasBeenSet = true; m_updatedAt = value; }

    
    inline void SetUpdatedAt(Aws::Utils::DateTime&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::move(value); }

    
    inline ReviewTemplateLensReview& WithUpdatedAt(const Aws::Utils::DateTime& value) { SetUpdatedAt(value); return *this;}

    
    inline ReviewTemplateLensReview& WithUpdatedAt(Aws::Utils::DateTime&& value) { SetUpdatedAt(std::move(value)); return *this;}


    
    inline const Aws::String& GetNotes() const{ return m_notes; }

    
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }

    
    inline void SetNotes(const Aws::String& value) { m_notesHasBeenSet = true; m_notes = value; }

    
    inline void SetNotes(Aws::String&& value) { m_notesHasBeenSet = true; m_notes = std::move(value); }

    
    inline void SetNotes(const char* value) { m_notesHasBeenSet = true; m_notes.assign(value); }

    
    inline ReviewTemplateLensReview& WithNotes(const Aws::String& value) { SetNotes(value); return *this;}

    
    inline ReviewTemplateLensReview& WithNotes(Aws::String&& value) { SetNotes(std::move(value)); return *this;}

    
    inline ReviewTemplateLensReview& WithNotes(const char* value) { SetNotes(value); return *this;}


    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline const Aws::Map<Question, int>& GetQuestionCounts() const{ return m_questionCounts; }

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline bool QuestionCountsHasBeenSet() const { return m_questionCountsHasBeenSet; }

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline void SetQuestionCounts(const Aws::Map<Question, int>& value) { m_questionCountsHasBeenSet = true; m_questionCounts = value; }

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline void SetQuestionCounts(Aws::Map<Question, int>&& value) { m_questionCountsHasBeenSet = true; m_questionCounts = std::move(value); }

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline ReviewTemplateLensReview& WithQuestionCounts(const Aws::Map<Question, int>& value) { SetQuestionCounts(value); return *this;}

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline ReviewTemplateLensReview& WithQuestionCounts(Aws::Map<Question, int>&& value) { SetQuestionCounts(std::move(value)); return *this;}

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline ReviewTemplateLensReview& AddQuestionCounts(const Question& key, int value) { m_questionCountsHasBeenSet = true; m_questionCounts.emplace(key, value); return *this; }

    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline ReviewTemplateLensReview& AddQuestionCounts(Question&& key, int value) { m_questionCountsHasBeenSet = true; m_questionCounts.emplace(std::move(key), value); return *this; }


    
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    
    inline ReviewTemplateLensReview& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    
    inline ReviewTemplateLensReview& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    
    inline ReviewTemplateLensReview& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;

    LensStatus m_lensStatus;
    bool m_lensStatusHasBeenSet = false;

    Aws::Vector<ReviewTemplatePillarReviewSummary> m_pillarReviewSummaries;
    bool m_pillarReviewSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt;
    bool m_updatedAtHasBeenSet = false;

    Aws::String m_notes;
    bool m_notesHasBeenSet = false;

    Aws::Map<Question, int> m_questionCounts;
    bool m_questionCountsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
