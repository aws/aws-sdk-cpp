/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListWorkflowStepGroupsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowStepGroupsResult::ListWorkflowStepGroupsResult()
{
}

ListWorkflowStepGroupsResult::ListWorkflowStepGroupsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkflowStepGroupsResult& ListWorkflowStepGroupsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workflowStepGroupsSummary"))
  {
    Aws::Utils::Array<JsonView> workflowStepGroupsSummaryJsonList = jsonValue.GetArray("workflowStepGroupsSummary");
    for(unsigned workflowStepGroupsSummaryIndex = 0; workflowStepGroupsSummaryIndex < workflowStepGroupsSummaryJsonList.GetLength(); ++workflowStepGroupsSummaryIndex)
    {
      m_workflowStepGroupsSummary.push_back(workflowStepGroupsSummaryJsonList[workflowStepGroupsSummaryIndex].AsObject());
    }
  }



  return *this;
}
