/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/ImprovementSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace WellArchitected
{
namespace Model
{
  /**
   * <p>Output of a list lens review improvements call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewImprovementsOutput">AWS
   * API Reference</a></p>
   */
  class ListLensReviewImprovementsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListLensReviewImprovementsResult() = default;
    AWS_WELLARCHITECTED_API ListLensReviewImprovementsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListLensReviewImprovementsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ListLensReviewImprovementsResult& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMilestoneNumber() const { return m_milestoneNumber; }
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }
    inline ListLensReviewImprovementsResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetLensAlias() const { return m_lensAlias; }
    template<typename LensAliasT = Aws::String>
    void SetLensAlias(LensAliasT&& value) { m_lensAliasHasBeenSet = true; m_lensAlias = std::forward<LensAliasT>(value); }
    template<typename LensAliasT = Aws::String>
    ListLensReviewImprovementsResult& WithLensAlias(LensAliasT&& value) { SetLensAlias(std::forward<LensAliasT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN for the lens.</p>
     */
    inline const Aws::String& GetLensArn() const { return m_lensArn; }
    template<typename LensArnT = Aws::String>
    void SetLensArn(LensArnT&& value) { m_lensArnHasBeenSet = true; m_lensArn = std::forward<LensArnT>(value); }
    template<typename LensArnT = Aws::String>
    ListLensReviewImprovementsResult& WithLensArn(LensArnT&& value) { SetLensArn(std::forward<LensArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<ImprovementSummary>& GetImprovementSummaries() const { return m_improvementSummaries; }
    template<typename ImprovementSummariesT = Aws::Vector<ImprovementSummary>>
    void SetImprovementSummaries(ImprovementSummariesT&& value) { m_improvementSummariesHasBeenSet = true; m_improvementSummaries = std::forward<ImprovementSummariesT>(value); }
    template<typename ImprovementSummariesT = Aws::Vector<ImprovementSummary>>
    ListLensReviewImprovementsResult& WithImprovementSummaries(ImprovementSummariesT&& value) { SetImprovementSummaries(std::forward<ImprovementSummariesT>(value)); return *this;}
    template<typename ImprovementSummariesT = ImprovementSummary>
    ListLensReviewImprovementsResult& AddImprovementSummaries(ImprovementSummariesT&& value) { m_improvementSummariesHasBeenSet = true; m_improvementSummaries.emplace_back(std::forward<ImprovementSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLensReviewImprovementsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLensReviewImprovementsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    int m_milestoneNumber{0};
    bool m_milestoneNumberHasBeenSet = false;

    Aws::String m_lensAlias;
    bool m_lensAliasHasBeenSet = false;

    Aws::String m_lensArn;
    bool m_lensArnHasBeenSet = false;

    Aws::Vector<ImprovementSummary> m_improvementSummaries;
    bool m_improvementSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
