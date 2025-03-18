/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/medialive/model/FrameCaptureIntervalUnit.h>
#include <aws/medialive/model/TimecodeBurninSettings.h>
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
   * Frame Capture Settings<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/FrameCaptureSettings">AWS
   * API Reference</a></p>
   */
  class FrameCaptureSettings
  {
  public:
    AWS_MEDIALIVE_API FrameCaptureSettings() = default;
    AWS_MEDIALIVE_API FrameCaptureSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API FrameCaptureSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * The frequency at which to capture frames for inclusion in the output. May be
     * specified in either seconds or milliseconds, as specified by
     * captureIntervalUnits.
     */
    inline int GetCaptureInterval() const { return m_captureInterval; }
    inline bool CaptureIntervalHasBeenSet() const { return m_captureIntervalHasBeenSet; }
    inline void SetCaptureInterval(int value) { m_captureIntervalHasBeenSet = true; m_captureInterval = value; }
    inline FrameCaptureSettings& WithCaptureInterval(int value) { SetCaptureInterval(value); return *this;}
    ///@}

    ///@{
    /**
     * Unit for the frame capture interval.
     */
    inline FrameCaptureIntervalUnit GetCaptureIntervalUnits() const { return m_captureIntervalUnits; }
    inline bool CaptureIntervalUnitsHasBeenSet() const { return m_captureIntervalUnitsHasBeenSet; }
    inline void SetCaptureIntervalUnits(FrameCaptureIntervalUnit value) { m_captureIntervalUnitsHasBeenSet = true; m_captureIntervalUnits = value; }
    inline FrameCaptureSettings& WithCaptureIntervalUnits(FrameCaptureIntervalUnit value) { SetCaptureIntervalUnits(value); return *this;}
    ///@}

    ///@{
    /**
     * Timecode burn-in settings
     */
    inline const TimecodeBurninSettings& GetTimecodeBurninSettings() const { return m_timecodeBurninSettings; }
    inline bool TimecodeBurninSettingsHasBeenSet() const { return m_timecodeBurninSettingsHasBeenSet; }
    template<typename TimecodeBurninSettingsT = TimecodeBurninSettings>
    void SetTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { m_timecodeBurninSettingsHasBeenSet = true; m_timecodeBurninSettings = std::forward<TimecodeBurninSettingsT>(value); }
    template<typename TimecodeBurninSettingsT = TimecodeBurninSettings>
    FrameCaptureSettings& WithTimecodeBurninSettings(TimecodeBurninSettingsT&& value) { SetTimecodeBurninSettings(std::forward<TimecodeBurninSettingsT>(value)); return *this;}
    ///@}
  private:

    int m_captureInterval{0};
    bool m_captureIntervalHasBeenSet = false;

    FrameCaptureIntervalUnit m_captureIntervalUnits{FrameCaptureIntervalUnit::NOT_SET};
    bool m_captureIntervalUnitsHasBeenSet = false;

    TimecodeBurninSettings m_timecodeBurninSettings;
    bool m_timecodeBurninSettingsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
