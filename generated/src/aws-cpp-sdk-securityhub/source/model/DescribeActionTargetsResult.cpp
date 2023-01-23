/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/securityhub/model/DescribeActionTargetsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SecurityHub::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeActionTargetsResult::DescribeActionTargetsResult()
{
}

DescribeActionTargetsResult::DescribeActionTargetsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeActionTargetsResult& DescribeActionTargetsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("ActionTargets"))
  {
    Aws::Utils::Array<JsonView> actionTargetsJsonList = jsonValue.GetArray("ActionTargets");
    for(unsigned actionTargetsIndex = 0; actionTargetsIndex < actionTargetsJsonList.GetLength(); ++actionTargetsIndex)
    {
      m_actionTargets.push_back(actionTargetsJsonList[actionTargetsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
