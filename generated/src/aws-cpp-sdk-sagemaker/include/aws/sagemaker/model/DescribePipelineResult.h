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


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArn = value; }
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArn = std::move(value); }
    inline void SetPipelineArn(const char* value) { m_pipelineArn.assign(value); }
    inline DescribePipelineResult& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}
    inline DescribePipelineResult& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}
    inline DescribePipelineResult& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineName.assign(value); }
    inline DescribePipelineResult& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline DescribePipelineResult& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline DescribePipelineResult& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDisplayName() const{ return m_pipelineDisplayName; }
    inline void SetPipelineDisplayName(const Aws::String& value) { m_pipelineDisplayName = value; }
    inline void SetPipelineDisplayName(Aws::String&& value) { m_pipelineDisplayName = std::move(value); }
    inline void SetPipelineDisplayName(const char* value) { m_pipelineDisplayName.assign(value); }
    inline DescribePipelineResult& WithPipelineDisplayName(const Aws::String& value) { SetPipelineDisplayName(value); return *this;}
    inline DescribePipelineResult& WithPipelineDisplayName(Aws::String&& value) { SetPipelineDisplayName(std::move(value)); return *this;}
    inline DescribePipelineResult& WithPipelineDisplayName(const char* value) { SetPipelineDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const{ return m_pipelineDefinition; }
    inline void SetPipelineDefinition(const Aws::String& value) { m_pipelineDefinition = value; }
    inline void SetPipelineDefinition(Aws::String&& value) { m_pipelineDefinition = std::move(value); }
    inline void SetPipelineDefinition(const char* value) { m_pipelineDefinition.assign(value); }
    inline DescribePipelineResult& WithPipelineDefinition(const Aws::String& value) { SetPipelineDefinition(value); return *this;}
    inline DescribePipelineResult& WithPipelineDefinition(Aws::String&& value) { SetPipelineDefinition(std::move(value)); return *this;}
    inline DescribePipelineResult& WithPipelineDefinition(const char* value) { SetPipelineDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const{ return m_pipelineDescription; }
    inline void SetPipelineDescription(const Aws::String& value) { m_pipelineDescription = value; }
    inline void SetPipelineDescription(Aws::String&& value) { m_pipelineDescription = std::move(value); }
    inline void SetPipelineDescription(const char* value) { m_pipelineDescription.assign(value); }
    inline DescribePipelineResult& WithPipelineDescription(const Aws::String& value) { SetPipelineDescription(value); return *this;}
    inline DescribePipelineResult& WithPipelineDescription(Aws::String&& value) { SetPipelineDescription(std::move(value)); return *this;}
    inline DescribePipelineResult& WithPipelineDescription(const char* value) { SetPipelineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArn.assign(value); }
    inline DescribePipelineResult& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline DescribePipelineResult& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline DescribePipelineResult& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline const PipelineStatus& GetPipelineStatus() const{ return m_pipelineStatus; }
    inline void SetPipelineStatus(const PipelineStatus& value) { m_pipelineStatus = value; }
    inline void SetPipelineStatus(PipelineStatus&& value) { m_pipelineStatus = std::move(value); }
    inline DescribePipelineResult& WithPipelineStatus(const PipelineStatus& value) { SetPipelineStatus(value); return *this;}
    inline DescribePipelineResult& WithPipelineStatus(PipelineStatus&& value) { SetPipelineStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline DescribePipelineResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline DescribePipelineResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTime = std::move(value); }
    inline DescribePipelineResult& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline DescribePipelineResult& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const{ return m_lastRunTime; }
    inline void SetLastRunTime(const Aws::Utils::DateTime& value) { m_lastRunTime = value; }
    inline void SetLastRunTime(Aws::Utils::DateTime&& value) { m_lastRunTime = std::move(value); }
    inline DescribePipelineResult& WithLastRunTime(const Aws::Utils::DateTime& value) { SetLastRunTime(value); return *this;}
    inline DescribePipelineResult& WithLastRunTime(Aws::Utils::DateTime&& value) { SetLastRunTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline void SetCreatedBy(const UserContext& value) { m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdBy = std::move(value); }
    inline DescribePipelineResult& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline DescribePipelineResult& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedBy = std::move(value); }
    inline DescribePipelineResult& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline DescribePipelineResult& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfiguration = value; }
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfiguration = std::move(value); }
    inline DescribePipelineResult& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}
    inline DescribePipelineResult& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribePipelineResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribePipelineResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribePipelineResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
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

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
