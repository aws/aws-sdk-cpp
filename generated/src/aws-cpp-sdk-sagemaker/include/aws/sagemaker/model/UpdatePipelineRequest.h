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
    AWS_SAGEMAKER_API UpdatePipelineRequest();

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
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline UpdatePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The display name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDisplayName() const{ return m_pipelineDisplayName; }
    inline bool PipelineDisplayNameHasBeenSet() const { return m_pipelineDisplayNameHasBeenSet; }
    inline void SetPipelineDisplayName(const Aws::String& value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName = value; }
    inline void SetPipelineDisplayName(Aws::String&& value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName = std::move(value); }
    inline void SetPipelineDisplayName(const char* value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName.assign(value); }
    inline UpdatePipelineRequest& WithPipelineDisplayName(const Aws::String& value) { SetPipelineDisplayName(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineDisplayName(Aws::String&& value) { SetPipelineDisplayName(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithPipelineDisplayName(const char* value) { SetPipelineDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The JSON pipeline definition.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const{ return m_pipelineDefinition; }
    inline bool PipelineDefinitionHasBeenSet() const { return m_pipelineDefinitionHasBeenSet; }
    inline void SetPipelineDefinition(const Aws::String& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = value; }
    inline void SetPipelineDefinition(Aws::String&& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = std::move(value); }
    inline void SetPipelineDefinition(const char* value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition.assign(value); }
    inline UpdatePipelineRequest& WithPipelineDefinition(const Aws::String& value) { SetPipelineDefinition(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineDefinition(Aws::String&& value) { SetPipelineDefinition(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithPipelineDefinition(const char* value) { SetPipelineDefinition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The location of the pipeline definition stored in Amazon S3. If specified,
     * SageMaker will retrieve the pipeline definition from this location.</p>
     */
    inline const PipelineDefinitionS3Location& GetPipelineDefinitionS3Location() const{ return m_pipelineDefinitionS3Location; }
    inline bool PipelineDefinitionS3LocationHasBeenSet() const { return m_pipelineDefinitionS3LocationHasBeenSet; }
    inline void SetPipelineDefinitionS3Location(const PipelineDefinitionS3Location& value) { m_pipelineDefinitionS3LocationHasBeenSet = true; m_pipelineDefinitionS3Location = value; }
    inline void SetPipelineDefinitionS3Location(PipelineDefinitionS3Location&& value) { m_pipelineDefinitionS3LocationHasBeenSet = true; m_pipelineDefinitionS3Location = std::move(value); }
    inline UpdatePipelineRequest& WithPipelineDefinitionS3Location(const PipelineDefinitionS3Location& value) { SetPipelineDefinitionS3Location(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineDefinitionS3Location(PipelineDefinitionS3Location&& value) { SetPipelineDefinitionS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const{ return m_pipelineDescription; }
    inline bool PipelineDescriptionHasBeenSet() const { return m_pipelineDescriptionHasBeenSet; }
    inline void SetPipelineDescription(const Aws::String& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = value; }
    inline void SetPipelineDescription(Aws::String&& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = std::move(value); }
    inline void SetPipelineDescription(const char* value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription.assign(value); }
    inline UpdatePipelineRequest& WithPipelineDescription(const Aws::String& value) { SetPipelineDescription(value); return *this;}
    inline UpdatePipelineRequest& WithPipelineDescription(Aws::String&& value) { SetPipelineDescription(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithPipelineDescription(const char* value) { SetPipelineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline uses to execute.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline UpdatePipelineRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline UpdatePipelineRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline UpdatePipelineRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If specified, it applies to all executions of this pipeline by default.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = value; }
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::move(value); }
    inline UpdatePipelineRequest& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}
    inline UpdatePipelineRequest& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}
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
