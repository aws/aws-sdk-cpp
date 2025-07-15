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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Parameter.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{

  /**
   * <p>An execution of a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecution">AWS
   * API Reference</a></p>
   */
  class PipelineExecution
  {
  public:
    AWS_SAGEMAKER_API PipelineExecution() = default;
    AWS_SAGEMAKER_API PipelineExecution(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineExecution& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline that was executed.</p>
     */
    inline const Aws::String& GetPipelineArn() const { return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    template<typename PipelineArnT = Aws::String>
    void SetPipelineArn(PipelineArnT&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::forward<PipelineArnT>(value); }
    template<typename PipelineArnT = Aws::String>
    PipelineExecution& WithPipelineArn(PipelineArnT&& value) { SetPipelineArn(std::forward<PipelineArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const { return m_pipelineExecutionArn; }
    inline bool PipelineExecutionArnHasBeenSet() const { return m_pipelineExecutionArnHasBeenSet; }
    template<typename PipelineExecutionArnT = Aws::String>
    void SetPipelineExecutionArn(PipelineExecutionArnT&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::forward<PipelineExecutionArnT>(value); }
    template<typename PipelineExecutionArnT = Aws::String>
    PipelineExecution& WithPipelineExecutionArn(PipelineExecutionArnT&& value) { SetPipelineExecutionArn(std::forward<PipelineExecutionArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDisplayName() const { return m_pipelineExecutionDisplayName; }
    inline bool PipelineExecutionDisplayNameHasBeenSet() const { return m_pipelineExecutionDisplayNameHasBeenSet; }
    template<typename PipelineExecutionDisplayNameT = Aws::String>
    void SetPipelineExecutionDisplayName(PipelineExecutionDisplayNameT&& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = std::forward<PipelineExecutionDisplayNameT>(value); }
    template<typename PipelineExecutionDisplayNameT = Aws::String>
    PipelineExecution& WithPipelineExecutionDisplayName(PipelineExecutionDisplayNameT&& value) { SetPipelineExecutionDisplayName(std::forward<PipelineExecutionDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline status.</p>
     */
    inline PipelineExecutionStatus GetPipelineExecutionStatus() const { return m_pipelineExecutionStatus; }
    inline bool PipelineExecutionStatusHasBeenSet() const { return m_pipelineExecutionStatusHasBeenSet; }
    inline void SetPipelineExecutionStatus(PipelineExecutionStatus value) { m_pipelineExecutionStatusHasBeenSet = true; m_pipelineExecutionStatus = value; }
    inline PipelineExecution& WithPipelineExecutionStatus(PipelineExecutionStatus value) { SetPipelineExecutionStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDescription() const { return m_pipelineExecutionDescription; }
    inline bool PipelineExecutionDescriptionHasBeenSet() const { return m_pipelineExecutionDescriptionHasBeenSet; }
    template<typename PipelineExecutionDescriptionT = Aws::String>
    void SetPipelineExecutionDescription(PipelineExecutionDescriptionT&& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = std::forward<PipelineExecutionDescriptionT>(value); }
    template<typename PipelineExecutionDescriptionT = Aws::String>
    PipelineExecution& WithPipelineExecutionDescription(PipelineExecutionDescriptionT&& value) { SetPipelineExecutionDescription(std::forward<PipelineExecutionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const PipelineExperimentConfig& GetPipelineExperimentConfig() const { return m_pipelineExperimentConfig; }
    inline bool PipelineExperimentConfigHasBeenSet() const { return m_pipelineExperimentConfigHasBeenSet; }
    template<typename PipelineExperimentConfigT = PipelineExperimentConfig>
    void SetPipelineExperimentConfig(PipelineExperimentConfigT&& value) { m_pipelineExperimentConfigHasBeenSet = true; m_pipelineExperimentConfig = std::forward<PipelineExperimentConfigT>(value); }
    template<typename PipelineExperimentConfigT = PipelineExperimentConfig>
    PipelineExecution& WithPipelineExperimentConfig(PipelineExperimentConfigT&& value) { SetPipelineExperimentConfig(std::forward<PipelineExperimentConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the execution failed, a message describing why.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    PipelineExecution& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the pipeline execution.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    PipelineExecution& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the pipeline execution was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    PipelineExecution& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const { return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    template<typename CreatedByT = UserContext>
    void SetCreatedBy(CreatedByT&& value) { m_createdByHasBeenSet = true; m_createdBy = std::forward<CreatedByT>(value); }
    template<typename CreatedByT = UserContext>
    PipelineExecution& WithCreatedBy(CreatedByT&& value) { SetCreatedBy(std::forward<CreatedByT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const { return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    template<typename LastModifiedByT = UserContext>
    void SetLastModifiedBy(LastModifiedByT&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::forward<LastModifiedByT>(value); }
    template<typename LastModifiedByT = UserContext>
    PipelineExecution& WithLastModifiedBy(LastModifiedByT&& value) { SetLastModifiedBy(std::forward<LastModifiedByT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parallelism configuration applied to the pipeline execution.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const { return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    void SetParallelismConfiguration(ParallelismConfigurationT&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::forward<ParallelismConfigurationT>(value); }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    PipelineExecution& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The selective execution configuration applied to the pipeline run.</p>
     */
    inline const SelectiveExecutionConfig& GetSelectiveExecutionConfig() const { return m_selectiveExecutionConfig; }
    inline bool SelectiveExecutionConfigHasBeenSet() const { return m_selectiveExecutionConfigHasBeenSet; }
    template<typename SelectiveExecutionConfigT = SelectiveExecutionConfig>
    void SetSelectiveExecutionConfig(SelectiveExecutionConfigT&& value) { m_selectiveExecutionConfigHasBeenSet = true; m_selectiveExecutionConfig = std::forward<SelectiveExecutionConfigT>(value); }
    template<typename SelectiveExecutionConfigT = SelectiveExecutionConfig>
    PipelineExecution& WithSelectiveExecutionConfig(SelectiveExecutionConfigT&& value) { SetSelectiveExecutionConfig(std::forward<SelectiveExecutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Contains a list of pipeline parameters. This list can be empty. </p>
     */
    inline const Aws::Vector<Parameter>& GetPipelineParameters() const { return m_pipelineParameters; }
    inline bool PipelineParametersHasBeenSet() const { return m_pipelineParametersHasBeenSet; }
    template<typename PipelineParametersT = Aws::Vector<Parameter>>
    void SetPipelineParameters(PipelineParametersT&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters = std::forward<PipelineParametersT>(value); }
    template<typename PipelineParametersT = Aws::Vector<Parameter>>
    PipelineExecution& WithPipelineParameters(PipelineParametersT&& value) { SetPipelineParameters(std::forward<PipelineParametersT>(value)); return *this;}
    template<typename PipelineParametersT = Parameter>
    PipelineExecution& AddPipelineParameters(PipelineParametersT&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.emplace_back(std::forward<PipelineParametersT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline version that started this execution.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline bool PipelineVersionIdHasBeenSet() const { return m_pipelineVersionIdHasBeenSet; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline PipelineExecution& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline version that started this execution.</p>
     */
    inline const Aws::String& GetPipelineVersionDisplayName() const { return m_pipelineVersionDisplayName; }
    inline bool PipelineVersionDisplayNameHasBeenSet() const { return m_pipelineVersionDisplayNameHasBeenSet; }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    void SetPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { m_pipelineVersionDisplayNameHasBeenSet = true; m_pipelineVersionDisplayName = std::forward<PipelineVersionDisplayNameT>(value); }
    template<typename PipelineVersionDisplayNameT = Aws::String>
    PipelineExecution& WithPipelineVersionDisplayName(PipelineVersionDisplayNameT&& value) { SetPipelineVersionDisplayName(std::forward<PipelineVersionDisplayNameT>(value)); return *this;}
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

    Aws::Vector<Parameter> m_pipelineParameters;
    bool m_pipelineParametersHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;

    Aws::String m_pipelineVersionDisplayName;
    bool m_pipelineVersionDisplayNameHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
