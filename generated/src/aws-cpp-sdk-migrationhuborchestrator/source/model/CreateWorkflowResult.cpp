/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/CreateWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MigrationHubOrchestrator::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateWorkflowResult::CreateWorkflowResult() : 
    m_status(MigrationWorkflowStatusEnum::NOT_SET)
{
}

CreateWorkflowResult::CreateWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(MigrationWorkflowStatusEnum::NOT_SET)
{
  *this = result;
}

CreateWorkflowResult& CreateWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");

  }

  if(jsonValue.ValueExists("adsApplicationConfigurationId"))
  {
    m_adsApplicationConfigurationId = jsonValue.GetString("adsApplicationConfigurationId");

  }

  if(jsonValue.ValueExists("workflowInputs"))
  {
    Aws::Map<Aws::String, JsonView> workflowInputsJsonMap = jsonValue.GetObject("workflowInputs").GetAllObjects();
    for(auto& workflowInputsItem : workflowInputsJsonMap)
    {
      m_workflowInputs[workflowInputsItem.first] = workflowInputsItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("stepTargets"))
  {
    Aws::Utils::Array<JsonView> stepTargetsJsonList = jsonValue.GetArray("stepTargets");
    for(unsigned stepTargetsIndex = 0; stepTargetsIndex < stepTargetsJsonList.GetLength(); ++stepTargetsIndex)
    {
      m_stepTargets.push_back(stepTargetsJsonList[stepTargetsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = MigrationWorkflowStatusEnumMapper::GetMigrationWorkflowStatusEnumForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }



  return *this;
}
