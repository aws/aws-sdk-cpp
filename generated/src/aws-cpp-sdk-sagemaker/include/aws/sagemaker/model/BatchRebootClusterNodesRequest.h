/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>

#include <utility>

namespace Aws {
namespace SageMaker {
namespace Model {

/**
 */
class BatchRebootClusterNodesRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API BatchRebootClusterNodesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "BatchRebootClusterNodes"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The name or Amazon Resource Name (ARN) of the SageMaker HyperPod cluster
   * containing the nodes to reboot.</p>
   */
  inline const Aws::String& GetClusterName() const { return m_clusterName; }
  inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
  template <typename ClusterNameT = Aws::String>
  void SetClusterName(ClusterNameT&& value) {
    m_clusterNameHasBeenSet = true;
    m_clusterName = std::forward<ClusterNameT>(value);
  }
  template <typename ClusterNameT = Aws::String>
  BatchRebootClusterNodesRequest& WithClusterName(ClusterNameT&& value) {
    SetClusterName(std::forward<ClusterNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of EC2 instance IDs to reboot using soft recovery. You can specify
   * between 1 and 25 instance IDs.</p>  <ul> <li> <p>Either
   * <code>NodeIds</code> or <code>NodeLogicalIds</code> must be provided (or both),
   * but at least one is required.</p> </li> <li> <p>Each instance ID must follow the
   * pattern <code>i-</code> followed by 17 hexadecimal characters (for example,
   * <code>i-0123456789abcdef0</code>).</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetNodeIds() const { return m_nodeIds; }
  inline bool NodeIdsHasBeenSet() const { return m_nodeIdsHasBeenSet; }
  template <typename NodeIdsT = Aws::Vector<Aws::String>>
  void SetNodeIds(NodeIdsT&& value) {
    m_nodeIdsHasBeenSet = true;
    m_nodeIds = std::forward<NodeIdsT>(value);
  }
  template <typename NodeIdsT = Aws::Vector<Aws::String>>
  BatchRebootClusterNodesRequest& WithNodeIds(NodeIdsT&& value) {
    SetNodeIds(std::forward<NodeIdsT>(value));
    return *this;
  }
  template <typename NodeIdsT = Aws::String>
  BatchRebootClusterNodesRequest& AddNodeIds(NodeIdsT&& value) {
    m_nodeIdsHasBeenSet = true;
    m_nodeIds.emplace_back(std::forward<NodeIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of logical node IDs to reboot using soft recovery. You can specify
   * between 1 and 25 logical node IDs.</p> <p>The <code>NodeLogicalId</code> is a
   * unique identifier that persists throughout the node's lifecycle and can be used
   * to track nodes that are still being provisioned and don't yet have an EC2
   * instance ID assigned.</p>  <ul> <li> <p>This parameter is only
   * supported for clusters using <code>Continuous</code> as the
   * <code>NodeProvisioningMode</code>. For clusters using the default provisioning
   * mode, use <code>NodeIds</code> instead.</p> </li> <li> <p>Either
   * <code>NodeIds</code> or <code>NodeLogicalIds</code> must be provided (or both),
   * but at least one is required.</p> </li> </ul>
   */
  inline const Aws::Vector<Aws::String>& GetNodeLogicalIds() const { return m_nodeLogicalIds; }
  inline bool NodeLogicalIdsHasBeenSet() const { return m_nodeLogicalIdsHasBeenSet; }
  template <typename NodeLogicalIdsT = Aws::Vector<Aws::String>>
  void SetNodeLogicalIds(NodeLogicalIdsT&& value) {
    m_nodeLogicalIdsHasBeenSet = true;
    m_nodeLogicalIds = std::forward<NodeLogicalIdsT>(value);
  }
  template <typename NodeLogicalIdsT = Aws::Vector<Aws::String>>
  BatchRebootClusterNodesRequest& WithNodeLogicalIds(NodeLogicalIdsT&& value) {
    SetNodeLogicalIds(std::forward<NodeLogicalIdsT>(value));
    return *this;
  }
  template <typename NodeLogicalIdsT = Aws::String>
  BatchRebootClusterNodesRequest& AddNodeLogicalIds(NodeLogicalIdsT&& value) {
    m_nodeLogicalIdsHasBeenSet = true;
    m_nodeLogicalIds.emplace_back(std::forward<NodeLogicalIdsT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_clusterName;

  Aws::Vector<Aws::String> m_nodeIds;

  Aws::Vector<Aws::String> m_nodeLogicalIds;
  bool m_clusterNameHasBeenSet = false;
  bool m_nodeIdsHasBeenSet = false;
  bool m_nodeLogicalIdsHasBeenSet = false;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
