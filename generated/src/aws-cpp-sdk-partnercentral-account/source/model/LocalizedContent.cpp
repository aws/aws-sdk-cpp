/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/partnercentral-account/model/LocalizedContent.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace PartnerCentralAccount {
namespace Model {

LocalizedContent::LocalizedContent(JsonView jsonValue) { *this = jsonValue; }

LocalizedContent& LocalizedContent::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("DisplayName")) {
    m_displayName = jsonValue.GetString("DisplayName");
    m_displayNameHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Description")) {
    m_description = jsonValue.GetString("Description");
    m_descriptionHasBeenSet = true;
  }
  if (jsonValue.ValueExists("WebsiteUrl")) {
    m_websiteUrl = jsonValue.GetString("WebsiteUrl");
    m_websiteUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("LogoUrl")) {
    m_logoUrl = jsonValue.GetString("LogoUrl");
    m_logoUrlHasBeenSet = true;
  }
  if (jsonValue.ValueExists("Locale")) {
    m_locale = jsonValue.GetString("Locale");
    m_localeHasBeenSet = true;
  }
  return *this;
}

JsonValue LocalizedContent::Jsonize() const {
  JsonValue payload;

  if (m_displayNameHasBeenSet) {
    payload.WithString("DisplayName", m_displayName);
  }

  if (m_descriptionHasBeenSet) {
    payload.WithString("Description", m_description);
  }

  if (m_websiteUrlHasBeenSet) {
    payload.WithString("WebsiteUrl", m_websiteUrl);
  }

  if (m_logoUrlHasBeenSet) {
    payload.WithString("LogoUrl", m_logoUrl);
  }

  if (m_localeHasBeenSet) {
    payload.WithString("Locale", m_locale);
  }

  return payload;
}

}  // namespace Model
}  // namespace PartnerCentralAccount
}  // namespace Aws
