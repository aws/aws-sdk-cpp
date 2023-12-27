/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/omics/model/CreateAnnotationStoreVersionResult.h>
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

CreateAnnotationStoreVersionResult::CreateAnnotationStoreVersionResult() : 
    m_status(VersionStatus::NOT_SET)
{
}

CreateAnnotationStoreVersionResult::CreateAnnotationStoreVersionResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_status(VersionStatus::NOT_SET)
{
  *this = result;
}

CreateAnnotationStoreVersionResult& CreateAnnotationStoreVersionResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("id"))
  {
    m_id = jsonValue.GetString("id");

  }

  if(jsonValue.ValueExists("versionName"))
  {
    m_versionName = jsonValue.GetString("versionName");

  }

  if(jsonValue.ValueExists("storeId"))
  {
    m_storeId = jsonValue.GetString("storeId");

  }

  if(jsonValue.ValueExists("versionOptions"))
  {
    m_versionOptions = jsonValue.GetObject("versionOptions");

  }

  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("status"))
  {
    m_status = VersionStatusMapper::GetVersionStatusForName(jsonValue.GetString("status"));

  }

  if(jsonValue.ValueExists("creationTime"))
  {
    m_creationTime = jsonValue.GetString("creationTime");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
