/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediapackagev2/Mediapackagev2_EXPORTS.h>
#include <aws/mediapackagev2/model/PresetSpeke20Audio.h>
#include <aws/mediapackagev2/model/PresetSpeke20Video.h>
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
namespace mediapackagev2
{
namespace Model
{

  /**
   * <p>Configure one or more content encryption keys for your endpoints that use
   * SPEKE Version 2.0. The encryption contract defines which content keys are used
   * to encrypt the audio and video tracks in your stream. To configure the
   * encryption contract, specify which audio and video encryption presets to
   * use.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediapackagev2-2022-12-25/EncryptionContractConfiguration">AWS
   * API Reference</a></p>
   */
  class EncryptionContractConfiguration
  {
  public:
    AWS_MEDIAPACKAGEV2_API EncryptionContractConfiguration();
    AWS_MEDIAPACKAGEV2_API EncryptionContractConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API EncryptionContractConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIAPACKAGEV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A collection of audio encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-AUDIO-1 - Use one content key to encrypt all of the audio tracks
     * in your stream.</p> </li> <li> <p>PRESET-AUDIO-2 - Use one content key to
     * encrypt all of the stereo audio tracks and one content key to encrypt all of the
     * multichannel audio tracks.</p> </li> <li> <p>PRESET-AUDIO-3 - Use one content
     * key to encrypt all of the stereo audio tracks, one content key to encrypt all of
     * the multichannel audio tracks with 3 to 6 channels, and one content key to
     * encrypt all of the multichannel audio tracks with more than 6 channels.</p>
     * </li> <li> <p>SHARED - Use the same content key for all of the audio and video
     * tracks in your stream.</p> </li> <li> <p>UNENCRYPTED - Don't encrypt any of the
     * audio tracks in your stream.</p> </li> </ul>
     */
    inline const PresetSpeke20Audio& GetPresetSpeke20Audio() const{ return m_presetSpeke20Audio; }

    /**
     * <p>A collection of audio encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-AUDIO-1 - Use one content key to encrypt all of the audio tracks
     * in your stream.</p> </li> <li> <p>PRESET-AUDIO-2 - Use one content key to
     * encrypt all of the stereo audio tracks and one content key to encrypt all of the
     * multichannel audio tracks.</p> </li> <li> <p>PRESET-AUDIO-3 - Use one content
     * key to encrypt all of the stereo audio tracks, one content key to encrypt all of
     * the multichannel audio tracks with 3 to 6 channels, and one content key to
     * encrypt all of the multichannel audio tracks with more than 6 channels.</p>
     * </li> <li> <p>SHARED - Use the same content key for all of the audio and video
     * tracks in your stream.</p> </li> <li> <p>UNENCRYPTED - Don't encrypt any of the
     * audio tracks in your stream.</p> </li> </ul>
     */
    inline bool PresetSpeke20AudioHasBeenSet() const { return m_presetSpeke20AudioHasBeenSet; }

    /**
     * <p>A collection of audio encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-AUDIO-1 - Use one content key to encrypt all of the audio tracks
     * in your stream.</p> </li> <li> <p>PRESET-AUDIO-2 - Use one content key to
     * encrypt all of the stereo audio tracks and one content key to encrypt all of the
     * multichannel audio tracks.</p> </li> <li> <p>PRESET-AUDIO-3 - Use one content
     * key to encrypt all of the stereo audio tracks, one content key to encrypt all of
     * the multichannel audio tracks with 3 to 6 channels, and one content key to
     * encrypt all of the multichannel audio tracks with more than 6 channels.</p>
     * </li> <li> <p>SHARED - Use the same content key for all of the audio and video
     * tracks in your stream.</p> </li> <li> <p>UNENCRYPTED - Don't encrypt any of the
     * audio tracks in your stream.</p> </li> </ul>
     */
    inline void SetPresetSpeke20Audio(const PresetSpeke20Audio& value) { m_presetSpeke20AudioHasBeenSet = true; m_presetSpeke20Audio = value; }

