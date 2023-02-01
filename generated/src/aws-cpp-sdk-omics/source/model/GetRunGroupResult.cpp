/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetRunGroupResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetRunGroupResult::GetRunGroupResult() : 
    m_maxCpus(0),
    m_maxDuration(0),
    m_maxRuns(0)
{
}

GetRunGroupResult::GetRunGroupResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxCpus(0),
    m_maxDuration(0),
    m_maxRuns(0)
{
  *this = result;
}

GetRunGroupResult& GetRunGroupResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("maxCpus"))
  {
    m_maxCpus = jsonValue.GetInteger("maxCpus");

  }

  if(jsonValue.ValueExists("maxDuration"))
  {
    m_maxDuration = jsonValue.GetInteger("maxDuration");

  }

  if(jsonValue.ValueExists("maxRuns"))
  {
    m_maxRuns = jsonValue.GetInteger("maxRuns");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
