/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>

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
 * <p>Settings that affect how the inference component caches data.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentDataCacheConfigSummary">AWS
 * API Reference</a></p>
 */
class InferenceComponentDataCacheConfigSummary {
 public:
  AWS_SAGEMAKER_API InferenceComponentDataCacheConfigSummary() = default;
  AWS_SAGEMAKER_API InferenceComponentDataCacheConfigSummary(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentDataCacheConfigSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Indicates whether the inference component caches model artifacts as part of
   * the auto scaling process.</p>
   */
  inline bool GetEnableCaching() const { return m_enableCaching; }
  inline bool EnableCachingHasBeenSet() const { return m_enableCachingHasBeenSet; }
  inline void SetEnableCaching(bool value) {
    m_enableCachingHasBeenSet = true;
    m_enableCaching = value;
  }
  inline InferenceComponentDataCacheConfigSummary& WithEnableCaching(bool value) {
    SetEnableCaching(value);
    return *this;
  }
  ///@}
 private:
  bool m_enableCaching{false};
  bool m_enableCachingHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
