/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/snowball/model/GetSnowballUsageResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Snowball::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

GetSnowballUsageResult::GetSnowballUsageResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

GetSnowballUsageResult& GetSnowballUsageResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("SnowballLimit"))
  {
    m_snowballLimit = jsonValue.GetInteger("SnowballLimit");
    m_snowballLimitHasBeenSet = true;
  }
  if(jsonValue.ValueExists("SnowballsInUse"))
  {
    m_snowballsInUse = jsonValue.GetInteger("SnowballsInUse");
    m_snowballsInUseHasBeenSet = true;
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