    /**
     * <p>A collection of audio encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-AUDIO-1 - Use one content key to encrypt all of the audio tracks
     * in your stream.</p> </li> <li> <p>PRESET-AUDIO-2 - Use one content key to
     * encrypt all of the stereo audio tracks and one content key to encrypt all of the
     * multichannel audio tracks.</p> </li> <li> <p>PRESET-AUDIO-3 - Use one content
     * key to encrypt all of the stereo audio tracks, one content key to encrypt all of
     * the multichannel audio tracks with 3 to 6 channels, and one content key to
     * encrypt all of the multichannel audio tracks with more than 6 channels.</p>
     * </li> <li> <p>SHARED - Use the same content key for all of the audio and video
     * tracks in your stream.</p> </li> <li> <p>UNENCRYPTED - Don't encrypt any of the
     * audio tracks in your stream.</p> </li> </ul>
     */
    inline void SetPresetSpeke20Audio(PresetSpeke20Audio&& value) { m_presetSpeke20AudioHasBeenSet = true; m_presetSpeke20Audio = std::move(value); }

    /**
     * <p>A collection of audio encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-AUDIO-1 - Use one content key to encrypt all of the audio tracks
     * in your stream.</p> </li> <li> <p>PRESET-AUDIO-2 - Use one content key to
     * encrypt all of the stereo audio tracks and one content key to encrypt all of the
     * multichannel audio tracks.</p> </li> <li> <p>PRESET-AUDIO-3 - Use one content
     * key to encrypt all of the stereo audio tracks, one content key to encrypt all of
     * the multichannel audio tracks with 3 to 6 channels, and one content key to
     * encrypt all of the multichannel audio tracks with more than 6 channels.</p>
     * </li> <li> <p>SHARED - Use the same content key for all of the audio and video
     * tracks in your stream.</p> </li> <li> <p>UNENCRYPTED - Don't encrypt any of the
     * audio tracks in your stream.</p> </li> </ul>
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Audio(const PresetSpeke20Audio& value) { SetPresetSpeke20Audio(value); return *this;}

    /**
     * <p>A collection of audio encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-AUDIO-1 - Use one content key to encrypt all of the audio tracks
     * in your stream.</p> </li> <li> <p>PRESET-AUDIO-2 - Use one content key to
     * encrypt all of the stereo audio tracks and one content key to encrypt all of the
     * multichannel audio tracks.</p> </li> <li> <p>PRESET-AUDIO-3 - Use one content
     * key to encrypt all of the stereo audio tracks, one content key to encrypt all of
     * the multichannel audio tracks with 3 to 6 channels, and one content key to
     * encrypt all of the multichannel audio tracks with more than 6 channels.</p>
     * </li> <li> <p>SHARED - Use the same content key for all of the audio and video
     * tracks in your stream.</p> </li> <li> <p>UNENCRYPTED - Don't encrypt any of the
     * audio tracks in your stream.</p> </li> </ul>
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Audio(PresetSpeke20Audio&& value) { SetPresetSpeke20Audio(std::move(value)); return *this;}


    /**
     * <p>A collection of video encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-VIDEO-1 - Use one content key to encrypt all of the video tracks
     * in your stream.</p> </li> <li> <p>PRESET-VIDEO-2 - Use one content key to
     * encrypt all of the SD video tracks and one content key for all HD and higher
     * resolutions video tracks.</p> </li> <li> <p>PRESET-VIDEO-3 - Use one content key
     * to encrypt all of the SD video tracks, one content key for HD video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-4 - Use
     * one content key to encrypt all of the SD video tracks, one content key for HD
     * video tracks, one content key for all UHD1 video tracks and one content key for
     * all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-5 - Use one content key to
     * encrypt all of the SD video tracks, one content key for HD1 video tracks, one
     * content key for HD2 video tracks, one content key for all UHD1 video tracks and
     * one content key for all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-6 -
     * Use one content key to encrypt all of the SD video tracks, one content key for
     * HD1 video tracks, one content key for HD2 video tracks and one content key for
     * all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-7 - Use one content key to
     * encrypt all of the SD+HD1 video tracks, one content key for HD2 video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-8 - Use
     * one content key to encrypt all of the SD+HD1 video tracks, one content key for
     * HD2 video tracks, one content key for all UHD1 video tracks and one content key
     * for all UHD2 video tracks.</p> </li> <li> <p>SHARED - Use the same content key
     * for all of the video and audio tracks in your stream.</p> </li> <li>
     * <p>UNENCRYPTED - Don't encrypt any of the video tracks in your stream.</p> </li>
     * </ul>
     */
    inline const PresetSpeke20Video& GetPresetSpeke20Video() const{ return m_presetSpeke20Video; }

