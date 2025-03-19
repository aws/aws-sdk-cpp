/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/timestream-influxdb/model/DbClusterSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace TimestreamInfluxDB
{
namespace Model
{

DbClusterSummary::DbClusterSummary(JsonView jsonValue)
{
  *this = jsonValue;
}

DbClusterSummary& DbClusterSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = ClusterStatusMapper::GetClusterStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpoint"))
  {
    m_endpoint = jsonValue.GetString("endpoint");
    m_endpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readerEndpoint"))
  {
    m_readerEndpoint = jsonValue.GetString("readerEndpoint");
    m_readerEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("port"))
  {
    m_port = jsonValue.GetInteger("port");
    m_portHasBeenSet = true;
  }
  if(jsonValue.ValueExists("deploymentType"))
  {
    m_deploymentType = ClusterDeploymentTypeMapper::GetClusterDeploymentTypeForName(jsonValue.GetString("deploymentType"));
    m_deploymentTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbInstanceType"))
  {
    m_dbInstanceType = DbInstanceTypeMapper::GetDbInstanceTypeForName(jsonValue.GetString("dbInstanceType"));
    m_dbInstanceTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networkType"))
  {
    m_networkType = NetworkTypeMapper::GetNetworkTypeForName(jsonValue.GetString("networkType"));
    m_networkTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dbStorageType"))
  {
    m_dbStorageType = DbStorageTypeMapper::GetDbStorageTypeForName(jsonValue.GetString("dbStorageType"));
    m_dbStorageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("allocatedStorage"))
  {
    m_allocatedStorage = jsonValue.GetInteger("allocatedStorage");
    m_allocatedStorageHasBeenSet = true;
  }
  return *this;
}

JsonValue DbClusterSummary::Jsonize() const
{
  JsonValue payload;

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ClusterStatusMapper::GetNameForClusterStatus(m_status));
  }

  if(m_endpointHasBeenSet)
  {
   payload.WithString("endpoint", m_endpoint);

  }

  if(m_readerEndpointHasBeenSet)
  {
   payload.WithString("readerEndpoint", m_readerEndpoint);

  }

  if(m_portHasBeenSet)
  {
   payload.WithInteger("port", m_port);

  }

  if(m_deploymentTypeHasBeenSet)
  {
   payload.WithString("deploymentType", ClusterDeploymentTypeMapper::GetNameForClusterDeploymentType(m_deploymentType));
  }

  if(m_dbInstanceTypeHasBeenSet)
  {
   payload.WithString("dbInstanceType", DbInstanceTypeMapper::GetNameForDbInstanceType(m_dbInstanceType));
  }

  if(m_networkTypeHasBeenSet)
  {
   payload.WithString("networkType", NetworkTypeMapper::GetNameForNetworkType(m_networkType));
  }

  if(m_dbStorageTypeHasBeenSet)
  {
   payload.WithString("dbStorageType", DbStorageTypeMapper::GetNameForDbStorageType(m_dbStorageType));
  }

  if(m_allocatedStorageHasBeenSet)
  {
   payload.WithInteger("allocatedStorage", m_allocatedStorage);

  }

  return payload;
}

} // namespace Model
} // namespace TimestreamInfluxDB
} // namespace Aws
