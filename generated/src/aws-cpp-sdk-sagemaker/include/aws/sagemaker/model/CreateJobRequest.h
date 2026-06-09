/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobCategory.h>
#include <aws/sagemaker/model/Tag.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class CreateJobRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API CreateJobRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "CreateJob"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name of the job. The name must be unique within your account and Amazon
   * Web Services Region.</p>
   */
  inline const Aws::String& GetJobName() const { return m_jobName; }
  inline bool JobNameHasBeenSet() const { return m_jobNameHasBeenSet; }
  template <typename JobNameT = Aws::String>
  void SetJobName(JobNameT&& value) {
    m_jobNameHasBeenSet = true;
    m_jobName = std::forward<JobNameT>(value);
  }
  template <typename JobNameT = Aws::String>
  CreateJobRequest& WithJobName(JobNameT&& value) {
    SetJobName(std::forward<JobNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the IAM role that Amazon SageMaker assumes
   * to perform the job. The role must have the necessary permissions to access the
   * resources required by the job configuration.</p>
   */
  inline const Aws::String& GetRoleArn() const { return m_roleArn; }
  inline bool RoleArnHasBeenSet() const { return m_roleArnHasBeenSet; }
  template <typename RoleArnT = Aws::String>
  void SetRoleArn(RoleArnT&& value) {
    m_roleArnHasBeenSet = true;
    m_roleArn = std::forward<RoleArnT>(value);
  }
  template <typename RoleArnT = Aws::String>
  CreateJobRequest& WithRoleArn(RoleArnT&& value) {
    SetRoleArn(std::forward<RoleArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The category of the job. The category determines the type of workload that
   * the job runs.</p>
   */
  inline JobCategory GetJobCategory() const { return m_jobCategory; }
  inline bool JobCategoryHasBeenSet() const { return m_jobCategoryHasBeenSet; }
  inline void SetJobCategory(JobCategory value) {
    m_jobCategoryHasBeenSet = true;
    m_jobCategory = value;
  }
  inline CreateJobRequest& WithJobCategory(JobCategory value) {
    SetJobCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the configuration schema to use for the job configuration
   * document. Use <code>ListJobSchemaVersions</code> to get available schema
   * versions for a job category.</p>
   */
  inline const Aws::String& GetJobConfigSchemaVersion() const { return m_jobConfigSchemaVersion; }
  inline bool JobConfigSchemaVersionHasBeenSet() const { return m_jobConfigSchemaVersionHasBeenSet; }
  template <typename JobConfigSchemaVersionT = Aws::String>
  void SetJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    m_jobConfigSchemaVersionHasBeenSet = true;
    m_jobConfigSchemaVersion = std::forward<JobConfigSchemaVersionT>(value);
  }
  template <typename JobConfigSchemaVersionT = Aws::String>
  CreateJobRequest& WithJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    SetJobConfigSchemaVersion(std::forward<JobConfigSchemaVersionT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The JSON configuration document for the job. The document must conform to the
   * schema specified by <code>JobConfigSchemaVersion</code>. Use
   * <code>DescribeJobSchemaVersion</code> to retrieve the schema for validation.</p>
   */
  inline const Aws::String& GetJobConfigDocument() const { return m_jobConfigDocument; }
  inline bool JobConfigDocumentHasBeenSet() const { return m_jobConfigDocumentHasBeenSet; }
  template <typename JobConfigDocumentT = Aws::String>
  void SetJobConfigDocument(JobConfigDocumentT&& value) {
    m_jobConfigDocumentHasBeenSet = true;
    m_jobConfigDocument = std::forward<JobConfigDocumentT>(value);
  }
  template <typename JobConfigDocumentT = Aws::String>
  CreateJobRequest& WithJobConfigDocument(JobConfigDocumentT&& value) {
    SetJobConfigDocument(std::forward<JobConfigDocumentT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An array of key-value pairs to apply to the job as tags. For more
   * information, see <a
   * href="https://docs.aws.amazon.com/general/latest/gr/aws_tagging.html">Tagging
   * Amazon Web Services Resources</a>.</p>
   */
  inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
  inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
  template <typename TagsT = Aws::Vector<Tag>>
  void SetTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags = std::forward<TagsT>(value);
  }
  template <typename TagsT = Aws::Vector<Tag>>
  CreateJobRequest& WithTags(TagsT&& value) {
    SetTags(std::forward<TagsT>(value));
    return *this;
  }
  template <typename TagsT = Tag>
  CreateJobRequest& AddTags(TagsT&& value) {
    m_tagsHasBeenSet = true;
    m_tags.emplace_back(std::forward<TagsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobName;

  Aws::String m_roleArn;

  JobCategory m_jobCategory{JobCategory::NOT_SET};

  Aws::String m_jobConfigSchemaVersion;

  Aws::String m_jobConfigDocument;

  Aws::Vector<Tag> m_tags;
  bool m_jobNameHasBeenSet = false;
  bool m_roleArnHasBeenSet = false;
  bool m_jobCategoryHasBeenSet = false;
  bool m_jobConfigSchemaVersionHasBeenSet = false;
  bool m_jobConfigDocumentHasBeenSet = false;
  bool m_tagsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
