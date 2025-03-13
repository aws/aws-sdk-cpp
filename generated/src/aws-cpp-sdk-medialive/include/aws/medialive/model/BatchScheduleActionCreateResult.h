/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medialive/MediaLive_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/medialive/model/ScheduleAction.h>
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
   * List of actions that have been created in the schedule.<p><h3>See Also:</h3>  
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionCreateResult">AWS
   * API Reference</a></p>
   */
  class BatchScheduleActionCreateResult
  {
  public:
    AWS_MEDIALIVE_API BatchScheduleActionCreateResult() = default;
    AWS_MEDIALIVE_API BatchScheduleActionCreateResult(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BatchScheduleActionCreateResult& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * List of actions that have been created in the schedule.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const { return m_scheduleActions; }
    inline bool ScheduleActionsHasBeenSet() const { return m_scheduleActionsHasBeenSet; }
    template<typename ScheduleActionsT = Aws::Vector<ScheduleAction>>
    void SetScheduleActions(ScheduleActionsT&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = std::forward<ScheduleActionsT>(value); }
    template<typename ScheduleActionsT = Aws::Vector<ScheduleAction>>
    BatchScheduleActionCreateResult& WithScheduleActions(ScheduleActionsT&& value) { SetScheduleActions(std::forward<ScheduleActionsT>(value)); return *this;}
    template<typename ScheduleActionsT = ScheduleAction>
    BatchScheduleActionCreateResult& AddScheduleActions(ScheduleActionsT&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.emplace_back(std::forward<ScheduleActionsT>(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ScheduleAction> m_scheduleActions;
    bool m_scheduleActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
