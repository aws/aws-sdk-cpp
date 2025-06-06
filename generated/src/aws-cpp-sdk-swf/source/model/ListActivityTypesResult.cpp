﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/swf/model/ListActivityTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SWF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListActivityTypesResult::ListActivityTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListActivityTypesResult& ListActivityTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("typeInfos"))
  {
    Aws::Utils::Array<JsonView> typeInfosJsonList = jsonValue.GetArray("typeInfos");
    for(unsigned typeInfosIndex = 0; typeInfosIndex < typeInfosJsonList.GetLength(); ++typeInfosIndex)
    {
      m_typeInfos.push_back(typeInfosJsonList[typeInfosIndex].AsObject());
    }
    m_typeInfosHasBeenSet = true;
  }
  if(jsonValue.ValueExists("nextPageToken"))
  {
    m_nextPageToken = jsonValue.GetString("nextPageToken");
    m_nextPageTokenHasBeenSet = true;
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
