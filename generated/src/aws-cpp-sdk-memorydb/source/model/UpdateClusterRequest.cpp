/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/crt/cbor/Cbor.h>
#include <aws/memorydb/model/UpdateClusterRequest.h>

#include <utility>

using namespace Aws::MemoryDB::Model;
using namespace Aws::Crt::Cbor;
using namespace Aws::Utils;

Aws::String UpdateClusterRequest::SerializePayload() const {
  Aws::Crt::Cbor::CborEncoder encoder;

  // Calculate map size
  size_t mapSize = 0;
  if (m_clusterNameHasBeenSet) {
    mapSize++;
  }
  if (m_descriptionHasBeenSet) {
    mapSize++;
  }
  if (m_securityGroupIdsHasBeenSet) {
    mapSize++;
  }
  if (m_maintenanceWindowHasBeenSet) {
    mapSize++;
  }
  if (m_snsTopicArnHasBeenSet) {
    mapSize++;
  }
  if (m_snsTopicStatusHasBeenSet) {
    mapSize++;
  }
  if (m_parameterGroupNameHasBeenSet) {
    mapSize++;
  }
  if (m_snapshotWindowHasBeenSet) {
    mapSize++;
  }
  if (m_snapshotRetentionLimitHasBeenSet) {
    mapSize++;
  }
  if (m_nodeTypeHasBeenSet) {
    mapSize++;
  }
  if (m_engineHasBeenSet) {
    mapSize++;
  }
  if (m_engineVersionHasBeenSet) {
    mapSize++;
  }
  if (m_replicaConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_shardConfigurationHasBeenSet) {
    mapSize++;
  }
  if (m_aCLNameHasBeenSet) {
    mapSize++;
  }
  if (m_ipDiscoveryHasBeenSet) {
    mapSize++;
  }

  encoder.WriteMapStart(mapSize);

  if (m_clusterNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ClusterName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_clusterName.c_str()));
  }

  if (m_descriptionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Description"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_description.c_str()));
  }

  if (m_securityGroupIdsHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SecurityGroupIds"));
    encoder.WriteArrayStart(m_securityGroupIds.size());
    for (const auto& item_0 : m_securityGroupIds) {
      encoder.WriteText(Aws::Crt::ByteCursorFromCString(item_0.c_str()));
    }
  }

  if (m_maintenanceWindowHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("MaintenanceWindow"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_maintenanceWindow.c_str()));
  }

  if (m_snsTopicArnHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnsTopicArn"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snsTopicArn.c_str()));
  }

  if (m_snsTopicStatusHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnsTopicStatus"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snsTopicStatus.c_str()));
  }

  if (m_parameterGroupNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ParameterGroupName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_parameterGroupName.c_str()));
  }

  if (m_snapshotWindowHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnapshotWindow"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_snapshotWindow.c_str()));
  }

  if (m_snapshotRetentionLimitHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("SnapshotRetentionLimit"));
    (m_snapshotRetentionLimit >= 0) ? encoder.WriteUInt(m_snapshotRetentionLimit) : encoder.WriteNegInt(m_snapshotRetentionLimit);
  }

  if (m_nodeTypeHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("NodeType"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_nodeType.c_str()));
  }

  if (m_engineHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("Engine"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engine.c_str()));
  }

  if (m_engineVersionHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("EngineVersion"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_engineVersion.c_str()));
  }

  if (m_replicaConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ReplicaConfiguration"));
    m_replicaConfiguration.CborEncode(encoder);
  }

  if (m_shardConfigurationHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ShardConfiguration"));
    m_shardConfiguration.CborEncode(encoder);
  }

  if (m_aCLNameHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("ACLName"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(m_aCLName.c_str()));
  }

  if (m_ipDiscoveryHasBeenSet) {
    encoder.WriteText(Aws::Crt::ByteCursorFromCString("IpDiscovery"));
    encoder.WriteText(Aws::Crt::ByteCursorFromCString(IpDiscoveryMapper::GetNameForIpDiscovery(m_ipDiscovery).c_str()));
  }
  const auto str = Aws::String(reinterpret_cast<char*>(encoder.GetEncodedData().ptr), encoder.GetEncodedData().len);
  return str;
}

Aws::Http::HeaderValueCollection UpdateClusterRequest::GetRequestSpecificHeaders() const {
  Aws::Http::HeaderValueCollection headers;
  headers.emplace(Aws::Http::CONTENT_TYPE_HEADER, Aws::CBOR_CONTENT_TYPE);
  headers.emplace(Aws::Http::SMITHY_PROTOCOL_HEADER, Aws::RPC_V2_CBOR);
  headers.emplace(Aws::Http::ACCEPT_HEADER, Aws::CBOR_CONTENT_TYPE);
  return headers;
}
