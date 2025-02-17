/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/UpdateDbClusterRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDbClusterRequest::UpdateDbClusterRequest() : 
    m_dbClusterIdHasBeenSet(false),
    m_logDeliveryConfigurationHasBeenSet(false),
    m_dbParameterGroupIdentifierHasBeenSet(false),
    m_port(0),
    m_portHasBeenSet(false),
    m_dbInstanceType(DbInstanceType::NOT_SET),
    m_dbInstanceTypeHasBeenSet(false),
    m_failoverMode(FailoverMode::NOT_SET),
    m_failoverModeHasBeenSet(false)
{
}

Aws::String UpdateDbClusterRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_dbClusterIdHasBeenSet)
  {
   payload.WithString("dbClusterId", m_dbClusterId);

  }

  if(m_logDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("logDeliveryConfiguration", m_logDeliveryConfiguration.Jsonize());

  }

  if(m_dbParameterGroupIdentifierHasBeenSet)
  {
   payload.WithString("dbParameterGroupIdentifier", m_dbParameterGroupIdentifier);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_dbInstanceTypeHasBeenSet)
  {
   payload.WithString("dbInstanceType", DbInstanceTypeMapper::GetNameForDbInstanceType(m_dbInstanceType));
  }

  if(m_failoverModeHasBeenSet)
  {
   payload.WithString("failoverMode", FailoverModeMapper::GetNameForFailoverMode(m_failoverMode));
  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDbClusterRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.UpdateDbCluster"));
  return headers;

}




