/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ClusterInterfaceType.h>

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
 * <p>The network interface configuration details for a Amazon SageMaker HyperPod
 * cluster instance group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterNetworkInterfaceDetails">AWS
 * API Reference</a></p>
 */
class ClusterNetworkInterfaceDetails {
 public:
  AWS_SAGEMAKER_API ClusterNetworkInterfaceDetails() = default;
  AWS_SAGEMAKER_API ClusterNetworkInterfaceDetails(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterNetworkInterfaceDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of network interface for the instance group. Valid values are
   * <code>efa</code> and <code>efa-only</code>.</p>
   */
  inline ClusterInterfaceType GetInterfaceType() const { return m_interfaceType; }
  inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
  inline void SetInterfaceType(ClusterInterfaceType value) {
    m_interfaceTypeHasBeenSet = true;
    m_interfaceType = value;
  }
  inline ClusterNetworkInterfaceDetails& WithInterfaceType(ClusterInterfaceType value) {
    SetInterfaceType(value);
    return *this;
  }
  ///@}
 private:
  ClusterInterfaceType m_interfaceType{ClusterInterfaceType::NOT_SET};
  bool m_interfaceTypeHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
