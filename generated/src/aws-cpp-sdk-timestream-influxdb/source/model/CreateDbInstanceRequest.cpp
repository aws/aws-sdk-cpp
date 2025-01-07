﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/CreateDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

CreateDbInstanceRequest::CreateDbInstanceRequest() : 
    m_nameHasBeenSet(false),
    m_usernameHasBeenSet(false),
    m_passwordHasBeenSet(false),
    m_organizationHasBeenSet(false),
    m_bucketHasBeenSet(false),
    m_dbInstanceType(DbInstanceType::NOT_SET),
    m_dbInstanceTypeHasBeenSet(false),
    m_vpcSubnetIdsHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false),
    m_publiclyAccessible(false),
    m_publiclyAccessibleHasBeenSet(false),
    m_dbStorageType(DbStorageType::NOT_SET),
    m_dbStorageTypeHasBeenSet(false),
    m_allocatedStorage(0),
    m_allocatedStorageHasBeenSet(false),
    m_dbParameterGroupIdentifierHasBeenSet(false),
    m_deploymentType(DeploymentType::NOT_SET),
    m_deploymentTypeHasBeenSet(false),
    m_logDeliveryConfigurationHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_networkType(NetworkType::NOT_SET),
    m_networkTypeHasBeenSet(false)
{
}

Aws::String CreateDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_usernameHasBeenSet)
  {
   payload.WithString("username", m_username);

  }

  if(m_passwordHasBeenSet)
  {
   payload.WithString("password", m_password);

  }

  if(m_organizationHasBeenSet)
  {
   payload.WithString("organization", m_organization);

  }

  if(m_bucketHasBeenSet)
  {
   payload.WithString("bucket", m_bucket);

  }

  if(m_dbInstanceTypeHasBeenSet)
  {
   payload.WithString("dbInstanceType", DbInstanceTypeMapper::GetNameForDbInstanceType(m_dbInstanceType));
  }

  if(m_vpcSubnetIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSubnetIdsJsonList(m_vpcSubnetIds.size());
   for(unsigned vpcSubnetIdsIndex = 0; vpcSubnetIdsIndex < vpcSubnetIdsJsonList.GetLength(); ++vpcSubnetIdsIndex)
   {
     vpcSubnetIdsJsonList[vpcSubnetIdsIndex].AsString(m_vpcSubnetIds[vpcSubnetIdsIndex]);
   }
   payload.WithArray("vpcSubnetIds", std::move(vpcSubnetIdsJsonList));

  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> vpcSecurityGroupIdsJsonList(m_vpcSecurityGroupIds.size());
   for(unsigned vpcSecurityGroupIdsIndex = 0; vpcSecurityGroupIdsIndex < vpcSecurityGroupIdsJsonList.GetLength(); ++vpcSecurityGroupIdsIndex)
   {
     vpcSecurityGroupIdsJsonList[vpcSecurityGroupIdsIndex].AsString(m_vpcSecurityGroupIds[vpcSecurityGroupIdsIndex]);
   }
   payload.WithArray("vpcSecurityGroupIds", std::move(vpcSecurityGroupIdsJsonList));

  }

  if(m_publiclyAccessibleHasBeenSet)
  {
   payload.WithBool("publiclyAccessible", m_publiclyAccessible);

  }

  if(m_dbStorageTypeHasBeenSet)
  {
   payload.WithString("dbStorageType", DbStorageTypeMapper::GetNameForDbStorageType(m_dbStorageType));
  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("allocatedStorage", m_allocatedStorage);

  }

  if(m_dbParameterGroupIdentifierHasBeenSet)
  {
   payload.WithString("dbParameterGroupIdentifier", m_dbParameterGroupIdentifier);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", DeploymentTypeMapper::GetNameForDeploymentType(m_deploymentType));
  }

  if(m_logDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("logDeliveryConfiguration", m_logDeliveryConfiguration.Jsonize());

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

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("networkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection CreateDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.CreateDbInstance"));
  return headers;

}




