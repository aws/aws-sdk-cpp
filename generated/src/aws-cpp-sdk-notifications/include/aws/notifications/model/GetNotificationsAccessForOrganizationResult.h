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
    AWS_NOTIFICATIONS_API GetNotificationsAccessForOrganizationResult();
    AWS_NOTIFICATIONS_API GetNotificationsAccessForOrganizationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetNotificationsAccessForOrganizationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The <code>AccessStatus</code> of Service Trust Enablement for User
     * Notifications to Amazon Web Services Organizations.</p>
     */
    inline const NotificationsAccessForOrganization& GetNotificationsAccessForOrganization() const{ return m_notificationsAccessForOrganization; }
    inline void SetNotificationsAccessForOrganization(const NotificationsAccessForOrganization& value) { m_notificationsAccessForOrganization = value; }
    inline void SetNotificationsAccessForOrganization(NotificationsAccessForOrganization&& value) { m_notificationsAccessForOrganization = std::move(value); }
    inline GetNotificationsAccessForOrganizationResult& WithNotificationsAccessForOrganization(const NotificationsAccessForOrganization& value) { SetNotificationsAccessForOrganization(value); return *this;}
    inline GetNotificationsAccessForOrganizationResult& WithNotificationsAccessForOrganization(NotificationsAccessForOrganization&& value) { SetNotificationsAccessForOrganization(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNotificationsAccessForOrganizationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNotificationsAccessForOrganizationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNotificationsAccessForOrganizationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    NotificationsAccessForOrganization m_notificationsAccessForOrganization;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
