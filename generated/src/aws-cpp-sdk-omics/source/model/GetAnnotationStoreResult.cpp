/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetAnnotationStoreResult.h>
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

GetAnnotationStoreResult::GetAnnotationStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAnnotationStoreResult& GetAnnotationStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");
    m_idHasBeenSet = true;
  }
  if(jsonValue.ValueExists("reference"))
  {
    m_reference = jsonValue.GetObject("reference");
    m_referenceHasBeenSet = true;
  }
  if(jsonValue.ValueExists("status"))
  {
    m_status = StoreStatusMapper::GetStoreStatusForName(jsonValue.GetString("status"));
    m_statusHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storeArn"))
  {
    m_storeArn = jsonValue.GetString("storeArn");
    m_storeArnHasBeenSet = true;
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
  if(jsonValue.ValueExists("sseConfig"))
  {
    m_sseConfig = jsonValue.GetObject("sseConfig");
    m_sseConfigHasBeenSet = true;
  }
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");
    m_creationTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");
    m_updateTimeHasBeenSet = true;
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
  if(jsonValue.ValueExists("storeOptions"))
  {
    m_storeOptions = jsonValue.GetObject("storeOptions");
    m_storeOptionsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storeFormat"))
  {
    m_storeFormat = StoreFormatMapper::GetStoreFormatForName(jsonValue.GetString("storeFormat"));
    m_storeFormatHasBeenSet = true;
  }
  if(jsonValue.ValueExists("statusMessage"))
  {
    m_statusMessage = jsonValue.GetString("statusMessage");
    m_statusMessageHasBeenSet = true;
  }
  if(jsonValue.ValueExists("storeSizeBytes"))
  {
    m_storeSizeBytes = jsonValue.GetInt64("storeSizeBytes");
    m_storeSizeBytesHasBeenSet = true;
  }
  if(jsonValue.ValueExists("numVersions"))
  {
    m_numVersions = jsonValue.GetInteger("numVersions");
    m_numVersionsHasBeenSet = true;
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
