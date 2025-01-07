/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/GetTableResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::S3Tables::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetTableResult::GetTableResult() : 
    m_type(TableType::NOT_SET),
    m_format(OpenTableFormat::NOT_SET)
{
}

GetTableResult::GetTableResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : GetTableResult()
{
  *this = result;
}

GetTableResult& GetTableResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");

  }

  if(jsonValue.ValueExists("type"))
  {
    m_type = TableTypeMapper::GetTableTypeForName(jsonValue.GetString("type"));

  }

  if(jsonValue.ValueExists("tableARN"))
  {
    m_tableARN = jsonValue.GetString("tableARN");

  }

  if(jsonValue.ValueExists("namespace"))
  {
    Aws::Utils::Array<JsonView> namespaceJsonList = jsonValue.GetArray("namespace");
    for(unsigned namespaceIndex = 0; namespaceIndex < namespaceJsonList.GetLength(); ++namespaceIndex)
    {
      m_namespace.push_back(namespaceJsonList[namespaceIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("versionToken"))
  {
    m_versionToken = jsonValue.GetString("versionToken");

  }

  if(jsonValue.ValueExists("metadataLocation"))
  {
    m_metadataLocation = jsonValue.GetString("metadataLocation");

  }

  if(jsonValue.ValueExists("warehouseLocation"))
  {
    m_warehouseLocation = jsonValue.GetString("warehouseLocation");

  }

  if(jsonValue.ValueExists("createdAt"))
  {
    m_createdAt = jsonValue.GetString("createdAt");

  }

  if(jsonValue.ValueExists("createdBy"))
  {
    m_createdBy = jsonValue.GetString("createdBy");

  }

  if(jsonValue.ValueExists("managedByService"))
  {
    m_managedByService = jsonValue.GetString("managedByService");

  }

  if(jsonValue.ValueExists("modifiedAt"))
  {
    m_modifiedAt = jsonValue.GetString("modifiedAt");

  }

  if(jsonValue.ValueExists("modifiedBy"))
  {
    m_modifiedBy = jsonValue.GetString("modifiedBy");

  }

  if(jsonValue.ValueExists("ownerAccountId"))
  {
    m_ownerAccountId = jsonValue.GetString("ownerAccountId");

  }

  if(jsonValue.ValueExists("format"))
  {
    m_format = OpenTableFormatMapper::GetOpenTableFormatForName(jsonValue.GetString("format"));

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
