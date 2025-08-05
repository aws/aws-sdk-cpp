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
  class AttachClusterNodeVolumeRequest : public SageMakerRequest
  {
  public:
    AWS_SAGEMAKER_API AttachClusterNodeVolumeRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "AttachClusterNodeVolume"; }

    AWS_SAGEMAKER_API Aws::String SerializePayload() const override;

    AWS_SAGEMAKER_API Aws::Http::HeaderValueCollection GetRequestSpecificHeaders() const override;


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of your SageMaker HyperPod cluster containing
     * the target node. Your cluster must use EKS as the orchestration and be in the
     * <code>InService</code> state. </p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    inline bool ClusterArnHasBeenSet() const { return m_clusterArnHasBeenSet; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    AttachClusterNodeVolumeRequest& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the cluster node to which you want to attach the
     * volume. The node must belong to your specified HyperPod cluster and cannot be
     * part of a Restricted Instance Group (RIG). </p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    AttachClusterNodeVolumeRequest& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of your EBS volume to attach. The volume must be in
     * the <code>available</code> state. </p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    inline bool VolumeIdHasBeenSet() const { return m_volumeIdHasBeenSet; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    AttachClusterNodeVolumeRequest& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
