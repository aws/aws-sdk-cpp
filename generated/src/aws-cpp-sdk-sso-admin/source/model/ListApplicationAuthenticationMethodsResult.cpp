/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListApplicationAuthenticationMethodsResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOAdmin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

ListApplicationAuthenticationMethodsResult::ListApplicationAuthenticationMethodsResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListApplicationAuthenticationMethodsResult& ListApplicationAuthenticationMethodsResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("AuthenticationMethods"))
  {
    Aws::Utils::Array<JsonView> authenticationMethodsJsonList = jsonValue.GetArray("AuthenticationMethods");
    for(unsigned authenticationMethodsIndex = 0; authenticationMethodsIndex < authenticationMethodsJsonList.GetLength(); ++authenticationMethodsIndex)
    {
      m_authenticationMethods.push_back(authenticationMethodsJsonList[authenticationMethodsIndex].AsObject());
    }
    m_authenticationMethodsHasBeenSet = true;
  }
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");
    m_nextTokenHasBeenSet = true;
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
