/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/GetReferenceMetadataResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Omics::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetReferenceMetadataResult::GetReferenceMetadataResult() : 
    m_status(ReferenceStatus::NOT_SET)
{
}

GetReferenceMetadataResult::GetReferenceMetadataResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(ReferenceStatus::NOT_SET)
{
  *this = result;
}

GetReferenceMetadataResult& GetReferenceMetadataResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
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

  if(jsonValue.ValueExists("description"))
  {
    m_description = jsonValue.GetString("description");

  }

  if(jsonValue.ValueExists("files"))
  {
    m_files = jsonValue.GetObject("files");

  }

  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("md5"))
  {
    m_md5 = jsonValue.GetString("md5");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("referenceStoreId"))
  {
    m_referenceStoreId = jsonValue.GetString("referenceStoreId");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = ReferenceStatusMapper::GetReferenceStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("updateTime"))
  {
    m_updateTime = jsonValue.GetString("updateTime");

  }



  return *this;
}
