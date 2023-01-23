/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/RetryWorkflowStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RetryWorkflowStepResult::RetryWorkflowStepResult() : 
    m_status(StepStatus::NOT_SET)
{
}

RetryWorkflowStepResult::RetryWorkflowStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(StepStatus::NOT_SET)
{
  *this = result;
}

RetryWorkflowStepResult& RetryWorkflowStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("stepGroupId"))
  {
    m_stepGroupId = jsonValue.GetString("stepGroupId");

  }

  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StepStatusMapper::GetStepStatusForName(jsonValue.GetString("status"));

  }



  return *this;
}
