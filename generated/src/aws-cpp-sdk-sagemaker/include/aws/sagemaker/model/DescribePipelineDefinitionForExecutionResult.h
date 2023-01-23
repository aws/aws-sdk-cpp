/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
  class DescribePipelineDefinitionForExecutionResult
  {
  public:
    AWS_SAGEMAKER_API DescribePipelineDefinitionForExecutionResult();
    AWS_SAGEMAKER_API DescribePipelineDefinitionForExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePipelineDefinitionForExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const{ return m_pipelineDefinition; }

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline void SetPipelineDefinition(const Aws::String& value) { m_pipelineDefinition = value; }

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline void SetPipelineDefinition(Aws::String&& value) { m_pipelineDefinition = std::move(value); }

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline void SetPipelineDefinition(const char* value) { m_pipelineDefinition.assign(value); }

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline DescribePipelineDefinitionForExecutionResult& WithPipelineDefinition(const Aws::String& value) { SetPipelineDefinition(value); return *this;}

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline DescribePipelineDefinitionForExecutionResult& WithPipelineDefinition(Aws::String&& value) { SetPipelineDefinition(std::move(value)); return *this;}

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline DescribePipelineDefinitionForExecutionResult& WithPipelineDefinition(const char* value) { SetPipelineDefinition(value); return *this;}


    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline DescribePipelineDefinitionForExecutionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline DescribePipelineDefinitionForExecutionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineDefinition;

    Aws::Utils::DateTime m_creationTime;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
