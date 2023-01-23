/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeFileSystemAssociationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeFileSystemAssociationsResult::DescribeFileSystemAssociationsResult()
{
}

DescribeFileSystemAssociationsResult::DescribeFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeFileSystemAssociationsResult& DescribeFileSystemAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("FileSystemAssociationInfoList"))
  {
    Aws::Utils::Array<JsonView> fileSystemAssociationInfoListJsonList = jsonValue.GetArray("FileSystemAssociationInfoList");
    for(unsigned fileSystemAssociationInfoListIndex = 0; fileSystemAssociationInfoListIndex < fileSystemAssociationInfoListJsonList.GetLength(); ++fileSystemAssociationInfoListIndex)
    {
      m_fileSystemAssociationInfoList.push_back(fileSystemAssociationInfoListJsonList[fileSystemAssociationInfoListIndex].AsObject());
    }
  }



  return *this;
}
