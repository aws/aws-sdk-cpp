/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ParallelismConfiguration.h>
#include <aws/sagemaker/model/SelectiveExecutionConfig.h>
#include <aws/sagemaker/model/Parameter.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class StartPipelineExecutionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API StartPipelineExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "StartPipelineExecution"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name or Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    StartPipelineExecutionRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
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
    StartPipelineExecutionRequest& WithPipelineExecutionDisplayName(PipelineExecutionDisplayNameT&& value) { SetPipelineExecutionDisplayName(std::forward<PipelineExecutionDisplayNameT>(value)); return *this;}
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
    StartPipelineExecutionRequest& WithPipelineParameters(PipelineParametersT&& value) { SetPipelineParameters(std::forward<PipelineParametersT>(value)); return *this;}
    template<typename PipelineParametersT = Parameter>
    StartPipelineExecutionRequest& AddPipelineParameters(PipelineParametersT&& value) { m_pipelineParametersHasBeenSet = true; m_pipelineParameters.emplace_back(std::forward<PipelineParametersT>(value)); return *this; }
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
    StartPipelineExecutionRequest& WithPipelineExecutionDescription(PipelineExecutionDescriptionT&& value) { SetPipelineExecutionDescription(std::forward<PipelineExecutionDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than
     * once.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    StartPipelineExecutionRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>This configuration, if specified, overrides the parallelism configuration of
     * the parent pipeline for this specific run.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const { return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    void SetParallelismConfiguration(ParallelismConfigurationT&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::forward<ParallelismConfigurationT>(value); }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    StartPipelineExecutionRequest& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
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
    StartPipelineExecutionRequest& WithSelectiveExecutionConfig(SelectiveExecutionConfigT&& value) { SetSelectiveExecutionConfig(std::forward<SelectiveExecutionConfigT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the pipeline version to start execution from.</p>
     */
    inline long long GetPipelineVersionId() const { return m_pipelineVersionId; }
    inline bool PipelineVersionIdHasBeenSet() const { return m_pipelineVersionIdHasBeenSet; }
    inline void SetPipelineVersionId(long long value) { m_pipelineVersionIdHasBeenSet = true; m_pipelineVersionId = value; }
    inline StartPipelineExecutionRequest& WithPipelineVersionId(long long value) { SetPipelineVersionId(value); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineExecutionDisplayName;
    bool m_pipelineExecutionDisplayNameHasBeenSet = false;

    Aws::Vector<Parameter> m_pipelineParameters;
    bool m_pipelineParametersHasBeenSet = false;

    Aws::String m_pipelineExecutionDescription;
    bool m_pipelineExecutionDescriptionHasBeenSet = false;

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;

    SelectiveExecutionConfig m_selectiveExecutionConfig;
    bool m_selectiveExecutionConfigHasBeenSet = false;

    long long m_pipelineVersionId{0};
    bool m_pipelineVersionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
