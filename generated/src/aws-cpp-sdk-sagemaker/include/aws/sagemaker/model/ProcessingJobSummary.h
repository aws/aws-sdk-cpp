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
    AWS_SAGEMAKER_API ProcessingJobSummary() = default;
    AWS_SAGEMAKER_API ProcessingJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API ProcessingJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the processing job.</p>
     */
    inline const Aws::String& GetProcessingJobName() const { return m_processingJobName; }
    inline bool ProcessingJobNameHasBeenSet() const { return m_processingJobNameHasBeenSet; }
    template<typename ProcessingJobNameT = Aws::String>
    void SetProcessingJobName(ProcessingJobNameT&& value) { m_processingJobNameHasBeenSet = true; m_processingJobName = std::forward<ProcessingJobNameT>(value); }
    template<typename ProcessingJobNameT = Aws::String>
    ProcessingJobSummary& WithProcessingJobName(ProcessingJobNameT&& value) { SetProcessingJobName(std::forward<ProcessingJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the processing job..</p>
     */
    inline const Aws::String& GetProcessingJobArn() const { return m_processingJobArn; }
    inline bool ProcessingJobArnHasBeenSet() const { return m_processingJobArnHasBeenSet; }
    template<typename ProcessingJobArnT = Aws::String>
    void SetProcessingJobArn(ProcessingJobArnT&& value) { m_processingJobArnHasBeenSet = true; m_processingJobArn = std::forward<ProcessingJobArnT>(value); }
    template<typename ProcessingJobArnT = Aws::String>
    ProcessingJobSummary& WithProcessingJobArn(ProcessingJobArnT&& value) { SetProcessingJobArn(std::forward<ProcessingJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the processing job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    ProcessingJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time at which the processing job completed.</p>
     */
    inline const Aws::Utils::DateTime& GetProcessingEndTime() const { return m_processingEndTime; }
    inline bool ProcessingEndTimeHasBeenSet() const { return m_processingEndTimeHasBeenSet; }
    template<typename ProcessingEndTimeT = Aws::Utils::DateTime>
    void SetProcessingEndTime(ProcessingEndTimeT&& value) { m_processingEndTimeHasBeenSet = true; m_processingEndTime = std::forward<ProcessingEndTimeT>(value); }
    template<typename ProcessingEndTimeT = Aws::Utils::DateTime>
    ProcessingJobSummary& WithProcessingEndTime(ProcessingEndTimeT&& value) { SetProcessingEndTime(std::forward<ProcessingEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that indicates the last time the processing job was modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    ProcessingJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the processing job.</p>
     */
    inline ProcessingJobStatus GetProcessingJobStatus() const { return m_processingJobStatus; }
    inline bool ProcessingJobStatusHasBeenSet() const { return m_processingJobStatusHasBeenSet; }
    inline void SetProcessingJobStatus(ProcessingJobStatus value) { m_processingJobStatusHasBeenSet = true; m_processingJobStatus = value; }
    inline ProcessingJobSummary& WithProcessingJobStatus(ProcessingJobStatus value) { SetProcessingJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A string, up to one KB in size, that contains the reason a processing job
     * failed, if it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    ProcessingJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional string, up to one KB in size, that contains metadata from the
     * processing container when the processing job exits.</p>
     */
    inline const Aws::String& GetExitMessage() const { return m_exitMessage; }
    inline bool ExitMessageHasBeenSet() const { return m_exitMessageHasBeenSet; }
    template<typename ExitMessageT = Aws::String>
    void SetExitMessage(ExitMessageT&& value) { m_exitMessageHasBeenSet = true; m_exitMessage = std::forward<ExitMessageT>(value); }
    template<typename ExitMessageT = Aws::String>
    ProcessingJobSummary& WithExitMessage(ExitMessageT&& value) { SetExitMessage(std::forward<ExitMessageT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_processingJobName;
    bool m_processingJobNameHasBeenSet = false;

    Aws::String m_processingJobArn;
    bool m_processingJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_processingEndTime{};
    bool m_processingEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    ProcessingJobStatus m_processingJobStatus{ProcessingJobStatus::NOT_SET};
    bool m_processingJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;

    Aws::String m_exitMessage;
    bool m_exitMessageHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
