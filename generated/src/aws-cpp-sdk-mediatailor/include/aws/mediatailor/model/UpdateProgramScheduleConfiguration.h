/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ClipRange.h>
#include <aws/mediatailor/model/UpdateProgramTransition.h>
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
    AWS_MEDIATAILOR_API UpdateProgramScheduleConfiguration();
    AWS_MEDIATAILOR_API UpdateProgramScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API UpdateProgramScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>Program clip range configuration.</p>
     */
    inline const ClipRange& GetClipRange() const{ return m_clipRange; }

    /**
     * <p>Program clip range configuration.</p>
     */
    inline bool ClipRangeHasBeenSet() const { return m_clipRangeHasBeenSet; }

    /**
     * <p>Program clip range configuration.</p>
     */
    inline void SetClipRange(const ClipRange& value) { m_clipRangeHasBeenSet = true; m_clipRange = value; }

    /**
     * <p>Program clip range configuration.</p>
     */
    inline void SetClipRange(ClipRange&& value) { m_clipRangeHasBeenSet = true; m_clipRange = std::move(value); }

    /**
     * <p>Program clip range configuration.</p>
     */
    inline UpdateProgramScheduleConfiguration& WithClipRange(const ClipRange& value) { SetClipRange(value); return *this;}

    /**
     * <p>Program clip range configuration.</p>
     */
    inline UpdateProgramScheduleConfiguration& WithClipRange(ClipRange&& value) { SetClipRange(std::move(value)); return *this;}


    /**
     * <p>Program transition configuration.</p>
     */
    inline const UpdateProgramTransition& GetTransition() const{ return m_transition; }

    /**
     * <p>Program transition configuration.</p>
     */
    inline bool TransitionHasBeenSet() const { return m_transitionHasBeenSet; }

    /**
     * <p>Program transition configuration.</p>
     */
    inline void SetTransition(const UpdateProgramTransition& value) { m_transitionHasBeenSet = true; m_transition = value; }

    /**
     * <p>Program transition configuration.</p>
     */
    inline void SetTransition(UpdateProgramTransition&& value) { m_transitionHasBeenSet = true; m_transition = std::move(value); }

    /**
     * <p>Program transition configuration.</p>
     */
    inline UpdateProgramScheduleConfiguration& WithTransition(const UpdateProgramTransition& value) { SetTransition(value); return *this;}

    /**
     * <p>Program transition configuration.</p>
     */
    inline UpdateProgramScheduleConfiguration& WithTransition(UpdateProgramTransition&& value) { SetTransition(std::move(value)); return *this;}

  private:

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;

    UpdateProgramTransition m_transition;
    bool m_transitionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
