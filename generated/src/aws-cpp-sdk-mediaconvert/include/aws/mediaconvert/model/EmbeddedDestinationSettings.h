/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>

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
   * Settings related to CEA/EIA-608 and CEA/EIA-708 (also called embedded or
   * ancillary) captions. Set up embedded captions in the same output as your video.
   * For more information, see
   * https://docs.aws.amazon.com/mediaconvert/latest/ug/embedded-output-captions.html.
   * When you work directly in your JSON job specification, include this object and
   * any required children when you set destinationType to EMBEDDED,
   * EMBEDDED_PLUS_SCTE20, or SCTE20_PLUS_EMBEDDED.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/EmbeddedDestinationSettings">AWS
   * API Reference</a></p>
   */
  class EmbeddedDestinationSettings
  {
  public:
    AWS_MEDIACONVERT_API EmbeddedDestinationSettings();
    AWS_MEDIACONVERT_API EmbeddedDestinationSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API EmbeddedDestinationSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * captions are embedded in the video stream. Specify a CC number for each captions
     * channel in this output. If you have two channels, choose CC numbers that aren't
     * in the same field. For example, choose 1 and 3. For more information, see
     * https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline int GetDestination608ChannelNumber() const{ return m_destination608ChannelNumber; }

    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * captions are embedded in the video stream. Specify a CC number for each captions
     * channel in this output. If you have two channels, choose CC numbers that aren't
     * in the same field. For example, choose 1 and 3. For more information, see
     * https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline bool Destination608ChannelNumberHasBeenSet() const { return m_destination608ChannelNumberHasBeenSet; }

    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * captions are embedded in the video stream. Specify a CC number for each captions
     * channel in this output. If you have two channels, choose CC numbers that aren't
     * in the same field. For example, choose 1 and 3. For more information, see
     * https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline void SetDestination608ChannelNumber(int value) { m_destination608ChannelNumberHasBeenSet = true; m_destination608ChannelNumber = value; }

    /**
     * Ignore this setting unless your input captions are SCC format and your output
     * captions are embedded in the video stream. Specify a CC number for each captions
     * channel in this output. If you have two channels, choose CC numbers that aren't
     * in the same field. For example, choose 1 and 3. For more information, see
     * https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline EmbeddedDestinationSettings& WithDestination608ChannelNumber(int value) { SetDestination608ChannelNumber(value); return *this;}


    /**
     * Ignore this setting unless your input captions are SCC format and you want both
     * 608 and 708 captions embedded in your output stream. Optionally, specify the 708
     * service number for each output captions channel. Choose a different number for
     * each channel. To use this setting, also set Force 608 to 708 upconvert
     * (Convert608To708) to Upconvert (UPCONVERT) in your input captions selector
     * settings. If you choose to upconvert but don't specify a 708 service number,
     * MediaConvert uses the number that you specify for CC channel number
     * (destination608ChannelNumber) for the 708 service number. For more information,
     * see https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline int GetDestination708ServiceNumber() const{ return m_destination708ServiceNumber; }

    /**
     * Ignore this setting unless your input captions are SCC format and you want both
     * 608 and 708 captions embedded in your output stream. Optionally, specify the 708
     * service number for each output captions channel. Choose a different number for
     * each channel. To use this setting, also set Force 608 to 708 upconvert
     * (Convert608To708) to Upconvert (UPCONVERT) in your input captions selector
     * settings. If you choose to upconvert but don't specify a 708 service number,
     * MediaConvert uses the number that you specify for CC channel number
     * (destination608ChannelNumber) for the 708 service number. For more information,
     * see https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline bool Destination708ServiceNumberHasBeenSet() const { return m_destination708ServiceNumberHasBeenSet; }

    /**
     * Ignore this setting unless your input captions are SCC format and you want both
     * 608 and 708 captions embedded in your output stream. Optionally, specify the 708
     * service number for each output captions channel. Choose a different number for
     * each channel. To use this setting, also set Force 608 to 708 upconvert
     * (Convert608To708) to Upconvert (UPCONVERT) in your input captions selector
     * settings. If you choose to upconvert but don't specify a 708 service number,
     * MediaConvert uses the number that you specify for CC channel number
     * (destination608ChannelNumber) for the 708 service number. For more information,
     * see https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline void SetDestination708ServiceNumber(int value) { m_destination708ServiceNumberHasBeenSet = true; m_destination708ServiceNumber = value; }

    /**
     * Ignore this setting unless your input captions are SCC format and you want both
     * 608 and 708 captions embedded in your output stream. Optionally, specify the 708
     * service number for each output captions channel. Choose a different number for
     * each channel. To use this setting, also set Force 608 to 708 upconvert
     * (Convert608To708) to Upconvert (UPCONVERT) in your input captions selector
     * settings. If you choose to upconvert but don't specify a 708 service number,
     * MediaConvert uses the number that you specify for CC channel number
     * (destination608ChannelNumber) for the 708 service number. For more information,
     * see https://docs.aws.amazon.com/console/mediaconvert/dual-scc-to-embedded.
     */
    inline EmbeddedDestinationSettings& WithDestination708ServiceNumber(int value) { SetDestination708ServiceNumber(value); return *this;}

  private:

    int m_destination608ChannelNumber;
    bool m_destination608ChannelNumberHasBeenSet = false;

    int m_destination708ServiceNumber;
    bool m_destination708ServiceNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
