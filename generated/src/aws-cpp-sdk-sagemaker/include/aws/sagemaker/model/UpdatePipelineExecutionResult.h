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
  class UpdatePipelineExecutionResult
  {
  public:
    AWS_SAGEMAKER_API UpdatePipelineExecutionResult();
    AWS_SAGEMAKER_API UpdatePipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API UpdatePipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const{ return m_pipelineExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const Aws::String& value) { m_pipelineExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(Aws::String&& value) { m_pipelineExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const char* value) { m_pipelineExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline UpdatePipelineExecutionResult& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline UpdatePipelineExecutionResult& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the updated pipeline execution.</p>
     */
    inline UpdatePipelineExecutionResult& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}


    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }

    
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }

    
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }

    
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }

    
    inline UpdatePipelineExecutionResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}

    
    inline UpdatePipelineExecutionResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}

    
    inline UpdatePipelineExecutionResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}

  private:

    Aws::String m_pipelineExecutionArn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
