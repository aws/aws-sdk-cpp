/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/NotificationHubStatus.h>
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
   * <p>Provides additional information about the current
   * <code>NotificationHub</code> status.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/notifications-2018-05-10/NotificationHubStatusSummary">AWS
   * API Reference</a></p>
   */
  class NotificationHubStatusSummary
  {
  public:
    AWS_NOTIFICATIONS_API NotificationHubStatusSummary() = default;
    AWS_NOTIFICATIONS_API NotificationHubStatusSummary(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API NotificationHubStatusSummary& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_NOTIFICATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>Status information about the <code>NotificationHub</code>.</p> <ul> <li>
     * <p>Values:</p> <ul> <li> <p> <code>ACTIVE</code> </p> <ul> <li> <p>Incoming
     * <code>NotificationEvents</code> are replicated to this
     * <code>NotificationHub</code>.</p> </li> </ul> </li> <li> <p>
     * <code>REGISTERING</code> </p> <ul> <li> <p>The
     * <code>NotificationConfiguration</code> is initializing. A
     * <code>NotificationConfiguration</code> with this status can't be
     * deregistered.</p> </li> </ul> </li> <li> <p> <code>DEREGISTERING</code> </p>
     * <ul> <li> <p>The <code>NotificationConfiguration</code> is being deleted. You
     * can't register additional <code>NotificationHubs</code> in the same Region as a
     * <code>NotificationConfiguration</code> with this status.</p> </li> </ul> </li>
     * </ul> </li> </ul>
     */
    inline NotificationHubStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(NotificationHubStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline NotificationHubStatusSummary& WithStatus(NotificationHubStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An explanation for the current status.</p>
     */
    inline const Aws::String& GetReason() const { return m_reason; }
    inline bool ReasonHasBeenSet() const { return m_reasonHasBeenSet; }
    template<typename ReasonT = Aws::String>
    void SetReason(ReasonT&& value) { m_reasonHasBeenSet = true; m_reason = std::forward<ReasonT>(value); }
    template<typename ReasonT = Aws::String>
    NotificationHubStatusSummary& WithReason(ReasonT&& value) { SetReason(std::forward<ReasonT>(value)); return *this;}
    ///@}
  private:

    NotificationHubStatus m_status{NotificationHubStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    Aws::String m_reason;
    bool m_reasonHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
