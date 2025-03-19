/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/ColorSpacePassthroughSettings.h>
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
   * H264 Color Space Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/H264ColorSpaceSettings">AWS
   * API Reference</a></p>
   */
  class H264ColorSpaceSettings
  {
  public:
    AWS_MEDIALIVE_API H264ColorSpaceSettings() = default;
    AWS_MEDIALIVE_API H264ColorSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API H264ColorSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const ColorSpacePassthroughSettings& GetColorSpacePassthroughSettings() const { return m_colorSpacePassthroughSettings; }
    inline bool ColorSpacePassthroughSettingsHasBeenSet() const { return m_colorSpacePassthroughSettingsHasBeenSet; }
    template<typename ColorSpacePassthroughSettingsT = ColorSpacePassthroughSettings>
    void SetColorSpacePassthroughSettings(ColorSpacePassthroughSettingsT&& value) { m_colorSpacePassthroughSettingsHasBeenSet = true; m_colorSpacePassthroughSettings = std::forward<ColorSpacePassthroughSettingsT>(value); }
    template<typename ColorSpacePassthroughSettingsT = ColorSpacePassthroughSettings>
    H264ColorSpaceSettings& WithColorSpacePassthroughSettings(ColorSpacePassthroughSettingsT&& value) { SetColorSpacePassthroughSettings(std::forward<ColorSpacePassthroughSettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Rec601Settings& GetRec601Settings() const { return m_rec601Settings; }
    inline bool Rec601SettingsHasBeenSet() const { return m_rec601SettingsHasBeenSet; }
    template<typename Rec601SettingsT = Rec601Settings>
    void SetRec601Settings(Rec601SettingsT&& value) { m_rec601SettingsHasBeenSet = true; m_rec601Settings = std::forward<Rec601SettingsT>(value); }
    template<typename Rec601SettingsT = Rec601Settings>
    H264ColorSpaceSettings& WithRec601Settings(Rec601SettingsT&& value) { SetRec601Settings(std::forward<Rec601SettingsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Rec709Settings& GetRec709Settings() const { return m_rec709Settings; }
    inline bool Rec709SettingsHasBeenSet() const { return m_rec709SettingsHasBeenSet; }
    template<typename Rec709SettingsT = Rec709Settings>
    void SetRec709Settings(Rec709SettingsT&& value) { m_rec709SettingsHasBeenSet = true; m_rec709Settings = std::forward<Rec709SettingsT>(value); }
    template<typename Rec709SettingsT = Rec709Settings>
    H264ColorSpaceSettings& WithRec709Settings(Rec709SettingsT&& value) { SetRec709Settings(std::forward<Rec709SettingsT>(value)); return *this;}
    ///@}
  private:

    ColorSpacePassthroughSettings m_colorSpacePassthroughSettings;
    bool m_colorSpacePassthroughSettingsHasBeenSet = false;

    Rec601Settings m_rec601Settings;
    bool m_rec601SettingsHasBeenSet = false;

    Rec709Settings m_rec709Settings;
    bool m_rec709SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
