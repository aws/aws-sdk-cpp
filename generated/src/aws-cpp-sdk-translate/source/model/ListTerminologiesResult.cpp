﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/translate/model/ListTerminologiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Translate::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListTerminologiesResult::ListTerminologiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTerminologiesResult& ListTerminologiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("TerminologyPropertiesList"))
  {
    Aws::Utils::Array<JsonView> terminologyPropertiesListJsonList = jsonValue.GetArray("TerminologyPropertiesList");
    for(unsigned terminologyPropertiesListIndex = 0; terminologyPropertiesListIndex < terminologyPropertiesListJsonList.GetLength(); ++terminologyPropertiesListIndex)
    {
      m_terminologyPropertiesList.push_back(terminologyPropertiesListJsonList[terminologyPropertiesListIndex].AsObject());
    }
    m_terminologyPropertiesListHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
