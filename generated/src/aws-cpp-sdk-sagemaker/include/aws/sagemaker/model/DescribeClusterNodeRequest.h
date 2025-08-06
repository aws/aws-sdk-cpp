/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/SageMakerRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SageMaker
{
namespace Model
{

  /**
   */
  class DescribeClusterNodeRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API DescribeClusterNodeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeClusterNode"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p>The string name or the Amazon Resource Name (ARN) of the SageMaker HyperPod
     * cluster in which the node is.</p>
     */
    inline const Aws::String& GetClusterName() const { return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    template<typename ClusterNameT = Aws::String>
    void SetClusterName(ClusterNameT&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::forward<ClusterNameT>(value); }
    template<typename ClusterNameT = Aws::String>
    DescribeClusterNodeRequest& WithClusterName(ClusterNameT&& value) { SetClusterName(std::forward<ClusterNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the SageMaker HyperPod cluster node.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    DescribeClusterNodeRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The logical identifier of the node to describe. You can specify either
     * <code>NodeLogicalId</code> or <code>InstanceId</code>, but not both.
     * <code>NodeLogicalId</code> can be used to describe nodes that are still being
     * provisioned and don't yet have an <code>InstanceId</code> assigned.</p>
     */
    inline const Aws::String& GetNodeLogicalId() const { return m_nodeLogicalId; }
    inline bool NodeLogicalIdHasBeenSet() const { return m_nodeLogicalIdHasBeenSet; }
    template<typename NodeLogicalIdT = Aws::String>
    void SetNodeLogicalId(NodeLogicalIdT&& value) { m_nodeLogicalIdHasBeenSet = true; m_nodeLogicalId = std::forward<NodeLogicalIdT>(value); }
    template<typename NodeLogicalIdT = Aws::String>
    DescribeClusterNodeRequest& WithNodeLogicalId(NodeLogicalIdT&& value) { SetNodeLogicalId(std::forward<NodeLogicalIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_nodeLogicalId;
    bool m_nodeLogicalIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
