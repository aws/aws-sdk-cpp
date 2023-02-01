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
    AWS_MEDIACONVERT_API ContainerSettings();
    AWS_MEDIACONVERT_API ContainerSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API ContainerSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline const CmfcSettings& GetCmfcSettings() const{ return m_cmfcSettings; }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline bool CmfcSettingsHasBeenSet() const { return m_cmfcSettingsHasBeenSet; }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline void SetCmfcSettings(const CmfcSettings& value) { m_cmfcSettingsHasBeenSet = true; m_cmfcSettings = value; }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline void SetCmfcSettings(CmfcSettings&& value) { m_cmfcSettingsHasBeenSet = true; m_cmfcSettings = std::move(value); }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline ContainerSettings& WithCmfcSettings(const CmfcSettings& value) { SetCmfcSettings(value); return *this;}

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * CMAF outputs.
     */
    inline ContainerSettings& WithCmfcSettings(CmfcSettings&& value) { SetCmfcSettings(std::move(value)); return *this;}


    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline const ContainerType& GetContainer() const{ return m_container; }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline bool ContainerHasBeenSet() const { return m_containerHasBeenSet; }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline void SetContainer(const ContainerType& value) { m_containerHasBeenSet = true; m_container = value; }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline void SetContainer(ContainerType&& value) { m_containerHasBeenSet = true; m_container = std::move(value); }

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline ContainerSettings& WithContainer(const ContainerType& value) { SetContainer(value); return *this;}

    /**
     * Container for this output. Some containers require a container settings object.
     * If not specified, the default object will be created.
     */
    inline ContainerSettings& WithContainer(ContainerType&& value) { SetContainer(std::move(value)); return *this;}


    /**
     * Settings for F4v container
     */
    inline const F4vSettings& GetF4vSettings() const{ return m_f4vSettings; }

    /**
     * Settings for F4v container
     */
    inline bool F4vSettingsHasBeenSet() const { return m_f4vSettingsHasBeenSet; }

    /**
     * Settings for F4v container
     */
    inline void SetF4vSettings(const F4vSettings& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = value; }

    /**
     * Settings for F4v container
     */
    inline void SetF4vSettings(F4vSettings&& value) { m_f4vSettingsHasBeenSet = true; m_f4vSettings = std::move(value); }

    /**
     * Settings for F4v container
     */
    inline ContainerSettings& WithF4vSettings(const F4vSettings& value) { SetF4vSettings(value); return *this;}

    /**
     * Settings for F4v container
     */
    inline ContainerSettings& WithF4vSettings(F4vSettings&& value) { SetF4vSettings(std::move(value)); return *this;}


    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline const M2tsSettings& GetM2tsSettings() const{ return m_m2tsSettings; }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline bool M2tsSettingsHasBeenSet() const { return m_m2tsSettingsHasBeenSet; }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline void SetM2tsSettings(const M2tsSettings& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = value; }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline void SetM2tsSettings(M2tsSettings&& value) { m_m2tsSettingsHasBeenSet = true; m_m2tsSettings = std::move(value); }

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline ContainerSettings& WithM2tsSettings(const M2tsSettings& value) { SetM2tsSettings(value); return *this;}

    /**
     * MPEG-2 TS container settings. These apply to outputs in a File output group when
     * the output's container (ContainerType) is MPEG-2 Transport Stream (M2TS). In
     * these assets, data is organized by the program map table (PMT). Each transport
     * stream program contains subsets of data, including audio, video, and metadata.
     * Each of these subsets of data has a numerical label called a packet identifier
     * (PID). Each transport stream program corresponds to one MediaConvert output. The
     * PMT lists the types of data in a program along with their PID. Downstream
     * systems and players use the program map table to look up the PID for each type
     * of data it accesses and then uses the PIDs to locate specific data within the
     * asset.
     */
    inline ContainerSettings& WithM2tsSettings(M2tsSettings&& value) { SetM2tsSettings(std::move(value)); return *this;}


    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline const M3u8Settings& GetM3u8Settings() const{ return m_m3u8Settings; }

    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline bool M3u8SettingsHasBeenSet() const { return m_m3u8SettingsHasBeenSet; }

    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline void SetM3u8Settings(const M3u8Settings& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = value; }

    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline void SetM3u8Settings(M3u8Settings&& value) { m_m3u8SettingsHasBeenSet = true; m_m3u8Settings = std::move(value); }

    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline ContainerSettings& WithM3u8Settings(const M3u8Settings& value) { SetM3u8Settings(value); return *this;}

    /**
     * These settings relate to the MPEG-2 transport stream (MPEG2-TS) container for
     * the MPEG2-TS segments in your HLS outputs.
     */
    inline ContainerSettings& WithM3u8Settings(M3u8Settings&& value) { SetM3u8Settings(std::move(value)); return *this;}


    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline const MovSettings& GetMovSettings() const{ return m_movSettings; }

    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline bool MovSettingsHasBeenSet() const { return m_movSettingsHasBeenSet; }

    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline void SetMovSettings(const MovSettings& value) { m_movSettingsHasBeenSet = true; m_movSettings = value; }

    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline void SetMovSettings(MovSettings&& value) { m_movSettingsHasBeenSet = true; m_movSettings = std::move(value); }

    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline ContainerSettings& WithMovSettings(const MovSettings& value) { SetMovSettings(value); return *this;}

    /**
     * These settings relate to your QuickTime MOV output container.
     */
    inline ContainerSettings& WithMovSettings(MovSettings&& value) { SetMovSettings(std::move(value)); return *this;}


    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline const Mp4Settings& GetMp4Settings() const{ return m_mp4Settings; }

    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline bool Mp4SettingsHasBeenSet() const { return m_mp4SettingsHasBeenSet; }

    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline void SetMp4Settings(const Mp4Settings& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = value; }

    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline void SetMp4Settings(Mp4Settings&& value) { m_mp4SettingsHasBeenSet = true; m_mp4Settings = std::move(value); }

    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline ContainerSettings& WithMp4Settings(const Mp4Settings& value) { SetMp4Settings(value); return *this;}

    /**
     * These settings relate to your MP4 output container. You can create audio only
     * outputs with this container. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/supported-codecs-containers-audio-only.html#output-codecs-and-containers-supported-for-audio-only.
     */
    inline ContainerSettings& WithMp4Settings(Mp4Settings&& value) { SetMp4Settings(std::move(value)); return *this;}


    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline const MpdSettings& GetMpdSettings() const{ return m_mpdSettings; }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline bool MpdSettingsHasBeenSet() const { return m_mpdSettingsHasBeenSet; }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline void SetMpdSettings(const MpdSettings& value) { m_mpdSettingsHasBeenSet = true; m_mpdSettings = value; }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline void SetMpdSettings(MpdSettings&& value) { m_mpdSettingsHasBeenSet = true; m_mpdSettings = std::move(value); }

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline ContainerSettings& WithMpdSettings(const MpdSettings& value) { SetMpdSettings(value); return *this;}

    /**
     * These settings relate to the fragmented MP4 container for the segments in your
     * DASH outputs.
     */
    inline ContainerSettings& WithMpdSettings(MpdSettings&& value) { SetMpdSettings(std::move(value)); return *this;}


    /**
     * These settings relate to your MXF output container.
     */
    inline const MxfSettings& GetMxfSettings() const{ return m_mxfSettings; }

    /**
     * These settings relate to your MXF output container.
     */
    inline bool MxfSettingsHasBeenSet() const { return m_mxfSettingsHasBeenSet; }

    /**
     * These settings relate to your MXF output container.
     */
    inline void SetMxfSettings(const MxfSettings& value) { m_mxfSettingsHasBeenSet = true; m_mxfSettings = value; }

    /**
     * These settings relate to your MXF output container.
     */
    inline void SetMxfSettings(MxfSettings&& value) { m_mxfSettingsHasBeenSet = true; m_mxfSettings = std::move(value); }

    /**
     * These settings relate to your MXF output container.
     */
    inline ContainerSettings& WithMxfSettings(const MxfSettings& value) { SetMxfSettings(value); return *this;}

    /**
     * These settings relate to your MXF output container.
     */
    inline ContainerSettings& WithMxfSettings(MxfSettings&& value) { SetMxfSettings(std::move(value)); return *this;}

  private:

    CmfcSettings m_cmfcSettings;
    bool m_cmfcSettingsHasBeenSet = false;

    ContainerType m_container;
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
