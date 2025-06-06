﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/pricing/model/GetAttributeValuesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Pricing::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetAttributeValuesResult::GetAttributeValuesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetAttributeValuesResult& GetAttributeValuesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AttributeValues"))
  {
    Aws::Utils::Array<JsonView> attributeValuesJsonList = jsonValue.GetArray("AttributeValues");
    for(unsigned attributeValuesIndex = 0; attributeValuesIndex < attributeValuesJsonList.GetLength(); ++attributeValuesIndex)
    {
      m_attributeValues.push_back(attributeValuesJsonList[attributeValuesIndex].AsObject());
    }
    m_attributeValuesHasBeenSet = true;
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
