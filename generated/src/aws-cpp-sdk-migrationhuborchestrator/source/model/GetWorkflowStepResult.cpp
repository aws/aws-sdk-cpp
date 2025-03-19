/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetWorkflowStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowStepResult::GetWorkflowStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkflowStepResult& GetWorkflowStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepGroupId"))
  {
    m_stepGroupId = jsonValue.GetString("stepGroupId");
    m_stepGroupIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowId"))
  {
    m_workflowId = jsonValue.GetString("workflowId");
    m_workflowIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepId"))
  {
    m_stepId = jsonValue.GetString("stepId");
    m_stepIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepActionType"))
  {
    m_stepActionType = StepActionTypeMapper::GetStepActionTypeForName(jsonValue.GetString("stepActionType"));
    m_stepActionTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("owner"))
  {
    m_owner = OwnerMapper::GetOwnerForName(jsonValue.GetString("owner"));
    m_ownerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowStepAutomationConfiguration"))
  {
    m_workflowStepAutomationConfiguration = jsonValue.GetObject("workflowStepAutomationConfiguration");
    m_workflowStepAutomationConfigurationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepTarget"))
  {
    Aws::Utils::Array<JsonView> stepTargetJsonList = jsonValue.GetArray("stepTarget");
    for(unsigned stepTargetIndex = 0; stepTargetIndex < stepTargetJsonList.GetLength(); ++stepTargetIndex)
    {
      m_stepTarget.push_back(stepTargetJsonList[stepTargetIndex].AsString());
    }
    m_stepTargetHasBeenSet = true;
  }
  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
    m_outputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("previous"))
  {
    Aws::Utils::Array<JsonView> previousJsonList = jsonValue.GetArray("previous");
    for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
    {
      m_previous.push_back(previousJsonList[previousIndex].AsString());
    }
    m_previousHasBeenSet = true;
  }
  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsString());
    }
    m_nextHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StepStatusMapper::GetStepStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scriptOutputLocation"))
  {
    m_scriptOutputLocation = jsonValue.GetString("scriptOutputLocation");
    m_scriptOutputLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastStartTime"))
  {
    m_lastStartTime = jsonValue.GetDouble("lastStartTime");
    m_lastStartTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("endTime"))
  {
    m_endTime = jsonValue.GetDouble("endTime");
    m_endTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noOfSrvCompleted"))
  {
    m_noOfSrvCompleted = jsonValue.GetInteger("noOfSrvCompleted");
    m_noOfSrvCompletedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("noOfSrvFailed"))
  {
    m_noOfSrvFailed = jsonValue.GetInteger("noOfSrvFailed");
    m_noOfSrvFailedHasBeenSet = true;
  }
  if(jsonValue.ValueExists("totalNoOfSrv"))
  {
    m_totalNoOfSrv = jsonValue.GetInteger("totalNoOfSrv");
    m_totalNoOfSrvHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
