/**
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
   * <p> The configuration for time-shifted viewing. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/mediatailor-2018-04-23/TimeShiftConfiguration">AWS
   * API Reference</a></p>
   */
  class TimeShiftConfiguration
  {
  public:
    AWS_MEDIATAILOR_API TimeShiftConfiguration();
    AWS_MEDIATAILOR_API TimeShiftConfiguration(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API TimeShiftConfiguration& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIATAILOR_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p> The maximum time delay for time-shifted viewing. The minimum allowed maximum
     * time delay is 0 seconds, and the maximum allowed maximum time delay is 21600
     * seconds (6 hours). </p>
     */
    inline int GetMaxTimeDelaySeconds() const{ return m_maxTimeDelaySeconds; }

    /**
     * <p> The maximum time delay for time-shifted viewing. The minimum allowed maximum
     * time delay is 0 seconds, and the maximum allowed maximum time delay is 21600
     * seconds (6 hours). </p>
     */
    inline bool MaxTimeDelaySecondsHasBeenSet() const { return m_maxTimeDelaySecondsHasBeenSet; }

    /**
     * <p> The maximum time delay for time-shifted viewing. The minimum allowed maximum
     * time delay is 0 seconds, and the maximum allowed maximum time delay is 21600
     * seconds (6 hours). </p>
     */
    inline void SetMaxTimeDelaySeconds(int value) { m_maxTimeDelaySecondsHasBeenSet = true; m_maxTimeDelaySeconds = value; }

    /**
     * <p> The maximum time delay for time-shifted viewing. The minimum allowed maximum
     * time delay is 0 seconds, and the maximum allowed maximum time delay is 21600
     * seconds (6 hours). </p>
     */
    inline TimeShiftConfiguration& WithMaxTimeDelaySeconds(int value) { SetMaxTimeDelaySeconds(value); return *this;}

  private:

    int m_maxTimeDelaySeconds;
    bool m_maxTimeDelaySecondsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaTailor
} // namespace Aws
