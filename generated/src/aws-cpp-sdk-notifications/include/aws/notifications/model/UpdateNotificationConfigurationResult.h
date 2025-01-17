/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
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
  class UpdateNotificationConfigurationResult
  {
  public:
    AWS_NOTIFICATIONS_API UpdateNotificationConfigurationResult();
    AWS_NOTIFICATIONS_API UpdateNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API UpdateNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN used to update the <code>NotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline UpdateNotificationConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline UpdateNotificationConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline UpdateNotificationConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline UpdateNotificationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline UpdateNotificationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline UpdateNotificationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
