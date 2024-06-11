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
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/model/Tag.h>
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
   * <p>A SageMaker Model Building Pipeline instance.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Pipeline">AWS
   * API Reference</a></p>
   */
  class Pipeline
  {
  public:
    AWS_SAGEMAKER_API Pipeline();
    AWS_SAGEMAKER_API Pipeline(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Pipeline& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = value; }
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::move(value); }
    inline void SetPipelineArn(const char* value) { m_pipelineArnHasBeenSet = true; m_pipelineArn.assign(value); }
    inline Pipeline& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}
    inline Pipeline& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}
    inline Pipeline& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }
    inline Pipeline& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}
    inline Pipeline& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}
    inline Pipeline& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}
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
    inline Pipeline& WithPipelineDisplayName(const Aws::String& value) { SetPipelineDisplayName(value); return *this;}
    inline Pipeline& WithPipelineDisplayName(Aws::String&& value) { SetPipelineDisplayName(std::move(value)); return *this;}
    inline Pipeline& WithPipelineDisplayName(const char* value) { SetPipelineDisplayName(value); return *this;}
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
    inline Pipeline& WithPipelineDescription(const Aws::String& value) { SetPipelineDescription(value); return *this;}
    inline Pipeline& WithPipelineDescription(Aws::String&& value) { SetPipelineDescription(std::move(value)); return *this;}
    inline Pipeline& WithPipelineDescription(const char* value) { SetPipelineDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the role that created the pipeline.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }
    inline Pipeline& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}
    inline Pipeline& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}
    inline Pipeline& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the pipeline.</p>
     */
    inline const PipelineStatus& GetPipelineStatus() const{ return m_pipelineStatus; }
    inline bool PipelineStatusHasBeenSet() const { return m_pipelineStatusHasBeenSet; }
    inline void SetPipelineStatus(const PipelineStatus& value) { m_pipelineStatusHasBeenSet = true; m_pipelineStatus = value; }
    inline void SetPipelineStatus(PipelineStatus&& value) { m_pipelineStatusHasBeenSet = true; m_pipelineStatus = std::move(value); }
    inline Pipeline& WithPipelineStatus(const PipelineStatus& value) { SetPipelineStatus(value); return *this;}
    inline Pipeline& WithPipelineStatus(PipelineStatus&& value) { SetPipelineStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }
    inline Pipeline& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline Pipeline& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }
    inline Pipeline& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}
    inline Pipeline& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time when the pipeline was last run.</p>
     */
    inline const Aws::Utils::DateTime& GetLastRunTime() const{ return m_lastRunTime; }
    inline bool LastRunTimeHasBeenSet() const { return m_lastRunTimeHasBeenSet; }
    inline void SetLastRunTime(const Aws::Utils::DateTime& value) { m_lastRunTimeHasBeenSet = true; m_lastRunTime = value; }
    inline void SetLastRunTime(Aws::Utils::DateTime&& value) { m_lastRunTimeHasBeenSet = true; m_lastRunTime = std::move(value); }
    inline Pipeline& WithLastRunTime(const Aws::Utils::DateTime& value) { SetLastRunTime(value); return *this;}
    inline Pipeline& WithLastRunTime(Aws::Utils::DateTime&& value) { SetLastRunTime(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetCreatedBy() const{ return m_createdBy; }
    inline bool CreatedByHasBeenSet() const { return m_createdByHasBeenSet; }
    inline void SetCreatedBy(const UserContext& value) { m_createdByHasBeenSet = true; m_createdBy = value; }
    inline void SetCreatedBy(UserContext&& value) { m_createdByHasBeenSet = true; m_createdBy = std::move(value); }
    inline Pipeline& WithCreatedBy(const UserContext& value) { SetCreatedBy(value); return *this;}
    inline Pipeline& WithCreatedBy(UserContext&& value) { SetCreatedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const UserContext& GetLastModifiedBy() const{ return m_lastModifiedBy; }
    inline bool LastModifiedByHasBeenSet() const { return m_lastModifiedByHasBeenSet; }
    inline void SetLastModifiedBy(const UserContext& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = value; }
    inline void SetLastModifiedBy(UserContext&& value) { m_lastModifiedByHasBeenSet = true; m_lastModifiedBy = std::move(value); }
    inline Pipeline& WithLastModifiedBy(const UserContext& value) { SetLastModifiedBy(value); return *this;}
    inline Pipeline& WithLastModifiedBy(UserContext&& value) { SetLastModifiedBy(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The parallelism configuration applied to the pipeline.</p>
     */
    inline const ParallelismConfiguration& GetParallelismConfiguration() const{ return m_parallelismConfiguration; }
    inline bool ParallelismConfigurationHasBeenSet() const { return m_parallelismConfigurationHasBeenSet; }
    inline void SetParallelismConfiguration(const ParallelismConfiguration& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = value; }
    inline void SetParallelismConfiguration(ParallelismConfiguration&& value) { m_parallelismConfigurationHasBeenSet = true; m_parallelismConfiguration = std::move(value); }
    inline Pipeline& WithParallelismConfiguration(const ParallelismConfiguration& value) { SetParallelismConfiguration(value); return *this;}
    inline Pipeline& WithParallelismConfiguration(ParallelismConfiguration&& value) { SetParallelismConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of tags that apply to the pipeline.</p>
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }
    inline Pipeline& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}
    inline Pipeline& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}
    inline Pipeline& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }
    inline Pipeline& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::String m_pipelineArn;
    bool m_pipelineArnHasBeenSet = false;

    Aws::String m_pipelineName;
    bool m_pipelineNameHasBeenSet = false;

    Aws::String m_pipelineDisplayName;
    bool m_pipelineDisplayNameHasBeenSet = false;

    Aws::String m_pipelineDescription;
    bool m_pipelineDescriptionHasBeenSet = false;

    Aws::String m_roleArn;
    bool m_roleArnHasBeenSet = false;

    PipelineStatus m_pipelineStatus;
    bool m_pipelineStatusHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastRunTime;
    bool m_lastRunTimeHasBeenSet = false;

    UserContext m_createdBy;
    bool m_createdByHasBeenSet = false;

    UserContext m_lastModifiedBy;
    bool m_lastModifiedByHasBeenSet = false;

    ParallelismConfiguration m_parallelismConfiguration;
    bool m_parallelismConfigurationHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
