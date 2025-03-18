/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/AncillarySourceSettings.h>
#include <aws/mediaconvert/model/DvbSubSourceSettings.h>
#include <aws/mediaconvert/model/EmbeddedSourceSettings.h>
#include <aws/mediaconvert/model/FileSourceSettings.h>
#include <aws/mediaconvert/model/CaptionSourceType.h>
#include <aws/mediaconvert/model/TeletextSourceSettings.h>
#include <aws/mediaconvert/model/TrackSourceSettings.h>
#include <aws/mediaconvert/model/WebvttHlsSourceSettings.h>
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
   * If your input captions are SCC, TTML, STL, SMI, SRT, or IMSC in an xml file,
   * specify the URI of the input captions source file. If your input captions are
   * IMSC in an IMF package, use TrackSourceSettings instead of
   * FileSoureSettings.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionSourceSettings">AWS
   * API Reference</a></p>
   */
  class CaptionSourceSettings
  {
  public:
    AWS_MEDIACONVERT_API CaptionSourceSettings() = default;
    AWS_MEDIACONVERT_API CaptionSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Settings for ancillary captions source.
     */
    inline const AncillarySourceSettings& GetAncillarySourceSettings() const { return m_ancillarySourceSettings; }
    inline bool AncillarySourceSettingsHasBeenSet() const { return m_ancillarySourceSettingsHasBeenSet; }
    template<typename AncillarySourceSettingsT = AncillarySourceSettings>
    void SetAncillarySourceSettings(AncillarySourceSettingsT&& value) { m_ancillarySourceSettingsHasBeenSet = true; m_ancillarySourceSettings = std::forward<AncillarySourceSettingsT>(value); }
    template<typename AncillarySourceSettingsT = AncillarySourceSettings>
    CaptionSourceSettings& WithAncillarySourceSettings(AncillarySourceSettingsT&& value) { SetAncillarySourceSettings(std::forward<AncillarySourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * DVB Sub Source Settings
     */
    inline const DvbSubSourceSettings& GetDvbSubSourceSettings() const { return m_dvbSubSourceSettings; }
    inline bool DvbSubSourceSettingsHasBeenSet() const { return m_dvbSubSourceSettingsHasBeenSet; }
    template<typename DvbSubSourceSettingsT = DvbSubSourceSettings>
    void SetDvbSubSourceSettings(DvbSubSourceSettingsT&& value) { m_dvbSubSourceSettingsHasBeenSet = true; m_dvbSubSourceSettings = std::forward<DvbSubSourceSettingsT>(value); }
    template<typename DvbSubSourceSettingsT = DvbSubSourceSettings>
    CaptionSourceSettings& WithDvbSubSourceSettings(DvbSubSourceSettingsT&& value) { SetDvbSubSourceSettings(std::forward<DvbSubSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings for embedded captions Source
     */
    inline const EmbeddedSourceSettings& GetEmbeddedSourceSettings() const { return m_embeddedSourceSettings; }
    inline bool EmbeddedSourceSettingsHasBeenSet() const { return m_embeddedSourceSettingsHasBeenSet; }
    template<typename EmbeddedSourceSettingsT = EmbeddedSourceSettings>
    void SetEmbeddedSourceSettings(EmbeddedSourceSettingsT&& value) { m_embeddedSourceSettingsHasBeenSet = true; m_embeddedSourceSettings = std::forward<EmbeddedSourceSettingsT>(value); }
    template<typename EmbeddedSourceSettingsT = EmbeddedSourceSettings>
    CaptionSourceSettings& WithEmbeddedSourceSettings(EmbeddedSourceSettingsT&& value) { SetEmbeddedSourceSettings(std::forward<EmbeddedSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * If your input captions are SCC, SMI, SRT, STL, TTML, WebVTT, or IMSC 1.1 in an
     * xml file, specify the URI of the input caption source file. If your caption
     * source is IMSC in an IMF package, use TrackSourceSettings instead of
     * FileSoureSettings.
     */
    inline const FileSourceSettings& GetFileSourceSettings() const { return m_fileSourceSettings; }
    inline bool FileSourceSettingsHasBeenSet() const { return m_fileSourceSettingsHasBeenSet; }
    template<typename FileSourceSettingsT = FileSourceSettings>
    void SetFileSourceSettings(FileSourceSettingsT&& value) { m_fileSourceSettingsHasBeenSet = true; m_fileSourceSettings = std::forward<FileSourceSettingsT>(value); }
    template<typename FileSourceSettingsT = FileSourceSettings>
    CaptionSourceSettings& WithFileSourceSettings(FileSourceSettingsT&& value) { SetFileSourceSettings(std::forward<FileSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Use Source to identify the format of your input captions. The service cannot
     * auto-detect caption format.
     */
    inline CaptionSourceType GetSourceType() const { return m_sourceType; }
    inline bool SourceTypeHasBeenSet() const { return m_sourceTypeHasBeenSet; }
    inline void SetSourceType(CaptionSourceType value) { m_sourceTypeHasBeenSet = true; m_sourceType = value; }
    inline CaptionSourceSettings& WithSourceType(CaptionSourceType value) { SetSourceType(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings specific to Teletext caption sources, including Page number.
     */
    inline const TeletextSourceSettings& GetTeletextSourceSettings() const { return m_teletextSourceSettings; }
    inline bool TeletextSourceSettingsHasBeenSet() const { return m_teletextSourceSettingsHasBeenSet; }
    template<typename TeletextSourceSettingsT = TeletextSourceSettings>
    void SetTeletextSourceSettings(TeletextSourceSettingsT&& value) { m_teletextSourceSettingsHasBeenSet = true; m_teletextSourceSettings = std::forward<TeletextSourceSettingsT>(value); }
    template<typename TeletextSourceSettingsT = TeletextSourceSettings>
    CaptionSourceSettings& WithTeletextSourceSettings(TeletextSourceSettingsT&& value) { SetTeletextSourceSettings(std::forward<TeletextSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings specific to caption sources that are specified by track number.
     * Currently, this is only IMSC captions in an IMF package. If your caption source
     * is IMSC 1.1 in a separate xml file, use FileSourceSettings instead of
     * TrackSourceSettings.
     */
    inline const TrackSourceSettings& GetTrackSourceSettings() const { return m_trackSourceSettings; }
    inline bool TrackSourceSettingsHasBeenSet() const { return m_trackSourceSettingsHasBeenSet; }
    template<typename TrackSourceSettingsT = TrackSourceSettings>
    void SetTrackSourceSettings(TrackSourceSettingsT&& value) { m_trackSourceSettingsHasBeenSet = true; m_trackSourceSettings = std::forward<TrackSourceSettingsT>(value); }
    template<typename TrackSourceSettingsT = TrackSourceSettings>
    CaptionSourceSettings& WithTrackSourceSettings(TrackSourceSettingsT&& value) { SetTrackSourceSettings(std::forward<TrackSourceSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings specific to WebVTT sources in HLS alternative rendition group. Specify
     * the properties (renditionGroupId, renditionName or renditionLanguageCode) to
     * identify the unique subtitle track among the alternative rendition groups
     * present in the HLS manifest. If no unique track is found, or multiple tracks
     * match the specified properties, the job fails. If there is only one subtitle
     * track in the rendition group, the settings can be left empty and the default
     * subtitle track will be chosen. If your caption source is a sidecar file, use
     * FileSourceSettings instead of WebvttHlsSourceSettings.
     */
    inline const WebvttHlsSourceSettings& GetWebvttHlsSourceSettings() const { return m_webvttHlsSourceSettings; }
    inline bool WebvttHlsSourceSettingsHasBeenSet() const { return m_webvttHlsSourceSettingsHasBeenSet; }
    template<typename WebvttHlsSourceSettingsT = WebvttHlsSourceSettings>
    void SetWebvttHlsSourceSettings(WebvttHlsSourceSettingsT&& value) { m_webvttHlsSourceSettingsHasBeenSet = true; m_webvttHlsSourceSettings = std::forward<WebvttHlsSourceSettingsT>(value); }
    template<typename WebvttHlsSourceSettingsT = WebvttHlsSourceSettings>
    CaptionSourceSettings& WithWebvttHlsSourceSettings(WebvttHlsSourceSettingsT&& value) { SetWebvttHlsSourceSettings(std::forward<WebvttHlsSourceSettingsT>(value)); return *this;}
    ///@}
  private:

    AncillarySourceSettings m_ancillarySourceSettings;
    bool m_ancillarySourceSettingsHasBeenSet = false;

    DvbSubSourceSettings m_dvbSubSourceSettings;
    bool m_dvbSubSourceSettingsHasBeenSet = false;

    EmbeddedSourceSettings m_embeddedSourceSettings;
    bool m_embeddedSourceSettingsHasBeenSet = false;

    FileSourceSettings m_fileSourceSettings;
    bool m_fileSourceSettingsHasBeenSet = false;

    CaptionSourceType m_sourceType{CaptionSourceType::NOT_SET};
    bool m_sourceTypeHasBeenSet = false;

    TeletextSourceSettings m_teletextSourceSettings;
    bool m_teletextSourceSettingsHasBeenSet = false;

    TrackSourceSettings m_trackSourceSettings;
    bool m_trackSourceSettingsHasBeenSet = false;

    WebvttHlsSourceSettings m_webvttHlsSourceSettings;
    bool m_webvttHlsSourceSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
