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
#include <aws/sagemaker/model/SelectiveExecutionConfig.h>
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
    AWS_SAGEMAKER_API DescribePipelineExecutionResult() = default;
    AWS_SAGEMAKER_API DescribePipelineExecutionResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DescribePipelineExecutionResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    DescribePipelineExecutionResult& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const { return m_pipelineExecutionArn; }
    template<typename PipelineExecutionArnT = Aws::String>
    void SetPipelineExecutionArn(PipelineExecutionArnT&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::forward<PipelineExecutionArnT>(value); }
    template<typename PipelineExecutionArnT = Aws::String>
    DescribePipelineExecutionResult& WithPipelineExecutionArn(PipelineExecutionArnT&& value) { SetPipelineExecutionArn(std::forward<PipelineExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDisplayName() const { return m_pipelineExecutionDisplayName; }
    template<typename PipelineExecutionDisplayNameT = Aws::String>
    void SetPipelineExecutionDisplayName(PipelineExecutionDisplayNameT&& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = std::forward<PipelineExecutionDisplayNameT>(value); }
    template<typename PipelineExecutionDisplayNameT = Aws::String>
    DescribePipelineExecutionResult& WithPipelineExecutionDisplayName(PipelineExecutionDisplayNameT&& value) { SetPipelineExecutionDisplayName(std::forward<PipelineExecutionDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline PipelineExecutionStatus GetPipelineExecutionStatus() const { return m_pipelineExecutionStatus; }
    inline void SetPipelineExecutionStatus(PipelineExecutionStatus value) { m_pipelineExecutionStatusHasBeenSet = true; m_pipelineExecutionStatus = value; }
    inline DescribePipelineExecutionResult& WithPipelineExecutionStatus(PipelineExecutionStatus value) { SetPipelineExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDescription() const { return m_pipelineExecutionDescription; }
    template<typename PipelineExecutionDescriptionT = Aws::String>
    void SetPipelineExecutionDescription(PipelineExecutionDescriptionT&& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = std::forward<PipelineExecutionDescriptionT>(value); }
    template<typename PipelineExecutionDescriptionT = Aws::String>
    DescribePipelineExecutionResult& WithPipelineExecutionDescription(PipelineExecutionDescriptionT&& value) { SetPipelineExecutionDescription(std::forward<PipelineExecutionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PipelineExperimentConfig& GetPipelineExperimentConfig() const { return m_pipelineExperimentConfig; }
    template<typename PipelineExperimentConfigT = PipelineExperimentConfig>
    void SetPipelineExperimentConfig(PipelineExperimentConfigT&& value) { m_pipelineExperimentConfigHasBeenSet = true; m_pipelineExperimentConfig = std::forward<PipelineExperimentConfigT>(value); }
    template<typename PipelineExperimentConfigT = PipelineExperimentConfig>
    DescribePipelineExecutionResult& WithPipelineExperimentConfig(PipelineExperimentConfigT&& value) { SetPipelineExperimentConfig(std::forward<PipelineExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    DescribePipelineExecutionResult& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline execution was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    DescribePipelineExecutionResult& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline execution was modified last.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    DescribePipelineExecutionResult& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    DescribePipelineExecutionResult& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    DescribePipelineExecutionResult& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const { return m_parallelismConfiguration; }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    void SetParallelismConfiguration(ParallelismConfigurationT&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::forward<ParallelismConfigurationT>(value); }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    DescribePipelineExecutionResult& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selective execution configuration applied to the pipeline run.</p>
     */
    inline const SelectiveExecutionConfig& GetSelectiveExecutionConfig() const { return m_selectiveExecutionConfig; }
    template<typename SelectiveExecutionConfigT = SelectiveExecutionConfig>
    void SetSelectiveExecutionConfig(SelectiveExecutionConfigT&& value) { m_selectiveExecutionConfigHasBeenSet = true; m_selectiveExecutionConfig = std::forward<SelectiveExecutionConfigT>(value); }
    template<typename SelectiveExecutionConfigT = SelectiveExecutionConfig>
    DescribePipelineExecutionResult& WithSelectiveExecutionConfig(SelectiveExecutionConfigT&& value) { SetSelectiveExecutionConfig(std::forward<SelectiveExecutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline version.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline DescribePipelineExecutionResult& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribePipelineExecutionResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet = false;

    Aws::String m_pipelineExecutionDisplayName;
    bool m_pipelineExecutionDisplayNameHasBeenSet = false;

    PipelineExecutionStatus m_pipelineExecutionStatus{PipelineExecutionStatus::NOT_SET};
    bool m_pipelineExecutionStatusHasBeenSet = false;

    Aws::String m_pipelineExecutionDescription;
    bool m_pipelineExecutionDescriptionHasBeenSet = false;

    PipelineExperimentConfig m_pipelineExperimentConfig;
    bool m_pipelineExperimentConfigHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;

    SelectiveExecutionConfig m_selectiveExecutionConfig;
    bool m_selectiveExecutionConfigHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
