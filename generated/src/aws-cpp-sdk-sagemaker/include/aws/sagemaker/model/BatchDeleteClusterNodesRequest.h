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
    AWS_SAGEMAKER_API BatchDeleteClusterNodesRequest();

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
    inline const Aws::String& GetClusterName() const{ return m_clusterName; }
    inline bool ClusterNameHasBeenSet() const { return m_clusterNameHasBeenSet; }
    inline void SetClusterName(const Aws::String& value) { m_clusterNameHasBeenSet = true; m_clusterName = value; }
    inline void SetClusterName(Aws::String&& value) { m_clusterNameHasBeenSet = true; m_clusterName = std::move(value); }
    inline void SetClusterName(const char* value) { m_clusterNameHasBeenSet = true; m_clusterName.assign(value); }
    inline BatchDeleteClusterNodesRequest& WithClusterName(const Aws::String& value) { SetClusterName(value); return *this;}
    inline BatchDeleteClusterNodesRequest& WithClusterName(Aws::String&& value) { SetClusterName(std::move(value)); return *this;}
    inline BatchDeleteClusterNodesRequest& WithClusterName(const char* value) { SetClusterName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of node IDs to be deleted from the specified cluster.</p> 
     * <p>For SageMaker HyperPod clusters using the Slurm workload manager, you cannot
     * remove instances that are configured as Slurm controller nodes.</p> 
     */
    inline const Aws::Vector<Aws::String>& GetNodeIds() const{ return m_nodeIds; }
    inline bool NodeIdsHasBeenSet() const { return m_nodeIdsHasBeenSet; }
    inline void SetNodeIds(const Aws::Vector<Aws::String>& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = value; }
    inline void SetNodeIds(Aws::Vector<Aws::String>&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds = std::move(value); }
    inline BatchDeleteClusterNodesRequest& WithNodeIds(const Aws::Vector<Aws::String>& value) { SetNodeIds(value); return *this;}
    inline BatchDeleteClusterNodesRequest& WithNodeIds(Aws::Vector<Aws::String>&& value) { SetNodeIds(std::move(value)); return *this;}
    inline BatchDeleteClusterNodesRequest& AddNodeIds(const Aws::String& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.push_back(value); return *this; }
    inline BatchDeleteClusterNodesRequest& AddNodeIds(Aws::String&& value) { m_nodeIdsHasBeenSet = true; m_nodeIds.push_back(std::move(value)); return *this; }
    inline BatchDeleteClusterNodesRequest& AddNodeIds(const char* value) { m_nodeIdsHasBeenSet = true; m_nodeIds.push_back(value); return *this; }
    ///@}
  private:

    Aws::String m_clusterName;
    bool m_clusterNameHasBeenSet = false;

    Aws::Vector<Aws::String> m_nodeIds;
    bool m_nodeIdsHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
