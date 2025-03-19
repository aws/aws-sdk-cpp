/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/Parameter.h>
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
  class ListPipelineParametersForExecutionResult
  {
  public:
    AWS_SAGEMAKER_API ListPipelineParametersForExecutionResult() = default;
    AWS_SAGEMAKER_API ListPipelineParametersForExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API ListPipelineParametersForExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline const Aws::Vector<Parameter>& GetPipelineParameters() const { return m_pipelineParameters; }
    template<typename PipelineParametersT = Aws::Vector<Parameter>>
    void SetPipelineParameters(PipelineParametersT&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters = std::forward<PipelineParametersT>(value); }
    template<typename PipelineParametersT = Aws::Vector<Parameter>>
    ListPipelineParametersForExecutionResult& WithPipelineParameters(PipelineParametersT&& value) { SetPipelineParameters(std::forward<PipelineParametersT>(value)); return *this;}
    template<typename PipelineParametersT = Parameter>
    ListPipelineParametersForExecutionResult& AddPipelineParameters(PipelineParametersT&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.emplace_back(std::forward<PipelineParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>If the result of the previous <code>ListPipelineParametersForExecution</code>
     * request was truncated, the response includes a <code>NextToken</code>. To
     * retrieve the next set of parameters, use the token in the next request.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListPipelineParametersForExecutionResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListPipelineParametersForExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::Vector<Parameter> m_pipelineParameters;
    bool m_pipelineParametersHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
