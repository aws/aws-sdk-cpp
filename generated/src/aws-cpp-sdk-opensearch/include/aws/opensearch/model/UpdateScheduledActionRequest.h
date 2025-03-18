/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/opensearch/OpenSearchService_EXPORTS.h>
#include <aws/opensearch/OpenSearchServiceRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/opensearch/model/ActionType.h>
#include <aws/opensearch/model/ScheduleAt.h>
#include <utility>

namespace Aws
{
namespace OpenSearchService
{
namespace Model
{

  /**
   */
  class UpdateScheduledActionRequest : public OpenSearchServiceRequest
  {
  public:
    AWS_OPENSEARCHSERVICE_API UpdateScheduledActionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateScheduledAction"; }

    AWS_OPENSEARCHSERVICE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The name of the domain to reschedule an action for.</p>
     */
    inline const Aws::String& GetDomainName() const { return m_domainName; }
    inline bool DomainNameHasBeenSet() const { return m_domainNameHasBeenSet; }
    template<typename DomainNameT = Aws::String>
    void SetDomainName(DomainNameT&& value) { m_domainNameHasBeenSet = true; m_domainName = std::forward<DomainNameT>(value); }
    template<typename DomainNameT = Aws::String>
    UpdateScheduledActionRequest& WithDomainName(DomainNameT&& value) { SetDomainName(std::forward<DomainNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier of the action to reschedule. To retrieve this ID, send
     * a <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/APIReference/API_ListScheduledActions.html">ListScheduledActions</a>
     * request.</p>
     */
    inline const Aws::String& GetActionID() const { return m_actionID; }
    inline bool ActionIDHasBeenSet() const { return m_actionIDHasBeenSet; }
    template<typename ActionIDT = Aws::String>
    void SetActionID(ActionIDT&& value) { m_actionIDHasBeenSet = true; m_actionID = std::forward<ActionIDT>(value); }
    template<typename ActionIDT = Aws::String>
    UpdateScheduledActionRequest& WithActionID(ActionIDT&& value) { SetActionID(std::forward<ActionIDT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of action to reschedule. Can be one of
     * <code>SERVICE_SOFTWARE_UPDATE</code>, <code>JVM_HEAP_SIZE_TUNING</code>, or
     * <code>JVM_YOUNG_GEN_TUNING</code>. To retrieve this value, send a <a
     * href="https://docs.aws.amazon.com/opensearch-service/latest/APIReference/API_ListScheduledActions.html">ListScheduledActions</a>
     * request.</p>
     */
    inline ActionType GetActionType() const { return m_actionType; }
    inline bool ActionTypeHasBeenSet() const { return m_actionTypeHasBeenSet; }
    inline void SetActionType(ActionType value) { m_actionTypeHasBeenSet = true; m_actionType = value; }
    inline UpdateScheduledActionRequest& WithActionType(ActionType value) { SetActionType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>When to schedule the action.</p> <ul> <li> <p> <code>NOW</code> - Immediately
     * schedules the update to happen in the current hour if there's capacity
     * available.</p> </li> <li> <p> <code>TIMESTAMP</code> - Lets you specify a custom
     * date and time to apply the update. If you specify this value, you must also
     * provide a value for <code>DesiredStartTime</code>.</p> </li> <li> <p>
     * <code>OFF_PEAK_WINDOW</code> - Marks the action to be picked up during an
     * upcoming off-peak window. There's no guarantee that the change will be
     * implemented during the next immediate window. Depending on capacity, it might
     * happen in subsequent days.</p> </li> </ul>
     */
    inline ScheduleAt GetScheduleAt() const { return m_scheduleAt; }
    inline bool ScheduleAtHasBeenSet() const { return m_scheduleAtHasBeenSet; }
    inline void SetScheduleAt(ScheduleAt value) { m_scheduleAtHasBeenSet = true; m_scheduleAt = value; }
    inline UpdateScheduledActionRequest& WithScheduleAt(ScheduleAt value) { SetScheduleAt(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time to implement the change, in Coordinated Universal Time (UTC). Only
     * specify this parameter if you set <code>ScheduleAt</code> to
     * <code>TIMESTAMP</code>.</p>
     */
    inline long long GetDesiredStartTime() const { return m_desiredStartTime; }
    inline bool DesiredStartTimeHasBeenSet() const { return m_desiredStartTimeHasBeenSet; }
    inline void SetDesiredStartTime(long long value) { m_desiredStartTimeHasBeenSet = true; m_desiredStartTime = value; }
    inline UpdateScheduledActionRequest& WithDesiredStartTime(long long value) { SetDesiredStartTime(value); return *this;}
    ///@}
  private:

    Aws::String m_domainName;
    bool m_domainNameHasBeenSet = false;

    Aws::String m_actionID;
    bool m_actionIDHasBeenSet = false;

    ActionType m_actionType{ActionType::NOT_SET};
    bool m_actionTypeHasBeenSet = false;

    ScheduleAt m_scheduleAt{ScheduleAt::NOT_SET};
    bool m_scheduleAtHasBeenSet = false;

    long long m_desiredStartTime{0};
    bool m_desiredStartTimeHasBeenSet = false;
  };

} // namespace Model
} // namespace OpenSearchService
} // namespace Aws
