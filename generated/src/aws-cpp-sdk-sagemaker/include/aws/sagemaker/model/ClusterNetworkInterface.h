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
 * <p>The network interface configuration for a Amazon SageMaker HyperPod cluster
 * instance group.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/sagemaker-2017-07-24/ClusterNetworkInterface">AWS
 * API Reference</a></p>
 */
class ClusterNetworkInterface {
 public:
  AWS_SAGEMAKER_API ClusterNetworkInterface() = default;
  AWS_SAGEMAKER_API ClusterNetworkInterface(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API ClusterNetworkInterface& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_SAGEMAKER_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The type of network interface for the instance group. Valid values:</p> <ul>
   * <li> <p> <code>efa</code> – An EFA with ENA interface, which provides both the
   * EFA device for low-latency, high-throughput communication and the ENA device for
   * IP networking.</p> </li> <li> <p> <code>efa-only</code> – An EFA-only interface,
   * which provides only the EFA device capabilities without the ENA device for
   * traditional IP networking.</p> </li> </ul> <p>For more information, see <a
   * href="https://docs.aws.amazon.com/AWSEC2/latest/UserGuide/efa.html">Elastic
   * Fabric Adapter</a>.</p>
   */
  inline ClusterInterfaceType GetInterfaceType() const { return m_interfaceType; }
  inline bool InterfaceTypeHasBeenSet() const { return m_interfaceTypeHasBeenSet; }
  inline void SetInterfaceType(ClusterInterfaceType value) {
    m_interfaceTypeHasBeenSet = true;
    m_interfaceType = value;
  }
  inline ClusterNetworkInterface& WithInterfaceType(ClusterInterfaceType value) {
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
