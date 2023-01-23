/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/panorama/model/DescribePackageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Panorama::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribePackageResult::DescribePackageResult()
{
}

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

  }

  if(jsonValue.ValueExists("CreatedTime"))
  {
    m_createdTime = jsonValue.GetDouble("CreatedTime");

  }

  if(jsonValue.ValueExists("PackageId"))
  {
    m_packageId = jsonValue.GetString("PackageId");

  }

  if(jsonValue.ValueExists("PackageName"))
  {
    m_packageName = jsonValue.GetString("PackageName");

  }

  if(jsonValue.ValueExists("ReadAccessPrincipalArns"))
  {
    Aws::Utils::Array<JsonView> readAccessPrincipalArnsJsonList = jsonValue.GetArray("ReadAccessPrincipalArns");
    for(unsigned readAccessPrincipalArnsIndex = 0; readAccessPrincipalArnsIndex < readAccessPrincipalArnsJsonList.GetLength(); ++readAccessPrincipalArnsIndex)
    {
      m_readAccessPrincipalArns.push_back(readAccessPrincipalArnsJsonList[readAccessPrincipalArnsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("StorageLocation"))
  {
    m_storageLocation = jsonValue.GetObject("StorageLocation");

  }

  if(jsonValue.ValueExists("Tags"))
  {
    Aws::Map<Aws::String, JsonView> tagsJsonMap = jsonValue.GetObject("Tags").GetAllObjects();
    for(auto& tagsItem : tagsJsonMap)
    {
      m_tags[tagsItem.first] = tagsItem.second.AsString();
    }
  }

  if(jsonValue.ValueExists("WriteAccessPrincipalArns"))
  {
    Aws::Utils::Array<JsonView> writeAccessPrincipalArnsJsonList = jsonValue.GetArray("WriteAccessPrincipalArns");
    for(unsigned writeAccessPrincipalArnsIndex = 0; writeAccessPrincipalArnsIndex < writeAccessPrincipalArnsJsonList.GetLength(); ++writeAccessPrincipalArnsIndex)
    {
      m_writeAccessPrincipalArns.push_back(writeAccessPrincipalArnsJsonList[writeAccessPrincipalArnsIndex].AsString());
    }
  }



  return *this;
}
