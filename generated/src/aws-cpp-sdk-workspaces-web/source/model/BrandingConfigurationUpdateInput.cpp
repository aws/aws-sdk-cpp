/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/json/JsonSerializer.h>
#include <aws/workspaces-web/model/BrandingConfigurationUpdateInput.h>

#include <utility>

using namespace Aws::Utils::Json;
using namespace Aws::Utils;

namespace Aws {
namespace WorkSpacesWeb {
namespace Model {

BrandingConfigurationUpdateInput::BrandingConfigurationUpdateInput(JsonView jsonValue) { *this = jsonValue; }

BrandingConfigurationUpdateInput& BrandingConfigurationUpdateInput::operator=(JsonView jsonValue) {
  if (jsonValue.ValueExists("logo")) {
    m_logo = jsonValue.GetObject("logo");
    m_logoHasBeenSet = true;
  }
  if (jsonValue.ValueExists("wallpaper")) {
    m_wallpaper = jsonValue.GetObject("wallpaper");
    m_wallpaperHasBeenSet = true;
  }
  if (jsonValue.ValueExists("favicon")) {
    m_favicon = jsonValue.GetObject("favicon");
    m_faviconHasBeenSet = true;
  }
  if (jsonValue.ValueExists("localizedStrings")) {
    Aws::Map<Aws::String, JsonView> localizedStringsJsonMap = jsonValue.GetObject("localizedStrings").GetAllObjects();
    for (auto& localizedStringsItem : localizedStringsJsonMap) {
      m_localizedStrings[LocaleMapper::GetLocaleForName(localizedStringsItem.first)] = localizedStringsItem.second.AsObject();
    }
    m_localizedStringsHasBeenSet = true;
  }
  if (jsonValue.ValueExists("colorTheme")) {
    m_colorTheme = ColorThemeMapper::GetColorThemeForName(jsonValue.GetString("colorTheme"));
    m_colorThemeHasBeenSet = true;
  }
  if (jsonValue.ValueExists("termsOfService")) {
    m_termsOfService = jsonValue.GetString("termsOfService");
    m_termsOfServiceHasBeenSet = true;
  }
  return *this;
}

JsonValue BrandingConfigurationUpdateInput::Jsonize() const {
  JsonValue payload;

  if (m_logoHasBeenSet) {
    payload.WithObject("logo", m_logo.Jsonize());
  }

  if (m_wallpaperHasBeenSet) {
    payload.WithObject("wallpaper", m_wallpaper.Jsonize());
  }

  if (m_faviconHasBeenSet) {
    payload.WithObject("favicon", m_favicon.Jsonize());
  }

  if (m_localizedStringsHasBeenSet) {
    JsonValue localizedStringsJsonMap;
    for (auto& localizedStringsItem : m_localizedStrings) {
      localizedStringsJsonMap.WithObject(LocaleMapper::GetNameForLocale(localizedStringsItem.first), localizedStringsItem.second.Jsonize());
    }
    payload.WithObject("localizedStrings", std::move(localizedStringsJsonMap));
  }

  if (m_colorThemeHasBeenSet) {
    payload.WithString("colorTheme", ColorThemeMapper::GetNameForColorTheme(m_colorTheme));
  }

  if (m_termsOfServiceHasBeenSet) {
    payload.WithString("termsOfService", m_termsOfService);
  }

  return payload;
}

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
