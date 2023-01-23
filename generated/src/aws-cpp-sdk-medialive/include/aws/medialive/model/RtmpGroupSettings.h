/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/AuthenticationScheme.h>
#include <aws/medialive/model/RtmpCacheFullBehavior.h>
#include <aws/medialive/model/RtmpCaptionData.h>
#include <aws/medialive/model/InputLossActionForRtmpOut.h>
#include <aws/medialive/model/RtmpAdMarkers.h>
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
   * Rtmp Group Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/RtmpGroupSettings">AWS
   * API Reference</a></p>
   */
  class RtmpGroupSettings
  {
  public:
    AWS_MEDIALIVE_API RtmpGroupSettings();
    AWS_MEDIALIVE_API RtmpGroupSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API RtmpGroupSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline const Aws::Vector<RtmpAdMarkers>& GetAdMarkers() const{ return m_adMarkers; }

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline bool AdMarkersHasBeenSet() const { return m_adMarkersHasBeenSet; }

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline void SetAdMarkers(const Aws::Vector<RtmpAdMarkers>& value) { m_adMarkersHasBeenSet = true; m_adMarkers = value; }

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline void SetAdMarkers(Aws::Vector<RtmpAdMarkers>&& value) { m_adMarkersHasBeenSet = true; m_adMarkers = std::move(value); }

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline RtmpGroupSettings& WithAdMarkers(const Aws::Vector<RtmpAdMarkers>& value) { SetAdMarkers(value); return *this;}

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline RtmpGroupSettings& WithAdMarkers(Aws::Vector<RtmpAdMarkers>&& value) { SetAdMarkers(std::move(value)); return *this;}

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline RtmpGroupSettings& AddAdMarkers(const RtmpAdMarkers& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(value); return *this; }

    /**
     * Choose the ad marker type for this output group. MediaLive will create a message
     * based on the content of each SCTE-35 message, format it for that marker type,
     * and insert it in the datastream.
     */
    inline RtmpGroupSettings& AddAdMarkers(RtmpAdMarkers&& value) { m_adMarkersHasBeenSet = true; m_adMarkers.push_back(std::move(value)); return *this; }


    /**
     * Authentication scheme to use when connecting with CDN
     */
    inline const AuthenticationScheme& GetAuthenticationScheme() const{ return m_authenticationScheme; }

    /**
     * Authentication scheme to use when connecting with CDN
     */
    inline bool AuthenticationSchemeHasBeenSet() const { return m_authenticationSchemeHasBeenSet; }

    /**
     * Authentication scheme to use when connecting with CDN
     */
    inline void SetAuthenticationScheme(const AuthenticationScheme& value) { m_authenticationSchemeHasBeenSet = true; m_authenticationScheme = value; }

    /**
     * Authentication scheme to use when connecting with CDN
     */
    inline void SetAuthenticationScheme(AuthenticationScheme&& value) { m_authenticationSchemeHasBeenSet = true; m_authenticationScheme = std::move(value); }

    /**
     * Authentication scheme to use when connecting with CDN
     */
    inline RtmpGroupSettings& WithAuthenticationScheme(const AuthenticationScheme& value) { SetAuthenticationScheme(value); return *this;}

    /**
     * Authentication scheme to use when connecting with CDN
     */
    inline RtmpGroupSettings& WithAuthenticationScheme(AuthenticationScheme&& value) { SetAuthenticationScheme(std::move(value)); return *this;}


    /**
     * Controls behavior when content cache fills up. If remote origin server stalls
     * the RTMP connection and does not accept content fast enough the 'Media Cache'
     * will fill up. When the cache reaches the duration specified by cacheLength the
     * cache will stop accepting new content. If set to disconnectImmediately, the RTMP
     * output will force a disconnect. Clear the media cache, and reconnect after
     * restartDelay seconds. If set to waitForServer, the RTMP output will wait up to 5
     * minutes to allow the origin server to begin accepting data again.
     */
    inline const RtmpCacheFullBehavior& GetCacheFullBehavior() const{ return m_cacheFullBehavior; }

    /**
     * Controls behavior when content cache fills up. If remote origin server stalls
     * the RTMP connection and does not accept content fast enough the 'Media Cache'
     * will fill up. When the cache reaches the duration specified by cacheLength the
     * cache will stop accepting new content. If set to disconnectImmediately, the RTMP
     * output will force a disconnect. Clear the media cache, and reconnect after
     * restartDelay seconds. If set to waitForServer, the RTMP output will wait up to 5
     * minutes to allow the origin server to begin accepting data again.
     */
    inline bool CacheFullBehaviorHasBeenSet() const { return m_cacheFullBehaviorHasBeenSet; }

    /**
     * Controls behavior when content cache fills up. If remote origin server stalls
     * the RTMP connection and does not accept content fast enough the 'Media Cache'
     * will fill up. When the cache reaches the duration specified by cacheLength the
     * cache will stop accepting new content. If set to disconnectImmediately, the RTMP
     * output will force a disconnect. Clear the media cache, and reconnect after
     * restartDelay seconds. If set to waitForServer, the RTMP output will wait up to 5
     * minutes to allow the origin server to begin accepting data again.
     */
    inline void SetCacheFullBehavior(const RtmpCacheFullBehavior& value) { m_cacheFullBehaviorHasBeenSet = true; m_cacheFullBehavior = value; }

    /**
     * Controls behavior when content cache fills up. If remote origin server stalls
     * the RTMP connection and does not accept content fast enough the 'Media Cache'
     * will fill up. When the cache reaches the duration specified by cacheLength the
     * cache will stop accepting new content. If set to disconnectImmediately, the RTMP
     * output will force a disconnect. Clear the media cache, and reconnect after
     * restartDelay seconds. If set to waitForServer, the RTMP output will wait up to 5
     * minutes to allow the origin server to begin accepting data again.
     */
    inline void SetCacheFullBehavior(RtmpCacheFullBehavior&& value) { m_cacheFullBehaviorHasBeenSet = true; m_cacheFullBehavior = std::move(value); }

    /**
     * Controls behavior when content cache fills up. If remote origin server stalls
     * the RTMP connection and does not accept content fast enough the 'Media Cache'
     * will fill up. When the cache reaches the duration specified by cacheLength the
     * cache will stop accepting new content. If set to disconnectImmediately, the RTMP
     * output will force a disconnect. Clear the media cache, and reconnect after
     * restartDelay seconds. If set to waitForServer, the RTMP output will wait up to 5
     * minutes to allow the origin server to begin accepting data again.
     */
    inline RtmpGroupSettings& WithCacheFullBehavior(const RtmpCacheFullBehavior& value) { SetCacheFullBehavior(value); return *this;}

    /**
     * Controls behavior when content cache fills up. If remote origin server stalls
     * the RTMP connection and does not accept content fast enough the 'Media Cache'
     * will fill up. When the cache reaches the duration specified by cacheLength the
     * cache will stop accepting new content. If set to disconnectImmediately, the RTMP
     * output will force a disconnect. Clear the media cache, and reconnect after
     * restartDelay seconds. If set to waitForServer, the RTMP output will wait up to 5
     * minutes to allow the origin server to begin accepting data again.
     */
    inline RtmpGroupSettings& WithCacheFullBehavior(RtmpCacheFullBehavior&& value) { SetCacheFullBehavior(std::move(value)); return *this;}


    /**
     * Cache length, in seconds, is used to calculate buffer size.
     */
    inline int GetCacheLength() const{ return m_cacheLength; }

    /**
     * Cache length, in seconds, is used to calculate buffer size.
     */
    inline bool CacheLengthHasBeenSet() const { return m_cacheLengthHasBeenSet; }

    /**
     * Cache length, in seconds, is used to calculate buffer size.
     */
    inline void SetCacheLength(int value) { m_cacheLengthHasBeenSet = true; m_cacheLength = value; }

    /**
     * Cache length, in seconds, is used to calculate buffer size.
     */
    inline RtmpGroupSettings& WithCacheLength(int value) { SetCacheLength(value); return *this;}


    /**
     * Controls the types of data that passes to onCaptionInfo outputs.  If set to
     * 'all' then 608 and 708 carried DTVCC data will be passed.  If set to
     * 'field1AndField2608' then DTVCC data will be stripped out, but 608 data from
     * both fields will be passed. If set to 'field1608' then only the data carried in
     * 608 from field 1 video will be passed.
     */
    inline const RtmpCaptionData& GetCaptionData() const{ return m_captionData; }

    /**
     * Controls the types of data that passes to onCaptionInfo outputs.  If set to
     * 'all' then 608 and 708 carried DTVCC data will be passed.  If set to
     * 'field1AndField2608' then DTVCC data will be stripped out, but 608 data from
     * both fields will be passed. If set to 'field1608' then only the data carried in
     * 608 from field 1 video will be passed.
     */
    inline bool CaptionDataHasBeenSet() const { return m_captionDataHasBeenSet; }

    /**
     * Controls the types of data that passes to onCaptionInfo outputs.  If set to
     * 'all' then 608 and 708 carried DTVCC data will be passed.  If set to
     * 'field1AndField2608' then DTVCC data will be stripped out, but 608 data from
     * both fields will be passed. If set to 'field1608' then only the data carried in
     * 608 from field 1 video will be passed.
     */
    inline void SetCaptionData(const RtmpCaptionData& value) { m_captionDataHasBeenSet = true; m_captionData = value; }

    /**
     * Controls the types of data that passes to onCaptionInfo outputs.  If set to
     * 'all' then 608 and 708 carried DTVCC data will be passed.  If set to
     * 'field1AndField2608' then DTVCC data will be stripped out, but 608 data from
     * both fields will be passed. If set to 'field1608' then only the data carried in
     * 608 from field 1 video will be passed.
     */
    inline void SetCaptionData(RtmpCaptionData&& value) { m_captionDataHasBeenSet = true; m_captionData = std::move(value); }

    /**
     * Controls the types of data that passes to onCaptionInfo outputs.  If set to
     * 'all' then 608 and 708 carried DTVCC data will be passed.  If set to
     * 'field1AndField2608' then DTVCC data will be stripped out, but 608 data from
     * both fields will be passed. If set to 'field1608' then only the data carried in
     * 608 from field 1 video will be passed.
     */
    inline RtmpGroupSettings& WithCaptionData(const RtmpCaptionData& value) { SetCaptionData(value); return *this;}

    /**
     * Controls the types of data that passes to onCaptionInfo outputs.  If set to
     * 'all' then 608 and 708 carried DTVCC data will be passed.  If set to
     * 'field1AndField2608' then DTVCC data will be stripped out, but 608 data from
     * both fields will be passed. If set to 'field1608' then only the data carried in
     * 608 from field 1 video will be passed.
     */
    inline RtmpGroupSettings& WithCaptionData(RtmpCaptionData&& value) { SetCaptionData(std::move(value)); return *this;}


    /**
     * Controls the behavior of this RTMP group if input becomes unavailable.

-
     * emitOutput: Emit a slate until input returns.
- pauseOutput: Stop transmitting
     * data until input returns. This does not close the underlying RTMP connection.
     */
    inline const InputLossActionForRtmpOut& GetInputLossAction() const{ return m_inputLossAction; }

    /**
     * Controls the behavior of this RTMP group if input becomes unavailable.

-
     * emitOutput: Emit a slate until input returns.
- pauseOutput: Stop transmitting
     * data until input returns. This does not close the underlying RTMP connection.
     */
    inline bool InputLossActionHasBeenSet() const { return m_inputLossActionHasBeenSet; }

    /**
     * Controls the behavior of this RTMP group if input becomes unavailable.

-
     * emitOutput: Emit a slate until input returns.
- pauseOutput: Stop transmitting
     * data until input returns. This does not close the underlying RTMP connection.
     */
    inline void SetInputLossAction(const InputLossActionForRtmpOut& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = value; }

    /**
     * Controls the behavior of this RTMP group if input becomes unavailable.

-
     * emitOutput: Emit a slate until input returns.
- pauseOutput: Stop transmitting
     * data until input returns. This does not close the underlying RTMP connection.
     */
    inline void SetInputLossAction(InputLossActionForRtmpOut&& value) { m_inputLossActionHasBeenSet = true; m_inputLossAction = std::move(value); }

    /**
     * Controls the behavior of this RTMP group if input becomes unavailable.

-
     * emitOutput: Emit a slate until input returns.
- pauseOutput: Stop transmitting
     * data until input returns. This does not close the underlying RTMP connection.
     */
    inline RtmpGroupSettings& WithInputLossAction(const InputLossActionForRtmpOut& value) { SetInputLossAction(value); return *this;}

    /**
     * Controls the behavior of this RTMP group if input becomes unavailable.

-
     * emitOutput: Emit a slate until input returns.
- pauseOutput: Stop transmitting
     * data until input returns. This does not close the underlying RTMP connection.
     */
    inline RtmpGroupSettings& WithInputLossAction(InputLossActionForRtmpOut&& value) { SetInputLossAction(std::move(value)); return *this;}


    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline int GetRestartDelay() const{ return m_restartDelay; }

    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline bool RestartDelayHasBeenSet() const { return m_restartDelayHasBeenSet; }

    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline void SetRestartDelay(int value) { m_restartDelayHasBeenSet = true; m_restartDelay = value; }

    /**
     * If a streaming output fails, number of seconds to wait until a restart is
     * initiated. A value of 0 means never restart.
     */
    inline RtmpGroupSettings& WithRestartDelay(int value) { SetRestartDelay(value); return *this;}

  private:

    Aws::Vector<RtmpAdMarkers> m_adMarkers;
    bool m_adMarkersHasBeenSet = false;

    AuthenticationScheme m_authenticationScheme;
    bool m_authenticationSchemeHasBeenSet = false;

    RtmpCacheFullBehavior m_cacheFullBehavior;
    bool m_cacheFullBehaviorHasBeenSet = false;

    int m_cacheLength;
    bool m_cacheLengthHasBeenSet = false;

    RtmpCaptionData m_captionData;
    bool m_captionDataHasBeenSet = false;

    InputLossActionForRtmpOut m_inputLossAction;
    bool m_inputLossActionHasBeenSet = false;

    int m_restartDelay;
    bool m_restartDelayHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
