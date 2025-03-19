/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migration-hub-refactor-spaces/model/GetRouteResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubRefactorSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRouteResult::GetRouteResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetRouteResult& GetRouteResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AppendSourcePath"))
  {
    m_appendSourcePath = jsonValue.GetBool("AppendSourcePath");
    m_appendSourcePathHasBeenSet = true;
  }
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
