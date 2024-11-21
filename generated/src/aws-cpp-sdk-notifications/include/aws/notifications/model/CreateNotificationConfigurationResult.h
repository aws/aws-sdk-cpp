/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationConfigurationStatus.h>
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
  class CreateNotificationConfigurationResult
  {
  public:
    AWS_NOTIFICATIONS_API CreateNotificationConfigurationResult();
    AWS_NOTIFICATIONS_API CreateNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API CreateNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline CreateNotificationConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline CreateNotificationConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline CreateNotificationConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this NotificationConfiguration.</p> <p>The status should always
     * be <code>INACTIVE</code> when part of the CreateNotificationConfiguration
     * response.</p> <ul> <li> <p>Values:</p> <ul> <li> <p> <code>ACTIVE</code> </p>
     * <ul> <li> <p>All EventRules are <code>ACTIVE</code> and any call can be run.</p>
     * </li> </ul> </li> <li> <p> <code>PARTIALLY_ACTIVE</code> </p> <ul> <li> <p>Some
     * EventRules are <code>ACTIVE</code> and some are <code>INACTIVE</code>.</p> </li>
     * <li> <p>Any call can be run.</p> </li> </ul> </li> <li> <p>
     * <code>INACTIVE</code> </p> <ul> <li> <p>All EventRules are <code>INACTIVE</code>
     * and any call can be run.</p> </li> </ul> </li> <li> <p> <code>DELETING</code>
     * </p> <ul> <li> <p>This NotificationConfiguration is being deleted.</p> </li>
     * <li> <p>Only <code>GET</code> and <code>LIST</code> calls can be run.</p> </li>
     * </ul> </li> </ul> </li> </ul>
     */
    inline const NotificationConfigurationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NotificationConfigurationStatus& value) { m_status = value; }
    inline void SetStatus(NotificationConfigurationStatus&& value) { m_status = std::move(value); }
    inline CreateNotificationConfigurationResult& WithStatus(const NotificationConfigurationStatus& value) { SetStatus(value); return *this;}
    inline CreateNotificationConfigurationResult& WithStatus(NotificationConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline CreateNotificationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline CreateNotificationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline CreateNotificationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    NotificationConfigurationStatus m_status;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
