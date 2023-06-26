﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>
#include <aws/mediatailor/model/ClipRange.h>
#include <aws/mediatailor/model/Transition.h>
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
    AWS_MEDIATAILOR_API ScheduleConfiguration();
    AWS_MEDIATAILOR_API ScheduleConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API ScheduleConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
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
    inline ScheduleConfiguration& WithClipRange(const ClipRange& value) { SetClipRange(value); return *this;}

    /**
     * <p>Program clip range configuration.</p>
     */
    inline ScheduleConfiguration& WithClipRange(ClipRange&& value) { SetClipRange(std::move(value)); return *this;}


    /**
     * <p>Program transition configurations.</p>
     */
    inline const Transition& GetTransition() const{ return m_transition; }

    /**
     * <p>Program transition configurations.</p>
     */
    inline bool TransitionHasBeenSet() const { return m_transitionHasBeenSet; }

    /**
     * <p>Program transition configurations.</p>
     */
    inline void SetTransition(const Transition& value) { m_transitionHasBeenSet = true; m_transition = value; }

    /**
     * <p>Program transition configurations.</p>
     */
    inline void SetTransition(Transition&& value) { m_transitionHasBeenSet = true; m_transition = std::move(value); }

    /**
     * <p>Program transition configurations.</p>
     */
    inline ScheduleConfiguration& WithTransition(const Transition& value) { SetTransition(value); return *this;}

    /**
     * <p>Program transition configurations.</p>
     */
    inline ScheduleConfiguration& WithTransition(Transition&& value) { SetTransition(std::move(value)); return *this;}

  private:

    ClipRange m_clipRange;
    bool m_clipRangeHasBeenSet = false;

    Transition m_transition;
    bool m_transitionHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
