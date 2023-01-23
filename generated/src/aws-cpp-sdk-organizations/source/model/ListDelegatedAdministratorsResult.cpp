/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/organizations/model/ListDelegatedAdministratorsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>

#include <utility>

using namespace Aws::Organizations::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListDelegatedAdministratorsResult::ListDelegatedAdministratorsResult()
{
}

ListDelegatedAdministratorsResult::ListDelegatedAdministratorsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListDelegatedAdministratorsResult& ListDelegatedAdministratorsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("DelegatedAdministrators"))
  {
    Aws::Utils::Array<JsonView> delegatedAdministratorsJsonList = jsonValue.GetArray("DelegatedAdministrators");
    for(unsigned delegatedAdministratorsIndex = 0; delegatedAdministratorsIndex < delegatedAdministratorsJsonList.GetLength(); ++delegatedAdministratorsIndex)
    {
      m_delegatedAdministrators.push_back(delegatedAdministratorsJsonList[delegatedAdministratorsIndex].AsObject());
    }
  }

  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }



  return *this;
}
