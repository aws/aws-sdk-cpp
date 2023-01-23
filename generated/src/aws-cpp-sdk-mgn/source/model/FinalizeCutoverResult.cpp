/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mgn/model/FinalizeCutoverResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::mgn::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

FinalizeCutoverResult::FinalizeCutoverResult() : 
    m_isArchived(false),
    m_replicationType(ReplicationType::NOT_SET)
{
}

FinalizeCutoverResult::FinalizeCutoverResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_isArchived(false),
    m_replicationType(ReplicationType::NOT_SET)
{
  *this = result;
}

FinalizeCutoverResult& FinalizeCutoverResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("applicationID"))
  {
    m_applicationID = jsonValue.GetString("applicationID");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("dataReplicationInfo"))
  {
    m_dataReplicationInfo = jsonValue.GetObject("dataReplicationInfo");

  }

  if(jsonValue.ValueExists("isArchived"))
  {
    m_isArchived = jsonValue.GetBool("isArchived");

  }

  if(jsonValue.ValueExists("launchedInstance"))
  {
    m_launchedInstance = jsonValue.GetObject("launchedInstance");

  }

  if(jsonValue.ValueExists("lifeCycle"))
  {
    m_lifeCycle = jsonValue.GetObject("lifeCycle");

  }

  if(jsonValue.ValueExists("replicationType"))
  {
    m_replicationType = ReplicationTypeMapper::GetReplicationTypeForName(jsonValue.GetString("replicationType"));

  }

  if(jsonValue.ValueExists("sourceProperties"))
  {
    m_sourceProperties = jsonValue.GetObject("sourceProperties");

  }

  if(jsonValue.ValueExists("sourceServerID"))
  {
    m_sourceServerID = jsonValue.GetString("sourceServerID");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("vcenterClientID"))
  {
    m_vcenterClientID = jsonValue.GetString("vcenterClientID");

  }



  return *this;
}
