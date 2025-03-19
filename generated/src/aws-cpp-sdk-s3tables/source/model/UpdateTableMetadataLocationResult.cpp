/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3tables/model/UpdateTableMetadataLocationResult.h>
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

UpdateTableMetadataLocationResult::UpdateTableMetadataLocationResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

UpdateTableMetadataLocationResult& UpdateTableMetadataLocationResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("name"))
  {
    m_name = jsonValue.GetString("name");
    m_nameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tableARN"))
  {
    m_tableARN = jsonValue.GetString("tableARN");
    m_tableARNHasBeenSet = true;
  }
  if(jsonValue.ValueExists("namespace"))
  {
    Aws::Utils::Array<JsonView> namespaceJsonList = jsonValue.GetArray("namespace");
    for(unsigned namespaceIndex = 0; namespaceIndex < namespaceJsonList.GetLength(); ++namespaceIndex)
    {
      m_namespace.push_back(namespaceJsonList[namespaceIndex].AsString());
    }
    m_namespaceHasBeenSet = true;
  }
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

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }


  return *this;
}
