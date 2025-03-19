/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/TimecodeBurninPosition.h>
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
namespace MediaConvert
{
namespace Model
{

  /**
   * Settings for burning the output timecode and specified prefix into the
   * output.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediaconvert-2017-08-29/TimecodeBurnin">AWS
   * API Reference</a></p>
   */
  class TimecodeBurnin
  {
  public:
    AWS_MEDIACONVERT_API TimecodeBurnin() = default;
    AWS_MEDIACONVERT_API TimecodeBurnin(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API TimecodeBurnin& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIACONVERT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Use Font size to set the font size of any burned-in timecode. Valid values are
     * 10, 16, 32, 48.
     */
    inline int GetFontSize() const { return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(int value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline TimecodeBurnin& WithFontSize(int value) { SetFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Position under Timecode burn-in to specify the location the burned-in
     * timecode on output video.
     */
    inline TimecodeBurninPosition GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(TimecodeBurninPosition value) { m_positionHasBeenSet = true; m_position = value; }
    inline TimecodeBurnin& WithPosition(TimecodeBurninPosition value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Use Prefix to place ASCII characters before any burned-in timecode. For example,
     * a prefix of "EZ-" will result in the timecode "EZ-00:00:00:00". Provide either
     * the characters themselves or the ASCII code equivalents. The supported range of
     * characters is 0x20 through 0x7e. This includes letters, numbers, and all special
     * characters represented on a standard English keyboard.
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    TimecodeBurnin& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    int m_fontSize{0};
    bool m_fontSizeHasBeenSet = false;

    TimecodeBurninPosition m_position{TimecodeBurninPosition::NOT_SET};
    bool m_positionHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaConvert
} // namespace Aws
