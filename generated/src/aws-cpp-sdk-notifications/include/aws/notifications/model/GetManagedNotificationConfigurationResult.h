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
  class GetManagedNotificationConfigurationResult
  {
  public:
    AWS_NOTIFICATIONS_API GetManagedNotificationConfigurationResult();
    AWS_NOTIFICATIONS_API GetManagedNotificationConfigurationResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_NOTIFICATIONS_API GetManagedNotificationConfigurationResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The ARN of the <code>ManagedNotificationConfiguration</code> resource.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline void SetArn(const Aws::String& value) { m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arn.assign(value); }
    inline GetManagedNotificationConfigurationResult& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline GetManagedNotificationConfigurationResult& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline GetManagedNotificationConfigurationResult& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline GetManagedNotificationConfigurationResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline GetManagedNotificationConfigurationResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline GetManagedNotificationConfigurationResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline GetManagedNotificationConfigurationResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline GetManagedNotificationConfigurationResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline GetManagedNotificationConfigurationResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The category of the <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetCategory() const{ return m_category; }
    inline void SetCategory(const Aws::String& value) { m_category = value; }
    inline void SetCategory(Aws::String&& value) { m_category = std::move(value); }
    inline void SetCategory(const char* value) { m_category.assign(value); }
    inline GetManagedNotificationConfigurationResult& WithCategory(const Aws::String& value) { SetCategory(value); return *this;}
    inline GetManagedNotificationConfigurationResult& WithCategory(Aws::String&& value) { SetCategory(std::move(value)); return *this;}
    inline GetManagedNotificationConfigurationResult& WithCategory(const char* value) { SetCategory(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subCategory of the <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline const Aws::String& GetSubCategory() const{ return m_subCategory; }
    inline void SetSubCategory(const Aws::String& value) { m_subCategory = value; }
    inline void SetSubCategory(Aws::String&& value) { m_subCategory = std::move(value); }
    inline void SetSubCategory(const char* value) { m_subCategory.assign(value); }
    inline GetManagedNotificationConfigurationResult& WithSubCategory(const Aws::String& value) { SetSubCategory(value); return *this;}
    inline GetManagedNotificationConfigurationResult& WithSubCategory(Aws::String&& value) { SetSubCategory(std::move(value)); return *this;}
    inline GetManagedNotificationConfigurationResult& WithSubCategory(const char* value) { SetSubCategory(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline GetManagedNotificationConfigurationResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline GetManagedNotificationConfigurationResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline GetManagedNotificationConfigurationResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_arn;

    Aws::String m_name;

    Aws::String m_description;

    Aws::String m_category;

    Aws::String m_subCategory;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
