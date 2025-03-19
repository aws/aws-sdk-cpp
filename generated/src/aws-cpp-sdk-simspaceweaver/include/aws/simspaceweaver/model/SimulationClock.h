/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/simspaceweaver/SimSpaceWeaver_EXPORTS.h>
#include <aws/simspaceweaver/model/ClockStatus.h>
#include <aws/simspaceweaver/model/ClockTargetStatus.h>
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
namespace SimSpaceWeaver
{
namespace Model
{

  /**
   * <p>Status information about the simulation clock.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/simspaceweaver-2022-10-28/SimulationClock">AWS
   * API Reference</a></p>
   */
  class SimulationClock
  {
  public:
    AWS_SIMSPACEWEAVER_API SimulationClock() = default;
    AWS_SIMSPACEWEAVER_API SimulationClock(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API SimulationClock& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SIMSPACEWEAVER_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The current status of the simulation clock.</p>
     */
    inline ClockStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(ClockStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline SimulationClock& WithStatus(ClockStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The desired status of the simulation clock.</p>
     */
    inline ClockTargetStatus GetTargetStatus() const { return m_targetStatus; }
    inline bool TargetStatusHasBeenSet() const { return m_targetStatusHasBeenSet; }
    inline void SetTargetStatus(ClockTargetStatus value) { m_targetStatusHasBeenSet = true; m_targetStatus = value; }
    inline SimulationClock& WithTargetStatus(ClockTargetStatus value) { SetTargetStatus(value); return *this;}
    ///@}
  private:

    ClockStatus m_status{ClockStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    ClockTargetStatus m_targetStatus{ClockTargetStatus::NOT_SET};
    bool m_targetStatusHasBeenSet = false;
  };

} // namespace Model
} // namespace SimSpaceWeaver
} // namespace Aws
