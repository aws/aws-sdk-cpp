/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/PipelineExecutionStatus.h>
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
   * <p>A pipeline execution summary.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PipelineExecutionSummary">AWS
   * API Reference</a></p>
   */
  class PipelineExecutionSummary
  {
  public:
    AWS_SAGEMAKER_API PipelineExecutionSummary();
    AWS_SAGEMAKER_API PipelineExecutionSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API PipelineExecutionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionArn() const{ return m_pipelineExecutionArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline bool PipelineExecutionArnHasBeenSet() const { return m_pipelineExecutionArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const Aws::String& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(Aws::String&& value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionArn(const char* value) { m_pipelineExecutionArnHasBeenSet = true; m_pipelineExecutionArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionArn(const Aws::String& value) { SetPipelineExecutionArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionArn(Aws::String&& value) { SetPipelineExecutionArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionArn(const char* value) { SetPipelineExecutionArn(value); return *this;}


    /**
     * <p>The start time of the pipeline execution.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }

    /**
     * <p>The start time of the pipeline execution.</p>
     */
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }

    /**
     * <p>The start time of the pipeline execution.</p>
     */
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }

    /**
     * <p>The start time of the pipeline execution.</p>
     */
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }

    /**
     * <p>The start time of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}

    /**
     * <p>The start time of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}


    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline const PipelineExecutionStatus& GetPipelineExecutionStatus() const{ return m_pipelineExecutionStatus; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline bool PipelineExecutionStatusHasBeenSet() const { return m_pipelineExecutionStatusHasBeenSet; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionStatus(const PipelineExecutionStatus& value) { m_pipelineExecutionStatusHasBeenSet = true; m_pipelineExecutionStatus = value; }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionStatus(PipelineExecutionStatus&& value) { m_pipelineExecutionStatusHasBeenSet = true; m_pipelineExecutionStatus = std::move(value); }

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionStatus(const PipelineExecutionStatus& value) { SetPipelineExecutionStatus(value); return *this;}

    /**
     * <p>The status of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionStatus(PipelineExecutionStatus&& value) { SetPipelineExecutionStatus(std::move(value)); return *this;}


    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDescription() const{ return m_pipelineExecutionDescription; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline bool PipelineExecutionDescriptionHasBeenSet() const { return m_pipelineExecutionDescriptionHasBeenSet; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const Aws::String& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = value; }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(Aws::String&& value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription = std::move(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDescription(const char* value) { m_pipelineExecutionDescriptionHasBeenSet = true; m_pipelineExecutionDescription.assign(value); }

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionDescription(const Aws::String& value) { SetPipelineExecutionDescription(value); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionDescription(Aws::String&& value) { SetPipelineExecutionDescription(std::move(value)); return *this;}

    /**
     * <p>The description of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionDescription(const char* value) { SetPipelineExecutionDescription(value); return *this;}


    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline const Aws::String& GetPipelineExecutionDisplayName() const{ return m_pipelineExecutionDisplayName; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline bool PipelineExecutionDisplayNameHasBeenSet() const { return m_pipelineExecutionDisplayNameHasBeenSet; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const Aws::String& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = value; }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(Aws::String&& value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName = std::move(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline void SetPipelineExecutionDisplayName(const char* value) { m_pipelineExecutionDisplayNameHasBeenSet = true; m_pipelineExecutionDisplayName.assign(value); }

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionDisplayName(const Aws::String& value) { SetPipelineExecutionDisplayName(value); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionDisplayName(Aws::String&& value) { SetPipelineExecutionDisplayName(std::move(value)); return *this;}

    /**
     * <p>The display name of the pipeline execution.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionDisplayName(const char* value) { SetPipelineExecutionDisplayName(value); return *this;}


    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline const Aws::String& GetPipelineExecutionFailureReason() const{ return m_pipelineExecutionFailureReason; }

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline bool PipelineExecutionFailureReasonHasBeenSet() const { return m_pipelineExecutionFailureReasonHasBeenSet; }

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline void SetPipelineExecutionFailureReason(const Aws::String& value) { m_pipelineExecutionFailureReasonHasBeenSet = true; m_pipelineExecutionFailureReason = value; }

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline void SetPipelineExecutionFailureReason(Aws::String&& value) { m_pipelineExecutionFailureReasonHasBeenSet = true; m_pipelineExecutionFailureReason = std::move(value); }

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline void SetPipelineExecutionFailureReason(const char* value) { m_pipelineExecutionFailureReasonHasBeenSet = true; m_pipelineExecutionFailureReason.assign(value); }

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionFailureReason(const Aws::String& value) { SetPipelineExecutionFailureReason(value); return *this;}

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionFailureReason(Aws::String&& value) { SetPipelineExecutionFailureReason(std::move(value)); return *this;}

    /**
     * <p>A message generated by SageMaker Pipelines describing why the pipeline
     * execution failed.</p>
     */
    inline PipelineExecutionSummary& WithPipelineExecutionFailureReason(const char* value) { SetPipelineExecutionFailureReason(value); return *this;}

  private:

    Aws::String m_pipelineExecutionArn;
    bool m_pipelineExecutionArnHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    PipelineExecutionStatus m_pipelineExecutionStatus;
    bool m_pipelineExecutionStatusHasBeenSet = false;

    Aws::String m_pipelineExecutionDescription;
    bool m_pipelineExecutionDescriptionHasBeenSet = false;

    Aws::String m_pipelineExecutionDisplayName;
    bool m_pipelineExecutionDisplayNameHasBeenSet = false;

    Aws::String m_pipelineExecutionFailureReason;
    bool m_pipelineExecutionFailureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
