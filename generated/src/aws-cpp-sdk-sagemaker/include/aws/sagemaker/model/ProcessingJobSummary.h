/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/ProcessingJobStatus.h>
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
   * <p>Summary of information about a processing job.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProcessingJobSummary">AWS
   * API Reference</a></p>
   */
  class ProcessingJobSummary
  {
  public:
    AWS_SAGEMAKER_API ProcessingJobSummary();
    AWS_SAGEMAKER_API ProcessingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The name of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobName() const{ return m_processingJobName; }

    /**
     * <p>The name of the processing job.</p>
     */
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }

    /**
     * <p>The name of the processing job.</p>
     */
    inline void SetProcessingJobName(const Aws::String& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = value; }

    /**
     * <p>The name of the processing job.</p>
     */
    inline void SetProcessingJobName(Aws::String&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::move(value); }

    /**
     * <p>The name of the processing job.</p>
     */
    inline void SetProcessingJobName(const char* value) { m_processingJobNameHasBeenSet = true; m_processingJobName.assign(value); }

    /**
     * <p>The name of the processing job.</p>
     */
    inline ProcessingJobSummary& WithProcessingJobName(const Aws::String& value) { SetProcessingJobName(value); return *this;}

    /**
     * <p>The name of the processing job.</p>
     */
    inline ProcessingJobSummary& WithProcessingJobName(Aws::String&& value) { SetProcessingJobName(std::move(value)); return *this;}

    /**
     * <p>The name of the processing job.</p>
     */
    inline ProcessingJobSummary& WithProcessingJobName(const char* value) { SetProcessingJobName(value); return *this;}


    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline const Aws::String& GetProcessingJobArn() const{ return m_processingJobArn; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline bool ProcessingJobArnHasBeenSet() const { return m_processingJobArnHasBeenSet; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline void SetProcessingJobArn(const Aws::String& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = value; }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline void SetProcessingJobArn(Aws::String&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::move(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline void SetProcessingJobArn(const char* value) { m_processingJobArnHasBeenSet = true; m_processingJobArn.assign(value); }

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline ProcessingJobSummary& WithProcessingJobArn(const Aws::String& value) { SetProcessingJobArn(value); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline ProcessingJobSummary& WithProcessingJobArn(Aws::String&& value) { SetProcessingJobArn(std::move(value)); return *this;}

    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline ProcessingJobSummary& WithProcessingJobArn(const char* value) { SetProcessingJobArn(value); return *this;}


    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTimeHasBeenSet = true; m_creationTime = value; }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::move(value); }

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline ProcessingJobSummary& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}

    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline ProcessingJobSummary& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}


    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingEndTime() const{ return m_processingEndTime; }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline bool ProcessingEndTimeHasBeenSet() const { return m_processingEndTimeHasBeenSet; }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline void SetProcessingEndTime(const Aws::Utils::DateTime& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = value; }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline void SetProcessingEndTime(Aws::Utils::DateTime&& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = std::move(value); }

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline ProcessingJobSummary& WithProcessingEndTime(const Aws::Utils::DateTime& value) { SetProcessingEndTime(value); return *this;}

    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline ProcessingJobSummary& WithProcessingEndTime(Aws::Utils::DateTime&& value) { SetProcessingEndTime(std::move(value)); return *this;}


    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const{ return m_lastModifiedTime; }

    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }

    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline void SetLastModifiedTime(const Aws::Utils::DateTime& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = value; }

    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline void SetLastModifiedTime(Aws::Utils::DateTime&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::move(value); }

    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline ProcessingJobSummary& WithLastModifiedTime(const Aws::Utils::DateTime& value) { SetLastModifiedTime(value); return *this;}

    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline ProcessingJobSummary& WithLastModifiedTime(Aws::Utils::DateTime&& value) { SetLastModifiedTime(std::move(value)); return *this;}


    /**
     * <p>The status of the processing job.</p>
     */
    inline const ProcessingJobStatus& GetProcessingJobStatus() const{ return m_processingJobStatus; }

    /**
     * <p>The status of the processing job.</p>
     */
    inline bool ProcessingJobStatusHasBeenSet() const { return m_processingJobStatusHasBeenSet; }

    /**
     * <p>The status of the processing job.</p>
     */
    inline void SetProcessingJobStatus(const ProcessingJobStatus& value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = value; }

    /**
     * <p>The status of the processing job.</p>
     */
    inline void SetProcessingJobStatus(ProcessingJobStatus&& value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = std::move(value); }

    /**
     * <p>The status of the processing job.</p>
     */
    inline ProcessingJobSummary& WithProcessingJobStatus(const ProcessingJobStatus& value) { SetProcessingJobStatus(value); return *this;}

    /**
     * <p>The status of the processing job.</p>
     */
    inline ProcessingJobSummary& WithProcessingJobStatus(ProcessingJobStatus&& value) { SetProcessingJobStatus(std::move(value)); return *this;}


    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const{ return m_failureReason; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(const Aws::String& value) { m_failureReasonHasBeenSet = true; m_failureReason = value; }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(Aws::String&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::move(value); }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline void SetFailureReason(const char* value) { m_failureReasonHasBeenSet = true; m_failureReason.assign(value); }

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline ProcessingJobSummary& WithFailureReason(const Aws::String& value) { SetFailureReason(value); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline ProcessingJobSummary& WithFailureReason(Aws::String&& value) { SetFailureReason(std::move(value)); return *this;}

    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline ProcessingJobSummary& WithFailureReason(const char* value) { SetFailureReason(value); return *this;}


    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline const Aws::String& GetExitMessage() const{ return m_exitMessage; }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline bool ExitMessageHasBeenSet() const { return m_exitMessageHasBeenSet; }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline void SetExitMessage(const Aws::String& value) { m_exitMessageHasBeenSet = true; m_exitMessage = value; }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline void SetExitMessage(Aws::String&& value) { m_exitMessageHasBeenSet = true; m_exitMessage = std::move(value); }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline void SetExitMessage(const char* value) { m_exitMessageHasBeenSet = true; m_exitMessage.assign(value); }

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline ProcessingJobSummary& WithExitMessage(const Aws::String& value) { SetExitMessage(value); return *this;}

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline ProcessingJobSummary& WithExitMessage(Aws::String&& value) { SetExitMessage(std::move(value)); return *this;}

    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline ProcessingJobSummary& WithExitMessage(const char* value) { SetExitMessage(value); return *this;}

  private:

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime;
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_processingEndTime;
    bool m_processingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime;
    bool m_lastModifiedTimeHasBeenSet = false;

    ProcessingJobStatus m_processingJobStatus;
    bool m_processingJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_exitMessage;
    bool m_exitMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
