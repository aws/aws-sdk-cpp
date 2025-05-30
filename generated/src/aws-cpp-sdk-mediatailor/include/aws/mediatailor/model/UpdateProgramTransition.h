﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediatailor/MediaTailor_EXPORTS.h>

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
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/UpdateProgramTransition">AWS
   * API Reference</a></p>
   */
  class UpdateProgramTransition
  {
  public:
    AWS_MEDIATAILOR_API UpdateProgramTransition() = default;
    AWS_MEDIATAILOR_API UpdateProgramTransition(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API UpdateProgramTransition& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The date and time that the program is scheduled to start, in epoch
     * milliseconds.</p>
     */
    inline long long GetScheduledStartTimeMillis() const { return m_scheduledStartTimeMillis; }
    inline bool ScheduledStartTimeMillisHasBeenSet() const { return m_scheduledStartTimeMillisHasBeenSet; }
    inline void SetScheduledStartTimeMillis(long long value) { m_scheduledStartTimeMillisHasBeenSet = true; m_scheduledStartTimeMillis = value; }
    inline UpdateProgramTransition& WithScheduledStartTimeMillis(long long value) { SetScheduledStartTimeMillis(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the live program in seconds.</p>
     */
    inline long long GetDurationMillis() const { return m_durationMillis; }
    inline bool DurationMillisHasBeenSet() const { return m_durationMillisHasBeenSet; }
    inline void SetDurationMillis(long long value) { m_durationMillisHasBeenSet = true; m_durationMillis = value; }
    inline UpdateProgramTransition& WithDurationMillis(long long value) { SetDurationMillis(value); return *this;}
    ///@}
  private:

    long long m_scheduledStartTimeMillis{0};
    bool m_scheduledStartTimeMillisHasBeenSet = false;

    long long m_durationMillis{0};
    bool m_durationMillisHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
