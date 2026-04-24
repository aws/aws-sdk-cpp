/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/ColorTheme.h>
#include <aws/workspaces-web/model/IconImageInput.h>
#include <aws/workspaces-web/model/Locale.h>
#include <aws/workspaces-web/model/LocalizedBrandingStrings.h>
#include <aws/workspaces-web/model/WallpaperImageInput.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace WorkSpacesWeb {
namespace Model {

/**
 * <p>The input configuration for creating branding settings.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/BrandingConfigurationCreateInput">AWS
 * API Reference</a></p>
 */
class BrandingConfigurationCreateInput {
 public:
  AWS_WORKSPACESWEB_API BrandingConfigurationCreateInput() = default;
  AWS_WORKSPACESWEB_API BrandingConfigurationCreateInput(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API BrandingConfigurationCreateInput& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The logo image for the portal. Provide either a binary image file or an S3
   * URI pointing to the image file. Maximum 100 KB in JPEG, PNG, or ICO format.</p>
   */
  inline const IconImageInput& GetLogo() const { return m_logo; }
  inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
  template <typename LogoT = IconImageInput>
  void SetLogo(LogoT&& value) {
    m_logoHasBeenSet = true;
    m_logo = std::forward<LogoT>(value);
  }
  template <typename LogoT = IconImageInput>
  BrandingConfigurationCreateInput& WithLogo(LogoT&& value) {
    SetLogo(std::forward<LogoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The wallpaper image for the portal. Provide either a binary image file or an
   * S3 URI pointing to the image file. Maximum 5 MB in JPEG or PNG format. If not
   * provided, a default wallpaper will be used as the background image.</p>
   */
  inline const WallpaperImageInput& GetWallpaper() const { return m_wallpaper; }
  inline bool WallpaperHasBeenSet() const { return m_wallpaperHasBeenSet; }
  template <typename WallpaperT = WallpaperImageInput>
  void SetWallpaper(WallpaperT&& value) {
    m_wallpaperHasBeenSet = true;
    m_wallpaper = std::forward<WallpaperT>(value);
  }
  template <typename WallpaperT = WallpaperImageInput>
  BrandingConfigurationCreateInput& WithWallpaper(WallpaperT&& value) {
    SetWallpaper(std::forward<WallpaperT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The favicon image for the portal. Provide either a binary image file or an S3
   * URI pointing to the image file. Maximum 100 KB in JPEG, PNG, or ICO format.</p>
   */
  inline const IconImageInput& GetFavicon() const { return m_favicon; }
  inline bool FaviconHasBeenSet() const { return m_faviconHasBeenSet; }
  template <typename FaviconT = IconImageInput>
  void SetFavicon(FaviconT&& value) {
    m_faviconHasBeenSet = true;
    m_favicon = std::forward<FaviconT>(value);
  }
  template <typename FaviconT = IconImageInput>
  BrandingConfigurationCreateInput& WithFavicon(FaviconT&& value) {
    SetFavicon(std::forward<FaviconT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of localized text strings for different supported languages. Each
   * locale must provide the required fields <code>browserTabTitle</code> and
   * <code>welcomeText</code>.</p>
   */
  inline const Aws::Map<Locale, LocalizedBrandingStrings>& GetLocalizedStrings() const { return m_localizedStrings; }
  inline bool LocalizedStringsHasBeenSet() const { return m_localizedStringsHasBeenSet; }
  template <typename LocalizedStringsT = Aws::Map<Locale, LocalizedBrandingStrings>>
  void SetLocalizedStrings(LocalizedStringsT&& value) {
    m_localizedStringsHasBeenSet = true;
    m_localizedStrings = std::forward<LocalizedStringsT>(value);
  }
  template <typename LocalizedStringsT = Aws::Map<Locale, LocalizedBrandingStrings>>
  BrandingConfigurationCreateInput& WithLocalizedStrings(LocalizedStringsT&& value) {
    SetLocalizedStrings(std::forward<LocalizedStringsT>(value));
    return *this;
  }
  inline BrandingConfigurationCreateInput& AddLocalizedStrings(Locale key, LocalizedBrandingStrings value) {
    m_localizedStringsHasBeenSet = true;
    m_localizedStrings.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The color theme for components on the web portal. Choose <code>Light</code>
   * if you upload a dark wallpaper, or <code>Dark</code> for a light wallpaper.</p>
   */
  inline ColorTheme GetColorTheme() const { return m_colorTheme; }
  inline bool ColorThemeHasBeenSet() const { return m_colorThemeHasBeenSet; }
  inline void SetColorTheme(ColorTheme value) {
    m_colorThemeHasBeenSet = true;
    m_colorTheme = value;
  }
  inline BrandingConfigurationCreateInput& WithColorTheme(ColorTheme value) {
    SetColorTheme(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The terms of service text in Markdown format. Users will be presented with
   * the terms of service after successfully signing in.</p>
   */
  inline const Aws::String& GetTermsOfService() const { return m_termsOfService; }
  inline bool TermsOfServiceHasBeenSet() const { return m_termsOfServiceHasBeenSet; }
  template <typename TermsOfServiceT = Aws::String>
  void SetTermsOfService(TermsOfServiceT&& value) {
    m_termsOfServiceHasBeenSet = true;
    m_termsOfService = std::forward<TermsOfServiceT>(value);
  }
  template <typename TermsOfServiceT = Aws::String>
  BrandingConfigurationCreateInput& WithTermsOfService(TermsOfServiceT&& value) {
    SetTermsOfService(std::forward<TermsOfServiceT>(value));
    return *this;
  }
  ///@}
 private:
  IconImageInput m_logo;

  WallpaperImageInput m_wallpaper;

  IconImageInput m_favicon;

  Aws::Map<Locale, LocalizedBrandingStrings> m_localizedStrings;

  ColorTheme m_colorTheme{ColorTheme::NOT_SET};

  Aws::String m_termsOfService;
  bool m_logoHasBeenSet = false;
  bool m_wallpaperHasBeenSet = false;
  bool m_faviconHasBeenSet = false;
  bool m_localizedStringsHasBeenSet = false;
  bool m_colorThemeHasBeenSet = false;
  bool m_termsOfServiceHasBeenSet = false;
};

}  // namespace Model
}  // namespace WorkSpacesWeb
}  // namespace Aws
