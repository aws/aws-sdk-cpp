/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workspaces-web/WorkSpacesWeb_EXPORTS.h>
#include <aws/workspaces-web/model/ColorTheme.h>
#include <aws/workspaces-web/model/ImageMetadata.h>
#include <aws/workspaces-web/model/Locale.h>
#include <aws/workspaces-web/model/LocalizedBrandingStrings.h>

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
 * <p>The branding configuration output including custom images metadata, localized
 * strings, color theme, and terms of service.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/workspaces-web-2020-07-08/BrandingConfiguration">AWS
 * API Reference</a></p>
 */
class BrandingConfiguration {
 public:
  AWS_WORKSPACESWEB_API BrandingConfiguration() = default;
  AWS_WORKSPACESWEB_API BrandingConfiguration(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API BrandingConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_WORKSPACESWEB_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>Metadata for the logo image file, including the MIME type, file extension,
   * and upload timestamp.</p>
   */
  inline const ImageMetadata& GetLogo() const { return m_logo; }
  inline bool LogoHasBeenSet() const { return m_logoHasBeenSet; }
  template <typename LogoT = ImageMetadata>
  void SetLogo(LogoT&& value) {
    m_logoHasBeenSet = true;
    m_logo = std::forward<LogoT>(value);
  }
  template <typename LogoT = ImageMetadata>
  BrandingConfiguration& WithLogo(LogoT&& value) {
    SetLogo(std::forward<LogoT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for the wallpaper image file, including the MIME type, file
   * extension, and upload timestamp.</p>
   */
  inline const ImageMetadata& GetWallpaper() const { return m_wallpaper; }
  inline bool WallpaperHasBeenSet() const { return m_wallpaperHasBeenSet; }
  template <typename WallpaperT = ImageMetadata>
  void SetWallpaper(WallpaperT&& value) {
    m_wallpaperHasBeenSet = true;
    m_wallpaper = std::forward<WallpaperT>(value);
  }
  template <typename WallpaperT = ImageMetadata>
  BrandingConfiguration& WithWallpaper(WallpaperT&& value) {
    SetWallpaper(std::forward<WallpaperT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Metadata for the favicon image file, including the MIME type, file extension,
   * and upload timestamp.</p>
   */
  inline const ImageMetadata& GetFavicon() const { return m_favicon; }
  inline bool FaviconHasBeenSet() const { return m_faviconHasBeenSet; }
  template <typename FaviconT = ImageMetadata>
  void SetFavicon(FaviconT&& value) {
    m_faviconHasBeenSet = true;
    m_favicon = std::forward<FaviconT>(value);
  }
  template <typename FaviconT = ImageMetadata>
  BrandingConfiguration& WithFavicon(FaviconT&& value) {
    SetFavicon(std::forward<FaviconT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A map of localized text strings for different languages, allowing the portal
   * to display content in the user's preferred language.</p>
   */
  inline const Aws::Map<Locale, LocalizedBrandingStrings>& GetLocalizedStrings() const { return m_localizedStrings; }
  inline bool LocalizedStringsHasBeenSet() const { return m_localizedStringsHasBeenSet; }
  template <typename LocalizedStringsT = Aws::Map<Locale, LocalizedBrandingStrings>>
  void SetLocalizedStrings(LocalizedStringsT&& value) {
    m_localizedStringsHasBeenSet = true;
    m_localizedStrings = std::forward<LocalizedStringsT>(value);
  }
  template <typename LocalizedStringsT = Aws::Map<Locale, LocalizedBrandingStrings>>
  BrandingConfiguration& WithLocalizedStrings(LocalizedStringsT&& value) {
    SetLocalizedStrings(std::forward<LocalizedStringsT>(value));
    return *this;
  }
  inline BrandingConfiguration& AddLocalizedStrings(Locale key, LocalizedBrandingStrings value) {
    m_localizedStringsHasBeenSet = true;
    m_localizedStrings.emplace(key, value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The color theme for components on the web portal.</p>
   */
  inline ColorTheme GetColorTheme() const { return m_colorTheme; }
  inline bool ColorThemeHasBeenSet() const { return m_colorThemeHasBeenSet; }
  inline void SetColorTheme(ColorTheme value) {
    m_colorThemeHasBeenSet = true;
    m_colorTheme = value;
  }
  inline BrandingConfiguration& WithColorTheme(ColorTheme value) {
    SetColorTheme(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The terms of service text in Markdown format that users must accept before
   * accessing the portal.</p>
   */
  inline const Aws::String& GetTermsOfService() const { return m_termsOfService; }
  inline bool TermsOfServiceHasBeenSet() const { return m_termsOfServiceHasBeenSet; }
  template <typename TermsOfServiceT = Aws::String>
  void SetTermsOfService(TermsOfServiceT&& value) {
    m_termsOfServiceHasBeenSet = true;
    m_termsOfService = std::forward<TermsOfServiceT>(value);
  }
  template <typename TermsOfServiceT = Aws::String>
  BrandingConfiguration& WithTermsOfService(TermsOfServiceT&& value) {
    SetTermsOfService(std::forward<TermsOfServiceT>(value));
    return *this;
  }
  ///@}
 private:
  ImageMetadata m_logo;

  ImageMetadata m_wallpaper;

  ImageMetadata m_favicon;

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
