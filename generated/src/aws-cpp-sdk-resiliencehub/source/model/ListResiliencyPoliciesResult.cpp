﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/resiliencehub/model/ListResiliencyPoliciesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::ResilienceHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListResiliencyPoliciesResult::ListResiliencyPoliciesResult()
{
}

ListResiliencyPoliciesResult::ListResiliencyPoliciesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListResiliencyPoliciesResult& ListResiliencyPoliciesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("resiliencyPolicies"))
  {
    Aws::Utils::Array<JsonView> resiliencyPoliciesJsonList = jsonValue.GetArray("resiliencyPolicies");
    for(unsigned resiliencyPoliciesIndex = 0; resiliencyPoliciesIndex < resiliencyPoliciesJsonList.GetLength(); ++resiliencyPoliciesIndex)
    {
      m_resiliencyPolicies.push_back(resiliencyPoliciesJsonList[resiliencyPoliciesIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
