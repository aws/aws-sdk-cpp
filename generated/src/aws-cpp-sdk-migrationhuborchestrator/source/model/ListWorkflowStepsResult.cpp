/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/ListWorkflowStepsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListWorkflowStepsResult::ListWorkflowStepsResult()
{
}

ListWorkflowStepsResult::ListWorkflowStepsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListWorkflowStepsResult& ListWorkflowStepsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("workflowStepsSummary"))
  {
    Aws::Utils::Array<JsonView> workflowStepsSummaryJsonList = jsonValue.GetArray("workflowStepsSummary");
    for(unsigned workflowStepsSummaryIndex = 0; workflowStepsSummaryIndex < workflowStepsSummaryJsonList.GetLength(); ++workflowStepsSummaryIndex)
    {
      m_workflowStepsSummary.push_back(workflowStepsSummaryJsonList[workflowStepsSummaryIndex].AsObject());
    }
  }



  return *this;
}
