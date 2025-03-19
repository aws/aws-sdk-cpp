/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pinpoint/Pinpoint_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/pinpoint/model/WaitTime.h>
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
   * <p>Specifies the settings for a wait activity in a journey. This type of
   * activity waits for a certain amount of time or until a specific date and time
   * before moving participants to the next activity in a journey.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/pinpoint-2016-12-01/WaitActivity">AWS
   * API Reference</a></p>
   */
  class WaitActivity
  {
  public:
    AWS_PINPOINT_API WaitActivity() = default;
    AWS_PINPOINT_API WaitActivity(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API WaitActivity& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_PINPOINT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier for the next activity to perform, after performing the
     * wait activity.</p>
     */
    inline const Aws::String& GetNextActivity() const { return m_nextActivity; }
    inline bool NextActivityHasBeenSet() const { return m_nextActivityHasBeenSet; }
    template<typename NextActivityT = Aws::String>
    void SetNextActivity(NextActivityT&& value) { m_nextActivityHasBeenSet = true; m_nextActivity = std::forward<NextActivityT>(value); }
    template<typename NextActivityT = Aws::String>
    WaitActivity& WithNextActivity(NextActivityT&& value) { SetNextActivity(std::forward<NextActivityT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The amount of time to wait or the date and time when the activity moves
     * participants to the next activity in the journey.</p>
     */
    inline const WaitTime& GetWaitTime() const { return m_waitTime; }
    inline bool WaitTimeHasBeenSet() const { return m_waitTimeHasBeenSet; }
    template<typename WaitTimeT = WaitTime>
    void SetWaitTime(WaitTimeT&& value) { m_waitTimeHasBeenSet = true; m_waitTime = std::forward<WaitTimeT>(value); }
    template<typename WaitTimeT = WaitTime>
    WaitActivity& WithWaitTime(WaitTimeT&& value) { SetWaitTime(std::forward<WaitTimeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextActivity;
    bool m_nextActivityHasBeenSet = false;

    WaitTime m_waitTime;
    bool m_waitTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace Pinpoint
} // namespace Aws
