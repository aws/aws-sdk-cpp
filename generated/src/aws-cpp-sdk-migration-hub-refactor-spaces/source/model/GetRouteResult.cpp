/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/GetRouteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRouteResult::GetRouteResult() : 
    m_includeChildPaths(false),
    m_routeType(RouteType::NOT_SET),
    m_state(RouteState::NOT_SET)
{
}

GetRouteResult::GetRouteResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_includeChildPaths(false),
    m_routeType(RouteType::NOT_SET),
    m_state(RouteState::NOT_SET)
{
  *this = result;
}

GetRouteResult& GetRouteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ApplicationId"))
  {
    m_applicationId = jsonValue.GetString("ApplicationId");

  }

  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");

  }

  if(jsonValue.ValueExists("CreatedByAccountId"))
  {
    m_createdByAccountId = jsonValue.GetString("CreatedByAccountId");

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("EnvironmentId"))
  {
    m_environmentId = jsonValue.GetString("EnvironmentId");

  }

  if(jsonValue.ValueExists("Error"))
  {
    m_error = jsonValue.GetObject("Error");

  }

  if(jsonValue.ValueExists("IncludeChildPaths"))
  {
    m_includeChildPaths = jsonValue.GetBool("IncludeChildPaths");

  }

  if(jsonValue.ValueExists("LastUpdatedTime"))
  {
    m_lastUpdatedTime = jsonValue.GetDouble("LastUpdatedTime");

  }

  if(jsonValue.ValueExists("Methods"))
  {
    Aws::Utils::Array<JsonView> methodsJsonList = jsonValue.GetArray("Methods");
    for(unsigned methodsIndex = 0; methodsIndex < methodsJsonList.GetLength(); ++methodsIndex)
    {
      m_methods.push_back(HttpMethodMapper::GetHttpMethodForName(methodsJsonList[methodsIndex].AsString()));
    }
  }

  if(jsonValue.ValueExists("OwnerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("OwnerAccountId");

  }

  if(jsonValue.ValueExists("PathResourceToId"))
  {
    Aws::Map<Aws::String, JsonView> pathResourceToIdJsonMap = jsonValue.GetObject("PathResourceToId").GetAllObjects();
    for(auto& pathResourceToIdItem : pathResourceToIdJsonMap)
    {
      m_pathResourceToId[pathResourceToIdItem.first] = pathResourceToIdItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("RouteId"))
  {
    m_routeId = jsonValue.GetString("RouteId");

  }

  if(jsonValue.ValueExists("RouteType"))
  {
    m_routeType = RouteTypeMapper::GetRouteTypeForName(jsonValue.GetString("RouteType"));

  }

  if(jsonValue.ValueExists("ServiceId"))
  {
    m_serviceId = jsonValue.GetString("ServiceId");

  }

  if(jsonValue.ValueExists("SourcePath"))
  {
    m_sourcePath = jsonValue.GetString("SourcePath");

  }

  if(jsonValue.ValueExists("State"))
  {
    m_state = RouteStateMapper::GetRouteStateForName(jsonValue.GetString("State"));

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
