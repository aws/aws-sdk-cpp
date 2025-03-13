/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/RelativePosition.h>
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
namespace MediaTailor
{
namespace Model
{

  /**
   * <p>Program transition configuration.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/Transition">AWS
   * API Reference</a></p>
   */
  class Transition
  {
  public:
    AWS_MEDIATAILOR_API Transition() = default;
    AWS_MEDIATAILOR_API Transition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Transition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The duration of the live program in seconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline Transition& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The position where this program will be inserted relative to the
     * <code>RelativePosition</code>.</p>
     */
    inline RelativePosition GetRelativePosition() const { return m_relativePosition; }
    inline bool RelativePositionHasBeenSet() const { return m_relativePositionHasBeenSet; }
    inline void SetRelativePosition(RelativePosition value) { m_relativePositionHasBeenSet = true; m_relativePosition = value; }
    inline Transition& WithRelativePosition(RelativePosition value) { SetRelativePosition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the program that this program will be inserted next to, as
     * defined by <code>RelativePosition</code>.</p>
     */
    inline const Aws::String& GetRelativeProgram() const { return m_relativeProgram; }
    inline bool RelativeProgramHasBeenSet() const { return m_relativeProgramHasBeenSet; }
    template<typename RelativeProgramT = Aws::String>
    void SetRelativeProgram(RelativeProgramT&& value) { m_relativeProgramHasBeenSet = true; m_relativeProgram = std::forward<RelativeProgramT>(value); }
    template<typename RelativeProgramT = Aws::String>
    Transition& WithRelativeProgram(RelativeProgramT&& value) { SetRelativeProgram(std::forward<RelativeProgramT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time that the program is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline long long GetScheduledStartTimeMillis() const { return m_scheduledStartTimeMillis; }
    inline bool ScheduledStartTimeMillisHasBeenSet() const { return m_scheduledStartTimeMillisHasBeenSet; }
    inline void SetScheduledStartTimeMillis(long long value) { m_scheduledStartTimeMillisHasBeenSet = true; m_scheduledStartTimeMillis = value; }
    inline Transition& WithScheduledStartTimeMillis(long long value) { SetScheduledStartTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Defines when the program plays in the schedule. You can set the value to
     * <code>ABSOLUTE</code> or <code>RELATIVE</code>.</p> <p> <code>ABSOLUTE</code> -
     * The program plays at a specific wall clock time. This setting can only be used
     * for channels using the <code>LINEAR</code> <code>PlaybackMode</code>.</p>
     * <p>Note the following considerations when using <code>ABSOLUTE</code>
     * transitions:</p> <p>If the preceding program in the schedule has a duration that
     * extends past the wall clock time, MediaTailor truncates the preceding program on
     * a common segment boundary.</p> <p>If there are gaps in playback, MediaTailor
     * plays the <code>FillerSlate</code> you configured for your linear channel.</p>
     * <p> <code>RELATIVE</code> - The program is inserted into the schedule either
     * before or after a program that you specify via
     * <code>RelativePosition</code>.</p>
     */
    inline const Aws::String& GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    template<typename TypeT = Aws::String>
    void SetType(TypeT&& value) { m_typeHasBeenSet = true; m_type = std::forward<TypeT>(value); }
    template<typename TypeT = Aws::String>
    Transition& WithType(TypeT&& value) { SetType(std::forward<TypeT>(value)); return *this;}
    ///@}
  private:

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;

    RelativePosition m_relativePosition{RelativePosition::NOT_SET};
    bool m_relativePositionHasBeenSet = false;

    Aws::String m_relativeProgram;
    bool m_relativeProgramHasBeenSet = false;

    long long m_scheduledStartTimeMillis{0};
    bool m_scheduledStartTimeMillisHasBeenSet = false;

    Aws::String m_type;
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
