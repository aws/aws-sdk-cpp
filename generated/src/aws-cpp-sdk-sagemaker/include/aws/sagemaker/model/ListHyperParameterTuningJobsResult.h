/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/HyperParameterTuningJobSummary.h>
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
namespace SageMaker
{
namespace Model
{
  class ListHyperParameterTuningJobsResult
  {
  public:
    AWS_SAGEMAKER_API ListHyperParameterTuningJobsResult() = default;
    AWS_SAGEMAKER_API ListHyperParameterTuningJobsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListHyperParameterTuningJobsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <a
     * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_HyperParameterTuningJobSummary.html">HyperParameterTuningJobSummary</a>
     * objects that describe the tuning jobs that the
     * <code>ListHyperParameterTuningJobs</code> request returned.</p>
     */
    inline const Aws::Vector<HyperParameterTuningJobSummary>& GetHyperParameterTuningJobSummaries() const { return m_hyperParameterTuningJobSummaries; }
    template<typename HyperParameterTuningJobSummariesT = Aws::Vector<HyperParameterTuningJobSummary>>
    void SetHyperParameterTuningJobSummaries(HyperParameterTuningJobSummariesT&& value) { m_hyperParameterTuningJobSummariesHasBeenSet = true; m_hyperParameterTuningJobSummaries = std::forward<HyperParameterTuningJobSummariesT>(value); }
    template<typename HyperParameterTuningJobSummariesT = Aws::Vector<HyperParameterTuningJobSummary>>
    ListHyperParameterTuningJobsResult& WithHyperParameterTuningJobSummaries(HyperParameterTuningJobSummariesT&& value) { SetHyperParameterTuningJobSummaries(std::forward<HyperParameterTuningJobSummariesT>(value)); return *this;}
    template<typename HyperParameterTuningJobSummariesT = HyperParameterTuningJobSummary>
    ListHyperParameterTuningJobsResult& AddHyperParameterTuningJobSummaries(HyperParameterTuningJobSummariesT&& value) { m_hyperParameterTuningJobSummariesHasBeenSet = true; m_hyperParameterTuningJobSummaries.emplace_back(std::forward<HyperParameterTuningJobSummariesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of this <code>ListHyperParameterTuningJobs</code> request was
     * truncated, the response includes a <code>NextToken</code>. To retrieve the next
     * set of tuning jobs, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListHyperParameterTuningJobsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListHyperParameterTuningJobsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<HyperParameterTuningJobSummary> m_hyperParameterTuningJobSummaries;
    bool m_hyperParameterTuningJobSummariesHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
