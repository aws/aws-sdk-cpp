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
   * The settings that you want to use to define the media stream.<p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconnect-2018-11-14/FmtpRequest">AWS
   * API Reference</a></p>
   */
  class FmtpRequest
  {
  public:
    AWS_MEDIACONNECT_API FmtpRequest();
    AWS_MEDIACONNECT_API FmtpRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API FmtpRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONNECT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * The format of the audio channel.
     */
    inline const Aws::String& GetChannelOrder() const{ return m_channelOrder; }

    /**
     * The format of the audio channel.
     */
    inline bool ChannelOrderHasBeenSet() const { return m_channelOrderHasBeenSet; }

    /**
     * The format of the audio channel.
     */
    inline void SetChannelOrder(const Aws::String& value) { m_channelOrderHasBeenSet = true; m_channelOrder = value; }

    /**
     * The format of the audio channel.
     */
    inline void SetChannelOrder(Aws::String&& value) { m_channelOrderHasBeenSet = true; m_channelOrder = std::move(value); }

    /**
     * The format of the audio channel.
     */
    inline void SetChannelOrder(const char* value) { m_channelOrderHasBeenSet = true; m_channelOrder.assign(value); }

    /**
     * The format of the audio channel.
     */
    inline FmtpRequest& WithChannelOrder(const Aws::String& value) { SetChannelOrder(value); return *this;}

    /**
     * The format of the audio channel.
     */
    inline FmtpRequest& WithChannelOrder(Aws::String&& value) { SetChannelOrder(std::move(value)); return *this;}

    /**
     * The format of the audio channel.
     */
    inline FmtpRequest& WithChannelOrder(const char* value) { SetChannelOrder(value); return *this;}


    /**
     * The format that is used for the representation of color.
     */
    inline const Colorimetry& GetColorimetry() const{ return m_colorimetry; }

    /**
     * The format that is used for the representation of color.
     */
    inline bool ColorimetryHasBeenSet() const { return m_colorimetryHasBeenSet; }

    /**
     * The format that is used for the representation of color.
     */
    inline void SetColorimetry(const Colorimetry& value) { m_colorimetryHasBeenSet = true; m_colorimetry = value; }

    /**
     * The format that is used for the representation of color.
     */
    inline void SetColorimetry(Colorimetry&& value) { m_colorimetryHasBeenSet = true; m_colorimetry = std::move(value); }

    /**
     * The format that is used for the representation of color.
     */
    inline FmtpRequest& WithColorimetry(const Colorimetry& value) { SetColorimetry(value); return *this;}

    /**
     * The format that is used for the representation of color.
     */
    inline FmtpRequest& WithColorimetry(Colorimetry&& value) { SetColorimetry(std::move(value)); return *this;}


    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline const Aws::String& GetExactFramerate() const{ return m_exactFramerate; }

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline bool ExactFramerateHasBeenSet() const { return m_exactFramerateHasBeenSet; }

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline void SetExactFramerate(const Aws::String& value) { m_exactFramerateHasBeenSet = true; m_exactFramerate = value; }

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline void SetExactFramerate(Aws::String&& value) { m_exactFramerateHasBeenSet = true; m_exactFramerate = std::move(value); }

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline void SetExactFramerate(const char* value) { m_exactFramerateHasBeenSet = true; m_exactFramerate.assign(value); }

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline FmtpRequest& WithExactFramerate(const Aws::String& value) { SetExactFramerate(value); return *this;}

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline FmtpRequest& WithExactFramerate(Aws::String&& value) { SetExactFramerate(std::move(value)); return *this;}

    /**
     * The frame rate for the video stream, in frames/second. For example: 60000/1001.
     * If you specify a whole number, MediaConnect uses a ratio of N/1. For example, if
     * you specify 60, MediaConnect uses 60/1 as the exactFramerate.
     */
    inline FmtpRequest& WithExactFramerate(const char* value) { SetExactFramerate(value); return *this;}


    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline const Aws::String& GetPar() const{ return m_par; }

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline bool ParHasBeenSet() const { return m_parHasBeenSet; }

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline void SetPar(const Aws::String& value) { m_parHasBeenSet = true; m_par = value; }

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline void SetPar(Aws::String&& value) { m_parHasBeenSet = true; m_par = std::move(value); }

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline void SetPar(const char* value) { m_parHasBeenSet = true; m_par.assign(value); }

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline FmtpRequest& WithPar(const Aws::String& value) { SetPar(value); return *this;}

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline FmtpRequest& WithPar(Aws::String&& value) { SetPar(std::move(value)); return *this;}

    /**
     * The pixel aspect ratio (PAR) of the video.
     */
    inline FmtpRequest& WithPar(const char* value) { SetPar(value); return *this;}


    /**
     * The encoding range of the video.
     */
    inline const Range& GetRange() const{ return m_range; }

    /**
     * The encoding range of the video.
     */
    inline bool RangeHasBeenSet() const { return m_rangeHasBeenSet; }

    /**
     * The encoding range of the video.
     */
    inline void SetRange(const Range& value) { m_rangeHasBeenSet = true; m_range = value; }

    /**
     * The encoding range of the video.
     */
    inline void SetRange(Range&& value) { m_rangeHasBeenSet = true; m_range = std::move(value); }

    /**
     * The encoding range of the video.
     */
    inline FmtpRequest& WithRange(const Range& value) { SetRange(value); return *this;}

    /**
     * The encoding range of the video.
     */
    inline FmtpRequest& WithRange(Range&& value) { SetRange(std::move(value)); return *this;}


    /**
     * The type of compression that was used to smooth the video’s appearance.
     */
    inline const ScanMode& GetScanMode() const{ return m_scanMode; }

    /**
     * The type of compression that was used to smooth the video’s appearance.
     */
    inline bool ScanModeHasBeenSet() const { return m_scanModeHasBeenSet; }

    /**
     * The type of compression that was used to smooth the video’s appearance.
     */
    inline void SetScanMode(const ScanMode& value) { m_scanModeHasBeenSet = true; m_scanMode = value; }

    /**
     * The type of compression that was used to smooth the video’s appearance.
     */
    inline void SetScanMode(ScanMode&& value) { m_scanModeHasBeenSet = true; m_scanMode = std::move(value); }

    /**
     * The type of compression that was used to smooth the video’s appearance.
     */
    inline FmtpRequest& WithScanMode(const ScanMode& value) { SetScanMode(value); return *this;}

    /**
     * The type of compression that was used to smooth the video’s appearance.
     */
    inline FmtpRequest& WithScanMode(ScanMode&& value) { SetScanMode(std::move(value)); return *this;}


    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline const Tcs& GetTcs() const{ return m_tcs; }

    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline bool TcsHasBeenSet() const { return m_tcsHasBeenSet; }

    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline void SetTcs(const Tcs& value) { m_tcsHasBeenSet = true; m_tcs = value; }

    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline void SetTcs(Tcs&& value) { m_tcsHasBeenSet = true; m_tcs = std::move(value); }

    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline FmtpRequest& WithTcs(const Tcs& value) { SetTcs(value); return *this;}

    /**
     * The transfer characteristic system (TCS) that is used in the video.
     */
    inline FmtpRequest& WithTcs(Tcs&& value) { SetTcs(std::move(value)); return *this;}

  private:

    Aws::String m_channelOrder;
    bool m_channelOrderHasBeenSet = false;

    Colorimetry m_colorimetry;
    bool m_colorimetryHasBeenSet = false;

    Aws::String m_exactFramerate;
    bool m_exactFramerateHasBeenSet = false;

    Aws::String m_par;
    bool m_parHasBeenSet = false;

    Range m_range;
    bool m_rangeHasBeenSet = false;

    ScanMode m_scanMode;
    bool m_scanModeHasBeenSet = false;

    Tcs m_tcs;
    bool m_tcsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConnect
} // namespace Aws
