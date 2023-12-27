/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-admin/model/ListTrustedTokenIssuersResult.h>
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

ListTrustedTokenIssuersResult::ListTrustedTokenIssuersResult()
{
}

ListTrustedTokenIssuersResult::ListTrustedTokenIssuersResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

ListTrustedTokenIssuersResult& ListTrustedTokenIssuersResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("NextToken"))
  {
    m_nextToken = jsonValue.GetString("NextToken");

  }

  if(jsonValue.ValueExists("TrustedTokenIssuers"))
  {
    Aws::Utils::Array<JsonView> trustedTokenIssuersJsonList = jsonValue.GetArray("TrustedTokenIssuers");
    for(unsigned trustedTokenIssuersIndex = 0; trustedTokenIssuersIndex < trustedTokenIssuersJsonList.GetLength(); ++trustedTokenIssuersIndex)
    {
      m_trustedTokenIssuers.push_back(trustedTokenIssuersJsonList[trustedTokenIssuersIndex].AsObject());
    }
  }


  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
  }


  return *this;
}
