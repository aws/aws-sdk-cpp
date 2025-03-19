/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/EmbeddedConvert608To708.h>
#include <aws/medialive/model/EmbeddedScte20Detection.h>
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
   * Embedded Source Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/EmbeddedSourceSettings">AWS
   * API Reference</a></p>
   */
  class EmbeddedSourceSettings
  {
  public:
    AWS_MEDIALIVE_API EmbeddedSourceSettings() = default;
    AWS_MEDIALIVE_API EmbeddedSourceSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API EmbeddedSourceSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If upconvert, 608 data is both passed through via the "608 compatibility bytes"
     * fields of the 708 wrapper as well as translated into 708. 708 data present in
     * the source content will be discarded.
     */
    inline EmbeddedConvert608To708 GetConvert608To708() const { return m_convert608To708; }
    inline bool Convert608To708HasBeenSet() const { return m_convert608To708HasBeenSet; }
    inline void SetConvert608To708(EmbeddedConvert608To708 value) { m_convert608To708HasBeenSet = true; m_convert608To708 = value; }
    inline EmbeddedSourceSettings& WithConvert608To708(EmbeddedConvert608To708 value) { SetConvert608To708(value); return *this;}
    ///@}

    ///@{
    /**
     * Set to "auto" to handle streams with intermittent and/or non-aligned SCTE-20 and
     * Embedded captions.
     */
    inline EmbeddedScte20Detection GetScte20Detection() const { return m_scte20Detection; }
    inline bool Scte20DetectionHasBeenSet() const { return m_scte20DetectionHasBeenSet; }
    inline void SetScte20Detection(EmbeddedScte20Detection value) { m_scte20DetectionHasBeenSet = true; m_scte20Detection = value; }
    inline EmbeddedSourceSettings& WithScte20Detection(EmbeddedScte20Detection value) { SetScte20Detection(value); return *this;}
    ///@}

    ///@{
    /**
     * Specifies the 608/708 channel number within the video track from which to
     * extract captions. Unused for passthrough.
     */
    inline int GetSource608ChannelNumber() const { return m_source608ChannelNumber; }
    inline bool Source608ChannelNumberHasBeenSet() const { return m_source608ChannelNumberHasBeenSet; }
    inline void SetSource608ChannelNumber(int value) { m_source608ChannelNumberHasBeenSet = true; m_source608ChannelNumber = value; }
    inline EmbeddedSourceSettings& WithSource608ChannelNumber(int value) { SetSource608ChannelNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * This field is unused and deprecated.
     */
    inline int GetSource608TrackNumber() const { return m_source608TrackNumber; }
    inline bool Source608TrackNumberHasBeenSet() const { return m_source608TrackNumberHasBeenSet; }
    inline void SetSource608TrackNumber(int value) { m_source608TrackNumberHasBeenSet = true; m_source608TrackNumber = value; }
    inline EmbeddedSourceSettings& WithSource608TrackNumber(int value) { SetSource608TrackNumber(value); return *this;}
    ///@}
  private:

    EmbeddedConvert608To708 m_convert608To708{EmbeddedConvert608To708::NOT_SET};
    bool m_convert608To708HasBeenSet = false;

    EmbeddedScte20Detection m_scte20Detection{EmbeddedScte20Detection::NOT_SET};
    bool m_scte20DetectionHasBeenSet = false;

    int m_source608ChannelNumber{0};
    bool m_source608ChannelNumberHasBeenSet = false;

    int m_source608TrackNumber{0};
    bool m_source608TrackNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
