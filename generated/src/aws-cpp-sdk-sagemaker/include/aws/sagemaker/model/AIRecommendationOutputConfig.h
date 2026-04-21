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
 * <p>The output configuration for an AI recommendation job.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIRecommendationOutputConfig">AWS
 * API Reference</a></p>
 */
class AIRecommendationOutputConfig {
 public:
  AWS_SAGEMAKER_API AIRecommendationOutputConfig() = default;
  AWS_SAGEMAKER_API AIRecommendationOutputConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIRecommendationOutputConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The Amazon S3 URI where recommendation results are stored.</p>
   */
  inline const Aws::String& GetS3OutputLocation() const { return m_s3OutputLocation; }
  inline bool S3OutputLocationHasBeenSet() const { return m_s3OutputLocationHasBeenSet; }
  template <typename S3OutputLocationT = Aws::String>
  void SetS3OutputLocation(S3OutputLocationT&& value) {
    m_s3OutputLocationHasBeenSet = true;
    m_s3OutputLocation = std::forward<S3OutputLocationT>(value);
  }
  template <typename S3OutputLocationT = Aws::String>
  AIRecommendationOutputConfig& WithS3OutputLocation(S3OutputLocationT&& value) {
    SetS3OutputLocation(std::forward<S3OutputLocationT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the model package group where the
   * optimized model is registered as a new model package version.</p>
   */
  inline const Aws::String& GetModelPackageGroupIdentifier() const { return m_modelPackageGroupIdentifier; }
  inline bool ModelPackageGroupIdentifierHasBeenSet() const { return m_modelPackageGroupIdentifierHasBeenSet; }
  template <typename ModelPackageGroupIdentifierT = Aws::String>
  void SetModelPackageGroupIdentifier(ModelPackageGroupIdentifierT&& value) {
    m_modelPackageGroupIdentifierHasBeenSet = true;
    m_modelPackageGroupIdentifier = std::forward<ModelPackageGroupIdentifierT>(value);
  }
  template <typename ModelPackageGroupIdentifierT = Aws::String>
  AIRecommendationOutputConfig& WithModelPackageGroupIdentifier(ModelPackageGroupIdentifierT&& value) {
    SetModelPackageGroupIdentifier(std::forward<ModelPackageGroupIdentifierT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_s3OutputLocation;

  Aws::String m_modelPackageGroupIdentifier;
  bool m_s3OutputLocationHasBeenSet = false;
  bool m_modelPackageGroupIdentifierHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
