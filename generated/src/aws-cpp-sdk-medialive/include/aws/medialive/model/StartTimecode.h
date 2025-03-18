/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
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
   * Settings to identify the start of the clip.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/StartTimecode">AWS
   * API Reference</a></p>
   */
  class StartTimecode
  {
  public:
    AWS_MEDIALIVE_API StartTimecode() = default;
    AWS_MEDIALIVE_API StartTimecode(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API StartTimecode& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The timecode for the frame where you want to start the clip. Optional; if not
     * specified, the clip starts at first frame in the file. Enter the timecode as
     * HH:MM:SS:FF or HH:MM:SS;FF.
     */
    inline const Aws::String& GetTimecode() const { return m_timecode; }
    inline bool TimecodeHasBeenSet() const { return m_timecodeHasBeenSet; }
    template<typename TimecodeT = Aws::String>
    void SetTimecode(TimecodeT&& value) { m_timecodeHasBeenSet = true; m_timecode = std::forward<TimecodeT>(value); }
    template<typename TimecodeT = Aws::String>
    StartTimecode& WithTimecode(TimecodeT&& value) { SetTimecode(std::forward<TimecodeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_timecode;
    bool m_timecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
