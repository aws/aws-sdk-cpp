/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sso-oidc/model/RegisterClientResult.h>
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

RegisterClientResult::RegisterClientResult(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  *this = result;
}

RegisterClientResult& RegisterClientResult::operator =(const Aws::AmazonWebServiceResult<JsonValue>& result)
{
  JsonView jsonValue = result.GetPayload().View();
  if(jsonValue.ValueExists("clientId"))
  {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientSecret"))
  {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientIdIssuedAt"))
  {
    m_clientIdIssuedAt = jsonValue.GetInt64("clientIdIssuedAt");
    m_clientIdIssuedAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("clientSecretExpiresAt"))
  {
    m_clientSecretExpiresAt = jsonValue.GetInt64("clientSecretExpiresAt");
    m_clientSecretExpiresAtHasBeenSet = true;
  }
  if(jsonValue.ValueExists("authorizationEndpoint"))
  {
    m_authorizationEndpoint = jsonValue.GetString("authorizationEndpoint");
    m_authorizationEndpointHasBeenSet = true;
  }
  if(jsonValue.ValueExists("tokenEndpoint"))
  {
    m_tokenEndpoint = jsonValue.GetString("tokenEndpoint");
    m_tokenEndpointHasBeenSet = true;
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
