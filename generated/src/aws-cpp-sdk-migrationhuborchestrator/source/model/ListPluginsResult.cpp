/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListPluginsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListPluginsResult::ListPluginsResult()
{
}

ListPluginsResult::ListPluginsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListPluginsResult& ListPluginsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("plugins"))
  {
    Aws::Utils::Array<JsonView> pluginsJsonList = jsonValue.GetArray("plugins");
    for(unsigned pluginsIndex = 0; pluginsIndex < pluginsJsonList.GetLength(); ++pluginsIndex)
    {
      m_plugins.push_back(pluginsJsonList[pluginsIndex].AsObject());
    }
  }



  return *this;
}
