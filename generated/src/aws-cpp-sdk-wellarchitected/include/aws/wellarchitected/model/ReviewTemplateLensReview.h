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
    AWS_WELLARCHITECTED_API ReviewTemplateLensReview() = default;
    AWS_WELLARCHITECTED_API ReviewTemplateLensReview(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API ReviewTemplateLensReview& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_WELLARCHITECTED_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    ReviewTemplateLensReview& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lens ARN.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    inline bool LensArnHasBeenSet() const { return m_lensArnHasBeenSet; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    ReviewTemplateLensReview& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The version of the lens.</p>
     */
    inline const Aws::String& GetLensVersion() const { return m_lensVersion; }
    inline bool LensVersionHasBeenSet() const { return m_lensVersionHasBeenSet; }
    template<typename LensVersionT = Aws::String>
    void SetLensVersion(LensVersionT&& value) { m_lensVersionHasBeenSet = true; m_lensVersion = std::forward<LensVersionT>(value); }
    template<typename LensVersionT = Aws::String>
    ReviewTemplateLensReview& WithLensVersion(LensVersionT&& value) { SetLensVersion(std::forward<LensVersionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensName() const { return m_lensName; }
    inline bool LensNameHasBeenSet() const { return m_lensNameHasBeenSet; }
    template<typename LensNameT = Aws::String>
    void SetLensName(LensNameT&& value) { m_lensNameHasBeenSet = true; m_lensName = std::forward<LensNameT>(value); }
    template<typename LensNameT = Aws::String>
    ReviewTemplateLensReview& WithLensName(LensNameT&& value) { SetLensName(std::forward<LensNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the lens.</p>
     */
    inline LensStatus GetLensStatus() const { return m_lensStatus; }
    inline bool LensStatusHasBeenSet() const { return m_lensStatusHasBeenSet; }
    inline void SetLensStatus(LensStatus value) { m_lensStatusHasBeenSet = true; m_lensStatus = value; }
    inline ReviewTemplateLensReview& WithLensStatus(LensStatus value) { SetLensStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Pillar review summaries of a lens review.</p>
     */
    inline const Aws::Vector<ReviewTemplatePillarReviewSummary>& GetPillarReviewSummaries() const { return m_pillarReviewSummaries; }
    inline bool PillarReviewSummariesHasBeenSet() const { return m_pillarReviewSummariesHasBeenSet; }
    template<typename PillarReviewSummariesT = Aws::Vector<ReviewTemplatePillarReviewSummary>>
    void SetPillarReviewSummaries(PillarReviewSummariesT&& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries = std::forward<PillarReviewSummariesT>(value); }
    template<typename PillarReviewSummariesT = Aws::Vector<ReviewTemplatePillarReviewSummary>>
    ReviewTemplateLensReview& WithPillarReviewSummaries(PillarReviewSummariesT&& value) { SetPillarReviewSummaries(std::forward<PillarReviewSummariesT>(value)); return *this;}
    template<typename PillarReviewSummariesT = ReviewTemplatePillarReviewSummary>
    ReviewTemplateLensReview& AddPillarReviewSummaries(PillarReviewSummariesT&& value) { m_pillarReviewSummariesHasBeenSet = true; m_pillarReviewSummaries.emplace_back(std::forward<PillarReviewSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::Utils::DateTime& GetUpdatedAt() const { return m_updatedAt; }
    inline bool UpdatedAtHasBeenSet() const { return m_updatedAtHasBeenSet; }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    void SetUpdatedAt(UpdatedAtT&& value) { m_updatedAtHasBeenSet = true; m_updatedAt = std::forward<UpdatedAtT>(value); }
    template<typename UpdatedAtT = Aws::Utils::DateTime>
    ReviewTemplateLensReview& WithUpdatedAt(UpdatedAtT&& value) { SetUpdatedAt(std::forward<UpdatedAtT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNotes() const { return m_notes; }
    inline bool NotesHasBeenSet() const { return m_notesHasBeenSet; }
    template<typename NotesT = Aws::String>
    void SetNotes(NotesT&& value) { m_notesHasBeenSet = true; m_notes = std::forward<NotesT>(value); }
    template<typename NotesT = Aws::String>
    ReviewTemplateLensReview& WithNotes(NotesT&& value) { SetNotes(std::forward<NotesT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A count of how many questions are answered and unanswered in the lens
     * review.</p>
     */
    inline const Aws::Map<Question, int>& GetQuestionCounts() const { return m_questionCounts; }
    inline bool QuestionCountsHasBeenSet() const { return m_questionCountsHasBeenSet; }
    template<typename QuestionCountsT = Aws::Map<Question, int>>
    void SetQuestionCounts(QuestionCountsT&& value) { m_questionCountsHasBeenSet = true; m_questionCounts = std::forward<QuestionCountsT>(value); }
    template<typename QuestionCountsT = Aws::Map<Question, int>>
    ReviewTemplateLensReview& WithQuestionCounts(QuestionCountsT&& value) { SetQuestionCounts(std::forward<QuestionCountsT>(value)); return *this;}
    inline ReviewTemplateLensReview& AddQuestionCounts(Question key, int value) {
      m_questionCountsHasBeenSet = true; m_questionCounts.emplace(key, value); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ReviewTemplateLensReview& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::String m_lensVersion;
    bool m_lensVersionHasBeenSet = false;

    Aws::String m_lensName;
    bool m_lensNameHasBeenSet = false;

    LensStatus m_lensStatus{LensStatus::NOT_SET};
    bool m_lensStatusHasBeenSet = false;

    Aws::Vector<ReviewTemplatePillarReviewSummary> m_pillarReviewSummaries;
    bool m_pillarReviewSummariesHasBeenSet = false;

    Aws::Utils::DateTime m_updatedAt{};
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
