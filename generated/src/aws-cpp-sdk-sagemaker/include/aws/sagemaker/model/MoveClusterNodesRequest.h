/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/UUID.h>
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
class MoveClusterNodesRequest : public SageMakerRequest {
 public:
  AWS_SAGEMAKER_API MoveClusterNodesRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "MoveClusterNodes"; }

  AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

  AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the HyperPod cluster that the nodes are
   * moved from.</p>
   */
  inline const Aws::String& GetSourceClusterArn() const { return m_sourceClusterArn; }
  inline bool SourceClusterArnHasBeenSet() const { return m_sourceClusterArnHasBeenSet; }
  template <typename SourceClusterArnT = Aws::String>
  void SetSourceClusterArn(SourceClusterArnT&& value) {
    m_sourceClusterArnHasBeenSet = true;
    m_sourceClusterArn = std::forward<SourceClusterArnT>(value);
  }
  template <typename SourceClusterArnT = Aws::String>
  MoveClusterNodesRequest& WithSourceClusterArn(SourceClusterArnT&& value) {
    SetSourceClusterArn(std::forward<SourceClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the instance group in the source cluster that the nodes are moved
   * from.</p>
   */
  inline const Aws::String& GetSourceInstanceGroupName() const { return m_sourceInstanceGroupName; }
  inline bool SourceInstanceGroupNameHasBeenSet() const { return m_sourceInstanceGroupNameHasBeenSet; }
  template <typename SourceInstanceGroupNameT = Aws::String>
  void SetSourceInstanceGroupName(SourceInstanceGroupNameT&& value) {
    m_sourceInstanceGroupNameHasBeenSet = true;
    m_sourceInstanceGroupName = std::forward<SourceInstanceGroupNameT>(value);
  }
  template <typename SourceInstanceGroupNameT = Aws::String>
  MoveClusterNodesRequest& WithSourceInstanceGroupName(SourceInstanceGroupNameT&& value) {
    SetSourceInstanceGroupName(std::forward<SourceInstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The Amazon Resource Name (ARN) of the HyperPod cluster that the nodes are
   * moved to. The target cluster must be in the same account and Region as the
   * source cluster, and can be the same cluster as the source.</p>
   */
  inline const Aws::String& GetTargetClusterArn() const { return m_targetClusterArn; }
  inline bool TargetClusterArnHasBeenSet() const { return m_targetClusterArnHasBeenSet; }
  template <typename TargetClusterArnT = Aws::String>
  void SetTargetClusterArn(TargetClusterArnT&& value) {
    m_targetClusterArnHasBeenSet = true;
    m_targetClusterArn = std::forward<TargetClusterArnT>(value);
  }
  template <typename TargetClusterArnT = Aws::String>
  MoveClusterNodesRequest& WithTargetClusterArn(TargetClusterArnT&& value) {
    SetTargetClusterArn(std::forward<TargetClusterArnT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The name of the instance group in the target cluster that the nodes are moved
   * to. If the target cluster is the same as the source cluster, the target instance
   * group must be different from the source instance group.</p>
   */
  inline const Aws::String& GetTargetInstanceGroupName() const { return m_targetInstanceGroupName; }
  inline bool TargetInstanceGroupNameHasBeenSet() const { return m_targetInstanceGroupNameHasBeenSet; }
  template <typename TargetInstanceGroupNameT = Aws::String>
  void SetTargetInstanceGroupName(TargetInstanceGroupNameT&& value) {
    m_targetInstanceGroupNameHasBeenSet = true;
    m_targetInstanceGroupName = std::forward<TargetInstanceGroupNameT>(value);
  }
  template <typename TargetInstanceGroupNameT = Aws::String>
  MoveClusterNodesRequest& WithTargetInstanceGroupName(TargetInstanceGroupNameT&& value) {
    SetTargetInstanceGroupName(std::forward<TargetInstanceGroupNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The number of nodes to move, from 1 to 50. HyperPod selects the nodes from
   * the source instance group. If fewer than this number of nodes are eligible to
   * move, the request fails and no nodes are moved. Specify exactly one of
   * <code>NodeIds</code>, <code>NodeLogicalIds</code>, or
   * <code>InstanceCount</code>.</p>
   */
  inline int GetInstanceCount() const { return m_instanceCount; }
  inline bool InstanceCountHasBeenSet() const { return m_instanceCountHasBeenSet; }
  inline void SetInstanceCount(int value) {
    m_instanceCountHasBeenSet = true;
    m_instanceCount = value;
  }
  inline MoveClusterNodesRequest& WithInstanceCount(int value) {
    SetInstanceCount(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of instance IDs of the nodes to move. You can specify up to 50
   * instance IDs. Each node is evaluated separately, so some nodes can be moved
   * while others fail. The request fails if moving the eligible nodes would reduce
   * the source instance group below its minimum instance count. Specify exactly one
   * of <code>NodeIds</code>, <code>NodeLogicalIds</code>, or
   * <code>InstanceCount</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNodeIds() const { return m_nodeIds; }
  inline bool NodeIdsHasBeenSet() const { return m_nodeIdsHasBeenSet; }
  template <typename NodeIdsT = Aws::Vector<Aws::String>>
  void SetNodeIds(NodeIdsT&& value) {
    m_nodeIdsHasBeenSet = true;
    m_nodeIds = std::forward<NodeIdsT>(value);
  }
  template <typename NodeIdsT = Aws::Vector<Aws::String>>
  MoveClusterNodesRequest& WithNodeIds(NodeIdsT&& value) {
    SetNodeIds(std::forward<NodeIdsT>(value));
    return *this;
  }
  template <typename NodeIdsT = Aws::String>
  MoveClusterNodesRequest& AddNodeIds(NodeIdsT&& value) {
    m_nodeIdsHasBeenSet = true;
    m_nodeIds.emplace_back(std::forward<NodeIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A list of <code>NodeLogicalIds</code> of the nodes to move. You can specify
   * up to 50 <code>NodeLogicalIds</code>. Each node is evaluated separately, so some
   * nodes can be moved while others fail. The request fails if moving the eligible
   * nodes would reduce the source instance group below its minimum instance count.
   * Specify exactly one of <code>NodeIds</code>, <code>NodeLogicalIds</code>, or
   * <code>InstanceCount</code>.</p>
   */
  inline const Aws::Vector<Aws::String>& GetNodeLogicalIds() const { return m_nodeLogicalIds; }
  inline bool NodeLogicalIdsHasBeenSet() const { return m_nodeLogicalIdsHasBeenSet; }
  template <typename NodeLogicalIdsT = Aws::Vector<Aws::String>>
  void SetNodeLogicalIds(NodeLogicalIdsT&& value) {
    m_nodeLogicalIdsHasBeenSet = true;
    m_nodeLogicalIds = std::forward<NodeLogicalIdsT>(value);
  }
  template <typename NodeLogicalIdsT = Aws::Vector<Aws::String>>
  MoveClusterNodesRequest& WithNodeLogicalIds(NodeLogicalIdsT&& value) {
    SetNodeLogicalIds(std::forward<NodeLogicalIdsT>(value));
    return *this;
  }
  template <typename NodeLogicalIdsT = Aws::String>
  MoveClusterNodesRequest& AddNodeLogicalIds(NodeLogicalIdsT&& value) {
    m_nodeLogicalIdsHasBeenSet = true;
    m_nodeLogicalIds.emplace_back(std::forward<NodeLogicalIdsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A unique, case-sensitive identifier that you provide to ensure that the
   * operation completes no more than one time. If you retry the request with the
   * same client token and the same parameters within 8 hours, the service returns
   * the original response. It doesn't start a new move. If you reuse a client token
   * with different parameters, the request fails.</p>
   */
  inline const Aws::String& GetClientToken() const { return m_clientToken; }
  inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
  template <typename ClientTokenT = Aws::String>
  void SetClientToken(ClientTokenT&& value) {
    m_clientTokenHasBeenSet = true;
    m_clientToken = std::forward<ClientTokenT>(value);
  }
  template <typename ClientTokenT = Aws::String>
  MoveClusterNodesRequest& WithClientToken(ClientTokenT&& value) {
    SetClientToken(std::forward<ClientTokenT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_sourceClusterArn;

  Aws::String m_sourceInstanceGroupName;

  Aws::String m_targetClusterArn;

  Aws::String m_targetInstanceGroupName;

  int m_instanceCount{0};

  Aws::Vector<Aws::String> m_nodeIds;

  Aws::Vector<Aws::String> m_nodeLogicalIds;

  Aws::String m_clientToken{Aws::Utils::UUID::PseudoRandomUUID()};
  bool m_sourceClusterArnHasBeenSet = false;
  bool m_sourceInstanceGroupNameHasBeenSet = false;
  bool m_targetClusterArnHasBeenSet = false;
  bool m_targetInstanceGroupNameHasBeenSet = false;
  bool m_instanceCountHasBeenSet = false;
  bool m_nodeIdsHasBeenSet = false;
  bool m_nodeLogicalIdsHasBeenSet = false;
  bool m_clientTokenHasBeenSet = true;
};

}  // namespace Model
}  // namespace SageMaker
}  // namespace Aws
