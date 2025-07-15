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
    AWS_SAGEMAKER_API DescribePipelineResult() = default;
    AWS_SAGEMAKER_API DescribePipelineResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePipelineResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    DescribePipelineResult& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    DescribePipelineResult& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDisplayName() const { return m_pipelineDisplayName; }
    template<typename PipelineDisplayNameT = Aws::String>
    void SetPipelineDisplayName(PipelineDisplayNameT&& value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName = std::forward<PipelineDisplayNameT>(value); }
    template<typename PipelineDisplayNameT = Aws::String>
    DescribePipelineResult& WithPipelineDisplayName(PipelineDisplayNameT&& value) { SetPipelineDisplayName(std::forward<PipelineDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const { return m_pipelineDefinition; }
    template<typename PipelineDefinitionT = Aws::String>
    void SetPipelineDefinition(PipelineDefinitionT&& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = std::forward<PipelineDefinitionT>(value); }
    template<typename PipelineDefinitionT = Aws::String>
    DescribePipelineResult& WithPipelineDefinition(PipelineDefinitionT&& value) { SetPipelineDefinition(std::forward<PipelineDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const { return m_pipelineDescription; }
    template<typename PipelineDescriptionT = Aws::String>
    void SetPipelineDescription(PipelineDescriptionT&& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = std::forward<PipelineDescriptionT>(value); }
    template<typename PipelineDescriptionT = Aws::String>
    DescribePipelineResult& WithPipelineDescription(PipelineDescriptionT&& value) { SetPipelineDescription(std::forward<PipelineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    DescribePipelineResult& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline PipelineStatus GetPipelineStatus() const { return m_pipelineStatus; }
    inline void SetPipelineStatus(PipelineStatus value) { m_pipelineStatusHasBeenSet = true; m_pipelineStatus = value; }
    inline DescribePipelineResult& WithPipelineStatus(PipelineStatus value) { SetPipelineStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribePipelineResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribePipelineResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const { return m_lastRunTime; }
    template<typename LastRunTimeT = Aws::Utils::DateTime>
    void SetLastRunTime(LastRunTimeT&& value) { m_lastRunTimeHasBeenSet = true; m_lastRunTime = std::forward<LastRunTimeT>(value); }
    template<typename LastRunTimeT = Aws::Utils::DateTime>
    DescribePipelineResult& WithLastRunTime(LastRunTimeT&& value) { SetLastRunTime(std::forward<LastRunTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribePipelineResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribePipelineResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Lists the parallelism configuration applied to the pipeline.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const { return m_parallelismConfiguration; }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    void SetParallelismConfiguration(ParallelismConfigurationT&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::forward<ParallelismConfigurationT>(value); }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    DescribePipelineResult& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline version.</p>
     */
    inline const Aws::String& GetPipelineVersionDisplayName() const { return m_pipelineVersionDisplayName; }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    void SetPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { m_pipelineVersionDisplayNameHasBeenSet = true; m_pipelineVersionDisplayName = std::forward<PipelineVersionDisplayNameT>(value); }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    DescribePipelineResult& WithPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { SetPipelineVersionDisplayName(std::forward<PipelineVersionDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline version.</p>
     */
    inline const Aws::String& GetPipelineVersionDescription() const { return m_pipelineVersionDescription; }
    template<typename PipelineVersionDescriptionT = Aws::String>
    void SetPipelineVersionDescription(PipelineVersionDescriptionT&& value) { m_pipelineVersionDescriptionHasBeenSet = true; m_pipelineVersionDescription = std::forward<PipelineVersionDescriptionT>(value); }
    template<typename PipelineVersionDescriptionT = Aws::String>
    DescribePipelineResult& WithPipelineVersionDescription(PipelineVersionDescriptionT&& value) { SetPipelineVersionDescription(std::forward<PipelineVersionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePipelineResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineDisplayName;
    bool m_pipelineDisplayNameHasBeenSet = false;

    Aws::String m_pipelineDefinition;
    bool m_pipelineDefinitionHasBeenSet = false;

    Aws::String m_pipelineDescription;
    bool m_pipelineDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    PipelineStatus m_pipelineStatus{PipelineStatus::NOT_SET};
    bool m_pipelineStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunTime{};
    bool m_lastRunTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;

    Aws::String m_pipelineVersionDisplayName;
    bool m_pipelineVersionDisplayNameHasBeenSet = false;

    Aws::String m_pipelineVersionDescription;
    bool m_pipelineVersionDescriptionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
