/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListTemplatesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTemplatesResult::ListTemplatesResult()
{
}

ListTemplatesResult::ListTemplatesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTemplatesResult& ListTemplatesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("templateSummary"))
  {
    Aws::Utils::Array<JsonView> templateSummaryJsonList = jsonValue.GetArray("templateSummary");
    for(unsigned templateSummaryIndex = 0; templateSummaryIndex < templateSummaryJsonList.GetLength(); ++templateSummaryIndex)
    {
      m_templateSummary.push_back(templateSummaryJsonList[templateSummaryIndex].AsObject());
    }
  }



  return *this;
}
