/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListAccountAssignmentsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListAccountAssignmentsResult::ListAccountAssignmentsResult()
{
}

ListAccountAssignmentsResult::ListAccountAssignmentsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListAccountAssignmentsResult& ListAccountAssignmentsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AccountAssignments"))
  {
    Aws::Utils::Array<JsonView> accountAssignmentsJsonList = jsonValue.GetArray("AccountAssignments");
    for(unsigned accountAssignmentsIndex = 0; accountAssignmentsIndex < accountAssignmentsJsonList.GetLength(); ++accountAssignmentsIndex)
    {
      m_accountAssignments.push_back(accountAssignmentsJsonList[accountAssignmentsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
