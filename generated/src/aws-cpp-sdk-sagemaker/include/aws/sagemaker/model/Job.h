/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobCategory.h>
#include <aws/sagemaker/model/JobSecondaryStatus.h>
#include <aws/sagemaker/model/JobSecondaryStatusTransition.h>
#include <aws/sagemaker/model/JobStatus.h>
#include <aws/sagemaker/model/Tag.h>

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
 * <p>The properties of a job returned by the <a
 * href="https://docs.aws.amazon.com/sagemaker/latest/APIReference/API_Search.html">Search</a>
 * API.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/Job">AWS API
 * Reference</a></p>
 */
class Job {
 public:
  AWS_SAGEMAKER_API Job() = default;
  AWS_SAGEMAKER_API Job(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Job& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

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
  Job& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

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
  Job& WithJobArn(JobArnT&& value) {
    SetJobArn(std::forward<JobArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The ARN of the IAM role associated with the job.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  Job& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
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
  inline Job& WithJobCategory(JobCategory value) {
    SetJobCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The schema version used for the job configuration document.</p>
   */
  inline const Aws::String& GetJobConfigSchemaVersion() const { return m_jobConfigSchemaVersion; }
  inline bool JobConfigSchemaVersionHasBeenSet() const { return m_jobConfigSchemaVersionHasBeenSet; }
  template <typename JobConfigSchemaVersionT = Aws::String>
  void SetJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    m_jobConfigSchemaVersionHasBeenSet = true;
    m_jobConfigSchemaVersion = std::forward<JobConfigSchemaVersionT>(value);
  }
  template <typename JobConfigSchemaVersionT = Aws::String>
  Job& WithJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    SetJobConfigSchemaVersion(std::forward<JobConfigSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON configuration document for the job.</p>
   */
  inline const Aws::String& GetJobConfigDocument() const { return m_jobConfigDocument; }
  inline bool JobConfigDocumentHasBeenSet() const { return m_jobConfigDocumentHasBeenSet; }
  template <typename JobConfigDocumentT = Aws::String>
  void SetJobConfigDocument(JobConfigDocumentT&& value) {
    m_jobConfigDocumentHasBeenSet = true;
    m_jobConfigDocument = std::forward<JobConfigDocumentT>(value);
  }
  template <typename JobConfigDocumentT = Aws::String>
  Job& WithJobConfigDocument(JobConfigDocumentT&& value) {
    SetJobConfigDocument(std::forward<JobConfigDocumentT>(value));
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
  Job& WithCreationTime(CreationTimeT&& value) {
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
  Job& WithLastModifiedTime(LastModifiedTimeT&& value) {
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
  Job& WithEndTime(EndTimeT&& value) {
    SetEndTime(std::forward<EndTimeT>(value));
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
  inline Job& WithJobStatus(JobStatus value) {
    SetJobStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The detailed secondary status of the job, providing more granular information
   * about the job's progress.</p>
   */
  inline JobSecondaryStatus GetSecondaryStatus() const { return m_secondaryStatus; }
  inline bool SecondaryStatusHasBeenSet() const { return m_secondaryStatusHasBeenSet; }
  inline void SetSecondaryStatus(JobSecondaryStatus value) {
    m_secondaryStatusHasBeenSet = true;
    m_secondaryStatus = value;
  }
  inline Job& WithSecondaryStatus(JobSecondaryStatus value) {
    SetSecondaryStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of secondary status transitions for the job, with timestamps and
   * optional status messages.</p>
   */
  inline const Aws::Vector<JobSecondaryStatusTransition>& GetSecondaryStatusTransitions() const { return m_secondaryStatusTransitions; }
  inline bool SecondaryStatusTransitionsHasBeenSet() const { return m_secondaryStatusTransitionsHasBeenSet; }
  template <typename SecondaryStatusTransitionsT = Aws::Vector<JobSecondaryStatusTransition>>
  void SetSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) {
    m_secondaryStatusTransitionsHasBeenSet = true;
    m_secondaryStatusTransitions = std::forward<SecondaryStatusTransitionsT>(value);
  }
  template <typename SecondaryStatusTransitionsT = Aws::Vector<JobSecondaryStatusTransition>>
  Job& WithSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) {
    SetSecondaryStatusTransitions(std::forward<SecondaryStatusTransitionsT>(value));
    return *this;
  }
  template <typename SecondaryStatusTransitionsT = JobSecondaryStatusTransition>
  Job& AddSecondaryStatusTransitions(SecondaryStatusTransitionsT&& value) {
    m_secondaryStatusTransitionsHasBeenSet = true;
    m_secondaryStatusTransitions.emplace_back(std::forward<SecondaryStatusTransitionsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>If the job failed, the reason it failed.</p>
   */
  inline const Aws::String& GetFailureReason() const { return m_failureReason; }
  inline bool FailureReasonHasBeenSet() const { return m_failureReasonHasBeenSet; }
  template <typename FailureReasonT = Aws::String>
  void SetFailureReason(FailureReasonT&& value) {
    m_failureReasonHasBeenSet = true;
    m_failureReason = std::forward<FailureReasonT>(value);
  }
  template <typename FailureReasonT = Aws::String>
  Job& WithFailureReason(FailureReasonT&& value) {
    SetFailureReason(std::forward<FailureReasonT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The tags associated with the job.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  Job& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  Job& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobName;

  Aws::String m_jobArn;

  Aws::String m_roleArn;

  JobCategory m_jobCategory{JobCategory::NOT_SET};

  Aws::String m_jobConfigSchemaVersion;

  Aws::String m_jobConfigDocument;

  Aws::Utils::DateTime m_creationTime{};

  Aws::Utils::DateTime m_lastModifiedTime{};

  Aws::Utils::DateTime m_endTime{};

  JobStatus m_jobStatus{JobStatus::NOT_SET};

  JobSecondaryStatus m_secondaryStatus{JobSecondaryStatus::NOT_SET};

  Aws::Vector<JobSecondaryStatusTransition> m_secondaryStatusTransitions;

  Aws::String m_failureReason;

  Aws::Vector<Tag> m_tags;
  bool m_jobNameHasBeenSet = false;
  bool m_jobArnHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_jobCategoryHasBeenSet = false;
  bool m_jobConfigSchemaVersionHasBeenSet = false;
  bool m_jobConfigDocumentHasBeenSet = false;
  bool m_creationTimeHasBeenSet = false;
  bool m_lastModifiedTimeHasBeenSet = false;
  bool m_endTimeHasBeenSet = false;
  bool m_jobStatusHasBeenSet = false;
  bool m_secondaryStatusHasBeenSet = false;
  bool m_secondaryStatusTransitionsHasBeenSet = false;
  bool m_failureReasonHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
