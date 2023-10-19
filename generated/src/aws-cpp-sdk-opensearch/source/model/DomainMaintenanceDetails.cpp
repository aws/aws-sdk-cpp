/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/opensearch/model/DomainMaintenanceDetails.h>
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

DomainMaintenanceDetails::DomainMaintenanceDetails() : 
    m_maintenanceIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_action(MaintenanceType::NOT_SET),
    m_actionHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_status(MaintenanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
}

DomainMaintenanceDetails::DomainMaintenanceDetails(JsonView jsonValue) : 
    m_maintenanceIdHasBeenSet(false),
    m_domainNameHasBeenSet(false),
    m_action(MaintenanceType::NOT_SET),
    m_actionHasBeenSet(false),
    m_nodeIdHasBeenSet(false),
    m_status(MaintenanceStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_statusMessageHasBeenSet(false),
    m_createdAtHasBeenSet(false),
    m_updatedAtHasBeenSet(false)
{
  *this = jsonValue;
}

DomainMaintenanceDetails& DomainMaintenanceDetails::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("MaintenanceId"))
  {
    m_maintenanceId = jsonValue.GetString("MaintenanceId");

    m_maintenanceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("DomainName"))
  {
    m_domainName = jsonValue.GetString("DomainName");

    m_domainNameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Action"))
  {
    m_action = MaintenanceTypeMapper::GetMaintenanceTypeForName(jsonValue.GetString("Action"));

    m_actionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("NodeId"))
  {
    m_nodeId = jsonValue.GetString("NodeId");

    m_nodeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = MaintenanceStatusMapper::GetMaintenanceStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("StatusMessage"))
  {
    m_statusMessage = jsonValue.GetString("StatusMessage");

    m_statusMessageHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedAt"))
  {
    m_createdAt = jsonValue.GetDouble("CreatedAt");

    m_createdAtHasBeenSet = true;
  }

  if(jsonValue.ValueExists("UpdatedAt"))
  {
    m_updatedAt = jsonValue.GetDouble("UpdatedAt");

    m_updatedAtHasBeenSet = true;
  }

  return *this;
}

JsonValue DomainMaintenanceDetails::Jsonize() const
{
  JsonValue payload;

  if(m_maintenanceIdHasBeenSet)
  {
   payload.WithString("MaintenanceId", m_maintenanceId);

  }

  if(m_domainNameHasBeenSet)
  {
   payload.WithString("DomainName", m_domainName);

  }

  if(m_actionHasBeenSet)
  {
   payload.WithString("Action", MaintenanceTypeMapper::GetNameForMaintenanceType(m_action));
  }

  if(m_nodeIdHasBeenSet)
  {
   payload.WithString("NodeId", m_nodeId);

  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", MaintenanceStatusMapper::GetNameForMaintenanceStatus(m_status));
  }

  if(m_statusMessageHasBeenSet)
  {
   payload.WithString("StatusMessage", m_statusMessage);

  }

  if(m_createdAtHasBeenSet)
  {
   payload.WithDouble("CreatedAt", m_createdAt.SecondsWithMSPrecision());
  }

  if(m_updatedAtHasBeenSet)
  {
   payload.WithDouble("UpdatedAt", m_updatedAt.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
