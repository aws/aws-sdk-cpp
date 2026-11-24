/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayFilterName.h>

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
 * <p>A filter for <code>ListGlobalInferenceGateways</code>. The filter matches the
 * global inference gateways whose attribute named by <code>Name</code> equals
 * <code>Value</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GlobalInferenceGatewayFilter">AWS
 * API Reference</a></p>
 */
class GlobalInferenceGatewayFilter {
 public:
  AWS_SAGEMAKER_API GlobalInferenceGatewayFilter() = default;
  AWS_SAGEMAKER_API GlobalInferenceGatewayFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API GlobalInferenceGatewayFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute to filter global inference gateways on. The only supported
   * value is <code>Status</code>.</p>
   */
  inline GlobalInferenceGatewayFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(GlobalInferenceGatewayFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline GlobalInferenceGatewayFilter& WithName(GlobalInferenceGatewayFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to match. For the <code>Status</code> filter, specify a global
   * inference gateway status.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  GlobalInferenceGatewayFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  GlobalInferenceGatewayFilterName m_name{GlobalInferenceGatewayFilterName::NOT_SET};

  Aws::String m_value;
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
