/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/wellarchitected/WellArchitectedRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/wellarchitected/model/QuestionPriority.h>
#include <utility>

namespace Aws
{
namespace Http
{
    class URI;
} //namespace Http
namespace WellArchitected
{
namespace Model
{

  /**
   * <p>Input to list lens review improvements.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovementsInput">AWS
   * API Reference</a></p>
   */
  class ListLensReviewImprovementsRequest : public WellArchitectedRequest
  {
  public:
    AWS_WELLARCHITECTED_API ListLensReviewImprovementsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListLensReviewImprovements"; }

    AWS_WELLARCHITECTED_API Aws::String SerializePayload() const override;

    AWS_WELLARCHITECTED_API void AddQueryStringParameters(Aws::Http::URI& uri) const override;


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    inline bool WorkloadIdHasBeenSet() const { return m_workloadIdHasBeenSet; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ListLensReviewImprovementsRequest& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    inline bool LensAliasHasBeenSet() const { return m_lensAliasHasBeenSet; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    ListLensReviewImprovementsRequest& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetPillarId() const { return m_pillarId; }
    inline bool PillarIdHasBeenSet() const { return m_pillarIdHasBeenSet; }
    template<typename PillarIdT = Aws::String>
    void SetPillarId(PillarIdT&& value) { m_pillarIdHasBeenSet = true; m_pillarId = std::forward<PillarIdT>(value); }
    template<typename PillarIdT = Aws::String>
    ListLensReviewImprovementsRequest& WithPillarId(PillarIdT&& value) { SetPillarId(std::forward<PillarIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMilestoneNumber() const { return m_milestoneNumber; }
    inline bool MilestoneNumberHasBeenSet() const { return m_milestoneNumberHasBeenSet; }
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }
    inline ListLensReviewImprovementsRequest& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLensReviewImprovementsRequest& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The maximum number of results to return for this request.</p>
     */
    inline int GetMaxResults() const { return m_maxResults; }
    inline bool MaxResultsHasBeenSet() const { return m_maxResultsHasBeenSet; }
    inline void SetMaxResults(int value) { m_maxResultsHasBeenSet = true; m_maxResults = value; }
    inline ListLensReviewImprovementsRequest& WithMaxResults(int value) { SetMaxResults(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The priority of the question.</p>
     */
    inline QuestionPriority GetQuestionPriority() const { return m_questionPriority; }
    inline bool QuestionPriorityHasBeenSet() const { return m_questionPriorityHasBeenSet; }
    inline void SetQuestionPriority(QuestionPriority value) { m_questionPriorityHasBeenSet = true; m_questionPriority = value; }
    inline ListLensReviewImprovementsRequest& WithQuestionPriority(QuestionPriority value) { SetQuestionPriority(value); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_pillarId;
    bool m_pillarIdHasBeenSet = false;

    int m_milestoneNumber{0};
    bool m_milestoneNumberHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    int m_maxResults{0};
    bool m_maxResultsHasBeenSet = false;

    QuestionPriority m_questionPriority{QuestionPriority::NOT_SET};
    bool m_questionPriorityHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
