/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>Provides summary information about a job configuration schema
 * version.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/JobConfigSchemaVersionSummary">AWS
 * API Reference</a></p>
 */
class JobConfigSchemaVersionSummary {
 public:
  AWS_SAGEMAKER_API JobConfigSchemaVersionSummary() = default;
  AWS_SAGEMAKER_API JobConfigSchemaVersionSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API JobConfigSchemaVersionSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The version of the job configuration schema.</p>
   */
  inline const Aws::String& GetJobConfigSchemaVersion() const { return m_jobConfigSchemaVersion; }
  inline bool JobConfigSchemaVersionHasBeenSet() const { return m_jobConfigSchemaVersionHasBeenSet; }
  template <typename JobConfigSchemaVersionT = Aws::String>
  void SetJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    m_jobConfigSchemaVersionHasBeenSet = true;
    m_jobConfigSchemaVersion = std::forward<JobConfigSchemaVersionT>(value);
  }
  template <typename JobConfigSchemaVersionT = Aws::String>
  JobConfigSchemaVersionSummary& WithJobConfigSchemaVersion(JobConfigSchemaVersionT&& value) {
    SetJobConfigSchemaVersion(std::forward<JobConfigSchemaVersionT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobConfigSchemaVersion;
  bool m_jobConfigSchemaVersionHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
