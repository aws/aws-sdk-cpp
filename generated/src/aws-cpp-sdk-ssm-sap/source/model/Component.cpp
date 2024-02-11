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
    m_sidHasBeenSet(false),
    m_systemNumberHasBeenSet(false),
    m_parentComponentHasBeenSet(false),
    m_childComponentsHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_componentType(ComponentType::NOT_SET),
    m_componentTypeHasBeenSet(false),
    m_status(ComponentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sapHostnameHasBeenSet(false),
    m_sapFeatureHasBeenSet(false),
    m_sapKernelVersionHasBeenSet(false),
    m_hdbVersionHasBeenSet(false),
    m_resilienceHasBeenSet(false),
    m_associatedHostHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_databaseConnectionHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_arnHasBeenSet(false)
{
}

Component::Component(JsonView jsonValue) : 
    m_componentIdHasBeenSet(false),
    m_sidHasBeenSet(false),
    m_systemNumberHasBeenSet(false),
    m_parentComponentHasBeenSet(false),
    m_childComponentsHasBeenSet(false),
    m_applicationIdHasBeenSet(false),
    m_componentType(ComponentType::NOT_SET),
    m_componentTypeHasBeenSet(false),
    m_status(ComponentStatus::NOT_SET),
    m_statusHasBeenSet(false),
    m_sapHostnameHasBeenSet(false),
    m_sapFeatureHasBeenSet(false),
    m_sapKernelVersionHasBeenSet(false),
    m_hdbVersionHasBeenSet(false),
    m_resilienceHasBeenSet(false),
    m_associatedHostHasBeenSet(false),
    m_databasesHasBeenSet(false),
    m_databaseConnectionHasBeenSet(false),
    m_lastUpdatedHasBeenSet(false),
    m_arnHasBeenSet(false)
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

  if(jsonValue.ValueExists("Sid"))
  {
    m_sid = jsonValue.GetString("Sid");

    m_sidHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SystemNumber"))
  {
    m_systemNumber = jsonValue.GetString("SystemNumber");

    m_systemNumberHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ParentComponent"))
  {
    m_parentComponent = jsonValue.GetString("ParentComponent");

    m_parentComponentHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ChildComponents"))
  {
    Aws::Utils::Array<JsonView> childComponentsJsonList = jsonValue.GetArray("ChildComponents");
    for(unsigned childComponentsIndex = 0; childComponentsIndex < childComponentsJsonList.GetLength(); ++childComponentsIndex)
    {
      m_childComponents.push_back(childComponentsJsonList[childComponentsIndex].AsString());
    }
    m_childComponentsHasBeenSet = true;
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

  if(jsonValue.ValueExists("SapHostname"))
  {
    m_sapHostname = jsonValue.GetString("SapHostname");

    m_sapHostnameHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SapFeature"))
  {
    m_sapFeature = jsonValue.GetString("SapFeature");

    m_sapFeatureHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SapKernelVersion"))
  {
    m_sapKernelVersion = jsonValue.GetString("SapKernelVersion");

    m_sapKernelVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("HdbVersion"))
  {
    m_hdbVersion = jsonValue.GetString("HdbVersion");

    m_hdbVersionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Resilience"))
  {
    m_resilience = jsonValue.GetObject("Resilience");

    m_resilienceHasBeenSet = true;
  }

  if(jsonValue.ValueExists("AssociatedHost"))
  {
    m_associatedHost = jsonValue.GetObject("AssociatedHost");

    m_associatedHostHasBeenSet = true;
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

  if(jsonValue.ValueExists("DatabaseConnection"))
  {
    m_databaseConnection = jsonValue.GetObject("DatabaseConnection");

    m_databaseConnectionHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdated"))
  {
    m_lastUpdated = jsonValue.GetDouble("LastUpdated");

    m_lastUpdatedHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
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

  if(m_sidHasBeenSet)
  {
   payload.WithString("Sid", m_sid);

  }

  if(m_systemNumberHasBeenSet)
  {
   payload.WithString("SystemNumber", m_systemNumber);

  }

  if(m_parentComponentHasBeenSet)
  {
   payload.WithString("ParentComponent", m_parentComponent);

  }

  if(m_childComponentsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> childComponentsJsonList(m_childComponents.size());
   for(unsigned childComponentsIndex = 0; childComponentsIndex < childComponentsJsonList.GetLength(); ++childComponentsIndex)
   {
     childComponentsJsonList[childComponentsIndex].AsString(m_childComponents[childComponentsIndex]);
   }
   payload.WithArray("ChildComponents", std::move(childComponentsJsonList));

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

  if(m_sapHostnameHasBeenSet)
  {
   payload.WithString("SapHostname", m_sapHostname);

  }

  if(m_sapFeatureHasBeenSet)
  {
   payload.WithString("SapFeature", m_sapFeature);

  }

  if(m_sapKernelVersionHasBeenSet)
  {
   payload.WithString("SapKernelVersion", m_sapKernelVersion);

  }

  if(m_hdbVersionHasBeenSet)
  {
   payload.WithString("HdbVersion", m_hdbVersion);

  }

  if(m_resilienceHasBeenSet)
  {
   payload.WithObject("Resilience", m_resilience.Jsonize());

  }

  if(m_associatedHostHasBeenSet)
  {
   payload.WithObject("AssociatedHost", m_associatedHost.Jsonize());

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

  if(m_databaseConnectionHasBeenSet)
  {
   payload.WithObject("DatabaseConnection", m_databaseConnection.Jsonize());

  }

  if(m_lastUpdatedHasBeenSet)
  {
   payload.WithDouble("LastUpdated", m_lastUpdated.SecondsWithMSPrecision());
  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  return payload;
}

} // namespace Model
} // namespace SsmSap
} // namespace Aws
