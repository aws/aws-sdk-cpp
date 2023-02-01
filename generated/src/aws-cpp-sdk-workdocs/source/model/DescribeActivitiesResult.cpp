/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workdocs/model/DescribeActivitiesResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkDocs::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeActivitiesResult::DescribeActivitiesResult()
{
}

DescribeActivitiesResult::DescribeActivitiesResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeActivitiesResult& DescribeActivitiesResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("UserActivities"))
  {
    Aws::Utils::Array<JsonView> userActivitiesJsonList = jsonValue.GetArray("UserActivities");
    for(unsigned userActivitiesIndex = 0; userActivitiesIndex < userActivitiesJsonList.GetLength(); ++userActivitiesIndex)
    {
      m_userActivities.push_back(userActivitiesJsonList[userActivitiesIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("Marker"))
  {
    m_marker = jsonValue.GetString("Marker");

  }



  return *this;
}
