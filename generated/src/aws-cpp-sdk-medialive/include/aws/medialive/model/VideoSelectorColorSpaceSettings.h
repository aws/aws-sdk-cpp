/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/Hdr10Settings.h>
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
   * Video Selector Color Space Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/VideoSelectorColorSpaceSettings">AWS
   * API Reference</a></p>
   */
  class VideoSelectorColorSpaceSettings
  {
  public:
    AWS_MEDIALIVE_API VideoSelectorColorSpaceSettings() = default;
    AWS_MEDIALIVE_API VideoSelectorColorSpaceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API VideoSelectorColorSpaceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    
    inline const Hdr10Settings& GetHdr10Settings() const { return m_hdr10Settings; }
    inline bool Hdr10SettingsHasBeenSet() const { return m_hdr10SettingsHasBeenSet; }
    template<typename Hdr10SettingsT = Hdr10Settings>
    void SetHdr10Settings(Hdr10SettingsT&& value) { m_hdr10SettingsHasBeenSet = true; m_hdr10Settings = std::forward<Hdr10SettingsT>(value); }
    template<typename Hdr10SettingsT = Hdr10Settings>
    VideoSelectorColorSpaceSettings& WithHdr10Settings(Hdr10SettingsT&& value) { SetHdr10Settings(std::forward<Hdr10SettingsT>(value)); return *this;}
    ///@}
  private:

    Hdr10Settings m_hdr10Settings;
    bool m_hdr10SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
