/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ColorSpacePassthroughSettings.h>
#include <aws/medialive/model/Hdr10Settings.h>
#include <aws/medialive/model/Rec601Settings.h>
#include <aws/medialive/model/Rec709Settings.h>
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
   * Av1 Color Space Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/Av1ColorSpaceSettings">AWS
   * API Reference</a></p>
   */
  class Av1ColorSpaceSettings
  {
  public:
    AWS_MEDIALIVE_API Av1ColorSpaceSettings() = default;
    AWS_MEDIALIVE_API Av1ColorSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Av1ColorSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColorSpacePassthroughSettings& GetColorSpacePassthroughSettings() const { return m_colorSpacePassthroughSettings; }
    inline bool ColorSpacePassthroughSettingsHasBeenSet() const { return m_colorSpacePassthroughSettingsHasBeenSet; }
    template<typename ColorSpacePassthroughSettingsT = ColorSpacePassthroughSettings>
    void SetColorSpacePassthroughSettings(ColorSpacePassthroughSettingsT&& value) { m_colorSpacePassthroughSettingsHasBeenSet = true; m_colorSpacePassthroughSettings = std::forward<ColorSpacePassthroughSettingsT>(value); }
    template<typename ColorSpacePassthroughSettingsT = ColorSpacePassthroughSettings>
    Av1ColorSpaceSettings& WithColorSpacePassthroughSettings(ColorSpacePassthroughSettingsT&& value) { SetColorSpacePassthroughSettings(std::forward<ColorSpacePassthroughSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Hdr10Settings& GetHdr10Settings() const { return m_hdr10Settings; }
    inline bool Hdr10SettingsHasBeenSet() const { return m_hdr10SettingsHasBeenSet; }
    template<typename Hdr10SettingsT = Hdr10Settings>
    void SetHdr10Settings(Hdr10SettingsT&& value) { m_hdr10SettingsHasBeenSet = true; m_hdr10Settings = std::forward<Hdr10SettingsT>(value); }
    template<typename Hdr10SettingsT = Hdr10Settings>
    Av1ColorSpaceSettings& WithHdr10Settings(Hdr10SettingsT&& value) { SetHdr10Settings(std::forward<Hdr10SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Rec601Settings& GetRec601Settings() const { return m_rec601Settings; }
    inline bool Rec601SettingsHasBeenSet() const { return m_rec601SettingsHasBeenSet; }
    template<typename Rec601SettingsT = Rec601Settings>
    void SetRec601Settings(Rec601SettingsT&& value) { m_rec601SettingsHasBeenSet = true; m_rec601Settings = std::forward<Rec601SettingsT>(value); }
    template<typename Rec601SettingsT = Rec601Settings>
    Av1ColorSpaceSettings& WithRec601Settings(Rec601SettingsT&& value) { SetRec601Settings(std::forward<Rec601SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Rec709Settings& GetRec709Settings() const { return m_rec709Settings; }
    inline bool Rec709SettingsHasBeenSet() const { return m_rec709SettingsHasBeenSet; }
    template<typename Rec709SettingsT = Rec709Settings>
    void SetRec709Settings(Rec709SettingsT&& value) { m_rec709SettingsHasBeenSet = true; m_rec709Settings = std::forward<Rec709SettingsT>(value); }
    template<typename Rec709SettingsT = Rec709Settings>
    Av1ColorSpaceSettings& WithRec709Settings(Rec709SettingsT&& value) { SetRec709Settings(std::forward<Rec709SettingsT>(value)); return *this;}
    ///@}
  private:

    ColorSpacePassthroughSettings m_colorSpacePassthroughSettings;
    bool m_colorSpacePassthroughSettingsHasBeenSet = false;

    Hdr10Settings m_hdr10Settings;
    bool m_hdr10SettingsHasBeenSet = false;

    Rec601Settings m_rec601Settings;
    bool m_rec601SettingsHasBeenSet = false;

    Rec709Settings m_rec709Settings;
    bool m_rec709SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
