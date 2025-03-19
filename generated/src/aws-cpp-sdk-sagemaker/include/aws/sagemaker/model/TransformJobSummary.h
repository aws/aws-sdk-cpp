/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/TransformJobStatus.h>
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
   * <p>Provides a summary of a transform job. Multiple
   * <code>TransformJobSummary</code> objects are returned as a list after in
   * response to a <a
   * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_ListTransformJobs.html">ListTransformJobs</a>
   * call.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TransformJobSummary">AWS
   * API Reference</a></p>
   */
  class TransformJobSummary
  {
  public:
    AWS_SAGEMAKER_API TransformJobSummary() = default;
    AWS_SAGEMAKER_API TransformJobSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API TransformJobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The name of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobName() const { return m_transformJobName; }
    inline bool TransformJobNameHasBeenSet() const { return m_transformJobNameHasBeenSet; }
    template<typename TransformJobNameT = Aws::String>
    void SetTransformJobName(TransformJobNameT&& value) { m_transformJobNameHasBeenSet = true; m_transformJobName = std::forward<TransformJobNameT>(value); }
    template<typename TransformJobNameT = Aws::String>
    TransformJobSummary& WithTransformJobName(TransformJobNameT&& value) { SetTransformJobName(std::forward<TransformJobNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the transform job.</p>
     */
    inline const Aws::String& GetTransformJobArn() const { return m_transformJobArn; }
    inline bool TransformJobArnHasBeenSet() const { return m_transformJobArnHasBeenSet; }
    template<typename TransformJobArnT = Aws::String>
    void SetTransformJobArn(TransformJobArnT&& value) { m_transformJobArnHasBeenSet = true; m_transformJobArn = std::forward<TransformJobArnT>(value); }
    template<typename TransformJobArnT = Aws::String>
    TransformJobSummary& WithTransformJobArn(TransformJobArnT&& value) { SetTransformJobArn(std::forward<TransformJobArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A timestamp that shows when the transform Job was created.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
    inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    void SetCreationTime(CreationTimeT&& value) { m_creationTimeHasBeenSet = true; m_creationTime = std::forward<CreationTimeT>(value); }
    template<typename CreationTimeT = Aws::Utils::DateTime>
    TransformJobSummary& WithCreationTime(CreationTimeT&& value) { SetCreationTime(std::forward<CreationTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job ends on compute instances. For successful
     * jobs and stopped jobs, this is the exact time recorded after the results are
     * uploaded. For failed jobs, this is when Amazon SageMaker detected that the job
     * failed.</p>
     */
    inline const Aws::Utils::DateTime& GetTransformEndTime() const { return m_transformEndTime; }
    inline bool TransformEndTimeHasBeenSet() const { return m_transformEndTimeHasBeenSet; }
    template<typename TransformEndTimeT = Aws::Utils::DateTime>
    void SetTransformEndTime(TransformEndTimeT&& value) { m_transformEndTimeHasBeenSet = true; m_transformEndTime = std::forward<TransformEndTimeT>(value); }
    template<typename TransformEndTimeT = Aws::Utils::DateTime>
    TransformJobSummary& WithTransformEndTime(TransformEndTimeT&& value) { SetTransformEndTime(std::forward<TransformEndTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates when the transform job was last modified.</p>
     */
    inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
    inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    void SetLastModifiedTime(LastModifiedTimeT&& value) { m_lastModifiedTimeHasBeenSet = true; m_lastModifiedTime = std::forward<LastModifiedTimeT>(value); }
    template<typename LastModifiedTimeT = Aws::Utils::DateTime>
    TransformJobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) { SetLastModifiedTime(std::forward<LastModifiedTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the transform job.</p>
     */
    inline TransformJobStatus GetTransformJobStatus() const { return m_transformJobStatus; }
    inline bool TransformJobStatusHasBeenSet() const { return m_transformJobStatusHasBeenSet; }
    inline void SetTransformJobStatus(TransformJobStatus value) { m_transformJobStatusHasBeenSet = true; m_transformJobStatus = value; }
    inline TransformJobSummary& WithTransformJobStatus(TransformJobStatus value) { SetTransformJobStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the transform job failed, the reason it failed.</p>
     */
    inline const Aws::String& GetFailureReason() const { return m_failureReason; }
    inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
    template<typename FailureReasonT = Aws::String>
    void SetFailureReason(FailureReasonT&& value) { m_failureReasonHasBeenSet = true; m_failureReason = std::forward<FailureReasonT>(value); }
    template<typename FailureReasonT = Aws::String>
    TransformJobSummary& WithFailureReason(FailureReasonT&& value) { SetFailureReason(std::forward<FailureReasonT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_transformJobName;
    bool m_transformJobNameHasBeenSet = false;

    Aws::String m_transformJobArn;
    bool m_transformJobArnHasBeenSet = false;

    Aws::Utils::DateTime m_creationTime{};
    bool m_creationTimeHasBeenSet = false;

    Aws::Utils::DateTime m_transformEndTime{};
    bool m_transformEndTimeHasBeenSet = false;

    Aws::Utils::DateTime m_lastModifiedTime{};
    bool m_lastModifiedTimeHasBeenSet = false;

    TransformJobStatus m_transformJobStatus{TransformJobStatus::NOT_SET};
    bool m_transformJobStatusHasBeenSet = false;

    Aws::String m_failureReason;
    bool m_failureReasonHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
