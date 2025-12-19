/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/http/URI.h>
#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/wickr/model/GetOidcInfoRequest.h>

#include <utility>

using namespace Aws::Wickr::Model;
using namespace Aws::Utils::Json;
using namespace Aws::Utils;
using namespace Aws::Http;

Aws::String GetOidcInfoRequest::SerializePayload() const { return {}; }

void GetOidcInfoRequest::AddQueryStringParameters(URI& uri) const {
  Aws::StringStream ss;
  if (m_clientIdHasBeenSet) {
    ss << m_clientId;
    uri.AddQueryStringParameter("clientId", ss.str());
    ss.str("");
  }

  if (m_codeHasBeenSet) {
    ss << m_code;
    uri.AddQueryStringParameter("code", ss.str());
    ss.str("");
  }

  if (m_grantTypeHasBeenSet) {
    ss << m_grantType;
    uri.AddQueryStringParameter("grantType", ss.str());
    ss.str("");
  }

  if (m_redirectUriHasBeenSet) {
    ss << m_redirectUri;
    uri.AddQueryStringParameter("redirectUri", ss.str());
    ss.str("");
  }

  if (m_urlHasBeenSet) {
    ss << m_url;
    uri.AddQueryStringParameter("url", ss.str());
    ss.str("");
  }

  if (m_clientSecretHasBeenSet) {
    ss << m_clientSecret;
    uri.AddQueryStringParameter("clientSecret", ss.str());
    ss.str("");
  }

  if (m_codeVerifierHasBeenSet) {
    ss << m_codeVerifier;
    uri.AddQueryStringParameter("codeVerifier", ss.str());
    ss.str("");
  }

  if (m_certificateHasBeenSet) {
    ss << m_certificate;
    uri.AddQueryStringParameter("certificate", ss.str());
    ss.str("");
  }
}
