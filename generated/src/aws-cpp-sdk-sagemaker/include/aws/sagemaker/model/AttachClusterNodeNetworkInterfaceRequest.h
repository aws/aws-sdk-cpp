/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class AttachClusterNodeNetworkInterfaceRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API AttachClusterNodeNetworkInterfaceRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "AttachClusterNodeNetworkInterface"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p> The name or Amazon Resource Name (ARN) of the SageMaker HyperPod cluster
   * that contains the target node. </p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  AttachClusterNodeNetworkInterfaceRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the cluster node to which you want to attach the
   * network interface. The node must belong to your specified HyperPod cluster and
   * cannot be part of a Restricted Instance Group (RIG). </p>
   */
  inline const Aws::String& GetNodeId() const { return m_nodeId; }
  inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
  template <typename NodeIdT = Aws::String>
  void SetNodeId(NodeIdT&& value) {
    m_nodeIdHasBeenSet = true;
    m_nodeId = std::forward<NodeIdT>(value);
  }
  template <typename NodeIdT = Aws::String>
  AttachClusterNodeNetworkInterfaceRequest& WithNodeId(NodeIdT&& value) {
    SetNodeId(std::forward<NodeIdT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p> The unique identifier of the elastic network interface (ENI) to attach. </p>
   */
  inline const Aws::String& GetNetworkInterfaceId() const { return m_networkInterfaceId; }
  inline bool NetworkInterfaceIdHasBeenSet() const { return m_networkInterfaceIdHasBeenSet; }
  template <typename NetworkInterfaceIdT = Aws::String>
  void SetNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    m_networkInterfaceIdHasBeenSet = true;
    m_networkInterfaceId = std::forward<NetworkInterfaceIdT>(value);
  }
  template <typename NetworkInterfaceIdT = Aws::String>
  AttachClusterNodeNetworkInterfaceRequest& WithNetworkInterfaceId(NetworkInterfaceIdT&& value) {
    SetNetworkInterfaceId(std::forward<NetworkInterfaceIdT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::String m_nodeId;

  Aws::String m_networkInterfaceId;
  bool m_clusterNameHasBeenSet = false;
  bool m_nodeIdHasBeenSet = false;
  bool m_networkInterfaceIdHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
