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
    AWS_QBUSINESS_API CustomizationConfiguration();
    AWS_QBUSINESS_API CustomizationConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API CustomizationConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Provides the URL where the custom CSS file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetCustomCSSUrl() const{ return m_customCSSUrl; }
    inline bool CustomCSSUrlHasBeenSet() const { return m_customCSSUrlHasBeenSet; }
    inline void SetCustomCSSUrl(const Aws::String& value) { m_customCSSUrlHasBeenSet = true; m_customCSSUrl = value; }
    inline void SetCustomCSSUrl(Aws::String&& value) { m_customCSSUrlHasBeenSet = true; m_customCSSUrl = std::move(value); }
    inline void SetCustomCSSUrl(const char* value) { m_customCSSUrlHasBeenSet = true; m_customCSSUrl.assign(value); }
    inline CustomizationConfiguration& WithCustomCSSUrl(const Aws::String& value) { SetCustomCSSUrl(value); return *this;}
    inline CustomizationConfiguration& WithCustomCSSUrl(Aws::String&& value) { SetCustomCSSUrl(std::move(value)); return *this;}
    inline CustomizationConfiguration& WithCustomCSSUrl(const char* value) { SetCustomCSSUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the URL where the custom logo file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetLogoUrl() const{ return m_logoUrl; }
    inline bool LogoUrlHasBeenSet() const { return m_logoUrlHasBeenSet; }
    inline void SetLogoUrl(const Aws::String& value) { m_logoUrlHasBeenSet = true; m_logoUrl = value; }
    inline void SetLogoUrl(Aws::String&& value) { m_logoUrlHasBeenSet = true; m_logoUrl = std::move(value); }
    inline void SetLogoUrl(const char* value) { m_logoUrlHasBeenSet = true; m_logoUrl.assign(value); }
    inline CustomizationConfiguration& WithLogoUrl(const Aws::String& value) { SetLogoUrl(value); return *this;}
    inline CustomizationConfiguration& WithLogoUrl(Aws::String&& value) { SetLogoUrl(std::move(value)); return *this;}
    inline CustomizationConfiguration& WithLogoUrl(const char* value) { SetLogoUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the URL where the custom font file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetFontUrl() const{ return m_fontUrl; }
    inline bool FontUrlHasBeenSet() const { return m_fontUrlHasBeenSet; }
    inline void SetFontUrl(const Aws::String& value) { m_fontUrlHasBeenSet = true; m_fontUrl = value; }
    inline void SetFontUrl(Aws::String&& value) { m_fontUrlHasBeenSet = true; m_fontUrl = std::move(value); }
    inline void SetFontUrl(const char* value) { m_fontUrlHasBeenSet = true; m_fontUrl.assign(value); }
    inline CustomizationConfiguration& WithFontUrl(const Aws::String& value) { SetFontUrl(value); return *this;}
    inline CustomizationConfiguration& WithFontUrl(Aws::String&& value) { SetFontUrl(std::move(value)); return *this;}
    inline CustomizationConfiguration& WithFontUrl(const char* value) { SetFontUrl(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Provides the URL where the custom favicon file is hosted for an Amazon Q web
     * experience.</p>
     */
    inline const Aws::String& GetFaviconUrl() const{ return m_faviconUrl; }
    inline bool FaviconUrlHasBeenSet() const { return m_faviconUrlHasBeenSet; }
    inline void SetFaviconUrl(const Aws::String& value) { m_faviconUrlHasBeenSet = true; m_faviconUrl = value; }
    inline void SetFaviconUrl(Aws::String&& value) { m_faviconUrlHasBeenSet = true; m_faviconUrl = std::move(value); }
    inline void SetFaviconUrl(const char* value) { m_faviconUrlHasBeenSet = true; m_faviconUrl.assign(value); }
    inline CustomizationConfiguration& WithFaviconUrl(const Aws::String& value) { SetFaviconUrl(value); return *this;}
    inline CustomizationConfiguration& WithFaviconUrl(Aws::String&& value) { SetFaviconUrl(std::move(value)); return *this;}
    inline CustomizationConfiguration& WithFaviconUrl(const char* value) { SetFaviconUrl(value); return *this;}
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
