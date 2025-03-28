﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/DescribeSMBFileSharesResult.h>
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

DescribeSMBFileSharesResult::DescribeSMBFileSharesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeSMBFileSharesResult& DescribeSMBFileSharesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SMBFileShareInfoList"))
  {
    Aws::Utils::Array<JsonView> sMBFileShareInfoListJsonList = jsonValue.GetArray("SMBFileShareInfoList");
    for(unsigned sMBFileShareInfoListIndex = 0; sMBFileShareInfoListIndex < sMBFileShareInfoListJsonList.GetLength(); ++sMBFileShareInfoListIndex)
    {
      m_sMBFileShareInfoList.push_back(sMBFileShareInfoListJsonList[sMBFileShareInfoListIndex].AsObject());
    }
    m_sMBFileShareInfoListHasBeenSet = true;
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
