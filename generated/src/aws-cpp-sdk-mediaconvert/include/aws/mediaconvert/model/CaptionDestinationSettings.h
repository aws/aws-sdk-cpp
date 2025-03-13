/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/BurninDestinationSettings.h>
#include <aws/mediaconvert/model/CaptionDestinationType.h>
#include <aws/mediaconvert/model/DvbSubDestinationSettings.h>
#include <aws/mediaconvert/model/EmbeddedDestinationSettings.h>
#include <aws/mediaconvert/model/ImscDestinationSettings.h>
#include <aws/mediaconvert/model/SccDestinationSettings.h>
#include <aws/mediaconvert/model/SrtDestinationSettings.h>
#include <aws/mediaconvert/model/TeletextDestinationSettings.h>
#include <aws/mediaconvert/model/TtmlDestinationSettings.h>
#include <aws/mediaconvert/model/WebvttDestinationSettings.h>
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
   * Settings related to one captions tab on the MediaConvert console. Usually, one
   * captions tab corresponds to one output captions track. Depending on your output
   * captions format, one tab might correspond to a set of output captions tracks.
   * For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/including-captions.html.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/CaptionDestinationSettings">AWS
   * API Reference</a></p>
   */
  class CaptionDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API CaptionDestinationSettings() = default;
    AWS_MEDIACONVERT_API CaptionDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API CaptionDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Burn-in is a captions delivery method, rather than a captions format. Burn-in
     * writes the captions directly on your video frames, replacing pixels of video
     * content with the captions. Set up burn-in captions in the same output as your
     * video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/burn-in-output-captions.html.
     */
    inline const BurninDestinationSettings& GetBurninDestinationSettings() const { return m_burninDestinationSettings; }
    inline bool BurninDestinationSettingsHasBeenSet() const { return m_burninDestinationSettingsHasBeenSet; }
    template<typename BurninDestinationSettingsT = BurninDestinationSettings>
    void SetBurninDestinationSettings(BurninDestinationSettingsT&& value) { m_burninDestinationSettingsHasBeenSet = true; m_burninDestinationSettings = std::forward<BurninDestinationSettingsT>(value); }
    template<typename BurninDestinationSettingsT = BurninDestinationSettings>
    CaptionDestinationSettings& WithBurninDestinationSettings(BurninDestinationSettingsT&& value) { SetBurninDestinationSettings(std::forward<BurninDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Specify the format for this set of captions on this output. The default format
     * is embedded without SCTE-20. Note that your choice of video output container
     * constrains your choice of output captions format. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/captions-support-tables.html.
     * If you are using SCTE-20 and you want to create an output that complies with the
     * SCTE-43 spec, choose SCTE-20 plus embedded. To create a non-compliant output
     * where the embedded captions come first, choose Embedded plus SCTE-20.
     */
    inline CaptionDestinationType GetDestinationType() const { return m_destinationType; }
    inline bool DestinationTypeHasBeenSet() const { return m_destinationTypeHasBeenSet; }
    inline void SetDestinationType(CaptionDestinationType value) { m_destinationTypeHasBeenSet = true; m_destinationType = value; }
    inline CaptionDestinationSettings& WithDestinationType(CaptionDestinationType value) { SetDestinationType(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to DVB-Sub captions. Set up DVB-Sub captions in the same output
     * as your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/dvb-sub-output-captions.html.
     */
    inline const DvbSubDestinationSettings& GetDvbSubDestinationSettings() const { return m_dvbSubDestinationSettings; }
    inline bool DvbSubDestinationSettingsHasBeenSet() const { return m_dvbSubDestinationSettingsHasBeenSet; }
    template<typename DvbSubDestinationSettingsT = DvbSubDestinationSettings>
    void SetDvbSubDestinationSettings(DvbSubDestinationSettingsT&& value) { m_dvbSubDestinationSettingsHasBeenSet = true; m_dvbSubDestinationSettings = std::forward<DvbSubDestinationSettingsT>(value); }
    template<typename DvbSubDestinationSettingsT = DvbSubDestinationSettings>
    CaptionDestinationSettings& WithDvbSubDestinationSettings(DvbSubDestinationSettingsT&& value) { SetDvbSubDestinationSettings(std::forward<DvbSubDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to CEA/EIA-608 and CEA/EIA-708 (also called embedded or
     * ancillary) captions. Set up embedded captions in the same output as your video.
     * For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/embedded-output-captions.html.
     */
    inline const EmbeddedDestinationSettings& GetEmbeddedDestinationSettings() const { return m_embeddedDestinationSettings; }
    inline bool EmbeddedDestinationSettingsHasBeenSet() const { return m_embeddedDestinationSettingsHasBeenSet; }
    template<typename EmbeddedDestinationSettingsT = EmbeddedDestinationSettings>
    void SetEmbeddedDestinationSettings(EmbeddedDestinationSettingsT&& value) { m_embeddedDestinationSettingsHasBeenSet = true; m_embeddedDestinationSettings = std::forward<EmbeddedDestinationSettingsT>(value); }
    template<typename EmbeddedDestinationSettingsT = EmbeddedDestinationSettings>
    CaptionDestinationSettings& WithEmbeddedDestinationSettings(EmbeddedDestinationSettingsT&& value) { SetEmbeddedDestinationSettings(std::forward<EmbeddedDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to IMSC captions. IMSC is a sidecar format that holds captions
     * in a file that is separate from the video container. Set up sidecar captions in
     * the same output group, but different output from your video. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
     */
    inline const ImscDestinationSettings& GetImscDestinationSettings() const { return m_imscDestinationSettings; }
    inline bool ImscDestinationSettingsHasBeenSet() const { return m_imscDestinationSettingsHasBeenSet; }
    template<typename ImscDestinationSettingsT = ImscDestinationSettings>
    void SetImscDestinationSettings(ImscDestinationSettingsT&& value) { m_imscDestinationSettingsHasBeenSet = true; m_imscDestinationSettings = std::forward<ImscDestinationSettingsT>(value); }
    template<typename ImscDestinationSettingsT = ImscDestinationSettings>
    CaptionDestinationSettings& WithImscDestinationSettings(ImscDestinationSettingsT&& value) { SetImscDestinationSettings(std::forward<ImscDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to SCC captions. SCC is a sidecar format that holds captions in
     * a file that is separate from the video container. Set up sidecar captions in the
     * same output group, but different output from your video. For more information,
     * see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/scc-srt-output-captions.html.
     */
    inline const SccDestinationSettings& GetSccDestinationSettings() const { return m_sccDestinationSettings; }
    inline bool SccDestinationSettingsHasBeenSet() const { return m_sccDestinationSettingsHasBeenSet; }
    template<typename SccDestinationSettingsT = SccDestinationSettings>
    void SetSccDestinationSettings(SccDestinationSettingsT&& value) { m_sccDestinationSettingsHasBeenSet = true; m_sccDestinationSettings = std::forward<SccDestinationSettingsT>(value); }
    template<typename SccDestinationSettingsT = SccDestinationSettings>
    CaptionDestinationSettings& WithSccDestinationSettings(SccDestinationSettingsT&& value) { SetSccDestinationSettings(std::forward<SccDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to SRT captions. SRT is a sidecar format that holds captions in
     * a file that is separate from the video container. Set up sidecar captions in the
     * same output group, but different output from your video.
     */
    inline const SrtDestinationSettings& GetSrtDestinationSettings() const { return m_srtDestinationSettings; }
    inline bool SrtDestinationSettingsHasBeenSet() const { return m_srtDestinationSettingsHasBeenSet; }
    template<typename SrtDestinationSettingsT = SrtDestinationSettings>
    void SetSrtDestinationSettings(SrtDestinationSettingsT&& value) { m_srtDestinationSettingsHasBeenSet = true; m_srtDestinationSettings = std::forward<SrtDestinationSettingsT>(value); }
    template<typename SrtDestinationSettingsT = SrtDestinationSettings>
    CaptionDestinationSettings& WithSrtDestinationSettings(SrtDestinationSettingsT&& value) { SetSrtDestinationSettings(std::forward<SrtDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to teletext captions. Set up teletext captions in the same
     * output as your video. For more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/teletext-output-captions.html.
     */
    inline const TeletextDestinationSettings& GetTeletextDestinationSettings() const { return m_teletextDestinationSettings; }
    inline bool TeletextDestinationSettingsHasBeenSet() const { return m_teletextDestinationSettingsHasBeenSet; }
    template<typename TeletextDestinationSettingsT = TeletextDestinationSettings>
    void SetTeletextDestinationSettings(TeletextDestinationSettingsT&& value) { m_teletextDestinationSettingsHasBeenSet = true; m_teletextDestinationSettings = std::forward<TeletextDestinationSettingsT>(value); }
    template<typename TeletextDestinationSettingsT = TeletextDestinationSettings>
    CaptionDestinationSettings& WithTeletextDestinationSettings(TeletextDestinationSettingsT&& value) { SetTeletextDestinationSettings(std::forward<TeletextDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to TTML captions. TTML is a sidecar format that holds captions
     * in a file that is separate from the video container. Set up sidecar captions in
     * the same output group, but different output from your video. For more
     * information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
     */
    inline const TtmlDestinationSettings& GetTtmlDestinationSettings() const { return m_ttmlDestinationSettings; }
    inline bool TtmlDestinationSettingsHasBeenSet() const { return m_ttmlDestinationSettingsHasBeenSet; }
    template<typename TtmlDestinationSettingsT = TtmlDestinationSettings>
    void SetTtmlDestinationSettings(TtmlDestinationSettingsT&& value) { m_ttmlDestinationSettingsHasBeenSet = true; m_ttmlDestinationSettings = std::forward<TtmlDestinationSettingsT>(value); }
    template<typename TtmlDestinationSettingsT = TtmlDestinationSettings>
    CaptionDestinationSettings& WithTtmlDestinationSettings(TtmlDestinationSettingsT&& value) { SetTtmlDestinationSettings(std::forward<TtmlDestinationSettingsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings related to WebVTT captions. WebVTT is a sidecar format that holds
     * captions in a file that is separate from the video container. Set up sidecar
     * captions in the same output group, but different output from your video. For
     * more information, see
     * https://docs.aws.amazon.com/mediaconvert/latest/ug/ttml-and-webvtt-output-captions.html.
     */
    inline const WebvttDestinationSettings& GetWebvttDestinationSettings() const { return m_webvttDestinationSettings; }
    inline bool WebvttDestinationSettingsHasBeenSet() const { return m_webvttDestinationSettingsHasBeenSet; }
    template<typename WebvttDestinationSettingsT = WebvttDestinationSettings>
    void SetWebvttDestinationSettings(WebvttDestinationSettingsT&& value) { m_webvttDestinationSettingsHasBeenSet = true; m_webvttDestinationSettings = std::forward<WebvttDestinationSettingsT>(value); }
    template<typename WebvttDestinationSettingsT = WebvttDestinationSettings>
    CaptionDestinationSettings& WithWebvttDestinationSettings(WebvttDestinationSettingsT&& value) { SetWebvttDestinationSettings(std::forward<WebvttDestinationSettingsT>(value)); return *this;}
    ///@}
  private:

    BurninDestinationSettings m_burninDestinationSettings;
    bool m_burninDestinationSettingsHasBeenSet = false;

    CaptionDestinationType m_destinationType{CaptionDestinationType::NOT_SET};
    bool m_destinationTypeHasBeenSet = false;

    DvbSubDestinationSettings m_dvbSubDestinationSettings;
    bool m_dvbSubDestinationSettingsHasBeenSet = false;

    EmbeddedDestinationSettings m_embeddedDestinationSettings;
    bool m_embeddedDestinationSettingsHasBeenSet = false;

    ImscDestinationSettings m_imscDestinationSettings;
    bool m_imscDestinationSettingsHasBeenSet = false;

    SccDestinationSettings m_sccDestinationSettings;
    bool m_sccDestinationSettingsHasBeenSet = false;

    SrtDestinationSettings m_srtDestinationSettings;
    bool m_srtDestinationSettingsHasBeenSet = false;

    TeletextDestinationSettings m_teletextDestinationSettings;
    bool m_teletextDestinationSettingsHasBeenSet = false;

    TtmlDestinationSettings m_ttmlDestinationSettings;
    bool m_ttmlDestinationSettingsHasBeenSet = false;

    WebvttDestinationSettings m_webvttDestinationSettings;
    bool m_webvttDestinationSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
