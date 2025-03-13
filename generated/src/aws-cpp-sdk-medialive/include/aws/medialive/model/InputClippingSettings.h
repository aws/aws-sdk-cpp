/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/InputTimecodeSource.h>
#include <aws/medialive/model/StartTimecode.h>
#include <aws/medialive/model/StopTimecode.h>
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
   * Settings to let you create a clip of the file input, in order to set up the
   * input to ingest only a portion of the file.<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/InputClippingSettings">AWS
   * API Reference</a></p>
   */
  class InputClippingSettings
  {
  public:
    AWS_MEDIALIVE_API InputClippingSettings() = default;
    AWS_MEDIALIVE_API InputClippingSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API InputClippingSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The source of the timecodes in the source being clipped.
     */
    inline InputTimecodeSource GetInputTimecodeSource() const { return m_inputTimecodeSource; }
    inline bool InputTimecodeSourceHasBeenSet() const { return m_inputTimecodeSourceHasBeenSet; }
    inline void SetInputTimecodeSource(InputTimecodeSource value) { m_inputTimecodeSourceHasBeenSet = true; m_inputTimecodeSource = value; }
    inline InputClippingSettings& WithInputTimecodeSource(InputTimecodeSource value) { SetInputTimecodeSource(value); return *this;}
    ///@}

    ///@{
    /**
     * Settings to identify the start of the clip.
     */
    inline const StartTimecode& GetStartTimecode() const { return m_startTimecode; }
    inline bool StartTimecodeHasBeenSet() const { return m_startTimecodeHasBeenSet; }
    template<typename StartTimecodeT = StartTimecode>
    void SetStartTimecode(StartTimecodeT&& value) { m_startTimecodeHasBeenSet = true; m_startTimecode = std::forward<StartTimecodeT>(value); }
    template<typename StartTimecodeT = StartTimecode>
    InputClippingSettings& WithStartTimecode(StartTimecodeT&& value) { SetStartTimecode(std::forward<StartTimecodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * Settings to identify the end of the clip.
     */
    inline const StopTimecode& GetStopTimecode() const { return m_stopTimecode; }
    inline bool StopTimecodeHasBeenSet() const { return m_stopTimecodeHasBeenSet; }
    template<typename StopTimecodeT = StopTimecode>
    void SetStopTimecode(StopTimecodeT&& value) { m_stopTimecodeHasBeenSet = true; m_stopTimecode = std::forward<StopTimecodeT>(value); }
    template<typename StopTimecodeT = StopTimecode>
    InputClippingSettings& WithStopTimecode(StopTimecodeT&& value) { SetStopTimecode(std::forward<StopTimecodeT>(value)); return *this;}
    ///@}
  private:

    InputTimecodeSource m_inputTimecodeSource{InputTimecodeSource::NOT_SET};
    bool m_inputTimecodeSourceHasBeenSet = false;

    StartTimecode m_startTimecode;
    bool m_startTimecodeHasBeenSet = false;

    StopTimecode m_stopTimecode;
    bool m_stopTimecodeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
