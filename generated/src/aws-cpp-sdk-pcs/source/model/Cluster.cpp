/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pcs/model/Cluster.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace PCS
{
namespace Model
{

Cluster::Cluster(JsonView jsonValue)
{
  *this = jsonValue;
}

Cluster& Cluster::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
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
  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");
    m_createdAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");
    m_modifiedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scheduler"))
  {
    m_scheduler = jsonValue.GetObject("scheduler");
    m_schedulerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("size"))
  {
    m_size = SizeMapper::GetSizeForName(jsonValue.GetString("size"));
    m_sizeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("slurmConfiguration"))
  {
    m_slurmConfiguration = jsonValue.GetObject("slurmConfiguration");
    m_slurmConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("networking"))
  {
    m_networking = jsonValue.GetObject("networking");
    m_networkingHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endpoints"))
  {
    Aws::Utils::Array<JsonView> endpointsJsonList = jsonValue.GetArray("endpoints");
    for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
    {
      m_endpoints.push_back(endpointsJsonList[endpointsIndex].AsObject());
    }
    m_endpointsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("errorInfo"))
  {
    Aws::Utils::Array<JsonView> errorInfoJsonList = jsonValue.GetArray("errorInfo");
    for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
    {
      m_errorInfo.push_back(errorInfoJsonList[errorInfoIndex].AsObject());
    }
    m_errorInfoHasBeenSet = true;
  }
  return *this;
}

JsonValue Cluster::Jsonize() const
{
  JsonValue payload;

  if(m_nameHasBeenSet)
  {
   payload.WithString("name", m_name);

  }

  if(m_idHasBeenSet)
  {
   payload.WithString("id", m_id);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("arn", m_arn);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("status", ClusterStatusMapper::GetNameForClusterStatus(m_status));
  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithString("createdAt", m_createdAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_modifiedAtHasBeenSet)
  {
   payload.WithString("modifiedAt", m_modifiedAt.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if(m_schedulerHasBeenSet)
  {
   payload.WithObject("scheduler", m_scheduler.Jsonize());

  }

  if(m_sizeHasBeenSet)
  {
   payload.WithString("size", SizeMapper::GetNameForSize(m_size));
  }

  if(m_slurmConfigurationHasBeenSet)
  {
   payload.WithObject("slurmConfiguration", m_slurmConfiguration.Jsonize());

  }

  if(m_networkingHasBeenSet)
  {
   payload.WithObject("networking", m_networking.Jsonize());

  }

  if(m_endpointsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> endpointsJsonList(m_endpoints.size());
   for(unsigned endpointsIndex = 0; endpointsIndex < endpointsJsonList.GetLength(); ++endpointsIndex)
   {
     endpointsJsonList[endpointsIndex].AsObject(m_endpoints[endpointsIndex].Jsonize());
   }
   payload.WithArray("endpoints", std::move(endpointsJsonList));

  }

  if(m_errorInfoHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> errorInfoJsonList(m_errorInfo.size());
   for(unsigned errorInfoIndex = 0; errorInfoIndex < errorInfoJsonList.GetLength(); ++errorInfoIndex)
   {
     errorInfoJsonList[errorInfoIndex].AsObject(m_errorInfo[errorInfoIndex].Jsonize());
   }
   payload.WithArray("errorInfo", std::move(errorInfoJsonList));

  }

  return payload;
}

} // namespace Model
} // namespace PCS
} // namespace Aws
