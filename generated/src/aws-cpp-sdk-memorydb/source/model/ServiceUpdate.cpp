/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/memorydb/model/ServiceUpdate.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MemoryDB
{
namespace Model
{

ServiceUpdate::ServiceUpdate() : 
    m_clusterNameHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ServiceUpdateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(ServiceUpdateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nodesUpdatedHasBeenSet(false),
    m_autoUpdateStartDateHasBeenSet(false)
{
}

ServiceUpdate::ServiceUpdate(JsonView jsonValue) : 
    m_clusterNameHasBeenSet(false),
    m_serviceUpdateNameHasBeenSet(false),
    m_releaseDateHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_status(ServiceUpdateStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_type(ServiceUpdateType::NOT_SET),
    m_typeHasBeenSet(false),
    m_nodesUpdatedHasBeenSet(false),
    m_autoUpdateStartDateHasBeenSet(false)
{
  *this = jsonValue;
}

ServiceUpdate& ServiceUpdate::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ClusterName"))
  {
    m_clusterName = jsonValue.GetString("ClusterName");

    m_clusterNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceUpdateName"))
  {
    m_serviceUpdateName = jsonValue.GetString("ServiceUpdateName");

    m_serviceUpdateNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ReleaseDate"))
  {
    m_releaseDate = jsonValue.GetDouble("ReleaseDate");

    m_releaseDateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Description"))
  {
    m_description = jsonValue.GetString("Description");

    m_descriptionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ServiceUpdateStatusMapper::GetServiceUpdateStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Type"))
  {
    m_type = ServiceUpdateTypeMapper::GetServiceUpdateTypeForName(jsonValue.GetString("Type"));

    m_typeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodesUpdated"))
  {
    m_nodesUpdated = jsonValue.GetString("NodesUpdated");

    m_nodesUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AutoUpdateStartDate"))
  {
    m_autoUpdateStartDate = jsonValue.GetDouble("AutoUpdateStartDate");

    m_autoUpdateStartDateHasBeenSet = true;
  }

  return *this;
}

JsonValue ServiceUpdate::Jsonize() const
{
  JsonValue payload;

  if(m_clusterNameHasBeenSet)
  {
   payload.WithString("ClusterName", m_clusterName);

  }

  if(m_serviceUpdateNameHasBeenSet)
  {
   payload.WithString("ServiceUpdateName", m_serviceUpdateName);

  }

  if(m_releaseDateHasBeenSet)
  {
   payload.WithDouble("ReleaseDate", m_releaseDate.SecondsWithMSPrecision());
  }

  if(m_descriptionHasBeenSet)
  {
   payload.WithString("Description", m_description);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ServiceUpdateStatusMapper::GetNameForServiceUpdateStatus(m_status));
  }

  if(m_typeHasBeenSet)
  {
   payload.WithString("Type", ServiceUpdateTypeMapper::GetNameForServiceUpdateType(m_type));
  }

  if(m_nodesUpdatedHasBeenSet)
  {
   payload.WithString("NodesUpdated", m_nodesUpdated);

  }

  if(m_autoUpdateStartDateHasBeenSet)
  {
   payload.WithDouble("AutoUpdateStartDate", m_autoUpdateStartDate.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace MemoryDB
} // namespace Aws
