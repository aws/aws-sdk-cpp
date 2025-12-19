/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/RegisterOidcConfigResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterOidcConfigResult::RegisterOidcConfigResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

RegisterOidcConfigResult& RegisterOidcConfigResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("applicationName")) {
    m_applicationName = jsonValue.GetString("applicationName");
    m_applicationNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientId")) {
    m_clientId = jsonValue.GetString("clientId");
    m_clientIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("companyId")) {
    m_companyId = jsonValue.GetString("companyId");
    m_companyIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopes")) {
    m_scopes = jsonValue.GetString("scopes");
    m_scopesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuer")) {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("clientSecret")) {
    m_clientSecret = jsonValue.GetString("clientSecret");
    m_clientSecretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("secret")) {
    m_secret = jsonValue.GetString("secret");
    m_secretHasBeenSet = true;
  }
  if (jsonValue.ValueExists("redirectUrl")) {
    m_redirectUrl = jsonValue.GetString("redirectUrl");
    m_redirectUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userId")) {
    m_userId = jsonValue.GetString("userId");
    m_userIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("customUsername")) {
    m_customUsername = jsonValue.GetString("customUsername");
    m_customUsernameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("caCertificate")) {
    m_caCertificate = jsonValue.GetString("caCertificate");
    m_caCertificateHasBeenSet = true;
  }
  if (jsonValue.ValueExists("applicationId")) {
    m_applicationId = jsonValue.GetInteger("applicationId");
    m_applicationIdHasBeenSet = true;
  }
  if (jsonValue.ValueExists("ssoTokenBufferMinutes")) {
    m_ssoTokenBufferMinutes = jsonValue.GetInteger("ssoTokenBufferMinutes");
    m_ssoTokenBufferMinutesHasBeenSet = true;
  }
  if (jsonValue.ValueExists("extraAuthParams")) {
    m_extraAuthParams = jsonValue.GetString("extraAuthParams");
    m_extraAuthParamsHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
