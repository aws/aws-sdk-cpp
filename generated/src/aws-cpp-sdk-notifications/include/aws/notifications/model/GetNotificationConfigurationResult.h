/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/notifications/model/NotificationConfigurationStatus.h>
#include <aws/core/utils/DateTime.h>
#include <aws/notifications/model/AggregationDuration.h>
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
  class GetNotificationConfigurationResult
  {
  public:
    AWS_NOTIFICATIONS_API GetNotificationConfigurationResult();
    AWS_NOTIFICATIONS_API GetNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetNotificationConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetNotificationConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetNotificationConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetNotificationConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetNotificationConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetNotificationConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetNotificationConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetNotificationConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetNotificationConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of this <code>NotificationConfiguration</code>.</p>
     */
    inline const NotificationConfigurationStatus& GetStatus() const{ return m_status; }
    inline void SetStatus(const NotificationConfigurationStatus& value) { m_status = value; }
    inline void SetStatus(NotificationConfigurationStatus&& value) { m_status = std::move(value); }
    inline GetNotificationConfigurationResult& WithStatus(const NotificationConfigurationStatus& value) { SetStatus(value); return *this;}
    inline GetNotificationConfigurationResult& WithStatus(NotificationConfigurationStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The creation time of the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::Utils::DateTime& GetCreationTime() const{ return m_creationTime; }
    inline void SetCreationTime(const Aws::Utils::DateTime& value) { m_creationTime = value; }
    inline void SetCreationTime(Aws::Utils::DateTime&& value) { m_creationTime = std::move(value); }
    inline GetNotificationConfigurationResult& WithCreationTime(const Aws::Utils::DateTime& value) { SetCreationTime(value); return *this;}
    inline GetNotificationConfigurationResult& WithCreationTime(Aws::Utils::DateTime&& value) { SetCreationTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The aggregation preference of the <code>NotificationConfiguration</code>.</p>
     * <ul> <li> <p>Values:</p> <ul> <li> <p> <code>LONG</code> </p> <ul> <li>
     * <p>Aggregate notifications for long periods of time (12 hours).</p> </li> </ul>
     * </li> <li> <p> <code>SHORT</code> </p> <ul> <li> <p>Aggregate notifications for
     * short periods of time (5 minutes).</p> </li> </ul> </li> <li> <p>
     * <code>NONE</code> </p> <ul> <li> <p>Don't aggregate notifications.</p> </li>
     * </ul> </li> </ul> </li> </ul>
     */
    inline const AggregationDuration& GetAggregationDuration() const{ return m_aggregationDuration; }
    inline void SetAggregationDuration(const AggregationDuration& value) { m_aggregationDuration = value; }
    inline void SetAggregationDuration(AggregationDuration&& value) { m_aggregationDuration = std::move(value); }
    inline GetNotificationConfigurationResult& WithAggregationDuration(const AggregationDuration& value) { SetAggregationDuration(value); return *this;}
    inline GetNotificationConfigurationResult& WithAggregationDuration(AggregationDuration&& value) { SetAggregationDuration(std::move(value)); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetNotificationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetNotificationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetNotificationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    NotificationConfigurationStatus m_status;

    Aws::Utils::DateTime m_creationTime;

    AggregationDuration m_aggregationDuration;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
