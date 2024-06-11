﻿/**
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
   * A list of schedule actions to create (in a request) or that have been created
   * (in a response).<p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/medialive-2017-10-14/BatchScheduleActionCreateRequest">AWS
   * API Reference</a></p>
   */
  class BatchScheduleActionCreateRequest
  {
  public:
    AWS_MEDIALIVE_API BatchScheduleActionCreateRequest();
    AWS_MEDIALIVE_API BatchScheduleActionCreateRequest(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API BatchScheduleActionCreateRequest& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_MEDIALIVE_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * A list of schedule actions to create.
     */
    inline const Aws::Vector<ScheduleAction>& GetScheduleActions() const{ return m_scheduleActions; }
    inline bool ScheduleActionsHasBeenSet() const { return m_scheduleActionsHasBeenSet; }
    inline void SetScheduleActions(const Aws::Vector<ScheduleAction>& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = value; }
    inline void SetScheduleActions(Aws::Vector<ScheduleAction>&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions = std::move(value); }
    inline BatchScheduleActionCreateRequest& WithScheduleActions(const Aws::Vector<ScheduleAction>& value) { SetScheduleActions(value); return *this;}
    inline BatchScheduleActionCreateRequest& WithScheduleActions(Aws::Vector<ScheduleAction>&& value) { SetScheduleActions(std::move(value)); return *this;}
    inline BatchScheduleActionCreateRequest& AddScheduleActions(const ScheduleAction& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(value); return *this; }
    inline BatchScheduleActionCreateRequest& AddScheduleActions(ScheduleAction&& value) { m_scheduleActionsHasBeenSet = true; m_scheduleActions.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<ScheduleAction> m_scheduleActions;
    bool m_scheduleActionsHasBeenSet = false;
  };

} // namespace Model
} // namespace MediaLive
} // namespace Aws
