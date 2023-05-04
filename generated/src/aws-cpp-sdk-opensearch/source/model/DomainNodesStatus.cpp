/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainNodesStatus.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

DomainNodesStatus::DomainNodesStatus() : 
    m_nodeIdHasBeenSet(false),
    m_nodeType(NodeType::NOT_SET),
    m_nodeTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceType(OpenSearchPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_nodeStatus(NodeStatus::NOT_SET),
    m_nodeStatusHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageVolumeType(VolumeType::NOT_SET),
    m_storageVolumeTypeHasBeenSet(false),
    m_storageSizeHasBeenSet(false)
{
}

DomainNodesStatus::DomainNodesStatus(JsonView jsonValue) : 
    m_nodeIdHasBeenSet(false),
    m_nodeType(NodeType::NOT_SET),
    m_nodeTypeHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false),
    m_instanceType(OpenSearchPartitionInstanceType::NOT_SET),
    m_instanceTypeHasBeenSet(false),
    m_nodeStatus(NodeStatus::NOT_SET),
    m_nodeStatusHasBeenSet(false),
    m_storageTypeHasBeenSet(false),
    m_storageVolumeType(VolumeType::NOT_SET),
    m_storageVolumeTypeHasBeenSet(false),
    m_storageSizeHasBeenSet(false)
{
  *this = jsonValue;
}

DomainNodesStatus& DomainNodesStatus::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

    m_nodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeType"))
  {
    m_nodeType = NodeTypeMapper::GetNodeTypeForName(jsonValue.GetString("NodeType"));

    m_nodeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AvailabilityZone"))
  {
    m_availabilityZone = jsonValue.GetString("AvailabilityZone");

    m_availabilityZoneHasBeenSet = true;
  }

  if(jsonValue.ValueExists("InstanceType"))
  {
    m_instanceType = OpenSearchPartitionInstanceTypeMapper::GetOpenSearchPartitionInstanceTypeForName(jsonValue.GetString("InstanceType"));

    m_instanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeStatus"))
  {
    m_nodeStatus = NodeStatusMapper::GetNodeStatusForName(jsonValue.GetString("NodeStatus"));

    m_nodeStatusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageType"))
  {
    m_storageType = jsonValue.GetString("StorageType");

    m_storageTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageVolumeType"))
  {
    m_storageVolumeType = VolumeTypeMapper::GetVolumeTypeForName(jsonValue.GetString("StorageVolumeType"));

    m_storageVolumeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StorageSize"))
  {
    m_storageSize = jsonValue.GetString("StorageSize");

    m_storageSizeHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainNodesStatus::Jsonize() const
{
  JsonValue payload;

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  if(m_nodeTypeHasBeenSet)
  {
   payload.WithString("NodeType", NodeTypeMapper::GetNameForNodeType(m_nodeType));
  }

  if(m_availabilityZoneHasBeenSet)
  {
   payload.WithString("AvailabilityZone", m_availabilityZone);

  }

  if(m_instanceTypeHasBeenSet)
  {
   payload.WithString("InstanceType", OpenSearchPartitionInstanceTypeMapper::GetNameForOpenSearchPartitionInstanceType(m_instanceType));
  }

  if(m_nodeStatusHasBeenSet)
  {
   payload.WithString("NodeStatus", NodeStatusMapper::GetNameForNodeStatus(m_nodeStatus));
  }

  if(m_storageTypeHasBeenSet)
  {
   payload.WithString("StorageType", m_storageType);

  }

  if(m_storageVolumeTypeHasBeenSet)
  {
   payload.WithString("StorageVolumeType", VolumeTypeMapper::GetNameForVolumeType(m_storageVolumeType));
  }

  if(m_storageSizeHasBeenSet)
  {
   payload.WithString("StorageSize", m_storageSize);

  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
