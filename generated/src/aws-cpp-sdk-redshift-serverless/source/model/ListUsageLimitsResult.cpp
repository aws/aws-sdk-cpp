/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift-serverless/model/ListUsageLimitsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::RedshiftServerless::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListUsageLimitsResult::ListUsageLimitsResult()
{
}

ListUsageLimitsResult::ListUsageLimitsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListUsageLimitsResult& ListUsageLimitsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("nextToken"))
  {
    m_nextToken = jsonValue.GetString("nextToken");

  }

  if(jsonValue.ValueExists("usageLimits"))
  {
    Aws::Utils::Array<JsonView> usageLimitsJsonList = jsonValue.GetArray("usageLimits");
    for(unsigned usageLimitsIndex = 0; usageLimitsIndex < usageLimitsJsonList.GetLength(); ++usageLimitsIndex)
    {
      m_usageLimits.push_back(usageLimitsJsonList[usageLimitsIndex].AsObject());
    }
  }



  return *this;
}
