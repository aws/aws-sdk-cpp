/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/RegisterOidcConfigTestResult.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws;

RegisterOidcConfigTestResult::RegisterOidcConfigTestResult(const Aws::AmazonWebServiceResult<JsonValue>& result) { *this = result; }

RegisterOidcConfigTestResult& RegisterOidcConfigTestResult::operator=(const Aws::AmazonWebServiceResult<JsonValue>& result) {
  JsonView jsonValue = result.GetPayload().View();
  if (jsonValue.ValueExists("tokenEndpoint")) {
    m_tokenEndpoint = jsonValue.GetString("tokenEndpoint");
    m_tokenEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("userinfoEndpoint")) {
    m_userinfoEndpoint = jsonValue.GetString("userinfoEndpoint");
    m_userinfoEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("responseTypesSupported")) {
    Aws::Utils::Array<JsonView> responseTypesSupportedJsonList = jsonValue.GetArray("responseTypesSupported");
    for (unsigned responseTypesSupportedIndex = 0; responseTypesSupportedIndex < responseTypesSupportedJsonList.GetLength();
         ++responseTypesSupportedIndex) {
      m_responseTypesSupported.push_back(responseTypesSupportedJsonList[responseTypesSupportedIndex].AsString());
    }
    m_responseTypesSupportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("scopesSupported")) {
    Aws::Utils::Array<JsonView> scopesSupportedJsonList = jsonValue.GetArray("scopesSupported");
    for (unsigned scopesSupportedIndex = 0; scopesSupportedIndex < scopesSupportedJsonList.GetLength(); ++scopesSupportedIndex) {
      m_scopesSupported.push_back(scopesSupportedJsonList[scopesSupportedIndex].AsString());
    }
    m_scopesSupportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("issuer")) {
    m_issuer = jsonValue.GetString("issuer");
    m_issuerHasBeenSet = true;
  }
  if (jsonValue.ValueExists("authorizationEndpoint")) {
    m_authorizationEndpoint = jsonValue.GetString("authorizationEndpoint");
    m_authorizationEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("endSessionEndpoint")) {
    m_endSessionEndpoint = jsonValue.GetString("endSessionEndpoint");
    m_endSessionEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("logoutEndpoint")) {
    m_logoutEndpoint = jsonValue.GetString("logoutEndpoint");
    m_logoutEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("grantTypesSupported")) {
    Aws::Utils::Array<JsonView> grantTypesSupportedJsonList = jsonValue.GetArray("grantTypesSupported");
    for (unsigned grantTypesSupportedIndex = 0; grantTypesSupportedIndex < grantTypesSupportedJsonList.GetLength();
         ++grantTypesSupportedIndex) {
      m_grantTypesSupported.push_back(grantTypesSupportedJsonList[grantTypesSupportedIndex].AsString());
    }
    m_grantTypesSupportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("revocationEndpoint")) {
    m_revocationEndpoint = jsonValue.GetString("revocationEndpoint");
    m_revocationEndpointHasBeenSet = true;
  }
  if (jsonValue.ValueExists("tokenEndpointAuthMethodsSupported")) {
    Aws::Utils::Array<JsonView> tokenEndpointAuthMethodsSupportedJsonList = jsonValue.GetArray("tokenEndpointAuthMethodsSupported");
    for (unsigned tokenEndpointAuthMethodsSupportedIndex = 0;
         tokenEndpointAuthMethodsSupportedIndex < tokenEndpointAuthMethodsSupportedJsonList.GetLength();
         ++tokenEndpointAuthMethodsSupportedIndex) {
      m_tokenEndpointAuthMethodsSupported.push_back(
          tokenEndpointAuthMethodsSupportedJsonList[tokenEndpointAuthMethodsSupportedIndex].AsString());
    }
    m_tokenEndpointAuthMethodsSupportedHasBeenSet = true;
  }
  if (jsonValue.ValueExists("microsoftMultiRefreshToken")) {
    m_microsoftMultiRefreshToken = jsonValue.GetBool("microsoftMultiRefreshToken");
    m_microsoftMultiRefreshTokenHasBeenSet = true;
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if (requestIdIter != headers.end()) {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
