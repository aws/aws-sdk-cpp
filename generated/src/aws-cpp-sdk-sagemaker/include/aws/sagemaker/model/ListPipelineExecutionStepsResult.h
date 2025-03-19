/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineExecutionStep.h>
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
  class ListPipelineExecutionStepsResult
  {
  public:
    AWS_SAGEMAKER_API ListPipelineExecutionStepsResult() = default;
    AWS_SAGEMAKER_API ListPipelineExecutionStepsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPipelineExecutionStepsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A list of <code>PipeLineExecutionStep</code> objects. Each
     * <code>PipeLineExecutionStep</code> consists of StepName, StartTime, EndTime,
     * StepStatus, and Metadata. Metadata is an object with properties for each job
     * that contains relevant information about the job created by the step.</p>
     */
    inline const Aws::Vector<PipelineExecutionStep>& GetPipelineExecutionSteps() const { return m_pipelineExecutionSteps; }
    template<typename PipelineExecutionStepsT = Aws::Vector<PipelineExecutionStep>>
    void SetPipelineExecutionSteps(PipelineExecutionStepsT&& value) { m_pipelineExecutionStepsHasBeenSet = true; m_pipelineExecutionSteps = std::forward<PipelineExecutionStepsT>(value); }
    template<typename PipelineExecutionStepsT = Aws::Vector<PipelineExecutionStep>>
    ListPipelineExecutionStepsResult& WithPipelineExecutionSteps(PipelineExecutionStepsT&& value) { SetPipelineExecutionSteps(std::forward<PipelineExecutionStepsT>(value)); return *this;}
    template<typename PipelineExecutionStepsT = PipelineExecutionStep>
    ListPipelineExecutionStepsResult& AddPipelineExecutionSteps(PipelineExecutionStepsT&& value) { m_pipelineExecutionStepsHasBeenSet = true; m_pipelineExecutionSteps.emplace_back(std::forward<PipelineExecutionStepsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous <code>ListPipelineExecutionSteps</code> request
     * was truncated, the response includes a <code>NextToken</code>. To retrieve the
     * next set of pipeline execution steps, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPipelineExecutionStepsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelineExecutionStepsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<PipelineExecutionStep> m_pipelineExecutionSteps;
    bool m_pipelineExecutionStepsHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
