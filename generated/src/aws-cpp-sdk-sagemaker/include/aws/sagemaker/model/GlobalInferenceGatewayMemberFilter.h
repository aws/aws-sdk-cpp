/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/GlobalInferenceGatewayMemberFilterName.h>

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
 * <p>A filter for <code>ListInferenceGateways</code>. The filter matches the
 * in-cluster inference gateways whose attribute named by <code>Name</code> equals
 * <code>Value</code>.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/GlobalInferenceGatewayMemberFilter">AWS
 * API Reference</a></p>
 */
class GlobalInferenceGatewayMemberFilter {
 public:
  AWS_SAGEMAKER_API GlobalInferenceGatewayMemberFilter() = default;
  AWS_SAGEMAKER_API GlobalInferenceGatewayMemberFilter(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API GlobalInferenceGatewayMemberFilter& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The attribute to filter in-cluster inference gateways on. Supported values
   * are <code>Status</code> and <code>ClusterArn</code>.</p>
   */
  inline GlobalInferenceGatewayMemberFilterName GetName() const { return m_name; }
  inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
  inline void SetName(GlobalInferenceGatewayMemberFilterName value) {
    m_nameHasBeenSet = true;
    m_name = value;
  }
  inline GlobalInferenceGatewayMemberFilter& WithName(GlobalInferenceGatewayMemberFilterName value) {
    SetName(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The value to match. For the <code>Status</code> filter, specify a status of
   * an in-cluster inference gateway. For the <code>ClusterArn</code> filter, specify
   * the Amazon Resource Name (ARN) of a SageMaker HyperPod cluster.</p>
   */
  inline const Aws::String& GetValue() const { return m_value; }
  inline bool ValueHasBeenSet() const { return m_valueHasBeenSet; }
  template <typename ValueT = Aws::String>
  void SetValue(ValueT&& value) {
    m_valueHasBeenSet = true;
    m_value = std::forward<ValueT>(value);
  }
  template <typename ValueT = Aws::String>
  GlobalInferenceGatewayMemberFilter& WithValue(ValueT&& value) {
    SetValue(std::forward<ValueT>(value));
    return *this;
  }
  ///@}
 private:
  GlobalInferenceGatewayMemberFilterName m_name{GlobalInferenceGatewayMemberFilterName::NOT_SET};

  Aws::String m_value;
  bool m_nameHasBeenSet = false;
  bool m_valueHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
