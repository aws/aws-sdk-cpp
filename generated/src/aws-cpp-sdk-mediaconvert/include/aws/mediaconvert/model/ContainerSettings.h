/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/CmfcSettings.h>
#include <aws/mediaconvert/model/ContainerType.h>
#include <aws/mediaconvert/model/F4vSettings.h>
#include <aws/mediaconvert/model/M2tsSettings.h>
#include <aws/mediaconvert/model/M3u8Settings.h>
#include <aws/mediaconvert/model/MovSettings.h>
#include <aws/mediaconvert/model/Mp4Settings.h>
#include <aws/mediaconvert/model/MpdSettings.h>
#include <aws/mediaconvert/model/MxfSettings.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Container specific settings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/ContainerSettings">AWS
   * API Reference</a></p>
   */
  class ContainerSettings
  {
  public:
    AWS_MEDIACONVERT_API ContainerSettings() = default;
    AWS_MEDIACONVERT_API ContainerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ContainerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline const CmfcSettings& GetCmfcSettings() const { return m_cmfcSettings; }
    inline bool CmfcSettingsHasBeenSet() const { return m_cmfcSettingsHasBeenSet; }
    template<typename CmfcSettingsT = CmfcSettings>
    void SetCmfcSettings(CmfcSettingsT&& value) { m_cmfcSettingsHasBeenSet = true; m_cmfcSettings = std::forward<CmfcSettingsT>(value); }
    template<typename CmfcSettingsT = CmfcSettings>
    ContainerSettings& WithCmfcSettings(CmfcSettingsT&& value) { SetCmfcSettings(std::forward<CmfcSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline ContainerType GetContainer() const { return m_container; }
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }
    inline void SetContainer(ContainerType value) { m_containerHasBeenSet = true; m_container = value; }
    inline ContainerSettings& WithContainer(ContainerType value) { SetContainer(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings for F4v container
     */
    inline const F4vSettings& GetF4vSettings() const { return m_f4vSettings; }
    inline bool F4vSettingsHasBeenSet() const { return m_f4vSettingsHasBeenSet; }
    template<typename F4vSettingsT = F4vSettings>
    void SetF4vSettings(F4vSettingsT&& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = std::forward<F4vSettingsT>(value); }
    template<typename F4vSettingsT = F4vSettings>
    ContainerSettings& WithF4vSettings(F4vSettingsT&& value) { SetF4vSettings(std::forward<F4vSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container is MPEG-2 Transport Stream (M2TS). In these assets, data
     * is organized by the program map table (PMT). Each transport stream program
     * contains subsets of data, including audio, video, and metadata. Each of these
     * subsets of data has a numerical label called a packet identifier (PID). Each
     * transport stream program corresponds to one MediaConvert output. The PMT lists
     * the types of data in a program along with their PID. Downstream systems and
     * players use the program map table to look up the PID for each type of data it
     * accesses and then uses the PIDs to locate specific data within the asset.
     */
    inline const M2tsSettings& GetM2tsSettings() const { return m_m2tsSettings; }
    inline bool M2tsSettingsHasBeenSet() const { return m_m2tsSettingsHasBeenSet; }
    template<typename M2tsSettingsT = M2tsSettings>
    void SetM2tsSettings(M2tsSettingsT&& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = std::forward<M2tsSettingsT>(value); }
    template<typename M2tsSettingsT = M2tsSettings>
    ContainerSettings& WithM2tsSettings(M2tsSettingsT&& value) { SetM2tsSettings(std::forward<M2tsSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline const M3u8Settings& GetM3u8Settings() const { return m_m3u8Settings; }
    inline bool M3u8SettingsHasBeenSet() const { return m_m3u8SettingsHasBeenSet; }
    template<typename M3u8SettingsT = M3u8Settings>
    void SetM3u8Settings(M3u8SettingsT&& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = std::forward<M3u8SettingsT>(value); }
    template<typename M3u8SettingsT = M3u8Settings>
    ContainerSettings& WithM3u8Settings(M3u8SettingsT&& value) { SetM3u8Settings(std::forward<M3u8SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline const MovSettings& GetMovSettings() const { return m_movSettings; }
    inline bool MovSettingsHasBeenSet() const { return m_movSettingsHasBeenSet; }
    template<typename MovSettingsT = MovSettings>
    void SetMovSettings(MovSettingsT&& value) { m_movSettingsHasBeenSet = true; m_movSettings = std::forward<MovSettingsT>(value); }
    template<typename MovSettingsT = MovSettings>
    ContainerSettings& WithMovSettings(MovSettingsT&& value) { SetMovSettings(std::forward<MovSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline const Mp4Settings& GetMp4Settings() const { return m_mp4Settings; }
    inline bool Mp4SettingsHasBeenSet() const { return m_mp4SettingsHasBeenSet; }
    template<typename Mp4SettingsT = Mp4Settings>
    void SetMp4Settings(Mp4SettingsT&& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = std::forward<Mp4SettingsT>(value); }
    template<typename Mp4SettingsT = Mp4Settings>
    ContainerSettings& WithMp4Settings(Mp4SettingsT&& value) { SetMp4Settings(std::forward<Mp4SettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline const MpdSettings& GetMpdSettings() const { return m_mpdSettings; }
    inline bool MpdSettingsHasBeenSet() const { return m_mpdSettingsHasBeenSet; }
    template<typename MpdSettingsT = MpdSettings>
    void SetMpdSettings(MpdSettingsT&& value) { m_mpdSettingsHasBeenSet = true; m_mpdSettings = std::forward<MpdSettingsT>(value); }
    template<typename MpdSettingsT = MpdSettings>
    ContainerSettings& WithMpdSettings(MpdSettingsT&& value) { SetMpdSettings(std::forward<MpdSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * These settings relate to your MXF output container.
     */
    inline const MxfSettings& GetMxfSettings() const { return m_mxfSettings; }
    inline bool MxfSettingsHasBeenSet() const { return m_mxfSettingsHasBeenSet; }
    template<typename MxfSettingsT = MxfSettings>
    void SetMxfSettings(MxfSettingsT&& value) { m_mxfSettingsHasBeenSet = true; m_mxfSettings = std::forward<MxfSettingsT>(value); }
    template<typename MxfSettingsT = MxfSettings>
    ContainerSettings& WithMxfSettings(MxfSettingsT&& value) { SetMxfSettings(std::forward<MxfSettingsT>(value)); return *this;}
    ///@}
  private:

    CmfcSettings m_cmfcSettings;
    bool m_cmfcSettingsHasBeenSet = false;

    ContainerType m_container{ContainerType::NOT_SET};
    bool m_containerHasBeenSet = false;

    F4vSettings m_f4vSettings;
    bool m_f4vSettingsHasBeenSet = false;

    M2tsSettings m_m2tsSettings;
    bool m_m2tsSettingsHasBeenSet = false;

    M3u8Settings m_m3u8Settings;
    bool m_m3u8SettingsHasBeenSet = false;

    MovSettings m_movSettings;
    bool m_movSettingsHasBeenSet = false;

    Mp4Settings m_mp4Settings;
    bool m_mp4SettingsHasBeenSet = false;

    MpdSettings m_mpdSettings;
    bool m_mpdSettingsHasBeenSet = false;

    MxfSettings m_mxfSettings;
    bool m_mxfSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
