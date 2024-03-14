/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/UpdateDbInstanceRequest.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::TimestreamInfluxDB::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;

UpdateDbInstanceRequest::UpdateDbInstanceRequest() : 
    m_identifierHasBeenSet(false),
    m_logDeliveryConfigurationHasBeenSet(false),
    m_dbParameterGroupIdentifierHasBeenSet(false)
{
}

Aws::String UpdateDbInstanceRequest::SerializePayload() const
{
  JsonValue payload;

  if(m_identifierHasBeenSet)
  {
   payload.WithString("identifier", m_identifier);

  }

  if(m_logDeliveryConfigurationHasBeenSet)
  {
   payload.WithObject("logDeliveryConfiguration", m_logDeliveryConfiguration.Jsonize());

  }

  if(m_dbParameterGroupIdentifierHasBeenSet)
  {
   payload.WithString("dbParameterGroupIdentifier", m_dbParameterGroupIdentifier);

  }

  return payload.View().WriteReadable();
}

Aws::Http::HeaderValueCollection UpdateDbInstanceRequest::GetRequestSpecificHeaders() const
{
  Aws::Http::HeaderValueCollection headers;
  headers.insert(Aws::Http::HeaderValuePair("X-Amz-Target", "AmazonTimestreamInfluxDB.UpdateDbInstance"));
  return headers;

}




