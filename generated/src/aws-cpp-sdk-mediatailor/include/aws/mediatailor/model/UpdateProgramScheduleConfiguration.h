/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/UpdateProgramTransition.h>
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
   * <p>Schedule configuration parameters.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateProgramScheduleConfiguration">AWS
   * API Reference</a></p>
   */
  class UpdateProgramScheduleConfiguration
  {
  public:
    AWS_MEDIATAILOR_API UpdateProgramScheduleConfiguration() = default;
    AWS_MEDIATAILOR_API UpdateProgramScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API UpdateProgramScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Program transition configuration.</p>
     */
    inline const UpdateProgramTransition& GetTransition() const { return m_transition; }
    inline bool TransitionHasBeenSet() const { return m_transitionHasBeenSet; }
    template<typename TransitionT = UpdateProgramTransition>
    void SetTransition(TransitionT&& value) { m_transitionHasBeenSet = true; m_transition = std::forward<TransitionT>(value); }
    template<typename TransitionT = UpdateProgramTransition>
    UpdateProgramScheduleConfiguration& WithTransition(TransitionT&& value) { SetTransition(std::forward<TransitionT>(value)); return *this;}
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
    UpdateProgramScheduleConfiguration& WithClipRange(ClipRangeT&& value) { SetClipRange(std::forward<ClipRangeT>(value)); return *this;}
    ///@}
  private:

    UpdateProgramTransition m_transition;
    bool m_transitionHasBeenSet = false;

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
