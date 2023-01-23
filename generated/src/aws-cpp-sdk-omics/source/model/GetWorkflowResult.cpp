/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowResult::GetWorkflowResult() : 
    m_engine(WorkflowEngine::NOT_SET),
    m_status(WorkflowStatus::NOT_SET),
    m_storageCapacity(0),
    m_type(WorkflowType::NOT_SET)
{
}

GetWorkflowResult::GetWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_engine(WorkflowEngine::NOT_SET),
    m_status(WorkflowStatus::NOT_SET),
    m_storageCapacity(0),
    m_type(WorkflowType::NOT_SET)
{
  *this = result;
}

GetWorkflowResult& GetWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("digest"))
  {
    m_digest = jsonValue.GetString("digest");

  }

  if(jsonValue.ValueExists("engine"))
  {
    m_engine = WorkflowEngineMapper::GetWorkflowEngineForName(jsonValue.GetString("engine"));

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("main"))
  {
    m_main = jsonValue.GetString("main");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("parameterTemplate"))
  {
    Aws::Map<Aws::String, JsonView> parameterTemplateJsonMap = jsonValue.GetObject("parameterTemplate").GetAllObjects();
    for(auto& parameterTemplateItem : parameterTemplateJsonMap)
    {
      m_parameterTemplate[parameterTemplateItem.first] = parameterTemplateItem.second.AsObject();
    }
  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("storageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("storageCapacity");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("type"));

  }



  return *this;
}
