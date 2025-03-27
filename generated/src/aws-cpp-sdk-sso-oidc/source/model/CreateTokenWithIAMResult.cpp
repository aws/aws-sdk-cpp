/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/CreateTokenWithIAMResult.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::SSOOIDC::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

CreateTokenWithIAMResult::CreateTokenWithIAMResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

CreateTokenWithIAMResult& CreateTokenWithIAMResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("accessToken"))
  {
    m_accessToken = jsonValue.GetString("accessToken");
    m_accessTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenType"))
  {
    m_tokenType = jsonValue.GetString("tokenType");
    m_tokenTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("expiresIn"))
  {
    m_expiresIn = jsonValue.GetInteger("expiresIn");
    m_expiresInHasBeenSet = true;
  }
  if(jsonValue.ValueExists("refreshToken"))
  {
    m_refreshToken = jsonValue.GetString("refreshToken");
    m_refreshTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("idToken"))
  {
    m_idToken = jsonValue.GetString("idToken");
    m_idTokenHasBeenSet = true;
  }
  if(jsonValue.ValueExists("issuedTokenType"))
  {
    m_issuedTokenType = jsonValue.GetString("issuedTokenType");
    m_issuedTokenTypeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("scope"))
  {
    Aws::Utils::Array<JsonView> scopeJsonList = jsonValue.GetArray("scope");
    for(unsigned scopeIndex = 0; scopeIndex < scopeJsonList.GetLength(); ++scopeIndex)
    {
      m_scope.push_back(scopeJsonList[scopeIndex].AsString());
    }
    m_scopeHasBeenSet = true;
  }
  if(jsonValue.ValueExists("awsAdditionalDetails"))
  {
    m_awsAdditionalDetails = jsonValue.GetObject("awsAdditionalDetails");
    m_awsAdditionalDetailsHasBeenSet = true;
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
