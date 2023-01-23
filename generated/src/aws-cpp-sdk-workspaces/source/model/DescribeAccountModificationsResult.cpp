/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/workspaces/model/DescribeAccountModificationsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::WorkSpaces::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

DescribeAccountModificationsResult::DescribeAccountModificationsResult()
{
}

DescribeAccountModificationsResult::DescribeAccountModificationsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

DescribeAccountModificationsResult& DescribeAccountModificationsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountModifications"))
  {
    Aws::Utils::Array<JsonView> accountModificationsJsonList = jsonValue.GetArray("AccountModifications");
    for(unsigned accountModificationsIndex = 0; accountModificationsIndex < accountModificationsJsonList.GetLength(); ++accountModificationsIndex)
    {
      m_accountModifications.push_back(accountModificationsJsonList[accountModificationsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
