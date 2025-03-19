/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/medialive/model/M3u8Settings.h>
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
   * Standard Hls Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StandardHlsSettings">AWS
   * API Reference</a></p>
   */
  class StandardHlsSettings
  {
  public:
    AWS_MEDIALIVE_API StandardHlsSettings() = default;
    AWS_MEDIALIVE_API StandardHlsSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StandardHlsSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * List all the audio groups that are used with the video output stream. Input all
     * the audio GROUP-IDs that are associated to the video, separate by ','.
     */
    inline const Aws::String& GetAudioRenditionSets() const { return m_audioRenditionSets; }
    inline bool AudioRenditionSetsHasBeenSet() const { return m_audioRenditionSetsHasBeenSet; }
    template<typename AudioRenditionSetsT = Aws::String>
    void SetAudioRenditionSets(AudioRenditionSetsT&& value) { m_audioRenditionSetsHasBeenSet = true; m_audioRenditionSets = std::forward<AudioRenditionSetsT>(value); }
    template<typename AudioRenditionSetsT = Aws::String>
    StandardHlsSettings& WithAudioRenditionSets(AudioRenditionSetsT&& value) { SetAudioRenditionSets(std::forward<AudioRenditionSetsT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const M3u8Settings& GetM3u8Settings() const { return m_m3u8Settings; }
    inline bool M3u8SettingsHasBeenSet() const { return m_m3u8SettingsHasBeenSet; }
    template<typename M3u8SettingsT = M3u8Settings>
    void SetM3u8Settings(M3u8SettingsT&& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = std::forward<M3u8SettingsT>(value); }
    template<typename M3u8SettingsT = M3u8Settings>
    StandardHlsSettings& WithM3u8Settings(M3u8SettingsT&& value) { SetM3u8Settings(std::forward<M3u8SettingsT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_audioRenditionSets;
    bool m_audioRenditionSetsHasBeenSet = false;

    M3u8Settings m_m3u8Settings;
    bool m_m3u8SettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
