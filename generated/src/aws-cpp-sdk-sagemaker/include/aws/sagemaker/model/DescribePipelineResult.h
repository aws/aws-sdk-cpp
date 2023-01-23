/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/UserContext.h>
#include <aws/sagemaker/model/ParallelismConfiguration.h>
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
  class DescribePipelineResult
  {
  public:
    AWS_SAGEMAKER_API DescribePipelineResult();
    AWS_SAGEMAKER_API DescribePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineName = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The display name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDisplayName() const{ return m_pipelineDisplayName; }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline void SetPipelineDisplayName(const Aws::String& value) { m_pipelineDisplayName = value; }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline void SetPipelineDisplayName(Aws::String&& value) { m_pipelineDisplayName = std::move(value); }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline void SetPipelineDisplayName(const char* value) { m_pipelineDisplayName.assign(value); }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineDisplayName(const Aws::String& value) { SetPipelineDisplayName(value); return *this;}

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineDisplayName(Aws::String&& value) { SetPipelineDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineDisplayName(const char* value) { SetPipelineDisplayName(value); return *this;}


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
    inline DescribePipelineResult& WithPipelineDefinition(const Aws::String& value) { SetPipelineDefinition(value); return *this;}

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline DescribePipelineResult& WithPipelineDefinition(Aws::String&& value) { SetPipelineDefinition(std::move(value)); return *this;}

    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline DescribePipelineResult& WithPipelineDefinition(const char* value) { SetPipelineDefinition(value); return *this;}


    /**
     * <p>The description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const{ return m_pipelineDescription; }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline void SetPipelineDescription(const Aws::String& value) { m_pipelineDescription = value; }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline void SetPipelineDescription(Aws::String&& value) { m_pipelineDescription = std::move(value); }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline void SetPipelineDescription(const char* value) { m_pipelineDescription.assign(value); }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineDescription(const Aws::String& value) { SetPipelineDescription(value); return *this;}

    /**
     * <p>The description of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineDescription(Aws::String&& value) { SetPipelineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pipeline.</p>
     */
    inline DescribePipelineResult& WithPipelineDescription(const char* value) { SetPipelineDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline DescribePipelineResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline DescribePipelineResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline DescribePipelineResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline const PipelineStatus& GetPipelineStatus() const{ return m_pipelineStatus; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline void SetPipelineStatus(const PipelineStatus& value) { m_pipelineStatus = value; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline void SetPipelineStatus(PipelineStatus&& value) { m_pipelineStatus = std::move(value); }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline DescribePipelineResult& WithPipelineStatus(const PipelineStatus& value) { SetPipelineStatus(value); return *this;}

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline DescribePipelineResult& WithPipelineStatus(PipelineStatus&& value) { SetPipelineStatus(std::move(value)); return *this;}


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
    inline DescribePipelineResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline DescribePipelineResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline DescribePipelineResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline DescribePipelineResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const{ return m_lastRunTime; }

    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline void SetLastRunTime(const Aws::Utils::DateTime& value) { m_lastRunTime = value; }

    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline void SetLastRunTime(Aws::Utils::DateTime&& value) { m_lastRunTime = std::move(value); }

    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline DescribePipelineResult& WithLastRunTime(const Aws::Utils::DateTime& value) { SetLastRunTime(value); return *this;}

    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline DescribePipelineResult& WithLastRunTime(Aws::Utils::DateTime&& value) { SetLastRunTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    
    inline DescribePipelineResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline DescribePipelineResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    
    inline DescribePipelineResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline DescribePipelineResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }

    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfiguration = value; }

    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfiguration = std::move(value); }

    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline DescribePipelineResult& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}

    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline DescribePipelineResult& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineArn;

    Aws::String m_pipelineName;

    Aws::String m_pipelineDisplayName;

    Aws::String m_pipelineDefinition;

    Aws::String m_pipelineDescription;

    Aws::String m_roleArn;

    PipelineStatus m_pipelineStatus;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    Aws::Utils::DateTime m_lastRunTime;

    UserContext m_createdBy;

    UserContext m_lastModifiedBy;

    ParallelismConfiguration m_parallelismConfiguration;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
