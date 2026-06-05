/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIMlflowConfig.h>

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
 * <p>The output configuration for an AI benchmark job.</p><p><h3>See Also:</h3>
 * <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIBenchmarkOutputConfig">AWS
 * API Reference</a></p>
 */
class AIBenchmarkOutputConfig {
 public:
  AWS_SAGEMAKER_API AIBenchmarkOutputConfig() = default;
  AWS_SAGEMAKER_API AIBenchmarkOutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIBenchmarkOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI where benchmark results are stored.</p>
   */
  inline const Aws::String& GetS3OutputLocation() const { return m_s3OutputLocation; }
  inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
  template <typename S3OutputLocationT = Aws::String>
  void SetS3OutputLocation(S3OutputLocationT&& value) {
    m_s3OutputLocationHasBeenSet = true;
    m_s3OutputLocation = std::forward<S3OutputLocationT>(value);
  }
  template <typename S3OutputLocationT = Aws::String>
  AIBenchmarkOutputConfig& WithS3OutputLocation(S3OutputLocationT&& value) {
    SetS3OutputLocation(std::forward<S3OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The MLflow tracking configuration for the job. If you don't specify this
   * parameter, MLflow tracking is disabled.</p>
   */
  inline const AIMlflowConfig& GetMlflowConfig() const { return m_mlflowConfig; }
  inline bool MlflowConfigHasBeenSet() const { return m_mlflowConfigHasBeenSet; }
  template <typename MlflowConfigT = AIMlflowConfig>
  void SetMlflowConfig(MlflowConfigT&& value) {
    m_mlflowConfigHasBeenSet = true;
    m_mlflowConfig = std::forward<MlflowConfigT>(value);
  }
  template <typename MlflowConfigT = AIMlflowConfig>
  AIBenchmarkOutputConfig& WithMlflowConfig(MlflowConfigT&& value) {
    SetMlflowConfig(std::forward<MlflowConfigT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3OutputLocation;

  AIMlflowConfig m_mlflowConfig;
  bool m_s3OutputLocationHasBeenSet = false;
  bool m_mlflowConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
