/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/ParallelismConfiguration.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class UpdatePipelineExecutionRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdatePipelineExecutionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipelineExecution"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const { return m_pipelineExecutionArn; }
    inline bool PipelineExecutionArnHasBeenSet() const { return m_pipelineExecutionArnHasBeenSet; }
    template<typename PipelineExecutionArnT = Aws::String>
    void SetPipelineExecutionArn(PipelineExecutionArnT&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::forward<PipelineExecutionArnT>(value); }
    template<typename PipelineExecutionArnT = Aws::String>
    UpdatePipelineExecutionRequest& WithPipelineExecutionArn(PipelineExecutionArnT&& value) { SetPipelineExecutionArn(std::forward<PipelineExecutionArnT>(value)); return *this;}
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
    UpdatePipelineExecutionRequest& WithPipelineExecutionDescription(PipelineExecutionDescriptionT&& value) { SetPipelineExecutionDescription(std::forward<PipelineExecutionDescriptionT>(value)); return *this;}
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
    UpdatePipelineExecutionRequest& WithPipelineExecutionDisplayName(PipelineExecutionDisplayNameT&& value) { SetPipelineExecutionDisplayName(std::forward<PipelineExecutionDisplayNameT>(value)); return *this;}
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
    UpdatePipelineExecutionRequest& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet = false;

    Aws::String m_pipelineExecutionDescription;
    bool m_pipelineExecutionDescriptionHasBeenSet = false;

    Aws::String m_pipelineExecutionDisplayName;
    bool m_pipelineExecutionDisplayNameHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
