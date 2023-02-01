/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/pinpoint/model/State.h>
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
   * <p>Changes the status of a journey.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/JourneyStateRequest">AWS
   * API Reference</a></p>
   */
  class JourneyStateRequest
  {
  public:
    AWS_PINPOINT_API JourneyStateRequest();
    AWS_PINPOINT_API JourneyStateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API JourneyStateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The status of the journey. Currently, Supported values are ACTIVE, PAUSED,
     * and CANCELLED</p> <p>If you cancel a journey, Amazon Pinpoint continues to
     * perform activities that are currently in progress, until those activities are
     * complete. Amazon Pinpoint also continues to collect and aggregate analytics data
     * for those activities, until they are complete, and any activities that were
     * complete when you cancelled the journey.</p> <p>After you cancel a journey, you
     * can't add, change, or remove any activities from the journey. In addition,
     * Amazon Pinpoint stops evaluating the journey and doesn't perform any activities
     * that haven't started.</p> <p>When the journey is paused, Amazon Pinpoint
     * continues to perform activities that are currently in progress, until those
     * activities are complete. Endpoints will stop entering journeys when the journey
     * is paused and will resume entering the journey after the journey is resumed. For
     * wait activities, wait time is paused when the journey is paused. Currently,
     * PAUSED only supports journeys with a segment refresh interval.</p>
     */
    inline const State& GetState() const{ return m_state; }

    /**
     * <p>The status of the journey. Currently, Supported values are ACTIVE, PAUSED,
     * and CANCELLED</p> <p>If you cancel a journey, Amazon Pinpoint continues to
     * perform activities that are currently in progress, until those activities are
     * complete. Amazon Pinpoint also continues to collect and aggregate analytics data
     * for those activities, until they are complete, and any activities that were
     * complete when you cancelled the journey.</p> <p>After you cancel a journey, you
     * can't add, change, or remove any activities from the journey. In addition,
     * Amazon Pinpoint stops evaluating the journey and doesn't perform any activities
     * that haven't started.</p> <p>When the journey is paused, Amazon Pinpoint
     * continues to perform activities that are currently in progress, until those
     * activities are complete. Endpoints will stop entering journeys when the journey
     * is paused and will resume entering the journey after the journey is resumed. For
     * wait activities, wait time is paused when the journey is paused. Currently,
     * PAUSED only supports journeys with a segment refresh interval.</p>
     */
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }

    /**
     * <p>The status of the journey. Currently, Supported values are ACTIVE, PAUSED,
     * and CANCELLED</p> <p>If you cancel a journey, Amazon Pinpoint continues to
     * perform activities that are currently in progress, until those activities are
     * complete. Amazon Pinpoint also continues to collect and aggregate analytics data
     * for those activities, until they are complete, and any activities that were
     * complete when you cancelled the journey.</p> <p>After you cancel a journey, you
     * can't add, change, or remove any activities from the journey. In addition,
     * Amazon Pinpoint stops evaluating the journey and doesn't perform any activities
     * that haven't started.</p> <p>When the journey is paused, Amazon Pinpoint
     * continues to perform activities that are currently in progress, until those
     * activities are complete. Endpoints will stop entering journeys when the journey
     * is paused and will resume entering the journey after the journey is resumed. For
     * wait activities, wait time is paused when the journey is paused. Currently,
     * PAUSED only supports journeys with a segment refresh interval.</p>
     */
    inline void SetState(const State& value) { m_stateHasBeenSet = true; m_state = value; }

    /**
     * <p>The status of the journey. Currently, Supported values are ACTIVE, PAUSED,
     * and CANCELLED</p> <p>If you cancel a journey, Amazon Pinpoint continues to
     * perform activities that are currently in progress, until those activities are
     * complete. Amazon Pinpoint also continues to collect and aggregate analytics data
     * for those activities, until they are complete, and any activities that were
     * complete when you cancelled the journey.</p> <p>After you cancel a journey, you
     * can't add, change, or remove any activities from the journey. In addition,
     * Amazon Pinpoint stops evaluating the journey and doesn't perform any activities
     * that haven't started.</p> <p>When the journey is paused, Amazon Pinpoint
     * continues to perform activities that are currently in progress, until those
     * activities are complete. Endpoints will stop entering journeys when the journey
     * is paused and will resume entering the journey after the journey is resumed. For
     * wait activities, wait time is paused when the journey is paused. Currently,
     * PAUSED only supports journeys with a segment refresh interval.</p>
     */
    inline void SetState(State&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }

    /**
     * <p>The status of the journey. Currently, Supported values are ACTIVE, PAUSED,
     * and CANCELLED</p> <p>If you cancel a journey, Amazon Pinpoint continues to
     * perform activities that are currently in progress, until those activities are
     * complete. Amazon Pinpoint also continues to collect and aggregate analytics data
     * for those activities, until they are complete, and any activities that were
     * complete when you cancelled the journey.</p> <p>After you cancel a journey, you
     * can't add, change, or remove any activities from the journey. In addition,
     * Amazon Pinpoint stops evaluating the journey and doesn't perform any activities
     * that haven't started.</p> <p>When the journey is paused, Amazon Pinpoint
     * continues to perform activities that are currently in progress, until those
     * activities are complete. Endpoints will stop entering journeys when the journey
     * is paused and will resume entering the journey after the journey is resumed. For
     * wait activities, wait time is paused when the journey is paused. Currently,
     * PAUSED only supports journeys with a segment refresh interval.</p>
     */
    inline JourneyStateRequest& WithState(const State& value) { SetState(value); return *this;}

    /**
     * <p>The status of the journey. Currently, Supported values are ACTIVE, PAUSED,
     * and CANCELLED</p> <p>If you cancel a journey, Amazon Pinpoint continues to
     * perform activities that are currently in progress, until those activities are
     * complete. Amazon Pinpoint also continues to collect and aggregate analytics data
     * for those activities, until they are complete, and any activities that were
     * complete when you cancelled the journey.</p> <p>After you cancel a journey, you
     * can't add, change, or remove any activities from the journey. In addition,
     * Amazon Pinpoint stops evaluating the journey and doesn't perform any activities
     * that haven't started.</p> <p>When the journey is paused, Amazon Pinpoint
     * continues to perform activities that are currently in progress, until those
     * activities are complete. Endpoints will stop entering journeys when the journey
     * is paused and will resume entering the journey after the journey is resumed. For
     * wait activities, wait time is paused when the journey is paused. Currently,
     * PAUSED only supports journeys with a segment refresh interval.</p>
     */
    inline JourneyStateRequest& WithState(State&& value) { SetState(std::move(value)); return *this;}

  private:

    State m_state;
    bool m_stateHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
