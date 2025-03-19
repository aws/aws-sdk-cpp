/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wellarchitected/WellArchitected_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/wellarchitected/model/LensReviewSummary.h>
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
   * <p>Output of a list lens reviews call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/wellarchitected-2020-03-31/ListLensReviewsOutput">AWS
   * API Reference</a></p>
   */
  class ListLensReviewsResult
  {
  public:
    AWS_WELLARCHITECTED_API ListLensReviewsResult() = default;
    AWS_WELLARCHITECTED_API ListLensReviewsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WELLARCHITECTED_API ListLensReviewsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    
    inline const Aws::String& GetWorkloadId() const { return m_workloadId; }
    template<typename WorkloadIdT = Aws::String>
    void SetWorkloadId(WorkloadIdT&& value) { m_workloadIdHasBeenSet = true; m_workloadId = std::forward<WorkloadIdT>(value); }
    template<typename WorkloadIdT = Aws::String>
    ListLensReviewsResult& WithWorkloadId(WorkloadIdT&& value) { SetWorkloadId(std::forward<WorkloadIdT>(value)); return *this;}
    ///@}

    ///@{
    
    inline int GetMilestoneNumber() const { return m_milestoneNumber; }
    inline void SetMilestoneNumber(int value) { m_milestoneNumberHasBeenSet = true; m_milestoneNumber = value; }
    inline ListLensReviewsResult& WithMilestoneNumber(int value) { SetMilestoneNumber(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::Vector<LensReviewSummary>& GetLensReviewSummaries() const { return m_lensReviewSummaries; }
    template<typename LensReviewSummariesT = Aws::Vector<LensReviewSummary>>
    void SetLensReviewSummaries(LensReviewSummariesT&& value) { m_lensReviewSummariesHasBeenSet = true; m_lensReviewSummaries = std::forward<LensReviewSummariesT>(value); }
    template<typename LensReviewSummariesT = Aws::Vector<LensReviewSummary>>
    ListLensReviewsResult& WithLensReviewSummaries(LensReviewSummariesT&& value) { SetLensReviewSummaries(std::forward<LensReviewSummariesT>(value)); return *this;}
    template<typename LensReviewSummariesT = LensReviewSummary>
    ListLensReviewsResult& AddLensReviewSummaries(LensReviewSummariesT&& value) { m_lensReviewSummariesHasBeenSet = true; m_lensReviewSummaries.emplace_back(std::forward<LensReviewSummariesT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListLensReviewsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListLensReviewsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_workloadId;
    bool m_workloadIdHasBeenSet = false;

    int m_milestoneNumber{0};
    bool m_milestoneNumberHasBeenSet = false;

    Aws::Vector<LensReviewSummary> m_lensReviewSummaries;
    bool m_lensReviewSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WellArchitected
} // namespace Aws
