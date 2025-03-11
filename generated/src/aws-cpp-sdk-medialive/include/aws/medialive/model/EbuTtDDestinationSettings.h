/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/EbuTtDFillLineGapControl.h>
#include <aws/medialive/model/EbuTtDDestinationStyleControl.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Ebu Tt DDestination Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EbuTtDDestinationSettings">AWS
   * API Reference</a></p>
   */
  class EbuTtDDestinationSettings
  {
  public:
    AWS_MEDIALIVE_API EbuTtDDestinationSettings();
    AWS_MEDIALIVE_API EbuTtDDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EbuTtDDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Complete this field if you want to include the name of the copyright holder in
     * the copyright tag in the captions metadata.
     */
    inline const Aws::String& GetCopyrightHolder() const{ return m_copyrightHolder; }
    inline bool CopyrightHolderHasBeenSet() const { return m_copyrightHolderHasBeenSet; }
    inline void SetCopyrightHolder(const Aws::String& value) { m_copyrightHolderHasBeenSet = true; m_copyrightHolder = value; }
    inline void SetCopyrightHolder(Aws::String&& value) { m_copyrightHolderHasBeenSet = true; m_copyrightHolder = std::move(value); }
    inline void SetCopyrightHolder(const char* value) { m_copyrightHolderHasBeenSet = true; m_copyrightHolder.assign(value); }
    inline EbuTtDDestinationSettings& WithCopyrightHolder(const Aws::String& value) { SetCopyrightHolder(value); return *this;}
    inline EbuTtDDestinationSettings& WithCopyrightHolder(Aws::String&& value) { SetCopyrightHolder(std::move(value)); return *this;}
    inline EbuTtDDestinationSettings& WithCopyrightHolder(const char* value) { SetCopyrightHolder(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies how to handle the gap between the lines (in multi-line captions).
     * ENABLED: Fill with the captions background color (as specified in the input
     * captions). DISABLED: Leave the gap unfilled
     */
    inline const EbuTtDFillLineGapControl& GetFillLineGap() const{ return m_fillLineGap; }
    inline bool FillLineGapHasBeenSet() const { return m_fillLineGapHasBeenSet; }
    inline void SetFillLineGap(const EbuTtDFillLineGapControl& value) { m_fillLineGapHasBeenSet = true; m_fillLineGap = value; }
    inline void SetFillLineGap(EbuTtDFillLineGapControl&& value) { m_fillLineGapHasBeenSet = true; m_fillLineGap = std::move(value); }
    inline EbuTtDDestinationSettings& WithFillLineGap(const EbuTtDFillLineGapControl& value) { SetFillLineGap(value); return *this;}
    inline EbuTtDDestinationSettings& WithFillLineGap(EbuTtDFillLineGapControl&& value) { SetFillLineGap(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the font family to include in the font data attached to the EBU-TT
     * captions. Valid only if style_control is set to include. (If style_control is
     * set to exclude, the font family is always set to monospaced.) Enter a list of
     * font families, as a comma-separated list of font names, in order of preference.
     * The name can be a font family (such as Arial), or a generic font family (such as
     * serif), or default (to let the downstream player choose the font). Or leave
     * blank to set the family to monospace. Note that you can specify only the font
     * family. All other style information (color, bold, position and so on) is copied
     * from the input captions. The size is always set to 100% to allow the downstream
     * player to choose the size.
     */
    inline const Aws::String& GetFontFamily() const{ return m_fontFamily; }
    inline bool FontFamilyHasBeenSet() const { return m_fontFamilyHasBeenSet; }
    inline void SetFontFamily(const Aws::String& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = value; }
    inline void SetFontFamily(Aws::String&& value) { m_fontFamilyHasBeenSet = true; m_fontFamily = std::move(value); }
    inline void SetFontFamily(const char* value) { m_fontFamilyHasBeenSet = true; m_fontFamily.assign(value); }
    inline EbuTtDDestinationSettings& WithFontFamily(const Aws::String& value) { SetFontFamily(value); return *this;}
    inline EbuTtDDestinationSettings& WithFontFamily(Aws::String&& value) { SetFontFamily(std::move(value)); return *this;}
    inline EbuTtDDestinationSettings& WithFontFamily(const char* value) { SetFontFamily(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the style information to include in the font data that is attached to
     * the EBU-TT captions. INCLUDE: Take the style information from the source
     * captions and include that information in the font data attached to the EBU-TT
     * captions. This option is valid only if the source captions are Embedded or
     * Teletext. EXCLUDE: Set the font family to monospaced. Do not include any other
     * style information.
     */
    inline const EbuTtDDestinationStyleControl& GetStyleControl() const{ return m_styleControl; }
    inline bool StyleControlHasBeenSet() const { return m_styleControlHasBeenSet; }
    inline void SetStyleControl(const EbuTtDDestinationStyleControl& value) { m_styleControlHasBeenSet = true; m_styleControl = value; }
    inline void SetStyleControl(EbuTtDDestinationStyleControl&& value) { m_styleControlHasBeenSet = true; m_styleControl = std::move(value); }
    inline EbuTtDDestinationSettings& WithStyleControl(const EbuTtDDestinationStyleControl& value) { SetStyleControl(value); return *this;}
    inline EbuTtDDestinationSettings& WithStyleControl(EbuTtDDestinationStyleControl&& value) { SetStyleControl(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the default font size as a percentage of the computed cell size. Valid
     * only if the defaultLineHeight is also set. If you leave this field empty, the
     * default font size is 80% of the cell size.
     */
    inline int GetDefaultFontSize() const{ return m_defaultFontSize; }
    inline bool DefaultFontSizeHasBeenSet() const { return m_defaultFontSizeHasBeenSet; }
    inline void SetDefaultFontSize(int value) { m_defaultFontSizeHasBeenSet = true; m_defaultFontSize = value; }
    inline EbuTtDDestinationSettings& WithDefaultFontSize(int value) { SetDefaultFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Documentation update needed
     */
    inline int GetDefaultLineHeight() const{ return m_defaultLineHeight; }
    inline bool DefaultLineHeightHasBeenSet() const { return m_defaultLineHeightHasBeenSet; }
    inline void SetDefaultLineHeight(int value) { m_defaultLineHeightHasBeenSet = true; m_defaultLineHeight = value; }
    inline EbuTtDDestinationSettings& WithDefaultLineHeight(int value) { SetDefaultLineHeight(value); return *this;}
    ///@}
  private:

    Aws::String m_copyrightHolder;
    bool m_copyrightHolderHasBeenSet = false;

    EbuTtDFillLineGapControl m_fillLineGap;
    bool m_fillLineGapHasBeenSet = false;

    Aws::String m_fontFamily;
    bool m_fontFamilyHasBeenSet = false;

    EbuTtDDestinationStyleControl m_styleControl;
    bool m_styleControlHasBeenSet = false;

    int m_defaultFontSize;
    bool m_defaultFontSizeHasBeenSet = false;

    int m_defaultLineHeight;
    bool m_defaultLineHeightHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
