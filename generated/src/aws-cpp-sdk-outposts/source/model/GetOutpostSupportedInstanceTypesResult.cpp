﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/outposts/model/GetOutpostSupportedInstanceTypesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Outposts::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetOutpostSupportedInstanceTypesResult::GetOutpostSupportedInstanceTypesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetOutpostSupportedInstanceTypesResult& GetOutpostSupportedInstanceTypesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("InstanceTypes"))
  {
    Aws::Utils::Array<JsonView> instanceTypesJsonList = jsonValue.GetArray("InstanceTypes");
    for(unsigned instanceTypesIndex = 0; instanceTypesIndex < instanceTypesJsonList.GetLength(); ++instanceTypesIndex)
    {
      m_instanceTypes.push_back(instanceTypesJsonList[instanceTypesIndex].AsObject());
    }
    m_instanceTypesHasBeenSet = true;
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
