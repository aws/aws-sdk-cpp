/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/ssm-sap/model/Component.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace SsmSap
{
namespace Model
{

Component::Component() : 
    m_componentIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_componentType(ComponentType::NOT_SET),
    m_componentTypeHasBeenSet(false),
    m_status(ComponentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_primaryHostHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
}

Component::Component(JsonView jsonValue) : 
    m_componentIdHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_componentType(ComponentType::NOT_SET),
    m_componentTypeHasBeenSet(false),
    m_status(ComponentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_hostsHasBeenSet(false),
    m_primaryHostHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false)
{
  *this = jsonValue;
}

Component& Component::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ComponentId"))
  {
    m_componentId = jsonValue.GetString("ComponentId");

    m_componentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ComponentType"))
  {
    m_componentType = ComponentTypeMapper::GetComponentTypeForName(jsonValue.GetString("ComponentType"));

    m_componentTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Status"))
  {
    m_status = ComponentStatusMapper::GetComponentStatusForName(jsonValue.GetString("Status"));

    m_statusHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Databases"))
  {
    Aws::Utils::Array<JsonView> databasesJsonList = jsonValue.GetArray("Databases");
    for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
    {
      m_databases.push_back(databasesJsonList[databasesIndex].AsString());
    }
    m_databasesHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Hosts"))
  {
    Aws::Utils::Array<JsonView> hostsJsonList = jsonValue.GetArray("Hosts");
    for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
    {
      m_hosts.push_back(hostsJsonList[hostsIndex].AsObject());
    }
    m_hostsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PrimaryHost"))
  {
    m_primaryHost = jsonValue.GetString("PrimaryHost");

    m_primaryHostHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  return *this;
}

JsonValue Component::Jsonize() const
{
  JsonValue payload;

  if(m_componentIdHasBeenSet)
  {
   payload.WithString("ComponentId", m_componentId);

  }

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_componentTypeHasBeenSet)
  {
   payload.WithString("ComponentType", ComponentTypeMapper::GetNameForComponentType(m_componentType));
  }

  if(m_statusHasBeenSet)
  {
   payload.WithString("Status", ComponentStatusMapper::GetNameForComponentStatus(m_status));
  }

  if(m_databasesHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> databasesJsonList(m_databases.size());
   for(unsigned databasesIndex = 0; databasesIndex < databasesJsonList.GetLength(); ++databasesIndex)
   {
     databasesJsonList[databasesIndex].AsString(m_databases[databasesIndex]);
   }
   payload.WithArray("Databases", std::move(databasesJsonList));

  }

  if(m_hostsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> hostsJsonList(m_hosts.size());
   for(unsigned hostsIndex = 0; hostsIndex < hostsJsonList.GetLength(); ++hostsIndex)
   {
     hostsJsonList[hostsIndex].AsObject(m_hosts[hostsIndex].Jsonize());
   }
   payload.WithArray("Hosts", std::move(hostsJsonList));

  }

  if(m_primaryHostHasBeenSet)
  {
   payload.WithString("PrimaryHost", m_primaryHost);

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
