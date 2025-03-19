/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineDefinitionS3Location.h>
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
  class UpdatePipelineRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API UpdatePipelineRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdatePipeline"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline to update.</p>
     */
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    UpdatePipelineRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDisplayName() const { return m_pipelineDisplayName; }
    inline bool PipelineDisplayNameHasBeenSet() const { return m_pipelineDisplayNameHasBeenSet; }
    template<typename PipelineDisplayNameT = Aws::String>
    void SetPipelineDisplayName(PipelineDisplayNameT&& value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName = std::forward<PipelineDisplayNameT>(value); }
    template<typename PipelineDisplayNameT = Aws::String>
    UpdatePipelineRequest& WithPipelineDisplayName(PipelineDisplayNameT&& value) { SetPipelineDisplayName(std::forward<PipelineDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const { return m_pipelineDefinition; }
    inline bool PipelineDefinitionHasBeenSet() const { return m_pipelineDefinitionHasBeenSet; }
    template<typename PipelineDefinitionT = Aws::String>
    void SetPipelineDefinition(PipelineDefinitionT&& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = std::forward<PipelineDefinitionT>(value); }
    template<typename PipelineDefinitionT = Aws::String>
    UpdatePipelineRequest& WithPipelineDefinition(PipelineDefinitionT&& value) { SetPipelineDefinition(std::forward<PipelineDefinitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the pipeline definition stored in Amazon S3. If specified,
     * SageMaker will retrieve the pipeline definition from this location.</p>
     */
    inline const PipelineDefinitionS3Location& GetPipelineDefinitionS3Location() const { return m_pipelineDefinitionS3Location; }
    inline bool PipelineDefinitionS3LocationHasBeenSet() const { return m_pipelineDefinitionS3LocationHasBeenSet; }
    template<typename PipelineDefinitionS3LocationT = PipelineDefinitionS3Location>
    void SetPipelineDefinitionS3Location(PipelineDefinitionS3LocationT&& value) { m_pipelineDefinitionS3LocationHasBeenSet = true; m_pipelineDefinitionS3Location = std::forward<PipelineDefinitionS3LocationT>(value); }
    template<typename PipelineDefinitionS3LocationT = PipelineDefinitionS3Location>
    UpdatePipelineRequest& WithPipelineDefinitionS3Location(PipelineDefinitionS3LocationT&& value) { SetPipelineDefinitionS3Location(std::forward<PipelineDefinitionS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const { return m_pipelineDescription; }
    inline bool PipelineDescriptionHasBeenSet() const { return m_pipelineDescriptionHasBeenSet; }
    template<typename PipelineDescriptionT = Aws::String>
    void SetPipelineDescription(PipelineDescriptionT&& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = std::forward<PipelineDescriptionT>(value); }
    template<typename PipelineDescriptionT = Aws::String>
    UpdatePipelineRequest& WithPipelineDescription(PipelineDescriptionT&& value) { SetPipelineDescription(std::forward<PipelineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    UpdatePipelineRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, it applies to all executions of this pipeline by default.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const { return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    void SetParallelismConfiguration(ParallelismConfigurationT&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::forward<ParallelismConfigurationT>(value); }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    UpdatePipelineRequest& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineDisplayName;
    bool m_pipelineDisplayNameHasBeenSet = false;

    Aws::String m_pipelineDefinition;
    bool m_pipelineDefinitionHasBeenSet = false;

    PipelineDefinitionS3Location m_pipelineDefinitionS3Location;
    bool m_pipelineDefinitionS3LocationHasBeenSet = false;

    Aws::String m_pipelineDescription;
    bool m_pipelineDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
