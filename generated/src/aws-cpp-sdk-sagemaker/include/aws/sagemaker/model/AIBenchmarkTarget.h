/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/AIBenchmarkEndpoint.h>

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
 * <p>The target for an AI benchmark job. This is a union type — specify one of the
 * members.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/AIBenchmarkTarget">AWS
 * API Reference</a></p>
 */
class AIBenchmarkTarget {
 public:
  AWS_SAGEMAKER_API AIBenchmarkTarget() = default;
  AWS_SAGEMAKER_API AIBenchmarkTarget(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API AIBenchmarkTarget& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The SageMaker endpoint to benchmark.</p>
   */
  inline const AIBenchmarkEndpoint& GetEndpoint() const { return m_endpoint; }
  inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }
  template <typename EndpointT = AIBenchmarkEndpoint>
  void SetEndpoint(EndpointT&& value) {
    m_endpointHasBeenSet = true;
    m_endpoint = std::forward<EndpointT>(value);
  }
  template <typename EndpointT = AIBenchmarkEndpoint>
  AIBenchmarkTarget& WithEndpoint(EndpointT&& value) {
    SetEndpoint(std::forward<EndpointT>(value));
    return *this;
  }
  ///@}
 private:
  AIBenchmarkEndpoint m_endpoint;
  bool m_endpointHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
