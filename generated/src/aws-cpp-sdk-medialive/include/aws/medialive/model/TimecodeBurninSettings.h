/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/TimecodeBurninFontSize.h>
#include <aws/medialive/model/TimecodeBurninPosition.h>
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
   * Timecode Burnin Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/TimecodeBurninSettings">AWS
   * API Reference</a></p>
   */
  class TimecodeBurninSettings
  {
  public:
    AWS_MEDIALIVE_API TimecodeBurninSettings() = default;
    AWS_MEDIALIVE_API TimecodeBurninSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API TimecodeBurninSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * Choose a timecode burn-in font size
     */
    inline TimecodeBurninFontSize GetFontSize() const { return m_fontSize; }
    inline bool FontSizeHasBeenSet() const { return m_fontSizeHasBeenSet; }
    inline void SetFontSize(TimecodeBurninFontSize value) { m_fontSizeHasBeenSet = true; m_fontSize = value; }
    inline TimecodeBurninSettings& WithFontSize(TimecodeBurninFontSize value) { SetFontSize(value); return *this;}
    ///@}

    ///@{
    /**
     * Choose a timecode burn-in output position
     */
    inline TimecodeBurninPosition GetPosition() const { return m_position; }
    inline bool PositionHasBeenSet() const { return m_positionHasBeenSet; }
    inline void SetPosition(TimecodeBurninPosition value) { m_positionHasBeenSet = true; m_position = value; }
    inline TimecodeBurninSettings& WithPosition(TimecodeBurninPosition value) { SetPosition(value); return *this;}
    ///@}

    ///@{
    /**
     * Create a timecode burn-in prefix (optional)
     */
    inline const Aws::String& GetPrefix() const { return m_prefix; }
    inline bool PrefixHasBeenSet() const { return m_prefixHasBeenSet; }
    template<typename PrefixT = Aws::String>
    void SetPrefix(PrefixT&& value) { m_prefixHasBeenSet = true; m_prefix = std::forward<PrefixT>(value); }
    template<typename PrefixT = Aws::String>
    TimecodeBurninSettings& WithPrefix(PrefixT&& value) { SetPrefix(std::forward<PrefixT>(value)); return *this;}
    ///@}
  private:

    TimecodeBurninFontSize m_fontSize{TimecodeBurninFontSize::NOT_SET};
    bool m_fontSizeHasBeenSet = false;

    TimecodeBurninPosition m_position{TimecodeBurninPosition::NOT_SET};
    bool m_positionHasBeenSet = false;

    Aws::String m_prefix;
    bool m_prefixHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
