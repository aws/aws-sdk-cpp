/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListWorkflowsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowsResult::ListWorkflowsResult()
{
}

ListWorkflowsResult::ListWorkflowsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkflowsResult& ListWorkflowsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("migrationWorkflowSummary"))
  {
    Aws::Utils::Array<JsonView> migrationWorkflowSummaryJsonList = jsonValue.GetArray("migrationWorkflowSummary");
    for(unsigned migrationWorkflowSummaryIndex = 0; migrationWorkflowSummaryIndex < migrationWorkflowSummaryJsonList.GetLength(); ++migrationWorkflowSummaryIndex)
    {
      m_migrationWorkflowSummary.push_back(migrationWorkflowSummaryJsonList[migrationWorkflowSummaryIndex].AsObject());
    }
  }



  return *this;
}
