﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/wafv2/model/GetWebACLResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::WAFV2::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetWebACLResult::GetWebACLResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetWebACLResult& GetWebACLResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("WebACL"))
  {
    m_webACL = jsonValue.GetObject("WebACL");
    m_webACLHasBeenSet = true;
  }
  if(jsonValue.ValueExists("LockToken"))
  {
    m_lockToken = jsonValue.GetString("LockToken");
    m_lockTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("ApplicationIntegrationURL"))
  {
    m_applicationIntegrationURL = jsonValue.GetString("ApplicationIntegrationURL");
    m_applicationIntegrationURLHasBeenSet = true;
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
