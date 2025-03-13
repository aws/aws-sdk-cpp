/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconnect/MediaConnect_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mediaconnect/model/Colorimetry.h>
#include <aws/mediaconnect/model/Range.h>
#include <aws/mediaconnect/model/ScanMode.h>
#include <aws/mediaconnect/model/Tcs.h>
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
namespace MediaConnect
{
namespace Model
{

  /**
   * FMTP<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/Fmtp">AWS
   * API Reference</a></p>
   */
  class Fmtp
  {
  public:
    AWS_MEDIACONNECT_API Fmtp() = default;
    AWS_MEDIACONNECT_API Fmtp(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Fmtp& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The format of the audio channel.
     */
    inline const Aws::String& GetChannelOrder() const { return m_channelOrder; }
    inline bool ChannelOrderHasBeenSet() const { return m_channelOrderHasBeenSet; }
    template<typename ChannelOrderT = Aws::String>
    void SetChannelOrder(ChannelOrderT&& value) { m_channelOrderHasBeenSet = true; m_channelOrder = std::forward<ChannelOrderT>(value); }
    template<typename ChannelOrderT = Aws::String>
    Fmtp& WithChannelOrder(ChannelOrderT&& value) { SetChannelOrder(std::forward<ChannelOrderT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The format that is used for the representation of color.
     */
    inline Colorimetry GetColorimetry() const { return m_colorimetry; }
    inline bool ColorimetryHasBeenSet() const { return m_colorimetryHasBeenSet; }
    inline void SetColorimetry(Colorimetry value) { m_colorimetryHasBeenSet = true; m_colorimetry = value; }
    inline Fmtp& WithColorimetry(Colorimetry value) { SetColorimetry(value); return *this;}
    ///@}

    ///@{
    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline const Aws::String& GetExactFramerate() const { return m_exactFramerate; }
    inline bool ExactFramerateHasBeenSet() const { return m_exactFramerateHasBeenSet; }
    template<typename ExactFramerateT = Aws::String>
    void SetExactFramerate(ExactFramerateT&& value) { m_exactFramerateHasBeenSet = true; m_exactFramerate = std::forward<ExactFramerateT>(value); }
    template<typename ExactFramerateT = Aws::String>
    Fmtp& WithExactFramerate(ExactFramerateT&& value) { SetExactFramerate(std::forward<ExactFramerateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline const Aws::String& GetPar() const { return m_par; }
    inline bool ParHasBeenSet() const { return m_parHasBeenSet; }
    template<typename ParT = Aws::String>
    void SetPar(ParT&& value) { m_parHasBeenSet = true; m_par = std::forward<ParT>(value); }
    template<typename ParT = Aws::String>
    Fmtp& WithPar(ParT&& value) { SetPar(std::forward<ParT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * The encoding range of the video.
     */
    inline Range GetRange() const { return m_range; }
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }
    inline void SetRange(Range value) { m_rangeHasBeenSet = true; m_range = value; }
    inline Fmtp& WithRange(Range value) { SetRange(value); return *this;}
    ///@}

    ///@{
    /**
     * The type of compression that was used to smooth the video’s appearance
     */
    inline ScanMode GetScanMode() const { return m_scanMode; }
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }
    inline void SetScanMode(ScanMode value) { m_scanModeHasBeenSet = true; m_scanMode = value; }
    inline Fmtp& WithScanMode(ScanMode value) { SetScanMode(value); return *this;}
    ///@}

    ///@{
    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline Tcs GetTcs() const { return m_tcs; }
    inline bool TcsHasBeenSet() const { return m_tcsHasBeenSet; }
    inline void SetTcs(Tcs value) { m_tcsHasBeenSet = true; m_tcs = value; }
    inline Fmtp& WithTcs(Tcs value) { SetTcs(value); return *this;}
    ///@}
  private:

    Aws::String m_channelOrder;
    bool m_channelOrderHasBeenSet = false;

    Colorimetry m_colorimetry{Colorimetry::NOT_SET};
    bool m_colorimetryHasBeenSet = false;

    Aws::String m_exactFramerate;
    bool m_exactFramerateHasBeenSet = false;

    Aws::String m_par;
    bool m_parHasBeenSet = false;

    Range m_range{Range::NOT_SET};
    bool m_rangeHasBeenSet = false;

    ScanMode m_scanMode{ScanMode::NOT_SET};
    bool m_scanModeHasBeenSet = false;

    Tcs m_tcs{Tcs::NOT_SET};
    bool m_tcsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