    /**
     * <p>A collection of video encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-VIDEO-1 - Use one content key to encrypt all of the video tracks
     * in your stream.</p> </li> <li> <p>PRESET-VIDEO-2 - Use one content key to
     * encrypt all of the SD video tracks and one content key for all HD and higher
     * resolutions video tracks.</p> </li> <li> <p>PRESET-VIDEO-3 - Use one content key
     * to encrypt all of the SD video tracks, one content key for HD video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-4 - Use
     * one content key to encrypt all of the SD video tracks, one content key for HD
     * video tracks, one content key for all UHD1 video tracks and one content key for
     * all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-5 - Use one content key to
     * encrypt all of the SD video tracks, one content key for HD1 video tracks, one
     * content key for HD2 video tracks, one content key for all UHD1 video tracks and
     * one content key for all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-6 -
     * Use one content key to encrypt all of the SD video tracks, one content key for
     * HD1 video tracks, one content key for HD2 video tracks and one content key for
     * all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-7 - Use one content key to
     * encrypt all of the SD+HD1 video tracks, one content key for HD2 video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-8 - Use
     * one content key to encrypt all of the SD+HD1 video tracks, one content key for
     * HD2 video tracks, one content key for all UHD1 video tracks and one content key
     * for all UHD2 video tracks.</p> </li> <li> <p>SHARED - Use the same content key
     * for all of the video and audio tracks in your stream.</p> </li> <li>
     * <p>UNENCRYPTED - Don't encrypt any of the video tracks in your stream.</p> </li>
     * </ul>
     */
    inline bool PresetSpeke20VideoHasBeenSet() const { return m_presetSpeke20VideoHasBeenSet; }

    /**
     * <p>A collection of video encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-VIDEO-1 - Use one content key to encrypt all of the video tracks
     * in your stream.</p> </li> <li> <p>PRESET-VIDEO-2 - Use one content key to
     * encrypt all of the SD video tracks and one content key for all HD and higher
     * resolutions video tracks.</p> </li> <li> <p>PRESET-VIDEO-3 - Use one content key
     * to encrypt all of the SD video tracks, one content key for HD video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-4 - Use
     * one content key to encrypt all of the SD video tracks, one content key for HD
     * video tracks, one content key for all UHD1 video tracks and one content key for
     * all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-5 - Use one content key to
     * encrypt all of the SD video tracks, one content key for HD1 video tracks, one
     * content key for HD2 video tracks, one content key for all UHD1 video tracks and
     * one content key for all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-6 -
     * Use one content key to encrypt all of the SD video tracks, one content key for
     * HD1 video tracks, one content key for HD2 video tracks and one content key for
     * all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-7 - Use one content key to
     * encrypt all of the SD+HD1 video tracks, one content key for HD2 video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-8 - Use
     * one content key to encrypt all of the SD+HD1 video tracks, one content key for
     * HD2 video tracks, one content key for all UHD1 video tracks and one content key
     * for all UHD2 video tracks.</p> </li> <li> <p>SHARED - Use the same content key
     * for all of the video and audio tracks in your stream.</p> </li> <li>
     * <p>UNENCRYPTED - Don't encrypt any of the video tracks in your stream.</p> </li>
     * </ul>
     */
    inline void SetPresetSpeke20Video(const PresetSpeke20Video& value) { m_presetSpeke20VideoHasBeenSet = true; m_presetSpeke20Video = value; }

    /**
     * <p>A collection of video encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-VIDEO-1 - Use one content key to encrypt all of the video tracks
     * in your stream.</p> </li> <li> <p>PRESET-VIDEO-2 - Use one content key to
     * encrypt all of the SD video tracks and one content key for all HD and higher
     * resolutions video tracks.</p> </li> <li> <p>PRESET-VIDEO-3 - Use one content key
     * to encrypt all of the SD video tracks, one content key for HD video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-4 - Use
     * one content key to encrypt all of the SD video tracks, one content key for HD
     * video tracks, one content key for all UHD1 video tracks and one content key for
     * all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-5 - Use one content key to
     * encrypt all of the SD video tracks, one content key for HD1 video tracks, one
     * content key for HD2 video tracks, one content key for all UHD1 video tracks and
     * one content key for all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-6 -
     * Use one content key to encrypt all of the SD video tracks, one content key for
     * HD1 video tracks, one content key for HD2 video tracks and one content key for
     * all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-7 - Use one content key to
     * encrypt all of the SD+HD1 video tracks, one content key for HD2 video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-8 - Use
     * one content key to encrypt all of the SD+HD1 video tracks, one content key for
     * HD2 video tracks, one content key for all UHD1 video tracks and one content key
     * for all UHD2 video tracks.</p> </li> <li> <p>SHARED - Use the same content key
     * for all of the video and audio tracks in your stream.</p> </li> <li>
     * <p>UNENCRYPTED - Don't encrypt any of the video tracks in your stream.</p> </li>
     * </ul>
     */
    inline void SetPresetSpeke20Video(PresetSpeke20Video&& value) { m_presetSpeke20VideoHasBeenSet = true; m_presetSpeke20Video = std::move(value); }

