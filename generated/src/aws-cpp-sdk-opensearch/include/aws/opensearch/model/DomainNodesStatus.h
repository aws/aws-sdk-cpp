/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/NodeType.h>
#include <aws/opensearch/model/OpenSearchPartitionInstanceType.h>
#include <aws/opensearch/model/NodeStatus.h>
#include <aws/opensearch/model/VolumeType.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace OpenSearchService
{
namespace Model
{

  /**
   * <p>Container for information about nodes on the domain.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/opensearch-2021-01-01/DomainNodesStatus">AWS
   * API Reference</a></p>
   */
  class DomainNodesStatus
  {
  public:
    AWS_OPENSEARCHSERVICE_API DomainNodesStatus() = default;
    AWS_OPENSEARCHSERVICE_API DomainNodesStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainNodesStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of the node.</p>
     */
    inline const Aws::String& GetNodeId() const { return m_nodeId; }
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }
    template<typename NodeIdT = Aws::String>
    void SetNodeId(NodeIdT&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::forward<NodeIdT>(value); }
    template<typename NodeIdT = Aws::String>
    DomainNodesStatus& WithNodeId(NodeIdT&& value) { SetNodeId(std::forward<NodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the nodes is a data, master, or UltraWarm node.</p>
     */
    inline NodeType GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(NodeType value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline DomainNodesStatus& WithNodeType(NodeType value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const { return m_availabilityZone; }
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }
    template<typename AvailabilityZoneT = Aws::String>
    void SetAvailabilityZone(AvailabilityZoneT&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::forward<AvailabilityZoneT>(value); }
    template<typename AvailabilityZoneT = Aws::String>
    DomainNodesStatus& WithAvailabilityZone(AvailabilityZoneT&& value) { SetAvailabilityZone(std::forward<AvailabilityZoneT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The instance type information of the node.</p>
     */
    inline OpenSearchPartitionInstanceType GetInstanceType() const { return m_instanceType; }
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }
    inline void SetInstanceType(OpenSearchPartitionInstanceType value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }
    inline DomainNodesStatus& WithInstanceType(OpenSearchPartitionInstanceType value) { SetInstanceType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline NodeStatus GetNodeStatus() const { return m_nodeStatus; }
    inline bool NodeStatusHasBeenSet() const { return m_nodeStatusHasBeenSet; }
    inline void SetNodeStatus(NodeStatus value) { m_nodeStatusHasBeenSet = true; m_nodeStatus = value; }
    inline DomainNodesStatus& WithNodeStatus(NodeStatus value) { SetNodeStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline const Aws::String& GetStorageType() const { return m_storageType; }
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }
    template<typename StorageTypeT = Aws::String>
    void SetStorageType(StorageTypeT&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::forward<StorageTypeT>(value); }
    template<typename StorageTypeT = Aws::String>
    DomainNodesStatus& WithStorageType(StorageTypeT&& value) { SetStorageType(std::forward<StorageTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is gp2 or gp3.
     * Only applicable for data nodes. </p>
     */
    inline VolumeType GetStorageVolumeType() const { return m_storageVolumeType; }
    inline bool StorageVolumeTypeHasBeenSet() const { return m_storageVolumeTypeHasBeenSet; }
    inline void SetStorageVolumeType(VolumeType value) { m_storageVolumeTypeHasBeenSet = true; m_storageVolumeType = value; }
    inline DomainNodesStatus& WithStorageVolumeType(VolumeType value) { SetStorageVolumeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline const Aws::String& GetStorageSize() const { return m_storageSize; }
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }
    template<typename StorageSizeT = Aws::String>
    void SetStorageSize(StorageSizeT&& value) { m_storageSizeHasBeenSet = true; m_storageSize = std::forward<StorageSizeT>(value); }
    template<typename StorageSizeT = Aws::String>
    DomainNodesStatus& WithStorageSize(StorageSizeT&& value) { SetStorageSize(std::forward<StorageSizeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    NodeType m_nodeType{NodeType::NOT_SET};
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    OpenSearchPartitionInstanceType m_instanceType{OpenSearchPartitionInstanceType::NOT_SET};
    bool m_instanceTypeHasBeenSet = false;

    NodeStatus m_nodeStatus{NodeStatus::NOT_SET};
    bool m_nodeStatusHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    VolumeType m_storageVolumeType{VolumeType::NOT_SET};
    bool m_storageVolumeTypeHasBeenSet = false;

    Aws::String m_storageSize;
    bool m_storageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
