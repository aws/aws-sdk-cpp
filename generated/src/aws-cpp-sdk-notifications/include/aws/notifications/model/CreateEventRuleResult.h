/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/notifications/model/EventRuleStatusSummary.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace Notifications
{
namespace Model
{
  class CreateEventRuleResult
  {
  public:
    AWS_NOTIFICATIONS_API CreateEventRuleResult() = default;
    AWS_NOTIFICATIONS_API CreateEventRuleResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API CreateEventRuleResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    CreateEventRuleResult& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ARN of a <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetNotificationConfigurationArn() const { return m_notificationConfigurationArn; }
    template<typename NotificationConfigurationArnT = Aws::String>
    void SetNotificationConfigurationArn(NotificationConfigurationArnT&& value) { m_notificationConfigurationArnHasBeenSet = true; m_notificationConfigurationArn = std::forward<NotificationConfigurationArnT>(value); }
    template<typename NotificationConfigurationArnT = Aws::String>
    CreateEventRuleResult& WithNotificationConfigurationArn(NotificationConfigurationArnT&& value) { SetNotificationConfigurationArn(std::forward<NotificationConfigurationArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of an <code>EventRule</code>'s status by Region. Regions are mapped to
     * <code>EventRuleStatusSummary</code>.</p>
     */
    inline const Aws::Map<Aws::String, EventRuleStatusSummary>& GetStatusSummaryByRegion() const { return m_statusSummaryByRegion; }
    template<typename StatusSummaryByRegionT = Aws::Map<Aws::String, EventRuleStatusSummary>>
    void SetStatusSummaryByRegion(StatusSummaryByRegionT&& value) { m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion = std::forward<StatusSummaryByRegionT>(value); }
    template<typename StatusSummaryByRegionT = Aws::Map<Aws::String, EventRuleStatusSummary>>
    CreateEventRuleResult& WithStatusSummaryByRegion(StatusSummaryByRegionT&& value) { SetStatusSummaryByRegion(std::forward<StatusSummaryByRegionT>(value)); return *this;}
    template<typename StatusSummaryByRegionKeyT = Aws::String, typename StatusSummaryByRegionValueT = EventRuleStatusSummary>
    CreateEventRuleResult& AddStatusSummaryByRegion(StatusSummaryByRegionKeyT&& key, StatusSummaryByRegionValueT&& value) {
      m_statusSummaryByRegionHasBeenSet = true; m_statusSummaryByRegion.emplace(std::forward<StatusSummaryByRegionKeyT>(key), std::forward<StatusSummaryByRegionValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    CreateEventRuleResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_notificationConfigurationArn;
    bool m_notificationConfigurationArnHasBeenSet = false;

    Aws::Map<Aws::String, EventRuleStatusSummary> m_statusSummaryByRegion;
    bool m_statusSummaryByRegionHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
