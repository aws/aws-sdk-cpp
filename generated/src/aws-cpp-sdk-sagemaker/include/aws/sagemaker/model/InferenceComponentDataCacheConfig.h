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
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/InferenceComponentDataCacheConfig">AWS
 * API Reference</a></p>
 */
class InferenceComponentDataCacheConfig {
 public:
  AWS_SAGEMAKER_API InferenceComponentDataCacheConfig() = default;
  AWS_SAGEMAKER_API InferenceComponentDataCacheConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API InferenceComponentDataCacheConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sets whether the endpoint that hosts the inference component caches the model
   * artifacts and container image.</p> <p>With caching enabled, the endpoint caches
   * this data in each instance that it provisions for the inference component. That
   * way, the inference component deploys faster during the auto scaling process. If
   * caching isn't enabled, the inference component takes longer to deploy because of
   * the time it spends downloading the data.</p>
   */
  inline bool GetEnableCaching() const { return m_enableCaching; }
  inline bool EnableCachingHasBeenSet() const { return m_enableCachingHasBeenSet; }
  inline void SetEnableCaching(bool value) {
    m_enableCachingHasBeenSet = true;
    m_enableCaching = value;
  }
  inline InferenceComponentDataCacheConfig& WithEnableCaching(bool value) {
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
