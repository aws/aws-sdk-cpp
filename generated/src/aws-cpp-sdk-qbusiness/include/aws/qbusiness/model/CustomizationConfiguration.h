/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Contains the configuration information to customize the logo, font, and color
   * of an Amazon Q Business web experience with individual files for each property
   * or a CSS file for them all.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/CustomizationConfiguration">AWS
   * API Reference</a></p>
   */
  class CustomizationConfiguration
  {
  public:
    AWS_QBUSINESS_API CustomizationConfiguration() = default;
    AWS_QBUSINESS_API CustomizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API CustomizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the URL where the custom CSS file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetCustomCSSUrl() const { return m_customCSSUrl; }
    inline bool CustomCSSUrlHasBeenSet() const { return m_customCSSUrlHasBeenSet; }
    template<typename CustomCSSUrlT = Aws::String>
    void SetCustomCSSUrl(CustomCSSUrlT&& value) { m_customCSSUrlHasBeenSet = true; m_customCSSUrl = std::forward<CustomCSSUrlT>(value); }
    template<typename CustomCSSUrlT = Aws::String>
    CustomizationConfiguration& WithCustomCSSUrl(CustomCSSUrlT&& value) { SetCustomCSSUrl(std::forward<CustomCSSUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the URL where the custom logo file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetLogoUrl() const { return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    template<typename LogoUrlT = Aws::String>
    void SetLogoUrl(LogoUrlT&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::forward<LogoUrlT>(value); }
    template<typename LogoUrlT = Aws::String>
    CustomizationConfiguration& WithLogoUrl(LogoUrlT&& value) { SetLogoUrl(std::forward<LogoUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the URL where the custom font file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetFontUrl() const { return m_fontUrl; }
    inline bool FontUrlHasBeenSet() const { return m_fontUrlHasBeenSet; }
    template<typename FontUrlT = Aws::String>
    void SetFontUrl(FontUrlT&& value) { m_fontUrlHasBeenSet = true; m_fontUrl = std::forward<FontUrlT>(value); }
    template<typename FontUrlT = Aws::String>
    CustomizationConfiguration& WithFontUrl(FontUrlT&& value) { SetFontUrl(std::forward<FontUrlT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the URL where the custom favicon file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetFaviconUrl() const { return m_faviconUrl; }
    inline bool FaviconUrlHasBeenSet() const { return m_faviconUrlHasBeenSet; }
    template<typename FaviconUrlT = Aws::String>
    void SetFaviconUrl(FaviconUrlT&& value) { m_faviconUrlHasBeenSet = true; m_faviconUrl = std::forward<FaviconUrlT>(value); }
    template<typename FaviconUrlT = Aws::String>
    CustomizationConfiguration& WithFaviconUrl(FaviconUrlT&& value) { SetFaviconUrl(std::forward<FaviconUrlT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_customCSSUrl;
    bool m_customCSSUrlHasBeenSet = false;

    Aws::String m_logoUrl;
    bool m_logoUrlHasBeenSet = false;

    Aws::String m_fontUrl;
    bool m_fontUrlHasBeenSet = false;

    Aws::String m_faviconUrl;
    bool m_faviconUrlHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
