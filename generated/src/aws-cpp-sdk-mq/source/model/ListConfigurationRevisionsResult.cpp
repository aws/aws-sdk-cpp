/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/ListConfigurationRevisionsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListConfigurationRevisionsResult::ListConfigurationRevisionsResult() : 
    m_maxResults(0)
{
}

ListConfigurationRevisionsResult::ListConfigurationRevisionsResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_maxResults(0)
{
  *this = result;
}

ListConfigurationRevisionsResult& ListConfigurationRevisionsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("configurationId"))
  {
    m_configurationId = jsonValue.GetString("configurationId");

  }

  if(jsonValue.ValueExists("maxResults"))
  {
    m_maxResults = jsonValue.GetInteger("maxResults");

  }

  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("revisions"))
  {
    Aws::Utils::Array<JsonView> revisionsJsonList = jsonValue.GetArray("revisions");
    for(unsigned revisionsIndex = 0; revisionsIndex < revisionsJsonList.GetLength(); ++revisionsIndex)
    {
      m_revisions.push_back(revisionsJsonList[revisionsIndex].AsObject());
    }
  }



  return *this;
}
