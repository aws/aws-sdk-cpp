/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/UpdateAnnotationStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

UpdateAnnotationStoreResult::UpdateAnnotationStoreResult() : 
    m_status(StoreStatus::NOT_SET),
    m_storeFormat(StoreFormat::NOT_SET)
{
}

UpdateAnnotationStoreResult::UpdateAnnotationStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(StoreStatus::NOT_SET),
    m_storeFormat(StoreFormat::NOT_SET)
{
  *this = result;
}

UpdateAnnotationStoreResult& UpdateAnnotationStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("status"))
  {
    m_status = StoreStatusMapper::GetStoreStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("storeFormat"))
  {
    m_storeFormat = StoreFormatMapper::GetStoreFormatForName(jsonValue.GetString("storeFormat"));

  }

  if(jsonValue.ValueExists("storeOptions"))
  {
    m_storeOptions = jsonValue.GetObject("storeOptions");

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }



  return *this;
}
