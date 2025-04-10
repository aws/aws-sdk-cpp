﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Pinpoint
{
namespace Model
{

  /**
   * <p>Specifies the message configuration for a push notification that's sent to
   * participants in a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyPushMessage">AWS
   * API Reference</a></p>
   */
  class JourneyPushMessage
  {
  public:
    AWS_PINPOINT_API JourneyPushMessage() = default;
    AWS_PINPOINT_API JourneyPushMessage(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyPushMessage& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The number of seconds that the push notification service should keep the
     * message, if the service is unable to deliver the notification the first time.
     * This value is converted to an expiration value when it's sent to a
     * push-notification service. If this value is 0, the service treats the
     * notification as if it expires immediately and the service doesn't store or try
     * to deliver the notification again.</p> <p>This value doesn't apply to messages
     * that are sent through the Amazon Device Messaging (ADM) service.</p>
     */
    inline const Aws::String& GetTimeToLive() const { return m_timeToLive; }
    inline bool TimeToLiveHasBeenSet() const { return m_timeToLiveHasBeenSet; }
    template<typename TimeToLiveT = Aws::String>
    void SetTimeToLive(TimeToLiveT&& value) { m_timeToLiveHasBeenSet = true; m_timeToLive = std::forward<TimeToLiveT>(value); }
    template<typename TimeToLiveT = Aws::String>
    JourneyPushMessage& WithTimeToLive(TimeToLiveT&& value) { SetTimeToLive(std::forward<TimeToLiveT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timeToLive;
    bool m_timeToLiveHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
