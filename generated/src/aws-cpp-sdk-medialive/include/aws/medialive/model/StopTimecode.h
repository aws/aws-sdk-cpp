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
    AWS_MEDIALIVE_API StopTimecode();
    AWS_MEDIALIVE_API StopTimecode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StopTimecode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline const LastFrameClippingBehavior& GetLastFrameClippingBehavior() const{ return m_lastFrameClippingBehavior; }

    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline bool LastFrameClippingBehaviorHasBeenSet() const { return m_lastFrameClippingBehaviorHasBeenSet; }

    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline void SetLastFrameClippingBehavior(const LastFrameClippingBehavior& value) { m_lastFrameClippingBehaviorHasBeenSet = true; m_lastFrameClippingBehavior = value; }

    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline void SetLastFrameClippingBehavior(LastFrameClippingBehavior&& value) { m_lastFrameClippingBehaviorHasBeenSet = true; m_lastFrameClippingBehavior = std::move(value); }

    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline StopTimecode& WithLastFrameClippingBehavior(const LastFrameClippingBehavior& value) { SetLastFrameClippingBehavior(value); return *this;}

    /**
     * If you specify a StopTimecode in an input (in order to clip the file), you can
     * specify if you want the clip to exclude (the default) or include the frame
     * specified by the timecode.
     */
    inline StopTimecode& WithLastFrameClippingBehavior(LastFrameClippingBehavior&& value) { SetLastFrameClippingBehavior(std::move(value)); return *this;}


    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline const Aws::String& GetTimecode() const{ return m_timecode; }

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline void SetTimecode(const Aws::String& value) { m_timecodeHasBeenSet = true; m_timecode = value; }

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline void SetTimecode(Aws::String&& value) { m_timecodeHasBeenSet = true; m_timecode = std::move(value); }

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline void SetTimecode(const char* value) { m_timecodeHasBeenSet = true; m_timecode.assign(value); }

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline StopTimecode& WithTimecode(const Aws::String& value) { SetTimecode(value); return *this;}

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline StopTimecode& WithTimecode(Aws::String&& value) { SetTimecode(std::move(value)); return *this;}

    /**
     * The timecode for the frame where you want to stop the clip. Optional; if not
     * specified, the clip continues to the end of the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline StopTimecode& WithTimecode(const char* value) { SetTimecode(value); return *this;}

  private:

    LastFrameClippingBehavior m_lastFrameClippingBehavior;
    bool m_lastFrameClippingBehaviorHasBeenSet = false;

    Aws::String m_timecode;
    bool m_timecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
