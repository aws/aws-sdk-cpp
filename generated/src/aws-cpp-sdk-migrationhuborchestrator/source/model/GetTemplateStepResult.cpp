/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/GetTemplateStepResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTemplateStepResult::GetTemplateStepResult() : 
    m_stepActionType(StepActionType::NOT_SET)
{
}

GetTemplateStepResult::GetTemplateStepResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_stepActionType(StepActionType::NOT_SET)
{
  *this = result;
}

GetTemplateStepResult& GetTemplateStepResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("stepGroupId"))
  {
    m_stepGroupId = jsonValue.GetString("stepGroupId");

  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("stepActionType"))
  {
    m_stepActionType = StepActionTypeMapper::GetStepActionTypeForName(jsonValue.GetString("stepActionType"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("previous"))
  {
    Aws::Utils::Array<JsonView> previousJsonList = jsonValue.GetArray("previous");
    for(unsigned previousIndex = 0; previousIndex < previousJsonList.GetLength(); ++previousIndex)
    {
      m_previous.push_back(previousJsonList[previousIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("next"))
  {
    Aws::Utils::Array<JsonView> nextJsonList = jsonValue.GetArray("next");
    for(unsigned nextIndex = 0; nextIndex < nextJsonList.GetLength(); ++nextIndex)
    {
      m_next.push_back(nextJsonList[nextIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("outputs"))
  {
    Aws::Utils::Array<JsonView> outputsJsonList = jsonValue.GetArray("outputs");
    for(unsigned outputsIndex = 0; outputsIndex < outputsJsonList.GetLength(); ++outputsIndex)
    {
      m_outputs.push_back(outputsJsonList[outputsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("stepAutomationConfiguration"))
  {
    m_stepAutomationConfiguration = jsonValue.GetObject("stepAutomationConfiguration");

  }



  return *this;
}
