/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sagemaker/model/VolumeAttachmentStatus.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace SageMaker
{
namespace Model
{
  class DetachClusterNodeVolumeResult
  {
  public:
    AWS_SAGEMAKER_API DetachClusterNodeVolumeResult() = default;
    AWS_SAGEMAKER_API DetachClusterNodeVolumeResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_SAGEMAKER_API DetachClusterNodeVolumeResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p> The Amazon Resource Name (ARN) of your SageMaker HyperPod cluster where the
     * volume detachment operation was performed. </p>
     */
    inline const Aws::String& GetClusterArn() const { return m_clusterArn; }
    template<typename ClusterArnT = Aws::String>
    void SetClusterArn(ClusterArnT&& value) { m_clusterArnHasBeenSet = true; m_clusterArn = std::forward<ClusterArnT>(value); }
    template<typename ClusterArnT = Aws::String>
    DetachClusterNodeVolumeResult& WithClusterArn(ClusterArnT&& value) { SetClusterArn(std::forward<ClusterArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of the cluster node from which your volume was
     * detached. </p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    DetachClusterNodeVolumeResult& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The unique identifier of your EBS volume that was detached. </p>
     */
    inline const Aws::String& GetVolumeId() const { return m_volumeId; }
    template<typename VolumeIdT = Aws::String>
    void SetVolumeId(VolumeIdT&& value) { m_volumeIdHasBeenSet = true; m_volumeId = std::forward<VolumeIdT>(value); }
    template<typename VolumeIdT = Aws::String>
    DetachClusterNodeVolumeResult& WithVolumeId(VolumeIdT&& value) { SetVolumeId(std::forward<VolumeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The original timestamp when your volume was initially attached to the node.
     * </p>
     */
    inline const Aws::Utils::DateTime& GetAttachTime() const { return m_attachTime; }
    template<typename AttachTimeT = Aws::Utils::DateTime>
    void SetAttachTime(AttachTimeT&& value) { m_attachTimeHasBeenSet = true; m_attachTime = std::forward<AttachTimeT>(value); }
    template<typename AttachTimeT = Aws::Utils::DateTime>
    DetachClusterNodeVolumeResult& WithAttachTime(AttachTimeT&& value) { SetAttachTime(std::forward<AttachTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p> The current status of your volume detachment operation. </p>
     */
    inline VolumeAttachmentStatus GetStatus() const { return m_status; }
    inline void SetStatus(VolumeAttachmentStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DetachClusterNodeVolumeResult& WithStatus(VolumeAttachmentStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p> The device name assigned to your attached volume on the target instance.
     * </p>
     */
    inline const Aws::String& GetDeviceName() const { return m_deviceName; }
    template<typename DeviceNameT = Aws::String>
    void SetDeviceName(DeviceNameT&& value) { m_deviceNameHasBeenSet = true; m_deviceName = std::forward<DeviceNameT>(value); }
    template<typename DeviceNameT = Aws::String>
    DetachClusterNodeVolumeResult& WithDeviceName(DeviceNameT&& value) { SetDeviceName(std::forward<DeviceNameT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DetachClusterNodeVolumeResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_clusterArn;
    bool m_clusterArnHasBeenSet = false;

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    Aws::String m_volumeId;
    bool m_volumeIdHasBeenSet = false;

    Aws::Utils::DateTime m_attachTime{};
    bool m_attachTimeHasBeenSet = false;

    VolumeAttachmentStatus m_status{VolumeAttachmentStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_deviceName;
    bool m_deviceNameHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SageMaker
} // namespace Aws
