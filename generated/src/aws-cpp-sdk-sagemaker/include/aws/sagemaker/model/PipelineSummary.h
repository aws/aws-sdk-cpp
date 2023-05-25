/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <p>A summary of a pipeline.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineSummary">AWS
   * API Reference</a></p>
   */
  class PipelineSummary
  {
  public:
    AWS_SAGEMAKER_API PipelineSummary();
    AWS_SAGEMAKER_API PipelineSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineArn() const{ return m_pipelineArn; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline bool PipelineArnHasBeenSet() const { return m_pipelineArnHasBeenSet; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const Aws::String& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = value; }

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(Aws::String&& value) { m_pipelineArnHasBeenSet = true; m_pipelineArn = std::move(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline void SetPipelineArn(const char* value) { m_pipelineArnHasBeenSet = true; m_pipelineArn.assign(value); }

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineArn(const Aws::String& value) { SetPipelineArn(value); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineArn(Aws::String&& value) { SetPipelineArn(std::move(value)); return *this;}

    /**
     * <p> The Amazon Resource Name (ARN) of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineArn(const char* value) { SetPipelineArn(value); return *this;}


    /**
     * <p>The name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineName() const{ return m_pipelineName; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline bool PipelineNameHasBeenSet() const { return m_pipelineNameHasBeenSet; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const Aws::String& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = value; }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(Aws::String&& value) { m_pipelineNameHasBeenSet = true; m_pipelineName = std::move(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline void SetPipelineName(const char* value) { m_pipelineNameHasBeenSet = true; m_pipelineName.assign(value); }

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(const Aws::String& value) { SetPipelineName(value); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(Aws::String&& value) { SetPipelineName(std::move(value)); return *this;}

    /**
     * <p>The name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineName(const char* value) { SetPipelineName(value); return *this;}


    /**
     * <p>The display name of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDisplayName() const{ return m_pipelineDisplayName; }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline bool PipelineDisplayNameHasBeenSet() const { return m_pipelineDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline void SetPipelineDisplayName(const Aws::String& value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName = value; }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline void SetPipelineDisplayName(Aws::String&& value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName = std::move(value); }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline void SetPipelineDisplayName(const char* value) { m_pipelineDisplayNameHasBeenSet = true; m_pipelineDisplayName.assign(value); }

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineDisplayName(const Aws::String& value) { SetPipelineDisplayName(value); return *this;}

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineDisplayName(Aws::String&& value) { SetPipelineDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineDisplayName(const char* value) { SetPipelineDisplayName(value); return *this;}


    /**
     * <p>The description of the pipeline.</p>
     */
    inline const Aws::String& GetPipelineDescription() const{ return m_pipelineDescription; }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline bool PipelineDescriptionHasBeenSet() const { return m_pipelineDescriptionHasBeenSet; }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline void SetPipelineDescription(const Aws::String& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = value; }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline void SetPipelineDescription(Aws::String&& value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription = std::move(value); }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline void SetPipelineDescription(const char* value) { m_pipelineDescriptionHasBeenSet = true; m_pipelineDescription.assign(value); }

    /**
     * <p>The description of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineDescription(const Aws::String& value) { SetPipelineDescription(value); return *this;}

    /**
     * <p>The description of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineDescription(Aws::String&& value) { SetPipelineDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pipeline.</p>
     */
    inline PipelineSummary& WithPipelineDescription(const char* value) { SetPipelineDescription(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline const Aws::String& GetRoleArn() const{ return m_roleArn; }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline void SetRoleArn(const Aws::String& value) { m_roleArnHasBeenSet = true; m_roleArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline void SetRoleArn(Aws::String&& value) { m_roleArnHasBeenSet = true; m_roleArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline void SetRoleArn(const char* value) { m_roleArnHasBeenSet = true; m_roleArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline PipelineSummary& WithRoleArn(const Aws::String& value) { SetRoleArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline PipelineSummary& WithRoleArn(Aws::String&& value) { SetRoleArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) that the pipeline used to execute.</p>
     */
    inline PipelineSummary& WithRoleArn(const char* value) { SetRoleArn(value); return *this;}


    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline PipelineSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The creation time of the pipeline.</p>
     */
    inline PipelineSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline PipelineSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>The time that the pipeline was last modified.</p>
     */
    inline PipelineSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The last time that a pipeline execution began.</p>
     */
    inline const Aws::Utils::DateTime& GetLastExecutionTime() const{ return m_lastExecutionTime; }

    /**
     * <p>The last time that a pipeline execution began.</p>
     */
    inline bool LastExecutionTimeHasBeenSet() const { return m_lastExecutionTimeHasBeenSet; }

    /**
     * <p>The last time that a pipeline execution began.</p>
     */
    inline void SetLastExecutionTime(const Aws::Utils::DateTime& value) { m_lastExecutionTimeHasBeenSet = true; m_lastExecutionTime = value; }

    /**
     * <p>The last time that a pipeline execution began.</p>
     */
    inline void SetLastExecutionTime(Aws::Utils::DateTime&& value) { m_lastExecutionTimeHasBeenSet = true; m_lastExecutionTime = std::move(value); }

    /**
     * <p>The last time that a pipeline execution began.</p>
     */
    inline PipelineSummary& WithLastExecutionTime(const Aws::Utils::DateTime& value) { SetLastExecutionTime(value); return *this;}

    /**
     * <p>The last time that a pipeline execution began.</p>
     */
    inline PipelineSummary& WithLastExecutionTime(Aws::Utils::DateTime&& value) { SetLastExecutionTime(std::move(value)); return *this;}

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

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastExecutionTime;
    bool m_lastExecutionTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
