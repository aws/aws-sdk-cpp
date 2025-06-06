﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/waf/model/ListSizeConstraintSetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAF::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListSizeConstraintSetsResult::ListSizeConstraintSetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListSizeConstraintSetsResult& ListSizeConstraintSetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextMarker"))
  {
    m_nextMarker = jsonValue.GetString("NextMarker");
    m_nextMarkerHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SizeConstraintSets"))
  {
    Aws::Utils::Array<JsonView> sizeConstraintSetsJsonList = jsonValue.GetArray("SizeConstraintSets");
    for(unsigned sizeConstraintSetsIndex = 0; sizeConstraintSetsIndex < sizeConstraintSetsJsonList.GetLength(); ++sizeConstraintSetsIndex)
    {
      m_sizeConstraintSets.push_back(sizeConstraintSetsJsonList[sizeConstraintSetsIndex].AsObject());
    }
    m_sizeConstraintSetsHasBeenSet = true;
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
