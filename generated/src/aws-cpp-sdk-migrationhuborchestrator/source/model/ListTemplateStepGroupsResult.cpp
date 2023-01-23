/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListTemplateStepGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTemplateStepGroupsResult::ListTemplateStepGroupsResult()
{
}

ListTemplateStepGroupsResult::ListTemplateStepGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTemplateStepGroupsResult& ListTemplateStepGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("templateStepGroupSummary"))
  {
    Aws::Utils::Array<JsonView> templateStepGroupSummaryJsonList = jsonValue.GetArray("templateStepGroupSummary");
    for(unsigned templateStepGroupSummaryIndex = 0; templateStepGroupSummaryIndex < templateStepGroupSummaryJsonList.GetLength(); ++templateStepGroupSummaryIndex)
    {
      m_templateStepGroupSummary.push_back(templateStepGroupSummaryJsonList[templateStepGroupSummaryIndex].AsObject());
    }
  }



  return *this;
}