    /**
     * <p>A collection of video encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-VIDEO-1 - Use one content key to encrypt all of the video tracks
     * in your stream.</p> </li> <li> <p>PRESET-VIDEO-2 - Use one content key to
     * encrypt all of the SD video tracks and one content key for all HD and higher
     * resolutions video tracks.</p> </li> <li> <p>PRESET-VIDEO-3 - Use one content key
     * to encrypt all of the SD video tracks, one content key for HD video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-4 - Use
     * one content key to encrypt all of the SD video tracks, one content key for HD
     * video tracks, one content key for all UHD1 video tracks and one content key for
     * all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-5 - Use one content key to
     * encrypt all of the SD video tracks, one content key for HD1 video tracks, one
     * content key for HD2 video tracks, one content key for all UHD1 video tracks and
     * one content key for all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-6 -
     * Use one content key to encrypt all of the SD video tracks, one content key for
     * HD1 video tracks, one content key for HD2 video tracks and one content key for
     * all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-7 - Use one content key to
     * encrypt all of the SD+HD1 video tracks, one content key for HD2 video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-8 - Use
     * one content key to encrypt all of the SD+HD1 video tracks, one content key for
     * HD2 video tracks, one content key for all UHD1 video tracks and one content key
     * for all UHD2 video tracks.</p> </li> <li> <p>SHARED - Use the same content key
     * for all of the video and audio tracks in your stream.</p> </li> <li>
     * <p>UNENCRYPTED - Don't encrypt any of the video tracks in your stream.</p> </li>
     * </ul>
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Video(const PresetSpeke20Video& value) { SetPresetSpeke20Video(value); return *this;}

    /**
     * <p>A collection of video encryption presets.</p> <p>Value description: </p> <ul>
     * <li> <p>PRESET-VIDEO-1 - Use one content key to encrypt all of the video tracks
     * in your stream.</p> </li> <li> <p>PRESET-VIDEO-2 - Use one content key to
     * encrypt all of the SD video tracks and one content key for all HD and higher
     * resolutions video tracks.</p> </li> <li> <p>PRESET-VIDEO-3 - Use one content key
     * to encrypt all of the SD video tracks, one content key for HD video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-4 - Use
     * one content key to encrypt all of the SD video tracks, one content key for HD
     * video tracks, one content key for all UHD1 video tracks and one content key for
     * all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-5 - Use one content key to
     * encrypt all of the SD video tracks, one content key for HD1 video tracks, one
     * content key for HD2 video tracks, one content key for all UHD1 video tracks and
     * one content key for all UHD2 video tracks.</p> </li> <li> <p>PRESET-VIDEO-6 -
     * Use one content key to encrypt all of the SD video tracks, one content key for
     * HD1 video tracks, one content key for HD2 video tracks and one content key for
     * all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-7 - Use one content key to
     * encrypt all of the SD+HD1 video tracks, one content key for HD2 video tracks and
     * one content key for all UHD video tracks.</p> </li> <li> <p>PRESET-VIDEO-8 - Use
     * one content key to encrypt all of the SD+HD1 video tracks, one content key for
     * HD2 video tracks, one content key for all UHD1 video tracks and one content key
     * for all UHD2 video tracks.</p> </li> <li> <p>SHARED - Use the same content key
     * for all of the video and audio tracks in your stream.</p> </li> <li>
     * <p>UNENCRYPTED - Don't encrypt any of the video tracks in your stream.</p> </li>
     * </ul>
     */
    inline EncryptionContractConfiguration& WithPresetSpeke20Video(PresetSpeke20Video&& value) { SetPresetSpeke20Video(std::move(value)); return *this;}

  private:

    PresetSpeke20Audio m_presetSpeke20Audio;
    bool m_presetSpeke20AudioHasBeenSet = false;

    PresetSpeke20Video m_presetSpeke20Video;
    bool m_presetSpeke20VideoHasBeenSet = false;
  };

} // namespace Model
} // namespace mediapackagev2
} // namespace Aws
