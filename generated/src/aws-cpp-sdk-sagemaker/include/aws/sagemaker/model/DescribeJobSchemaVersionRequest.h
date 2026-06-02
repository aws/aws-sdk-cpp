/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/JobCategory.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class DescribeJobSchemaVersionRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API DescribeJobSchemaVersionRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeJobSchemaVersion"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The category of the job schema to describe.</p>
   */
  inline JobCategory GetJobCategory() const { return m_jobCategory; }
  inline bool JobCategoryHasBeenSet() const { return m_jobCategoryHasBeenSet; }
  inline void SetJobCategory(JobCategory value) {
    m_jobCategoryHasBeenSet = true;
    m_jobCategory = value;
  }
  inline DescribeJobSchemaVersionRequest& WithJobCategory(JobCategory value) {
    SetJobCategory(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The version of the schema to retrieve. If not specified, the latest version
   * is returned.</p>
   */
  inline const Aws::String& GetJobConfigSchemaVersion() const { return m_jobConfigSchemaVersion; }
  inline bool JobConfigSchemaVersionHasBeenSet() const { return m_jobConfigSchemaVersionHasBeenSet; }
  template <typename JobConfigSchemaVersionT = Aws::String>
  void SetJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    m_jobConfigSchemaVersionHasBeenSet = true;
    m_jobConfigSchemaVersion = std::forward<JobConfigSchemaVersionT>(value);
  }
  template <typename JobConfigSchemaVersionT = Aws::String>
  DescribeJobSchemaVersionRequest& WithJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    SetJobConfigSchemaVersion(std::forward<JobConfigSchemaVersionT>(value));
    return *this;
  }
  ///@}
 private:
  JobCategory m_jobCategory{JobCategory::NOT_SET};

  Aws::String m_jobConfigSchemaVersion;
  bool m_jobCategoryHasBeenSet = false;
  bool m_jobConfigSchemaVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
