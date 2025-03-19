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
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsResult() = default;
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API ListManagedNotificationConfigurationsResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>A pagination token. If a non-null pagination token is returned in a result,
     * pass its value in another request to retrieve more entries.</p>
     */
    inline const Aws::String& GetNextToken() const { return m_nextToken; }
    template<typename NextTokenT = Aws::String>
    void SetNextToken(NextTokenT&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::forward<NextTokenT>(value); }
    template<typename NextTokenT = Aws::String>
    ListManagedNotificationConfigurationsResult& WithNextToken(NextTokenT&& value) { SetNextToken(std::forward<NextTokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A list of Managed Notification Configurations matching the request
     * criteria.</p>
     */
    inline const Aws::Vector<ManagedNotificationConfigurationStructure>& GetManagedNotificationConfigurations() const { return m_managedNotificationConfigurations; }
    template<typename ManagedNotificationConfigurationsT = Aws::Vector<ManagedNotificationConfigurationStructure>>
    void SetManagedNotificationConfigurations(ManagedNotificationConfigurationsT&& value) { m_managedNotificationConfigurationsHasBeenSet = true; m_managedNotificationConfigurations = std::forward<ManagedNotificationConfigurationsT>(value); }
    template<typename ManagedNotificationConfigurationsT = Aws::Vector<ManagedNotificationConfigurationStructure>>
    ListManagedNotificationConfigurationsResult& WithManagedNotificationConfigurations(ManagedNotificationConfigurationsT&& value) { SetManagedNotificationConfigurations(std::forward<ManagedNotificationConfigurationsT>(value)); return *this;}
    template<typename ManagedNotificationConfigurationsT = ManagedNotificationConfigurationStructure>
    ListManagedNotificationConfigurationsResult& AddManagedNotificationConfigurations(ManagedNotificationConfigurationsT&& value) { m_managedNotificationConfigurationsHasBeenSet = true; m_managedNotificationConfigurations.emplace_back(std::forward<ManagedNotificationConfigurationsT>(value)); return *this; }
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    ListManagedNotificationConfigurationsResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;

    Aws::Vector<ManagedNotificationConfigurationStructure> m_managedNotificationConfigurations;
    bool m_managedNotificationConfigurationsHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
