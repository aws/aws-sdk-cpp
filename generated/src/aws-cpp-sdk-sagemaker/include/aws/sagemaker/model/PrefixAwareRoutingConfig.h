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
 * <p>The configuration for prefix-aware routing on a SageMaker real-time inference
 * endpoint. Specify <code>PrefixLength</code> and
 * <code>ConcurrencyThreshold</code> to control routing behavior.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/PrefixAwareRoutingConfig">AWS
 * API Reference</a></p>
 */
class PrefixAwareRoutingConfig {
 public:
  AWS_SAGEMAKER_API PrefixAwareRoutingConfig() = default;
  AWS_SAGEMAKER_API PrefixAwareRoutingConfig(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API PrefixAwareRoutingConfig& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The maximum length of the prefix used for routing decisions. Required when
   * <code>RoutingStrategy</code> is <code>PREFIX_AWARE</code>.</p> <ul> <li> <p>For
   * the SageMaker Runtime <code>InvokeEndpoint</code> and
   * <code>InvokeEndpointWithResponseStream</code> APIs, this value specifies the
   * number of bytes from the beginning of the request body.</p> </li> <li> <p>For
   * OpenAI-compatible API, this value specifies the number of characters from the
   * text content of the messages array.</p> </li> </ul> <p>The endpoint routes
   * requests that share the same prefix to the same instance. Set this value to
   * cover shared content (such as system prompts) plus enough unique content to
   * distribute workloads across instances.</p>
   */
  inline int GetPrefixLength() const { return m_prefixLength; }
  inline bool PrefixLengthHasBeenSet() const { return m_prefixLengthHasBeenSet; }
  inline void SetPrefixLength(int value) {
    m_prefixLengthHasBeenSet = true;
    m_prefixLength = value;
  }
  inline PrefixAwareRoutingConfig& WithPrefixLength(int value) {
    SetPrefixLength(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of in-flight requests on the target instance before the
   * endpoint routes to another instance. Required when <code>RoutingStrategy</code>
   * is <code>PREFIX_AWARE</code>. When in-flight requests on the prefix-selected
   * instance reach this threshold, the endpoint routes the request to an instance
   * with more available capacity.</p>
   */
  inline int GetConcurrencyThreshold() const { return m_concurrencyThreshold; }
  inline bool ConcurrencyThresholdHasBeenSet() const { return m_concurrencyThresholdHasBeenSet; }
  inline void SetConcurrencyThreshold(int value) {
    m_concurrencyThresholdHasBeenSet = true;
    m_concurrencyThreshold = value;
  }
  inline PrefixAwareRoutingConfig& WithConcurrencyThreshold(int value) {
    SetConcurrencyThreshold(value);
    return *this;
  }
  ///@}
 private:
  int m_prefixLength{0};

  int m_concurrencyThreshold{0};
  bool m_prefixLengthHasBeenSet = false;
  bool m_concurrencyThresholdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
