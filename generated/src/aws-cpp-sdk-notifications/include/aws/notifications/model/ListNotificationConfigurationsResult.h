/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/NotificationConfigurationStructure.h>
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
  class ListNotificationConfigurationsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsResult() = default;
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListNotificationConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NotificationConfigurations</code> in the account.</p>
     */
    inline const Aws::Vector<NotificationConfigurationStructure>& GetNotificationConfigurations() const { return m_notificationConfigurations; }
    template<typename NotificationConfigurationsT = Aws::Vector<NotificationConfigurationStructure>>
    void SetNotificationConfigurations(NotificationConfigurationsT&& value) { m_notificationConfigurationsHasBeenSet = true; m_notificationConfigurations = std::forward<NotificationConfigurationsT>(value); }
    template<typename NotificationConfigurationsT = Aws::Vector<NotificationConfigurationStructure>>
    ListNotificationConfigurationsResult& WithNotificationConfigurations(NotificationConfigurationsT&& value) { SetNotificationConfigurations(std::forward<NotificationConfigurationsT>(value)); return *this;}
    template<typename NotificationConfigurationsT = NotificationConfigurationStructure>
    ListNotificationConfigurationsResult& AddNotificationConfigurations(NotificationConfigurationsT&& value) { m_notificationConfigurationsHasBeenSet = true; m_notificationConfigurations.emplace_back(std::forward<NotificationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListNotificationConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<NotificationConfigurationStructure> m_notificationConfigurations;
    bool m_notificationConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
