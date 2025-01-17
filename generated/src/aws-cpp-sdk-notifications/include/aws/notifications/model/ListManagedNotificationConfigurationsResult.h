/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/notifications/model/ManagedNotificationConfigurationStructure.h>
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
  class ListManagedNotificationConfigurationsResult
  {
  public:
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsResult();
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }
    inline void SetNextToken(const Aws::String& value) { m_nextToken = value; }
    inline void SetNextToken(Aws::String&& value) { m_nextToken = std::move(value); }
    inline void SetNextToken(const char* value) { m_nextToken.assign(value); }
    inline ListManagedNotificationConfigurationsResult& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}
    inline ListManagedNotificationConfigurationsResult& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}
    inline ListManagedNotificationConfigurationsResult& WithNextToken(const char* value) { SetNextToken(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Managed Notification Configurations matching the request
     * criteria.</p>
     */
    inline const Aws::Vector<ManagedNotificationConfigurationStructure>& GetManagedNotificationConfigurations() const{ return m_managedNotificationConfigurations; }
    inline void SetManagedNotificationConfigurations(const Aws::Vector<ManagedNotificationConfigurationStructure>& value) { m_managedNotificationConfigurations = value; }
    inline void SetManagedNotificationConfigurations(Aws::Vector<ManagedNotificationConfigurationStructure>&& value) { m_managedNotificationConfigurations = std::move(value); }
    inline ListManagedNotificationConfigurationsResult& WithManagedNotificationConfigurations(const Aws::Vector<ManagedNotificationConfigurationStructure>& value) { SetManagedNotificationConfigurations(value); return *this;}
    inline ListManagedNotificationConfigurationsResult& WithManagedNotificationConfigurations(Aws::Vector<ManagedNotificationConfigurationStructure>&& value) { SetManagedNotificationConfigurations(std::move(value)); return *this;}
    inline ListManagedNotificationConfigurationsResult& AddManagedNotificationConfigurations(const ManagedNotificationConfigurationStructure& value) { m_managedNotificationConfigurations.push_back(value); return *this; }
    inline ListManagedNotificationConfigurationsResult& AddManagedNotificationConfigurations(ManagedNotificationConfigurationStructure&& value) { m_managedNotificationConfigurations.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline ListManagedNotificationConfigurationsResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline ListManagedNotificationConfigurationsResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline ListManagedNotificationConfigurationsResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;

    Aws::Vector<ManagedNotificationConfigurationStructure> m_managedNotificationConfigurations;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
