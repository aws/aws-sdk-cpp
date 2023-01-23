/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetAnnotationStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAnnotationStoreResult::GetAnnotationStoreResult() : 
    m_status(StoreStatus::NOT_SET),
    m_storeFormat(StoreFormat::NOT_SET),
    m_storeSizeBytes(0)
{
}

GetAnnotationStoreResult::GetAnnotationStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(StoreStatus::NOT_SET),
    m_storeFormat(StoreFormat::NOT_SET),
    m_storeSizeBytes(0)
{
  *this = result;
}

GetAnnotationStoreResult& GetAnnotationStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("reference"))
  {
    m_reference = jsonValue.GetObject("reference");

  }

  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = StoreStatusMapper::GetStoreStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");

  }

  if(jsonValue.ValueExists("storeArn"))
  {
    m_storeArn = jsonValue.GetString("storeArn");

  }

  if(jsonValue.ValueExists("storeFormat"))
  {
    m_storeFormat = StoreFormatMapper::GetStoreFormatForName(jsonValue.GetString("storeFormat"));

  }

  if(jsonValue.ValueExists("storeOptions"))
  {
    m_storeOptions = jsonValue.GetObject("storeOptions");

  }

  if(jsonValue.ValueExists("storeSizeBytes"))
  {
    m_storeSizeBytes = jsonValue.GetInt64("storeSizeBytes");

  }

  if(jsonValue.ValueExists("tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }



  return *this;
}
