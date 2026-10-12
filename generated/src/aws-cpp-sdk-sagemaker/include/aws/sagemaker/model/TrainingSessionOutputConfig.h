/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/TrainingSessionS3Location.h>

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
 * <p>The output configuration for a training session, including the Amazon S3
 * location for checkpoints and model artifacts, and optional encryption
 * settings.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/TrainingSessionOutputConfig">AWS
 * API Reference</a></p>
 */
class TrainingSessionOutputConfig {
 public:
  AWS_SAGEMAKER_API TrainingSessionOutputConfig() = default;
  AWS_SAGEMAKER_API TrainingSessionOutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API TrainingSessionOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 location where training session outputs, including checkpoints
   * and model artifacts, are stored.</p>
   */
  inline const TrainingSessionS3Location& GetS3Location() const { return m_s3Location; }
  inline bool S3LocationHasBeenSet() const { return m_s3LocationHasBeenSet; }
  template <typename S3LocationT = TrainingSessionS3Location>
  void SetS3Location(S3LocationT&& value) {
    m_s3LocationHasBeenSet = true;
    m_s3Location = std::forward<S3LocationT>(value);
  }
  template <typename S3LocationT = TrainingSessionS3Location>
  TrainingSessionOutputConfig& WithS3Location(S3LocationT&& value) {
    SetS3Location(std::forward<S3LocationT>(value));
    return *this;
  }
  ///@}
 private:
  TrainingSessionS3Location m_s3Location;
  bool m_s3LocationHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
