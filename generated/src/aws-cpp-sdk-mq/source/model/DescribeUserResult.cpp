/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/mq/model/DescribeUserResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::MQ::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeUserResult::DescribeUserResult() : 
    m_consoleAccess(false)
{
}

DescribeUserResult::DescribeUserResult(const Aws::AmazonWebServiceResult<JsonValue>& result) : 
    m_consoleAccess(false)
{
  *this = result;
}

DescribeUserResult& DescribeUserResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("brokerId"))
  {
    m_brokerId = jsonValue.GetString("brokerId");

  }

  if(jsonValue.ValueExists("consoleAccess"))
  {
    m_consoleAccess = jsonValue.GetBool("consoleAccess");

  }

  if(jsonValue.ValueExists("groups"))
  {
    Aws::Utils::Array<JsonView> groupsJsonList = jsonValue.GetArray("groups");
    for(unsigned groupsIndex = 0; groupsIndex < groupsJsonList.GetLength(); ++groupsIndex)
    {
      m_groups.push_back(groupsJsonList[groupsIndex].AsString());
    }
  }

  if(jsonValue.ValueExists("pending"))
  {
    m_pending = jsonValue.GetObject("pending");

  }

  if(jsonValue.ValueExists("username"))
  {
    m_username = jsonValue.GetString("username");

  }



  return *this;
}
