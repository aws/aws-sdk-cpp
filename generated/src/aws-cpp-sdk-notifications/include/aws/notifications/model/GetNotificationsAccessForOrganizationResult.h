/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/model/NotificationsAccessForOrganization.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class GetNotificationsAccessForOrganizationResult
  {
  public:
    AWS_NOTIFICATIONS_API GetNotificationsAccessForOrganizationResult() = default;
    AWS_NOTIFICATIONS_API GetNotificationsAccessForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetNotificationsAccessForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>AccessStatus</code> of Service Trust Enablement for User
     * Notifications to Amazon Web Services Organizations.</p>
     */
    inline const NotificationsAccessForOrganization& GetNotificationsAccessForOrganization() const { return m_notificationsAccessForOrganization; }
    template<typename NotificationsAccessForOrganizationT = NotificationsAccessForOrganization>
    void SetNotificationsAccessForOrganization(NotificationsAccessForOrganizationT&& value) { m_notificationsAccessForOrganizationHasBeenSet = true; m_notificationsAccessForOrganization = std::forward<NotificationsAccessForOrganizationT>(value); }
    template<typename NotificationsAccessForOrganizationT = NotificationsAccessForOrganization>
    GetNotificationsAccessForOrganizationResult& WithNotificationsAccessForOrganization(NotificationsAccessForOrganizationT&& value) { SetNotificationsAccessForOrganization(std::forward<NotificationsAccessForOrganizationT>(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    GetNotificationsAccessForOrganizationResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    NotificationsAccessForOrganization m_notificationsAccessForOrganization;
    bool m_notificationsAccessForOrganizationHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
