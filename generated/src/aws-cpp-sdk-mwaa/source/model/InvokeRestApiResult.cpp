﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mwaa/model/InvokeRestApiResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::MWAA::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

InvokeRestApiResult::InvokeRestApiResult() : 
    m_restApiStatusCode(0)
{
}

InvokeRestApiResult::InvokeRestApiResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
  : InvokeRestApiResult()
{
  *this = result;
}

InvokeRestApiResult& InvokeRestApiResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("RestApiStatusCode"))
  {
    m_restApiStatusCode = jsonValue.GetInteger("RestApiStatusCode");

  }

  if(jsonValue.ValueExists("RestApiResponse"))
  {
    m_restApiResponse = jsonValue.GetObject("RestApiResponse");

  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
