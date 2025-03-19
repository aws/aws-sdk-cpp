/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/GetTableMetadataLocationResult.h>
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

GetTableMetadataLocationResult::GetTableMetadataLocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetTableMetadataLocationResult& GetTableMetadataLocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("versionToken"))
  {
    m_versionToken = jsonValue.GetString("versionToken");
    m_versionTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("metadataLocation"))
  {
    m_metadataLocation = jsonValue.GetString("metadataLocation");
    m_metadataLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("warehouseLocation"))
  {
    m_warehouseLocation = jsonValue.GetString("warehouseLocation");
    m_warehouseLocationHasBeenSet = true;
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
