/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/ChangeServerLifeCycleStateResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ChangeServerLifeCycleStateResult::ChangeServerLifeCycleStateResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ChangeServerLifeCycleStateResult& ChangeServerLifeCycleStateResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationID"))
  {
    m_applicationID = jsonValue.GetString("applicationID");
    m_applicationIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("connectorAction"))
  {
    m_connectorAction = jsonValue.GetObject("connectorAction");
    m_connectorActionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");
    m_dataReplicationInfoHasBeenSet = true;
  }
  if(jsonValue.ValueExists("fqdnForActionFramework"))
  {
    m_fqdnForActionFramework = jsonValue.GetString("fqdnForActionFramework");
    m_fqdnForActionFrameworkHasBeenSet = true;
  }
  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");
    m_isArchivedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("launchedInstance"))
  {
    m_launchedInstance = jsonValue.GetObject("launchedInstance");
    m_launchedInstanceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("lifeCycle");
    m_lifeCycleHasBeenSet = true;
  }
  if(jsonValue.ValueExists("replicationType"))
  {
    m_replicationType = ReplicationTypeMapper::GetReplicationTypeForName(jsonValue.GetString("replicationType"));
    m_replicationTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");
    m_sourcePropertiesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");
    m_sourceServerIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("userProvidedID"))
  {
    m_userProvidedID = jsonValue.GetString("userProvidedID");
    m_userProvidedIDHasBeenSet = true;
  }
  if(jsonValue.ValueExists("vcenterClientID"))
  {
    m_vcenterClientID = jsonValue.GetString("vcenterClientID");
    m_vcenterClientIDHasBeenSet = true;
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
