/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class BatchDeleteClusterNodesRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API BatchDeleteClusterNodesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "BatchDeleteClusterNodes"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The name of the SageMaker HyperPod cluster from which to delete the specified
     * nodes.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    BatchDeleteClusterNodesRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node IDs to be deleted from the specified cluster.</p>  <ul>
     * <li> <p>For SageMaker HyperPod clusters using the Slurm workload manager, you
     * cannot remove instances that are configured as Slurm controller nodes.</p> </li>
     * <li> <p>If you need to delete more than 99 instances, contact <a
     * href="http://aws.amazon.com/contact-us/">Support</a> for assistance.</p> </li>
     * </ul> 
     */
    inline const Aws::Vector<Aws::String>& GetNodeIds() const { return m_nodeIds; }
    inline bool NodeIdsHasBeenSet() const { return m_nodeIdsHasBeenSet; }
    template<typename NodeIdsT = Aws::Vector<Aws::String>>
    void SetNodeIds(NodeIdsT&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = std::forward<NodeIdsT>(value); }
    template<typename NodeIdsT = Aws::Vector<Aws::String>>
    BatchDeleteClusterNodesRequest& WithNodeIds(NodeIdsT&& value) { SetNodeIds(std::forward<NodeIdsT>(value)); return *this;}
    template<typename NodeIdsT = Aws::String>
    BatchDeleteClusterNodesRequest& AddNodeIds(NodeIdsT&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.emplace_back(std::forward<NodeIdsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>A list of <code>NodeLogicalIds</code> identifying the nodes to be deleted.
     * You can specify up to 50 <code>NodeLogicalIds</code>. You must specify either
     * <code>NodeLogicalIds</code>, <code>InstanceIds</code>, or both, with a combined
     * maximum of 50 identifiers.</p>
     */
    inline const Aws::Vector<Aws::String>& GetNodeLogicalIds() const { return m_nodeLogicalIds; }
    inline bool NodeLogicalIdsHasBeenSet() const { return m_nodeLogicalIdsHasBeenSet; }
    template<typename NodeLogicalIdsT = Aws::Vector<Aws::String>>
    void SetNodeLogicalIds(NodeLogicalIdsT&& value) { m_nodeLogicalIdsHasBeenSet = true; m_nodeLogicalIds = std::forward<NodeLogicalIdsT>(value); }
    template<typename NodeLogicalIdsT = Aws::Vector<Aws::String>>
    BatchDeleteClusterNodesRequest& WithNodeLogicalIds(NodeLogicalIdsT&& value) { SetNodeLogicalIds(std::forward<NodeLogicalIdsT>(value)); return *this;}
    template<typename NodeLogicalIdsT = Aws::String>
    BatchDeleteClusterNodesRequest& AddNodeLogicalIds(NodeLogicalIdsT&& value) { m_nodeLogicalIdsHasBeenSet = true; m_nodeLogicalIds.emplace_back(std::forward<NodeLogicalIdsT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIds;
    bool m_nodeIdsHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeLogicalIds;
    bool m_nodeLogicalIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
