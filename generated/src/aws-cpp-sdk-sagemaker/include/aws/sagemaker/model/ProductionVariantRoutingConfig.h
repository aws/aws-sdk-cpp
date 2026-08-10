/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/PrefixAwareRoutingConfig.h>
#include <aws/sagemaker/model/RoutingStrategy.h>

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
 * <p>Settings that control how the endpoint routes incoming traffic to the
 * instances that the endpoint hosts.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ProductionVariantRoutingConfig">AWS
 * API Reference</a></p>
 */
class ProductionVariantRoutingConfig {
 public:
  AWS_SAGEMAKER_API ProductionVariantRoutingConfig() = default;
  AWS_SAGEMAKER_API ProductionVariantRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ProductionVariantRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Sets how the endpoint routes incoming traffic:</p> <ul> <li> <p>
   * <code>LEAST_OUTSTANDING_REQUESTS</code>: The endpoint routes requests to the
   * specific instances that have more capacity to process them.</p> </li> <li> <p>
   * <code>RANDOM</code>: The endpoint routes each request to a randomly chosen
   * instance.</p> </li> <li> <p> <code>PREFIX_AWARE</code>: The endpoint routes
   * requests that share the same prompt prefix to the same instance. When the number
   * of in-flight requests on the selected instance reaches the configured threshold,
   * the endpoint routes the request to an instance with more available capacity.</p>
   * </li> </ul>
   */
  inline RoutingStrategy GetRoutingStrategy() const { return m_routingStrategy; }
  inline bool RoutingStrategyHasBeenSet() const { return m_routingStrategyHasBeenSet; }
  inline void SetRoutingStrategy(RoutingStrategy value) {
    m_routingStrategyHasBeenSet = true;
    m_routingStrategy = value;
  }
  inline ProductionVariantRoutingConfig& WithRoutingStrategy(RoutingStrategy value) {
    SetRoutingStrategy(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The configuration for prefix-aware routing. Specify this parameter only when
   * you set <code>RoutingStrategy</code> to <code>PREFIX_AWARE</code>.</p>
   */
  inline const PrefixAwareRoutingConfig& GetPrefixAwareRoutingConfig() const { return m_prefixAwareRoutingConfig; }
  inline bool PrefixAwareRoutingConfigHasBeenSet() const { return m_prefixAwareRoutingConfigHasBeenSet; }
  template <typename PrefixAwareRoutingConfigT = PrefixAwareRoutingConfig>
  void SetPrefixAwareRoutingConfig(PrefixAwareRoutingConfigT&& value) {
    m_prefixAwareRoutingConfigHasBeenSet = true;
    m_prefixAwareRoutingConfig = std::forward<PrefixAwareRoutingConfigT>(value);
  }
  template <typename PrefixAwareRoutingConfigT = PrefixAwareRoutingConfig>
  ProductionVariantRoutingConfig& WithPrefixAwareRoutingConfig(PrefixAwareRoutingConfigT&& value) {
    SetPrefixAwareRoutingConfig(std::forward<PrefixAwareRoutingConfigT>(value));
    return *this;
  }
  ///@}
 private:
  RoutingStrategy m_routingStrategy{RoutingStrategy::NOT_SET};

  PrefixAwareRoutingConfig m_prefixAwareRoutingConfig;
  bool m_routingStrategyHasBeenSet = false;
  bool m_prefixAwareRoutingConfigHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
