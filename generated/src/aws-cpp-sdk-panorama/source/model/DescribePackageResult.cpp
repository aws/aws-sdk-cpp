/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribePackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePackageResult::DescribePackageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribePackageResult& DescribePackageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Arn"))
  {
    m_arn = jsonValue.GetString("Arn");
    m_arnHasBeenSet = true;
  }
  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");
    m_createdTimeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageId"))
  {
    m_packageId = jsonValue.GetString("PackageId");
    m_packageIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");
    m_packageNameHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ReadAccessPrincipalArns"))
  {
    Aws::Utils::Array<JsonView> readAccessPrincipalArnsJsonList = jsonValue.GetArray("ReadAccessPrincipalArns");
    for(unsigned readAccessPrincipalArnsIndex = 0; readAccessPrincipalArnsIndex < readAccessPrincipalArnsJsonList.GetLength(); ++readAccessPrincipalArnsIndex)
    {
      m_readAccessPrincipalArns.push_back(readAccessPrincipalArnsJsonList[readAccessPrincipalArnsIndex].AsString());
    }
    m_readAccessPrincipalArnsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("StorageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("StorageLocation");
    m_storageLocationHasBeenSet = true;
  }
  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
    m_tagsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("WriteAccessPrincipalArns"))
  {
    Aws::Utils::Array<JsonView> writeAccessPrincipalArnsJsonList = jsonValue.GetArray("WriteAccessPrincipalArns");
    for(unsigned writeAccessPrincipalArnsIndex = 0; writeAccessPrincipalArnsIndex < writeAccessPrincipalArnsJsonList.GetLength(); ++writeAccessPrincipalArnsIndex)
    {
      m_writeAccessPrincipalArns.push_back(writeAccessPrincipalArnsJsonList[writeAccessPrincipalArnsIndex].AsString());
    }
    m_writeAccessPrincipalArnsHasBeenSet = true;
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
