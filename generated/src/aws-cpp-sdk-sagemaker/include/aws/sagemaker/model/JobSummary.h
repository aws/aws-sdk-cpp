/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobCategory.h>
#include <aws/sagemaker/model/JobSecondaryStatus.h>
#include <aws/sagemaker/model/JobStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace SageMaker {
namespace Model {

/**
 * <p>Provides summary information about a job, returned by the
 * <code>ListJobs</code> operation. Use <code>DescribeJob</code> to get full
 * details for a specific job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/JobSummary">AWS
 * API Reference</a></p>
 */
class JobSummary {
 public:
  AWS_SAGEMAKER_API JobSummary() = default;
  AWS_SAGEMAKER_API JobSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API JobSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the job.</p>
   */
  inline const Aws::String& GetJobArn() const { return m_jobArn; }
  inline bool JobArnHasBeenSet() const { return m_jobArnHasBeenSet; }
  template <typename JobArnT = Aws::String>
  void SetJobArn(JobArnT&& value) {
    m_jobArnHasBeenSet = true;
    m_jobArn = std::forward<JobArnT>(value);
  }
  template <typename JobArnT = Aws::String>
  JobSummary& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the job.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  JobSummary& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the job.</p>
   */
  inline JobCategory GetJobCategory() const { return m_jobCategory; }
  inline bool JobCategoryHasBeenSet() const { return m_jobCategoryHasBeenSet; }
  inline void SetJobCategory(JobCategory value) {
    m_jobCategoryHasBeenSet = true;
    m_jobCategory = value;
  }
  inline JobSummary& WithJobCategory(JobCategory value) {
    SetJobCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the job.</p>
   */
  inline JobStatus GetJobStatus() const { return m_jobStatus; }
  inline bool JobStatusHasBeenSet() const { return m_jobStatusHasBeenSet; }
  inline void SetJobStatus(JobStatus value) {
    m_jobStatusHasBeenSet = true;
    m_jobStatus = value;
  }
  inline JobSummary& WithJobStatus(JobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The secondary status of the job, providing more granular information about
   * the job's progress. Secondary statuses may change between releases.</p>
   */
  inline JobSecondaryStatus GetJobSecondaryStatus() const { return m_jobSecondaryStatus; }
  inline bool JobSecondaryStatusHasBeenSet() const { return m_jobSecondaryStatusHasBeenSet; }
  inline void SetJobSecondaryStatus(JobSecondaryStatus value) {
    m_jobSecondaryStatusHasBeenSet = true;
    m_jobSecondaryStatus = value;
  }
  inline JobSummary& WithJobSecondaryStatus(JobSecondaryStatus value) {
    SetJobSecondaryStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreationTime() const { return m_creationTime; }
  inline bool CreationTimeHasBeenSet() const { return m_creationTimeHasBeenSet; }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  void SetCreationTime(CreationTimeT&& value) {
    m_creationTimeHasBeenSet = true;
    m_creationTime = std::forward<CreationTimeT>(value);
  }
  template <typename CreationTimeT = Aws::Utils::DateTime>
  JobSummary& WithCreationTime(CreationTimeT&& value) {
    SetCreationTime(std::forward<CreationTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the job was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModifiedTime() const { return m_lastModifiedTime; }
  inline bool LastModifiedTimeHasBeenSet() const { return m_lastModifiedTimeHasBeenSet; }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  void SetLastModifiedTime(LastModifiedTimeT&& value) {
    m_lastModifiedTimeHasBeenSet = true;
    m_lastModifiedTime = std::forward<LastModifiedTimeT>(value);
  }
  template <typename LastModifiedTimeT = Aws::Utils::DateTime>
  JobSummary& WithLastModifiedTime(LastModifiedTimeT&& value) {
    SetLastModifiedTime(std::forward<LastModifiedTimeT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time that the job ended.</p>
   */
  inline const Aws::Utils::DateTime& GetEndTime() const { return m_endTime; }
  inline bool EndTimeHasBeenSet() const { return m_endTimeHasBeenSet; }
  template <typename EndTimeT = Aws::Utils::DateTime>
  void SetEndTime(EndTimeT&& value) {
    m_endTimeHasBeenSet = true;
    m_endTime = std::forward<EndTimeT>(value);
  }
  template <typename EndTimeT = Aws::Utils::DateTime>
  JobSummary& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobArn;

  Aws::String m_jobName;

  JobCategory m_jobCategory{JobCategory::NOT_SET};

  JobStatus m_jobStatus{JobStatus::NOT_SET};

  JobSecondaryStatus m_jobSecondaryStatus{JobSecondaryStatus::NOT_SET};

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Utils::DateTime m_endTime{};
  bool m_jobArnHasBeenSet = false;
  bool m_jobNameHasBeenSet = false;
  bool m_jobCategoryHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_jobSecondaryStatusHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
