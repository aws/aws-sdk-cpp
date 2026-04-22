/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIWorkloadS3DataSource.h>

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
 * <p>The data source for an AI workload input data channel.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIWorkloadDataSource">AWS
 * API Reference</a></p>
 */
class AIWorkloadDataSource {
 public:
  AWS_SAGEMAKER_API AIWorkloadDataSource() = default;
  AWS_SAGEMAKER_API AIWorkloadDataSource(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIWorkloadDataSource& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 data source configuration.</p>
   */
  inline const AIWorkloadS3DataSource& GetS3DataSource() const { return m_s3DataSource; }
  inline bool S3DataSourceHasBeenSet() const { return m_s3DataSourceHasBeenSet; }
  template <typename S3DataSourceT = AIWorkloadS3DataSource>
  void SetS3DataSource(S3DataSourceT&& value) {
    m_s3DataSourceHasBeenSet = true;
    m_s3DataSource = std::forward<S3DataSourceT>(value);
  }
  template <typename S3DataSourceT = AIWorkloadS3DataSource>
  AIWorkloadDataSource& WithS3DataSource(S3DataSourceT&& value) {
    SetS3DataSource(std::forward<S3DataSourceT>(value));
    return *this;
  }
  ///@}
 private:
  AIWorkloadS3DataSource m_s3DataSource;
  bool m_s3DataSourceHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
