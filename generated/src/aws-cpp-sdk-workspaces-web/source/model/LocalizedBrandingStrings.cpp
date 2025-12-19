/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/LocalizedBrandingStrings.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

LocalizedBrandingStrings::LocalizedBrandingStrings(JsonView jsonValue) { *this = jsonValue; }

LocalizedBrandingStrings& LocalizedBrandingStrings::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("browserTabTitle")) {
    m_browserTabTitle = jsonValue.GetString("browserTabTitle");
    m_browserTabTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("welcomeText")) {
    m_welcomeText = jsonValue.GetString("welcomeText");
    m_welcomeTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loginTitle")) {
    m_loginTitle = jsonValue.GetString("loginTitle");
    m_loginTitleHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loginDescription")) {
    m_loginDescription = jsonValue.GetString("loginDescription");
    m_loginDescriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loginButtonText")) {
    m_loginButtonText = jsonValue.GetString("loginButtonText");
    m_loginButtonTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contactLink")) {
    m_contactLink = jsonValue.GetString("contactLink");
    m_contactLinkHasBeenSet = true;
  }
  if (jsonValue.ValueExists("contactButtonText")) {
    m_contactButtonText = jsonValue.GetString("contactButtonText");
    m_contactButtonTextHasBeenSet = true;
  }
  if (jsonValue.ValueExists("loadingText")) {
    m_loadingText = jsonValue.GetString("loadingText");
    m_loadingTextHasBeenSet = true;
  }
  return *this;
}

JsonValue LocalizedBrandingStrings::Jsonize() const {
  JsonValue payload;

  if (m_browserTabTitleHasBeenSet) {
    payload.WithString("browserTabTitle", m_browserTabTitle);
  }

  if (m_welcomeTextHasBeenSet) {
    payload.WithString("welcomeText", m_welcomeText);
  }

  if (m_loginTitleHasBeenSet) {
    payload.WithString("loginTitle", m_loginTitle);
  }

  if (m_loginDescriptionHasBeenSet) {
    payload.WithString("loginDescription", m_loginDescription);
  }

  if (m_loginButtonTextHasBeenSet) {
    payload.WithString("loginButtonText", m_loginButtonText);
  }

  if (m_contactLinkHasBeenSet) {
    payload.WithString("contactLink", m_contactLink);
  }

  if (m_contactButtonTextHasBeenSet) {
    payload.WithString("contactButtonText", m_contactButtonText);
  }

  if (m_loadingTextHasBeenSet) {
    payload.WithString("loadingText", m_loadingText);
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
