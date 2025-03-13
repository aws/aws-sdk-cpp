/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/LastFrameClippingBehavior.h>
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
namespace MediaLive
{
namespace Model
{

  /**
   * Settings to identify the end of the clip.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StopTimecode">AWS
   * API Reference</a></p>
   */
  class StopTimecode
  {
  public:
    AWS_MEDIALIVE_API StopTimecode() = default;
    AWS_MEDIALIVE_API StopTimecode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StopTimecode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline LastFrameClippingBehavior GetLastFrameClippingBehavior() const { return m_lastFrameClippingBehavior; }
    inline bool LastFrameClippingBehaviorHasBeenSet() const { return m_lastFrameClippingBehaviorHasBeenSet; }
    inline void SetLastFrameClippingBehavior(LastFrameClippingBehavior value) { m_lastFrameClippingBehaviorHasBeenSet = true; m_lastFrameClippingBehavior = value; }
    inline StopTimecode& WithLastFrameClippingBehavior(LastFrameClippingBehavior value) { SetLastFrameClippingBehavior(value); return *this;}
    ///@}

    ///@{
    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline const Aws::String& GetTimecode() const { return m_timecode; }
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
    template<typename TimecodeT = Aws::String>
    void SetTimecode(TimecodeT&& value) { m_timecodeHasBeenSet = true; m_timecode = std::forward<TimecodeT>(value); }
    template<typename TimecodeT = Aws::String>
    StopTimecode& WithTimecode(TimecodeT&& value) { SetTimecode(std::forward<TimecodeT>(value)); return *this;}
    ///@}
  private:

    LastFrameClippingBehavior m_lastFrameClippingBehavior{LastFrameClippingBehavior::NOT_SET};
    bool m_lastFrameClippingBehaviorHasBeenSet = false;

    Aws::String m_timecode;
    bool m_timecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
