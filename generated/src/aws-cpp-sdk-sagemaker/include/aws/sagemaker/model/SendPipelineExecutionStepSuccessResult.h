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
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessResult();
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API SendPipelineExecutionStepSuccessResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const{ return m_pipelineExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const Aws::String& value) { m_pipelineExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(Aws::String&& value) { m_pipelineExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const char* value) { m_pipelineExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline SendPipelineExecutionStepSuccessResult& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline SendPipelineExecutionStepSuccessResult& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline SendPipelineExecutionStepSuccessResult& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}

  private:

    Aws::String m_pipelineExecutionArn;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
