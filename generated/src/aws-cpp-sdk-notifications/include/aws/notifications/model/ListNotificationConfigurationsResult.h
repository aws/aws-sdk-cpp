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
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsResult();
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListNotificationConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListNotificationConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListNotificationConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The <code>NotificationConfigurations</code> in the account.</p>
     */
    inline const Aws::Vector<NotificationConfigurationStructure>& GetNotificationConfigurations() const{ return m_notificationConfigurations; }
    inline void SetNotificationConfigurations(const Aws::Vector<NotificationConfigurationStructure>& value) { m_notificationConfigurations = value; }
    inline void SetNotificationConfigurations(Aws::Vector<NotificationConfigurationStructure>&& value) { m_notificationConfigurations = std::move(value); }
    inline ListNotificationConfigurationsResult& WithNotificationConfigurations(const Aws::Vector<NotificationConfigurationStructure>& value) { SetNotificationConfigurations(value); return *this;}
    inline ListNotificationConfigurationsResult& WithNotificationConfigurations(Aws::Vector<NotificationConfigurationStructure>&& value) { SetNotificationConfigurations(std::move(value)); return *this;}
    inline ListNotificationConfigurationsResult& AddNotificationConfigurations(const NotificationConfigurationStructure& value) { m_notificationConfigurations.push_back(value); return *this; }
    inline ListNotificationConfigurationsResult& AddNotificationConfigurations(NotificationConfigurationStructure&& value) { m_notificationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListNotificationConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListNotificationConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListNotificationConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<NotificationConfigurationStructure> m_notificationConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
