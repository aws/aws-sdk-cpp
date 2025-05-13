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
    AWS_SAGEMAKER_API CreatePipelineRequest() = default;

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
    inline const Aws::String& GetPipelineName() const { return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    template<typename PipelineNameT = Aws::String>
    void SetPipelineName(PipelineNameT&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::forward<PipelineNameT>(value); }
    template<typename PipelineNameT = Aws::String>
    CreatePipelineRequest& WithPipelineName(PipelineNameT&& value) { SetPipelineName(std::forward<PipelineNameT>(value)); return *this;}
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
    CreatePipelineRequest& WithPipelineDisplayName(PipelineDisplayNameT&& value) { SetPipelineDisplayName(std::forward<PipelineDisplayNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <a
     * href="https://aws-sagemaker-mlops.github.io/sagemaker-model-building-pipeline-definition-JSON-schema/">JSON
     * pipeline definition</a> of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDefinition() const { return m_pipelineDefinition; }
    inline bool PipelineDefinitionHasBeenSet() const { return m_pipelineDefinitionHasBeenSet; }
    template<typename PipelineDefinitionT = Aws::String>
    void SetPipelineDefinition(PipelineDefinitionT&& value) { m_pipelineDefinitionHasBeenSet = true; m_pipelineDefinition = std::forward<PipelineDefinitionT>(value); }
    template<typename PipelineDefinitionT = Aws::String>
    CreatePipelineRequest& WithPipelineDefinition(PipelineDefinitionT&& value) { SetPipelineDefinition(std::forward<PipelineDefinitionT>(value)); return *this;}
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
    CreatePipelineRequest& WithPipelineDefinitionS3Location(PipelineDefinitionS3LocationT&& value) { SetPipelineDefinitionS3Location(std::forward<PipelineDefinitionS3LocationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const { return m_pipelineDescription; }
    inline bool PipelineDescriptionHasBeenSet() const { return m_pipelineDescriptionHasBeenSet; }
    template<typename PipelineDescriptionT = Aws::String>
    void SetPipelineDescription(PipelineDescriptionT&& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = std::forward<PipelineDescriptionT>(value); }
    template<typename PipelineDescriptionT = Aws::String>
    CreatePipelineRequest& WithPipelineDescription(PipelineDescriptionT&& value) { SetPipelineDescription(std::forward<PipelineDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A unique, case-sensitive identifier that you provide to ensure the
     * idempotency of the operation. An idempotent operation completes no more than one
     * time.</p>
     */
    inline const Aws::String& GetClientRequestToken() const { return m_clientRequestToken; }
    inline bool ClientRequestTokenHasBeenSet() const { return m_clientRequestTokenHasBeenSet; }
    template<typename ClientRequestTokenT = Aws::String>
    void SetClientRequestToken(ClientRequestTokenT&& value) { m_clientRequestTokenHasBeenSet = true; m_clientRequestToken = std::forward<ClientRequestTokenT>(value); }
    template<typename ClientRequestTokenT = Aws::String>
    CreatePipelineRequest& WithClientRequestToken(ClientRequestTokenT&& value) { SetClientRequestToken(std::forward<ClientRequestTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role used by the pipeline to access and
     * create resources.</p>
     */
    inline const Aws::String& GetRoleArn() const { return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    template<typename RoleArnT = Aws::String>
    void SetRoleArn(RoleArnT&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::forward<RoleArnT>(value); }
    template<typename RoleArnT = Aws::String>
    CreatePipelineRequest& WithRoleArn(RoleArnT&& value) { SetRoleArn(std::forward<RoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags to apply to the created pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreatePipelineRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreatePipelineRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>This is the configuration that controls the parallelism of the pipeline. If
     * specified, it applies to all runs of this pipeline by default.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const { return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    void SetParallelismConfiguration(ParallelismConfigurationT&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::forward<ParallelismConfigurationT>(value); }
    template<typename ParallelismConfigurationT = ParallelismConfiguration>
    CreatePipelineRequest& WithParallelismConfiguration(ParallelismConfigurationT&& value) { SetParallelismConfiguration(std::forward<ParallelismConfigurationT>(value)); return *this;}
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

    Aws::String m_clientRequestToken{Aws::Utils::UUID::PseudoRandomUUID()};
    bool m_clientRequestTokenHasBeenSet = true;

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
