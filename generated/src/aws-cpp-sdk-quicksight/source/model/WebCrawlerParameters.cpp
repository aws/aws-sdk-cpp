/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/quicksight/model/WebCrawlerParameters.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace QuickSight {
namespace Model {

WebCrawlerParameters::WebCrawlerParameters(JsonView jsonValue) { *this = jsonValue; }

WebCrawlerParameters& WebCrawlerParameters::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("WebCrawlerAuthType")) {
    m_webCrawlerAuthType = WebCrawlerAuthTypeMapper::GetWebCrawlerAuthTypeForName(jsonValue.GetString("WebCrawlerAuthType"));
    m_webCrawlerAuthTypeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsernameFieldXpath")) {
    m_usernameFieldXpath = jsonValue.GetString("UsernameFieldXpath");
    m_usernameFieldXpathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PasswordFieldXpath")) {
    m_passwordFieldXpath = jsonValue.GetString("PasswordFieldXpath");
    m_passwordFieldXpathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("UsernameButtonXpath")) {
    m_usernameButtonXpath = jsonValue.GetString("UsernameButtonXpath");
    m_usernameButtonXpathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("PasswordButtonXpath")) {
    m_passwordButtonXpath = jsonValue.GetString("PasswordButtonXpath");
    m_passwordButtonXpathHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LoginPageUrl")) {
    m_loginPageUrl = jsonValue.GetString("LoginPageUrl");
    m_loginPageUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebProxyHostName")) {
    m_webProxyHostName = jsonValue.GetString("WebProxyHostName");
    m_webProxyHostNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebProxyPortNumber")) {
    m_webProxyPortNumber = jsonValue.GetInteger("WebProxyPortNumber");
    m_webProxyPortNumberHasBeenSet = true;
  }
  return *this;
}

JsonValue WebCrawlerParameters::Jsonize() const {
  JsonValue payload;

  if (m_webCrawlerAuthTypeHasBeenSet) {
    payload.WithString("WebCrawlerAuthType", WebCrawlerAuthTypeMapper::GetNameForWebCrawlerAuthType(m_webCrawlerAuthType));
  }

  if (m_usernameFieldXpathHasBeenSet) {
    payload.WithString("UsernameFieldXpath", m_usernameFieldXpath);
  }

  if (m_passwordFieldXpathHasBeenSet) {
    payload.WithString("PasswordFieldXpath", m_passwordFieldXpath);
  }

  if (m_usernameButtonXpathHasBeenSet) {
    payload.WithString("UsernameButtonXpath", m_usernameButtonXpath);
  }

  if (m_passwordButtonXpathHasBeenSet) {
    payload.WithString("PasswordButtonXpath", m_passwordButtonXpath);
  }

  if (m_loginPageUrlHasBeenSet) {
    payload.WithString("LoginPageUrl", m_loginPageUrl);
  }

  if (m_webProxyHostNameHasBeenSet) {
    payload.WithString("WebProxyHostName", m_webProxyHostName);
  }

  if (m_webProxyPortNumberHasBeenSet) {
    payload.WithInteger("WebProxyPortNumber", m_webProxyPortNumber);
  }

  return payload;
}

}  // namespace Model
}  // namespace QuickSight
}  // namespace Aws
