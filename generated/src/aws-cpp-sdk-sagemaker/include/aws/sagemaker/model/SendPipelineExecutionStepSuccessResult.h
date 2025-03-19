/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class SendPipelineExecutionStepSuccessResult
  {
  public:
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessResult() = default;
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const { return m_pipelineExecutionArn; }
    template<typename PipelineExecutionArnT = Aws::String>
    void SetPipelineExecutionArn(PipelineExecutionArnT&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::forward<PipelineExecutionArnT>(value); }
    template<typename PipelineExecutionArnT = Aws::String>
    SendPipelineExecutionStepSuccessResult& WithPipelineExecutionArn(PipelineExecutionArnT&& value) { SetPipelineExecutionArn(std::forward<PipelineExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    SendPipelineExecutionStepSuccessResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
