/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/EventRuleStatus.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
namespace Notifications
{
namespace Model
{

  /**
   * <p>Provides additional information about the current <code>EventRule</code>
   * status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/EventRuleStatusSummary">AWS
   * API Reference</a></p>
   */
  class EventRuleStatusSummary
  {
  public:
    AWS_NOTIFICATIONS_API EventRuleStatusSummary() = default;
    AWS_NOTIFICATIONS_API EventRuleStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API EventRuleStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The status of the <code>EventRule</code>.</p> <ul> <li> <p>Values:</p> <ul>
     * <li> <p> <code>ACTIVE</code> </p> <ul> <li> <p>The <code>EventRule</code> can
     * process events.</p> </li> </ul> </li> <li> <p> <code>INACTIVE</code> </p> <ul>
     * <li> <p>The <code>EventRule</code> may be unable to process events.</p> </li>
     * </ul> </li> <li> <p> <code>CREATING</code> </p> <ul> <li> <p>The
     * <code>EventRule</code> is being created.</p> <p>Only <code>GET</code> and
     * <code>LIST</code> calls can be run.</p> </li> </ul> </li> <li> <p>
     * <code>UPDATING</code> </p> <ul> <li> <p>The <code>EventRule</code> is being
     * updated.</p> <p>Only <code>GET</code> and <code>LIST</code> calls can be
     * run.</p> </li> </ul> </li> <li> <p> <code>DELETING</code> </p> <ul> <li> <p>The
     * <code>EventRule</code> is being deleted.</p> <p>Only <code>GET</code> and
     * <code>LIST</code> calls can be run.</p> </li> </ul> </li> </ul> </li> </ul>
     */
    inline EventRuleStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(EventRuleStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline EventRuleStatusSummary& WithStatus(EventRuleStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A human-readable reason for <code>EventRuleStatus</code>.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    EventRuleStatusSummary& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    EventRuleStatus m_status{EventRuleStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
