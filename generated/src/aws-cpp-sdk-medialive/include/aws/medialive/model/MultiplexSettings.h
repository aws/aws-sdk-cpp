/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>

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
   * Contains configuration for a Multiplex event<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/MultiplexSettings">AWS
   * API Reference</a></p>
   */
  class MultiplexSettings
  {
  public:
    AWS_MEDIALIVE_API MultiplexSettings();
    AWS_MEDIALIVE_API MultiplexSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API MultiplexSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Maximum video buffer delay in milliseconds.
     */
    inline int GetMaximumVideoBufferDelayMilliseconds() const{ return m_maximumVideoBufferDelayMilliseconds; }

    /**
     * Maximum video buffer delay in milliseconds.
     */
    inline bool MaximumVideoBufferDelayMillisecondsHasBeenSet() const { return m_maximumVideoBufferDelayMillisecondsHasBeenSet; }

    /**
     * Maximum video buffer delay in milliseconds.
     */
    inline void SetMaximumVideoBufferDelayMilliseconds(int value) { m_maximumVideoBufferDelayMillisecondsHasBeenSet = true; m_maximumVideoBufferDelayMilliseconds = value; }

    /**
     * Maximum video buffer delay in milliseconds.
     */
    inline MultiplexSettings& WithMaximumVideoBufferDelayMilliseconds(int value) { SetMaximumVideoBufferDelayMilliseconds(value); return *this;}


    /**
     * Transport stream bit rate.
     */
    inline int GetTransportStreamBitrate() const{ return m_transportStreamBitrate; }

    /**
     * Transport stream bit rate.
     */
    inline bool TransportStreamBitrateHasBeenSet() const { return m_transportStreamBitrateHasBeenSet; }

    /**
     * Transport stream bit rate.
     */
    inline void SetTransportStreamBitrate(int value) { m_transportStreamBitrateHasBeenSet = true; m_transportStreamBitrate = value; }

    /**
     * Transport stream bit rate.
     */
    inline MultiplexSettings& WithTransportStreamBitrate(int value) { SetTransportStreamBitrate(value); return *this;}


    /**
     * Transport stream ID.
     */
    inline int GetTransportStreamId() const{ return m_transportStreamId; }

    /**
     * Transport stream ID.
     */
    inline bool TransportStreamIdHasBeenSet() const { return m_transportStreamIdHasBeenSet; }

    /**
     * Transport stream ID.
     */
    inline void SetTransportStreamId(int value) { m_transportStreamIdHasBeenSet = true; m_transportStreamId = value; }

    /**
     * Transport stream ID.
     */
    inline MultiplexSettings& WithTransportStreamId(int value) { SetTransportStreamId(value); return *this;}


    /**
     * Transport stream reserved bit rate.
     */
    inline int GetTransportStreamReservedBitrate() const{ return m_transportStreamReservedBitrate; }

    /**
     * Transport stream reserved bit rate.
     */
    inline bool TransportStreamReservedBitrateHasBeenSet() const { return m_transportStreamReservedBitrateHasBeenSet; }

    /**
     * Transport stream reserved bit rate.
     */
    inline void SetTransportStreamReservedBitrate(int value) { m_transportStreamReservedBitrateHasBeenSet = true; m_transportStreamReservedBitrate = value; }

    /**
     * Transport stream reserved bit rate.
     */
    inline MultiplexSettings& WithTransportStreamReservedBitrate(int value) { SetTransportStreamReservedBitrate(value); return *this;}

  private:

    int m_maximumVideoBufferDelayMilliseconds;
    bool m_maximumVideoBufferDelayMillisecondsHasBeenSet = false;

    int m_transportStreamBitrate;
    bool m_transportStreamBitrateHasBeenSet = false;

    int m_transportStreamId;
    bool m_transportStreamIdHasBeenSet = false;

    int m_transportStreamReservedBitrate;
    bool m_transportStreamReservedBitrateHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
