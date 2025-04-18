﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeNFSFileSharesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::StorageGateway::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeNFSFileSharesResult::DescribeNFSFileSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeNFSFileSharesResult& DescribeNFSFileSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NFSFileShareInfoList"))
  {
    Aws::Utils::Array<JsonView> nFSFileShareInfoListJsonList = jsonValue.GetArray("NFSFileShareInfoList");
    for(unsigned nFSFileShareInfoListIndex = 0; nFSFileShareInfoListIndex < nFSFileShareInfoListJsonList.GetLength(); ++nFSFileShareInfoListIndex)
    {
      m_nFSFileShareInfoList.push_back(nFSFileShareInfoListJsonList[nFSFileShareInfoListIndex].AsObject());
    }
    m_nFSFileShareInfoListHasBeenSet = true;
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
