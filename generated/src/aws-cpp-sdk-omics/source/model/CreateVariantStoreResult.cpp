/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateVariantStoreResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateVariantStoreResult::CreateVariantStoreResult() : 
    m_status(StoreStatus::NOT_SET)
{
}

CreateVariantStoreResult::CreateVariantStoreResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(StoreStatus::NOT_SET)
{
  *this = result;
}

CreateVariantStoreResult& CreateVariantStoreResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

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



  return *this;
}
