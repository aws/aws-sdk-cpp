/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ReplicationConfigurationTemplate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace mgn
{
namespace Model
{

ReplicationConfigurationTemplate::ReplicationConfigurationTemplate() : 
    m_arnHasBeenSet(false),
    m_associateDefaultSecurityGroup(false),
    m_associateDefaultSecurityGroupHasBeenSet(false),
    m_bandwidthThrottling(0),
    m_bandwidthThrottlingHasBeenSet(false),
    m_createPublicIP(false),
    m_createPublicIPHasBeenSet(false),
    m_dataPlaneRouting(ReplicationConfigurationDataPlaneRouting::NOT_SET),
    m_dataPlaneRoutingHasBeenSet(false),
    m_defaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET),
    m_defaultLargeStagingDiskTypeHasBeenSet(false),
    m_ebsEncryption(ReplicationConfigurationEbsEncryption::NOT_SET),
    m_ebsEncryptionHasBeenSet(false),
    m_ebsEncryptionKeyArnHasBeenSet(false),
    m_replicationConfigurationTemplateIDHasBeenSet(false),
    m_replicationServerInstanceTypeHasBeenSet(false),
    m_replicationServersSecurityGroupsIDsHasBeenSet(false),
    m_stagingAreaSubnetIdHasBeenSet(false),
    m_stagingAreaTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_useDedicatedReplicationServer(false),
    m_useDedicatedReplicationServerHasBeenSet(false)
{
}

ReplicationConfigurationTemplate::ReplicationConfigurationTemplate(JsonView jsonValue) : 
    m_arnHasBeenSet(false),
    m_associateDefaultSecurityGroup(false),
    m_associateDefaultSecurityGroupHasBeenSet(false),
    m_bandwidthThrottling(0),
    m_bandwidthThrottlingHasBeenSet(false),
    m_createPublicIP(false),
    m_createPublicIPHasBeenSet(false),
    m_dataPlaneRouting(ReplicationConfigurationDataPlaneRouting::NOT_SET),
    m_dataPlaneRoutingHasBeenSet(false),
    m_defaultLargeStagingDiskType(ReplicationConfigurationDefaultLargeStagingDiskType::NOT_SET),
    m_defaultLargeStagingDiskTypeHasBeenSet(false),
    m_ebsEncryption(ReplicationConfigurationEbsEncryption::NOT_SET),
    m_ebsEncryptionHasBeenSet(false),
    m_ebsEncryptionKeyArnHasBeenSet(false),
    m_replicationConfigurationTemplateIDHasBeenSet(false),
    m_replicationServerInstanceTypeHasBeenSet(false),
    m_replicationServersSecurityGroupsIDsHasBeenSet(false),
    m_stagingAreaSubnetIdHasBeenSet(false),
    m_stagingAreaTagsHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_useDedicatedReplicationServer(false),
    m_useDedicatedReplicationServerHasBeenSet(false)
{
  *this = jsonValue;
}

ReplicationConfigurationTemplate& ReplicationConfigurationTemplate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("associateDefaultSecurityGroup"))
  {
    m_associateDefaultSecurityGroup = jsonValue.GetBool("associateDefaultSecurityGroup");

    m_associateDefaultSecurityGroupHasBeenSet = true;
  }

  if(jsonValue.ValueExists("bandwidthThrottling"))
  {
    m_bandwidthThrottling = jsonValue.GetInt64("bandwidthThrottling");

    m_bandwidthThrottlingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("createPublicIP"))
  {
    m_createPublicIP = jsonValue.GetBool("createPublicIP");

    m_createPublicIPHasBeenSet = true;
  }

  if(jsonValue.ValueExists("dataPlaneRouting"))
  {
    m_dataPlaneRouting = ReplicationConfigurationDataPlaneRoutingMapper::GetReplicationConfigurationDataPlaneRoutingForName(jsonValue.GetString("dataPlaneRouting"));

    m_dataPlaneRoutingHasBeenSet = true;
  }

  if(jsonValue.ValueExists("defaultLargeStagingDiskType"))
  {
    m_defaultLargeStagingDiskType = ReplicationConfigurationDefaultLargeStagingDiskTypeMapper::GetReplicationConfigurationDefaultLargeStagingDiskTypeForName(jsonValue.GetString("defaultLargeStagingDiskType"));

    m_defaultLargeStagingDiskTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebsEncryption"))
  {
    m_ebsEncryption = ReplicationConfigurationEbsEncryptionMapper::GetReplicationConfigurationEbsEncryptionForName(jsonValue.GetString("ebsEncryption"));

    m_ebsEncryptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ebsEncryptionKeyArn"))
  {
    m_ebsEncryptionKeyArn = jsonValue.GetString("ebsEncryptionKeyArn");

    m_ebsEncryptionKeyArnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationConfigurationTemplateID"))
  {
    m_replicationConfigurationTemplateID = jsonValue.GetString("replicationConfigurationTemplateID");

    m_replicationConfigurationTemplateIDHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationServerInstanceType"))
  {
    m_replicationServerInstanceType = jsonValue.GetString("replicationServerInstanceType");

    m_replicationServerInstanceTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("replicationServersSecurityGroupsIDs"))
  {
    Aws::Utils::Array<JsonView> replicationServersSecurityGroupsIDsJsonList = jsonValue.GetArray("replicationServersSecurityGroupsIDs");
    for(unsigned replicationServersSecurityGroupsIDsIndex = 0; replicationServersSecurityGroupsIDsIndex < replicationServersSecurityGroupsIDsJsonList.GetLength(); ++replicationServersSecurityGroupsIDsIndex)
    {
      m_replicationServersSecurityGroupsIDs.push_back(replicationServersSecurityGroupsIDsJsonList[replicationServersSecurityGroupsIDsIndex].AsString());
    }
    m_replicationServersSecurityGroupsIDsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stagingAreaSubnetId"))
  {
    m_stagingAreaSubnetId = jsonValue.GetString("stagingAreaSubnetId");

    m_stagingAreaSubnetIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("stagingAreaTags"))
  {
    Aws::Map<Aws::String, JsonView> stagingAreaTagsJsonMap = jsonValue.GetObject("stagingAreaTags").GetAllObjects();
    for(auto& stagingAreaTagsItem : stagingAreaTagsJsonMap)
    {
      m_stagingAreaTags[stagingAreaTagsItem.first] = stagingAreaTagsItem.second.AsString();
    }
    m_stagingAreaTagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("useDedicatedReplicationServer"))
  {
    m_useDedicatedReplicationServer = jsonValue.GetBool("useDedicatedReplicationServer");

    m_useDedicatedReplicationServerHasBeenSet = true;
  }

  return *this;
}

JsonValue ReplicationConfigurationTemplate::Jsonize() const
{
  JsonValue payload;

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_associateDefaultSecurityGroupHasBeenSet)
  {
   payload.WithBool("associateDefaultSecurityGroup", m_associateDefaultSecurityGroup);

  }

  if(m_bandwidthThrottlingHasBeenSet)
  {
   payload.WithInt64("bandwidthThrottling", m_bandwidthThrottling);

  }

  if(m_createPublicIPHasBeenSet)
  {
   payload.WithBool("createPublicIP", m_createPublicIP);

  }

  if(m_dataPlaneRoutingHasBeenSet)
  {
   payload.WithString("dataPlaneRouting", ReplicationConfigurationDataPlaneRoutingMapper::GetNameForReplicationConfigurationDataPlaneRouting(m_dataPlaneRouting));
  }

  if(m_defaultLargeStagingDiskTypeHasBeenSet)
  {
   payload.WithString("defaultLargeStagingDiskType", ReplicationConfigurationDefaultLargeStagingDiskTypeMapper::GetNameForReplicationConfigurationDefaultLargeStagingDiskType(m_defaultLargeStagingDiskType));
  }

  if(m_ebsEncryptionHasBeenSet)
  {
   payload.WithString("ebsEncryption", ReplicationConfigurationEbsEncryptionMapper::GetNameForReplicationConfigurationEbsEncryption(m_ebsEncryption));
  }

  if(m_ebsEncryptionKeyArnHasBeenSet)
  {
   payload.WithString("ebsEncryptionKeyArn", m_ebsEncryptionKeyArn);

  }

  if(m_replicationConfigurationTemplateIDHasBeenSet)
  {
   payload.WithString("replicationConfigurationTemplateID", m_replicationConfigurationTemplateID);

  }

  if(m_replicationServerInstanceTypeHasBeenSet)
  {
   payload.WithString("replicationServerInstanceType", m_replicationServerInstanceType);

  }

  if(m_replicationServersSecurityGroupsIDsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> replicationServersSecurityGroupsIDsJsonList(m_replicationServersSecurityGroupsIDs.size());
   for(unsigned replicationServersSecurityGroupsIDsIndex = 0; replicationServersSecurityGroupsIDsIndex < replicationServersSecurityGroupsIDsJsonList.GetLength(); ++replicationServersSecurityGroupsIDsIndex)
   {
     replicationServersSecurityGroupsIDsJsonList[replicationServersSecurityGroupsIDsIndex].AsString(m_replicationServersSecurityGroupsIDs[replicationServersSecurityGroupsIDsIndex]);
   }
   payload.WithArray("replicationServersSecurityGroupsIDs", std::move(replicationServersSecurityGroupsIDsJsonList));

  }

  if(m_stagingAreaSubnetIdHasBeenSet)
  {
   payload.WithString("stagingAreaSubnetId", m_stagingAreaSubnetId);

  }

  if(m_stagingAreaTagsHasBeenSet)
  {
   JsonValue stagingAreaTagsJsonMap;
   for(auto& stagingAreaTagsItem : m_stagingAreaTags)
   {
     stagingAreaTagsJsonMap.WithString(stagingAreaTagsItem.first, stagingAreaTagsItem.second);
   }
   payload.WithObject("stagingAreaTags", std::move(stagingAreaTagsJsonMap));

  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("tags", std::move(tagsJsonMap));

  }

  if(m_useDedicatedReplicationServerHasBeenSet)
  {
   payload.WithBool("useDedicatedReplicationServer", m_useDedicatedReplicationServer);

  }

  return payload;
}

} // namespace Model
} // namespace mgn
} // namespace Aws
