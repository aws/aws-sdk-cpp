/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineExecutionStatus.h>
#include <aws/sagemaker/model/PipelineExperimentConfig.h>
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
  class DescribePipelineExecutionResult
  {
  public:
    AWS_SAGEMAKER_API DescribePipelineExecutionResult();
    AWS_SAGEMAKER_API DescribePipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


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
    inline DescribePipelineExecutionResult& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


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
    inline DescribePipelineExecutionResult& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}


    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDisplayName() const{ return m_pipelineExecutionDisplayName; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const Aws::String& value) { m_pipelineExecutionDisplayName = value; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(Aws::String&& value) { m_pipelineExecutionDisplayName = std::move(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const char* value) { m_pipelineExecutionDisplayName.assign(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionDisplayName(const Aws::String& value) { SetPipelineExecutionDisplayName(value); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionDisplayName(Aws::String&& value) { SetPipelineExecutionDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionDisplayName(const char* value) { SetPipelineExecutionDisplayName(value); return *this;}


    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline const PipelineExecutionStatus& GetPipelineExecutionStatus() const{ return m_pipelineExecutionStatus; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionStatus(const PipelineExecutionStatus& value) { m_pipelineExecutionStatus = value; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionStatus(PipelineExecutionStatus&& value) { m_pipelineExecutionStatus = std::move(value); }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionStatus(const PipelineExecutionStatus& value) { SetPipelineExecutionStatus(value); return *this;}

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionStatus(PipelineExecutionStatus&& value) { SetPipelineExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDescription() const{ return m_pipelineExecutionDescription; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const Aws::String& value) { m_pipelineExecutionDescription = value; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(Aws::String&& value) { m_pipelineExecutionDescription = std::move(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const char* value) { m_pipelineExecutionDescription.assign(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionDescription(const Aws::String& value) { SetPipelineExecutionDescription(value); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionDescription(Aws::String&& value) { SetPipelineExecutionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline DescribePipelineExecutionResult& WithPipelineExecutionDescription(const char* value) { SetPipelineExecutionDescription(value); return *this;}


    
    inline const PipelineExperimentConfig& GetPipelineExperimentConfig() const{ return m_pipelineExperimentConfig; }

    
    inline void SetPipelineExperimentConfig(const PipelineExperimentConfig& value) { m_pipelineExperimentConfig = value; }

    
    inline void SetPipelineExperimentConfig(PipelineExperimentConfig&& value) { m_pipelineExperimentConfig = std::move(value); }

    
    inline DescribePipelineExecutionResult& WithPipelineExperimentConfig(const PipelineExperimentConfig& value) { SetPipelineExperimentConfig(value); return *this;}

    
    inline DescribePipelineExecutionResult& WithPipelineExperimentConfig(PipelineExperimentConfig&& value) { SetPipelineExperimentConfig(std::move(value)); return *this;}


    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReason = value; }

    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReason = std::move(value); }

    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReason.assign(value); }

    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline DescribePipelineExecutionResult& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline DescribePipelineExecutionResult& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline DescribePipelineExecutionResult& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>The time when the pipeline execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time when the pipeline execution was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }

    /**
     * <p>The time when the pipeline execution was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }

    /**
     * <p>The time when the pipeline execution was created.</p>
     */
    inline DescribePipelineExecutionResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time when the pipeline execution was created.</p>
     */
    inline DescribePipelineExecutionResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time when the pipeline execution was modified last.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time when the pipeline execution was modified last.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }

    /**
     * <p>The time when the pipeline execution was modified last.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time when the pipeline execution was modified last.</p>
     */
    inline DescribePipelineExecutionResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time when the pipeline execution was modified last.</p>
     */
    inline DescribePipelineExecutionResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }

    
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }

    
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }

    
    inline DescribePipelineExecutionResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}

    
    inline DescribePipelineExecutionResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}


    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }

    
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }

    
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }

    
    inline DescribePipelineExecutionResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}

    
    inline DescribePipelineExecutionResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}


    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }

    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfiguration = value; }

    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfiguration = std::move(value); }

    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline DescribePipelineExecutionResult& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}

    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline DescribePipelineExecutionResult& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}

  private:

    Aws::String m_pipelineArn;

    Aws::String m_pipelineExecutionArn;

    Aws::String m_pipelineExecutionDisplayName;

    PipelineExecutionStatus m_pipelineExecutionStatus;

    Aws::String m_pipelineExecutionDescription;

    PipelineExperimentConfig m_pipelineExperimentConfig;

    Aws::String m_failureReason;

    Aws::Utils::DateTime m_creationTime;

    Aws::Utils::DateTime m_lastModifiedTime;

    UserContext m_createdBy;

    UserContext m_lastModifiedBy;

    ParallelismConfiguration m_parallelismConfiguration;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
