/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/Transition.h>
#include <aws/mediatailor/model/ClipRange.h>
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
   * <p>Schedule configuration parameters. A channel must be stopped before changes
   * can be made to the schedule.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/ScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class ScheduleConfiguration
  {
  public:
    AWS_MEDIATAILOR_API ScheduleConfiguration() = default;
    AWS_MEDIATAILOR_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Program transition configurations.</p>
     */
    inline const Transition& GetTransition() const { return m_transition; }
    inline bool TransitionHasBeenSet() const { return m_transitionHasBeenSet; }
    template<typename TransitionT = Transition>
    void SetTransition(TransitionT&& value) { m_transitionHasBeenSet = true; m_transition = std::forward<TransitionT>(value); }
    template<typename TransitionT = Transition>
    ScheduleConfiguration& WithTransition(TransitionT&& value) { SetTransition(std::forward<TransitionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Program clip range configuration.</p>
     */
    inline const ClipRange& GetClipRange() const { return m_clipRange; }
    inline bool ClipRangeHasBeenSet() const { return m_clipRangeHasBeenSet; }
    template<typename ClipRangeT = ClipRange>
    void SetClipRange(ClipRangeT&& value) { m_clipRangeHasBeenSet = true; m_clipRange = std::forward<ClipRangeT>(value); }
    template<typename ClipRangeT = ClipRange>
    ScheduleConfiguration& WithClipRange(ClipRangeT&& value) { SetClipRange(std::forward<ClipRangeT>(value)); return *this;}
    ///@}
  private:

    Transition m_transition;
    bool m_transitionHasBeenSet = false;

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
