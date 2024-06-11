/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/model/PipelineDefinitionS3Location.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/ParallelismConfiguration.h>
#include <aws/sagemaker/model/Tag.h>
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
  class CreatePipelineRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API CreatePipelineRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreatePipeline"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline CreatePipelineRequest& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline CreatePipelineRequest& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline CreatePipelineRequest& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
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
    inline CreatePipelineRequest& WithPipelineDisplayName(const Aws::String& value) { SetPipelineDisplayName(value); return *this;}
    inline CreatePipelineRequest& WithPipelineDisplayName(Aws::String&& value) { SetPipelineDisplayName(std::move(value)); return *this;}
    inline CreatePipelineRequest& WithPipelineDisplayName(const char* value) { SetPipelineDisplayName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://aws-sagemaker-mlops.github.io/sagemaker-model-building-pipeline-definition-JSON-schema/">JSON
     * pipeline definition</a> of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const{ return m_pipelineDefinition; }
    inline bool PipelineDefinitionHasBeenSet() const { return m_pipelineDefinitionHasBeenSet; }
    inline void SetPipelineDefinition(const Aws::String& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = value; }
    inline void SetPipelineDefinition(Aws::String&& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = std::move(value); }
    inline void SetPipelineDefinition(const char* value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition.assign(value); }
    inline CreatePipelineRequest& WithPipelineDefinition(const Aws::String& value) { SetPipelineDefinition(value); return *this;}
    inline CreatePipelineRequest& WithPipelineDefinition(Aws::String&& value) { SetPipelineDefinition(std::move(value)); return *this;}
    inline CreatePipelineRequest& WithPipelineDefinition(const char* value) { SetPipelineDefinition(value); return *this;}
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
    inline CreatePipelineRequest& WithPipelineDefinitionS3Location(const PipelineDefinitionS3Location& value) { SetPipelineDefinitionS3Location(value); return *this;}
    inline CreatePipelineRequest& WithPipelineDefinitionS3Location(PipelineDefinitionS3Location&& value) { SetPipelineDefinitionS3Location(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const{ return m_pipelineDescription; }
    inline bool PipelineDescriptionHasBeenSet() const { return m_pipelineDescriptionHasBeenSet; }
    inline void SetPipelineDescription(const Aws::String& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = value; }
    inline void SetPipelineDescription(Aws::String&& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = std::move(value); }
    inline void SetPipelineDescription(const char* value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription.assign(value); }
    inline CreatePipelineRequest& WithPipelineDescription(const Aws::String& value) { SetPipelineDescription(value); return *this;}
    inline CreatePipelineRequest& WithPipelineDescription(Aws::String&& value) { SetPipelineDescription(std::move(value)); return *this;}
    inline CreatePipelineRequest& WithPipelineDescription(const char* value) { SetPipelineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline const Aws::String& GetClientRequestToken() const{ return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    inline void SetClientRequestToken(const Aws::String& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = value; }
    inline void SetClientRequestToken(Aws::String&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::move(value); }
    inline void SetClientRequestToken(const char* value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken.assign(value); }
    inline CreatePipelineRequest& WithClientRequestToken(const Aws::String& value) { SetClientRequestToken(value); return *this;}
    inline CreatePipelineRequest& WithClientRequestToken(Aws::String&& value) { SetClientRequestToken(std::move(value)); return *this;}
    inline CreatePipelineRequest& WithClientRequestToken(const char* value) { SetClientRequestToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role used by the pipeline to access and
     * create resources.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline CreatePipelineRequest& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline CreatePipelineRequest& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline CreatePipelineRequest& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the created pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline CreatePipelineRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline CreatePipelineRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline CreatePipelineRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline CreatePipelineRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is the configuration that controls the parallelism of the pipeline. If
     * specified, it applies to all runs of this pipeline by default.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = value; }
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::move(value); }
    inline CreatePipelineRequest& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}
    inline CreatePipelineRequest& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}
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

    Aws::String m_clientRequestToken;
    bool m_clientRequestTokenHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
