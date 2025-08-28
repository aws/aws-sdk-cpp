/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetWorkflowResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWorkflowResult::GetWorkflowResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWorkflowResult& GetWorkflowResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("arn"))
  {
    m_arn = jsonValue.GetString("arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = WorkflowStatusMapper::GetWorkflowStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("type"))
  {
    m_type = WorkflowTypeMapper::GetWorkflowTypeForName(jsonValue.GetString("type"));
    m_typeHasBeenSet = true;
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
  if(jsonValue.ValueExists("engine"))
  {
    m_engine = WorkflowEngineMapper::GetWorkflowEngineForName(jsonValue.GetString("engine"));
    m_engineHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definition"))
  {
    m_definition = jsonValue.GetString("definition");
    m_definitionHasBeenSet = true;
  }
  if(jsonValue.ValueExists("main"))
  {
    m_main = jsonValue.GetString("main");
    m_mainHasBeenSet = true;
  }
  if(jsonValue.ValueExists("digest"))
  {
    m_digest = jsonValue.GetString("digest");
    m_digestHasBeenSet = true;
  }
  if(jsonValue.ValueExists("parameterTemplate"))
  {
    Aws::Map<Aws::String, JsonView> parameterTemplateJsonMap = jsonValue.GetObject("parameterTemplate").GetAllObjects();
    for(auto& parameterTemplateItem : parameterTemplateJsonMap)
    {
      m_parameterTemplate[parameterTemplateItem.first] = parameterTemplateItem.second.AsObject();
    }
    m_parameterTemplateHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageCapacity"))
  {
    m_storageCapacity = jsonValue.GetInteger("storageCapacity");
    m_storageCapacityHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
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
  if(jsonValue.ValueExists("metadata"))
  {
    Aws::Map<Aws::String, JsonView> metadataJsonMap = jsonValue.GetObject("metadata").GetAllObjects();
    for(auto& metadataItem : metadataJsonMap)
    {
      m_metadata[metadataItem.first] = metadataItem.second.AsString();
    }
    m_metadataHasBeenSet = true;
  }
  if(jsonValue.ValueExists("accelerators"))
  {
    m_accelerators = AcceleratorsMapper::GetAcceleratorsForName(jsonValue.GetString("accelerators"));
    m_acceleratorsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storageType"))
  {
    m_storageType = StorageTypeMapper::GetStorageTypeForName(jsonValue.GetString("storageType"));
    m_storageTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("uuid"))
  {
    m_uuid = jsonValue.GetString("uuid");
    m_uuidHasBeenSet = true;
  }
  if(jsonValue.ValueExists("containerRegistryMap"))
  {
    m_containerRegistryMap = jsonValue.GetObject("containerRegistryMap");
    m_containerRegistryMapHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readme"))
  {
    m_readme = jsonValue.GetString("readme");
    m_readmeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("definitionRepositoryDetails"))
  {
    m_definitionRepositoryDetails = jsonValue.GetObject("definitionRepositoryDetails");
    m_definitionRepositoryDetailsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("readmePath"))
  {
    m_readmePath = jsonValue.GetString("readmePath");
    m_readmePathHasBeenSet = true;
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
