﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/storagegateway/model/ListFileSystemAssociationsResult.h>
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

ListFileSystemAssociationsResult::ListFileSystemAssociationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListFileSystemAssociationsResult& ListFileSystemAssociationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");
    m_markerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("FileSystemAssociationSummaryList"))
  {
    Aws::Utils::Array<JsonView> fileSystemAssociationSummaryListJsonList = jsonValue.GetArray("FileSystemAssociationSummaryList");
    for(unsigned fileSystemAssociationSummaryListIndex = 0; fileSystemAssociationSummaryListIndex < fileSystemAssociationSummaryListJsonList.GetLength(); ++fileSystemAssociationSummaryListIndex)
    {
      m_fileSystemAssociationSummaryList.push_back(fileSystemAssociationSummaryListJsonList[fileSystemAssociationSummaryListIndex].AsObject());
    }
    m_fileSystemAssociationSummaryListHasBeenSet = true;
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
