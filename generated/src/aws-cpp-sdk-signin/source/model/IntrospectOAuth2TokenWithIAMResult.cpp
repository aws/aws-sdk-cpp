/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/signin/model/IntrospectOAuth2TokenWithIAMResult.h>

#include <utility>

using namespace Aws::Signin::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

IntrospectOAuth2TokenWithIAMResult::IntrospectOAuth2TokenWithIAMResult(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  *this = result;
}

IntrospectOAuth2TokenWithIAMResult& IntrospectOAuth2TokenWithIAMResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  m_HttpResponseCode = result.GetResponseCode();
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("active")) {
    m_active = jsonValue.GetBool("active");
    m_activeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("client_id")) {
    m_clientId = jsonValue.GetString("client_id");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("user_id")) {
    m_userId = jsonValue.GetString("user_id");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("token_type")) {
    m_tokenType = jsonValue.GetString("token_type");
    m_tokenTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("exp")) {
    m_exp = jsonValue.GetInt64("exp");
    m_expHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iat")) {
    m_iat = jsonValue.GetInt64("iat");
    m_iatHasBeenSet = true;
  }
  if (jsonValue.ValueExists("nbf")) {
    m_nbf = jsonValue.GetInt64("nbf");
    m_nbfHasBeenSet = true;
  }
  if (jsonValue.ValueExists("sub")) {
    m_sub = jsonValue.GetString("sub");
    m_subHasBeenSet = true;
  }
  if (jsonValue.ValueExists("aud")) {
    m_aud = jsonValue.GetString("aud");
    m_audHasBeenSet = true;
  }
  if (jsonValue.ValueExists("iss")) {
    m_iss = jsonValue.GetString("iss");
    m_issHasBeenSet = true;
  }
  if (jsonValue.ValueExists("jti")) {
    m_jti = jsonValue.GetString("jti");
    m_jtiHasBeenSet = true;
  }
  if (jsonValue.ValueExists("account_id")) {
    m_accountId = jsonValue.GetString("account_id");
    m_accountIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("signin_session")) {
    m_signinSession = jsonValue.GetString("signin_session");
    m_signinSessionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("resource")) {
    m_resource = jsonValue.GetString("resource");
    m_resourceHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
