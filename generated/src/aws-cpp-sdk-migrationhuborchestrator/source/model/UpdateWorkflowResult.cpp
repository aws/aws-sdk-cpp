/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/migrationhuborchestrator/model/UpdateWorkflowResult.h>
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

UpdateWorkflowResult::UpdateWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateWorkflowResult& UpdateWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");
    m_descriptionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("templateId"))
  {
    m_templateId = jsonValue.GetString("templateId");
    m_templateIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("adsApplicationConfigurationId"))
  {
    m_adsApplicationConfigurationId = jsonValue.GetString("adsApplicationConfigurationId");
    m_adsApplicationConfigurationIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("workflowInputs"))
  {
    Aws::Map<Aws::String, JsonView> workflowInputsJsonMap = jsonValue.GetObject("workflowInputs").GetAllObjects();
    for(auto& workflowInputsItem : workflowInputsJsonMap)
    {
      m_workflowInputs[workflowInputsItem.first] = workflowInputsItem.second.AsObject();
    }
    m_workflowInputsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("stepTargets"))
  {
    Aws::Utils::Array<JsonView> stepTargetsJsonList = jsonValue.GetArray("stepTargets");
    for(unsigned stepTargetsIndex = 0; stepTargetsIndex < stepTargetsJsonList.GetLength(); ++stepTargetsIndex)
    {
      m_stepTargets.push_back(stepTargetsJsonList[stepTargetsIndex].AsString());
    }
    m_stepTargetsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = MigrationWorkflowStatusEnumMapper::GetMigrationWorkflowStatusEnumForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetDouble("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("lastModifiedTime"))
  {
    m_lastModifiedTime = jsonValue.GetDouble("lastModifiedTime");
    m_lastModifiedTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
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
