/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/RouteSummary.h>
#include <aws/core/utils/json/JsonSerializer.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws
{
namespace MigrationHubRefactorSpaces
{
namespace Model
{

RouteSummary::RouteSummary() : 
    m_applicationIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByAccountIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_includeChildPaths(false),
    m_includeChildPathsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_pathResourceToIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeType(RouteType::NOT_SET),
    m_routeTypeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_state(RouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

RouteSummary::RouteSummary(JsonView jsonValue) : 
    m_applicationIdHasBeenSet(false),
    m_arnHasBeenSet(false),
    m_createdByAccountIdHasBeenSet(false),
    m_createdTimeHasBeenSet(false),
    m_environmentIdHasBeenSet(false),
    m_errorHasBeenSet(false),
    m_includeChildPaths(false),
    m_includeChildPathsHasBeenSet(false),
    m_lastUpdatedTimeHasBeenSet(false),
    m_methodsHasBeenSet(false),
    m_ownerAccountIdHasBeenSet(false),
    m_pathResourceToIdHasBeenSet(false),
    m_routeIdHasBeenSet(false),
    m_routeType(RouteType::NOT_SET),
    m_routeTypeHasBeenSet(false),
    m_serviceIdHasBeenSet(false),
    m_sourcePathHasBeenSet(false),
    m_state(RouteState::NOT_SET),
    m_stateHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = jsonValue;
}

RouteSummary& RouteSummary::operator =(JsonView jsonValue)
{
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

    m_applicationIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

    m_arnHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedByAccountId"))
  {
    m_createdByAccountId = jsonValue.GetString("CreatedByAccountId");

    m_createdByAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

    m_createdTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");

    m_environmentIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

    m_errorHasBeenSet = true;
  }

  if(jsonValue.ValueExists("IncludeChildPaths"))
  {
    m_includeChildPaths = jsonValue.GetBool("IncludeChildPaths");

    m_includeChildPathsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

    m_lastUpdatedTimeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Methods"))
  {
    Aws::Utils::Array<JsonView> methodsJsonList = jsonValue.GetArray("Methods");
    for(unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex)
    {
      m_methods.push_back(HttpMethodMapper::GetHttpMethodForName(methodsJsonList[methodsIndex].AsString()));
    }
    m_methodsHasBeenSet = true;
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

    m_ownerAccountIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("PathResourceToId"))
  {
    Aws::Map<Aws::String, JsonView> pathResourceToIdJsonMap = jsonValue.GetObject("PathResourceToId").GetAllObjects();
    for(auto& pathResourceToIdItem : pathResourceToIdJsonMap)
    {
      m_pathResourceToId[pathResourceToIdItem.first] = pathResourceToIdItem.second.AsString();
    }
    m_pathResourceToIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteId"))
  {
    m_routeId = jsonValue.GetString("RouteId");

    m_routeIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("RouteType"))
  {
    m_routeType = RouteTypeMapper::GetRouteTypeForName(jsonValue.GetString("RouteType"));

    m_routeTypeHasBeenSet = true;
  }

  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetString("ServiceId");

    m_serviceIdHasBeenSet = true;
  }

  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

    m_sourcePathHasBeenSet = true;
  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RouteStateMapper::GetRouteStateForName(jsonValue.GetString("State"));

    m_stateHasBeenSet = true;
  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }

  return *this;
}

JsonValue RouteSummary::Jsonize() const
{
  JsonValue payload;

  if(m_applicationIdHasBeenSet)
  {
   payload.WithString("ApplicationId", m_applicationId);

  }

  if(m_arnHasBeenSet)
  {
   payload.WithString("Arn", m_arn);

  }

  if(m_createdByAccountIdHasBeenSet)
  {
   payload.WithString("CreatedByAccountId", m_createdByAccountId);

  }

  if(m_createdTimeHasBeenSet)
  {
   payload.WithDouble("CreatedTime", m_createdTime.SecondsWithMSPrecision());
  }

  if(m_environmentIdHasBeenSet)
  {
   payload.WithString("EnvironmentId", m_environmentId);

  }

  if(m_errorHasBeenSet)
  {
   payload.WithObject("Error", m_error.Jsonize());

  }

  if(m_includeChildPathsHasBeenSet)
  {
   payload.WithBool("IncludeChildPaths", m_includeChildPaths);

  }

  if(m_lastUpdatedTimeHasBeenSet)
  {
   payload.WithDouble("LastUpdatedTime", m_lastUpdatedTime.SecondsWithMSPrecision());
  }

  if(m_methodsHasBeenSet)
  {
   Aws::Utils::Array<JsonValue> methodsJsonList(m_methods.size());
   for(unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex)
   {
     methodsJsonList[methodsIndex].AsString(HttpMethodMapper::GetNameForHttpMethod(m_methods[methodsIndex]));
   }
   payload.WithArray("Methods", std::move(methodsJsonList));

  }

  if(m_ownerAccountIdHasBeenSet)
  {
   payload.WithString("OwnerAccountId", m_ownerAccountId);

  }

  if(m_pathResourceToIdHasBeenSet)
  {
   JsonValue pathResourceToIdJsonMap;
   for(auto& pathResourceToIdItem : m_pathResourceToId)
   {
     pathResourceToIdJsonMap.WithString(pathResourceToIdItem.first, pathResourceToIdItem.second);
   }
   payload.WithObject("PathResourceToId", std::move(pathResourceToIdJsonMap));

  }

  if(m_routeIdHasBeenSet)
  {
   payload.WithString("RouteId", m_routeId);

  }

  if(m_routeTypeHasBeenSet)
  {
   payload.WithString("RouteType", RouteTypeMapper::GetNameForRouteType(m_routeType));
  }

  if(m_serviceIdHasBeenSet)
  {
   payload.WithString("ServiceId", m_serviceId);

  }

  if(m_sourcePathHasBeenSet)
  {
   payload.WithString("SourcePath", m_sourcePath);

  }

  if(m_stateHasBeenSet)
  {
   payload.WithString("State", RouteStateMapper::GetNameForRouteState(m_state));
  }

  if(m_tagsHasBeenSet)
  {
   JsonValue tagsJsonMap;
   for(auto& tagsItem : m_tags)
   {
     tagsJsonMap.WithString(tagsItem.first, tagsItem.second);
   }
   payload.WithObject("Tags", std::move(tagsJsonMap));

  }

  return payload;
}

} // namespace Model
} // namespace MigrationHubRefactorSpaces
} // namespace Aws
