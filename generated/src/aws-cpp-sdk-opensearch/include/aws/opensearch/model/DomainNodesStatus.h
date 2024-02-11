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
    AWS_OPENSEARCHSERVICE_API DomainNodesStatus();
    AWS_OPENSEARCHSERVICE_API DomainNodesStatus(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API DomainNodesStatus& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_OPENSEARCHSERVICE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the node.</p>
     */
    inline const Aws::String& GetNodeId() const{ return m_nodeId; }

    /**
     * <p>The ID of the node.</p>
     */
    inline bool NodeIdHasBeenSet() const { return m_nodeIdHasBeenSet; }

    /**
     * <p>The ID of the node.</p>
     */
    inline void SetNodeId(const Aws::String& value) { m_nodeIdHasBeenSet = true; m_nodeId = value; }

    /**
     * <p>The ID of the node.</p>
     */
    inline void SetNodeId(Aws::String&& value) { m_nodeIdHasBeenSet = true; m_nodeId = std::move(value); }

    /**
     * <p>The ID of the node.</p>
     */
    inline void SetNodeId(const char* value) { m_nodeIdHasBeenSet = true; m_nodeId.assign(value); }

    /**
     * <p>The ID of the node.</p>
     */
    inline DomainNodesStatus& WithNodeId(const Aws::String& value) { SetNodeId(value); return *this;}

    /**
     * <p>The ID of the node.</p>
     */
    inline DomainNodesStatus& WithNodeId(Aws::String&& value) { SetNodeId(std::move(value)); return *this;}

    /**
     * <p>The ID of the node.</p>
     */
    inline DomainNodesStatus& WithNodeId(const char* value) { SetNodeId(value); return *this;}


    /**
     * <p>Indicates whether the nodes is a data, master, or ultrawarm node.</p>
     */
    inline const NodeType& GetNodeType() const{ return m_nodeType; }

    /**
     * <p>Indicates whether the nodes is a data, master, or ultrawarm node.</p>
     */
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }

    /**
     * <p>Indicates whether the nodes is a data, master, or ultrawarm node.</p>
     */
    inline void SetNodeType(const NodeType& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }

    /**
     * <p>Indicates whether the nodes is a data, master, or ultrawarm node.</p>
     */
    inline void SetNodeType(NodeType&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }

    /**
     * <p>Indicates whether the nodes is a data, master, or ultrawarm node.</p>
     */
    inline DomainNodesStatus& WithNodeType(const NodeType& value) { SetNodeType(value); return *this;}

    /**
     * <p>Indicates whether the nodes is a data, master, or ultrawarm node.</p>
     */
    inline DomainNodesStatus& WithNodeType(NodeType&& value) { SetNodeType(std::move(value)); return *this;}


    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline const Aws::String& GetAvailabilityZone() const{ return m_availabilityZone; }

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline bool AvailabilityZoneHasBeenSet() const { return m_availabilityZoneHasBeenSet; }

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline void SetAvailabilityZone(const Aws::String& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = value; }

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline void SetAvailabilityZone(Aws::String&& value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone = std::move(value); }

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline void SetAvailabilityZone(const char* value) { m_availabilityZoneHasBeenSet = true; m_availabilityZone.assign(value); }

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline DomainNodesStatus& WithAvailabilityZone(const Aws::String& value) { SetAvailabilityZone(value); return *this;}

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline DomainNodesStatus& WithAvailabilityZone(Aws::String&& value) { SetAvailabilityZone(std::move(value)); return *this;}

    /**
     * <p>The Availability Zone of the node.</p>
     */
    inline DomainNodesStatus& WithAvailabilityZone(const char* value) { SetAvailabilityZone(value); return *this;}


    /**
     * <p>The instance type information of the node.</p>
     */
    inline const OpenSearchPartitionInstanceType& GetInstanceType() const{ return m_instanceType; }

    /**
     * <p>The instance type information of the node.</p>
     */
    inline bool InstanceTypeHasBeenSet() const { return m_instanceTypeHasBeenSet; }

    /**
     * <p>The instance type information of the node.</p>
     */
    inline void SetInstanceType(const OpenSearchPartitionInstanceType& value) { m_instanceTypeHasBeenSet = true; m_instanceType = value; }

    /**
     * <p>The instance type information of the node.</p>
     */
    inline void SetInstanceType(OpenSearchPartitionInstanceType&& value) { m_instanceTypeHasBeenSet = true; m_instanceType = std::move(value); }

    /**
     * <p>The instance type information of the node.</p>
     */
    inline DomainNodesStatus& WithInstanceType(const OpenSearchPartitionInstanceType& value) { SetInstanceType(value); return *this;}

    /**
     * <p>The instance type information of the node.</p>
     */
    inline DomainNodesStatus& WithInstanceType(OpenSearchPartitionInstanceType&& value) { SetInstanceType(std::move(value)); return *this;}


    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline const NodeStatus& GetNodeStatus() const{ return m_nodeStatus; }

    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline bool NodeStatusHasBeenSet() const { return m_nodeStatusHasBeenSet; }

    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline void SetNodeStatus(const NodeStatus& value) { m_nodeStatusHasBeenSet = true; m_nodeStatus = value; }

    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline void SetNodeStatus(NodeStatus&& value) { m_nodeStatusHasBeenSet = true; m_nodeStatus = std::move(value); }

    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline DomainNodesStatus& WithNodeStatus(const NodeStatus& value) { SetNodeStatus(value); return *this;}

    /**
     * <p>Indicates if the node is active or in standby.</p>
     */
    inline DomainNodesStatus& WithNodeStatus(NodeStatus&& value) { SetNodeStatus(std::move(value)); return *this;}


    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline const Aws::String& GetStorageType() const{ return m_storageType; }

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline bool StorageTypeHasBeenSet() const { return m_storageTypeHasBeenSet; }

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline void SetStorageType(const Aws::String& value) { m_storageTypeHasBeenSet = true; m_storageType = value; }

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline void SetStorageType(Aws::String&& value) { m_storageTypeHasBeenSet = true; m_storageType = std::move(value); }

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline void SetStorageType(const char* value) { m_storageTypeHasBeenSet = true; m_storageType.assign(value); }

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline DomainNodesStatus& WithStorageType(const Aws::String& value) { SetStorageType(value); return *this;}

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline DomainNodesStatus& WithStorageType(Aws::String&& value) { SetStorageType(std::move(value)); return *this;}

    /**
     * <p>Indicates if the node has EBS or instance storage. </p>
     */
    inline DomainNodesStatus& WithStorageType(const char* value) { SetStorageType(value); return *this;}


    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is GP2 or GP3.
     * Only applicable for data nodes. </p>
     */
    inline const VolumeType& GetStorageVolumeType() const{ return m_storageVolumeType; }

    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is GP2 or GP3.
     * Only applicable for data nodes. </p>
     */
    inline bool StorageVolumeTypeHasBeenSet() const { return m_storageVolumeTypeHasBeenSet; }

    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is GP2 or GP3.
     * Only applicable for data nodes. </p>
     */
    inline void SetStorageVolumeType(const VolumeType& value) { m_storageVolumeTypeHasBeenSet = true; m_storageVolumeType = value; }

    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is GP2 or GP3.
     * Only applicable for data nodes. </p>
     */
    inline void SetStorageVolumeType(VolumeType&& value) { m_storageVolumeTypeHasBeenSet = true; m_storageVolumeType = std::move(value); }

    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is GP2 or GP3.
     * Only applicable for data nodes. </p>
     */
    inline DomainNodesStatus& WithStorageVolumeType(const VolumeType& value) { SetStorageVolumeType(value); return *this;}

    /**
     * <p>If the nodes has EBS storage, indicates if the volume type is GP2 or GP3.
     * Only applicable for data nodes. </p>
     */
    inline DomainNodesStatus& WithStorageVolumeType(VolumeType&& value) { SetStorageVolumeType(std::move(value)); return *this;}


    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline const Aws::String& GetStorageSize() const{ return m_storageSize; }

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline bool StorageSizeHasBeenSet() const { return m_storageSizeHasBeenSet; }

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline void SetStorageSize(const Aws::String& value) { m_storageSizeHasBeenSet = true; m_storageSize = value; }

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline void SetStorageSize(Aws::String&& value) { m_storageSizeHasBeenSet = true; m_storageSize = std::move(value); }

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline void SetStorageSize(const char* value) { m_storageSizeHasBeenSet = true; m_storageSize.assign(value); }

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline DomainNodesStatus& WithStorageSize(const Aws::String& value) { SetStorageSize(value); return *this;}

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline DomainNodesStatus& WithStorageSize(Aws::String&& value) { SetStorageSize(std::move(value)); return *this;}

    /**
     * <p>The storage size of the node, in GiB.</p>
     */
    inline DomainNodesStatus& WithStorageSize(const char* value) { SetStorageSize(value); return *this;}

  private:

    Aws::String m_nodeId;
    bool m_nodeIdHasBeenSet = false;

    NodeType m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::String m_availabilityZone;
    bool m_availabilityZoneHasBeenSet = false;

    OpenSearchPartitionInstanceType m_instanceType;
    bool m_instanceTypeHasBeenSet = false;

    NodeStatus m_nodeStatus;
    bool m_nodeStatusHasBeenSet = false;

    Aws::String m_storageType;
    bool m_storageTypeHasBeenSet = false;

    VolumeType m_storageVolumeType;
    bool m_storageVolumeTypeHasBeenSet = false;

    Aws::String m_storageSize;
    bool m_storageSizeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
