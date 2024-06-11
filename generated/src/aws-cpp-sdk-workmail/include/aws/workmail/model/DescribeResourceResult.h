/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/workmail/model/ResourceType.h>
#include <aws/workmail/model/BookingOptions.h>
#include <aws/workmail/model/EntityState.h>
#include <aws/core/utils/DateTime.h>
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
namespace WorkMail
{
namespace Model
{
  class DescribeResourceResult
  {
  public:
    AWS_WORKMAIL_API DescribeResourceResult();
    AWS_WORKMAIL_API DescribeResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the described resource.</p>
     */
    inline const Aws::String& GetResourceId() const{ return m_resourceId; }
    inline void SetResourceId(const Aws::String& value) { m_resourceId = value; }
    inline void SetResourceId(Aws::String&& value) { m_resourceId = std::move(value); }
    inline void SetResourceId(const char* value) { m_resourceId.assign(value); }
    inline DescribeResourceResult& WithResourceId(const Aws::String& value) { SetResourceId(value); return *this;}
    inline DescribeResourceResult& WithResourceId(Aws::String&& value) { SetResourceId(std::move(value)); return *this;}
    inline DescribeResourceResult& WithResourceId(const char* value) { SetResourceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the described resource.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline void SetEmail(const Aws::String& value) { m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_email.assign(value); }
    inline DescribeResourceResult& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline DescribeResourceResult& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline DescribeResourceResult& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the described resource.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline void SetName(const Aws::String& value) { m_name = value; }
    inline void SetName(Aws::String&& value) { m_name = std::move(value); }
    inline void SetName(const char* value) { m_name.assign(value); }
    inline DescribeResourceResult& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DescribeResourceResult& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DescribeResourceResult& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the described resource.</p>
     */
    inline const ResourceType& GetType() const{ return m_type; }
    inline void SetType(const ResourceType& value) { m_type = value; }
    inline void SetType(ResourceType&& value) { m_type = std::move(value); }
    inline DescribeResourceResult& WithType(const ResourceType& value) { SetType(value); return *this;}
    inline DescribeResourceResult& WithType(ResourceType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The booking options for the described resource.</p>
     */
    inline const BookingOptions& GetBookingOptions() const{ return m_bookingOptions; }
    inline void SetBookingOptions(const BookingOptions& value) { m_bookingOptions = value; }
    inline void SetBookingOptions(BookingOptions&& value) { m_bookingOptions = std::move(value); }
    inline DescribeResourceResult& WithBookingOptions(const BookingOptions& value) { SetBookingOptions(value); return *this;}
    inline DescribeResourceResult& WithBookingOptions(BookingOptions&& value) { SetBookingOptions(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the resource: enabled (registered to WorkMail), disabled
     * (deregistered or never registered to WorkMail), or deleted.</p>
     */
    inline const EntityState& GetState() const{ return m_state; }
    inline void SetState(const EntityState& value) { m_state = value; }
    inline void SetState(EntityState&& value) { m_state = std::move(value); }
    inline DescribeResourceResult& WithState(const EntityState& value) { SetState(value); return *this;}
    inline DescribeResourceResult& WithState(EntityState&& value) { SetState(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const{ return m_enabledDate; }
    inline void SetEnabledDate(const Aws::Utils::DateTime& value) { m_enabledDate = value; }
    inline void SetEnabledDate(Aws::Utils::DateTime&& value) { m_enabledDate = std::move(value); }
    inline DescribeResourceResult& WithEnabledDate(const Aws::Utils::DateTime& value) { SetEnabledDate(value); return *this;}
    inline DescribeResourceResult& WithEnabledDate(Aws::Utils::DateTime&& value) { SetEnabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const{ return m_disabledDate; }
    inline void SetDisabledDate(const Aws::Utils::DateTime& value) { m_disabledDate = value; }
    inline void SetDisabledDate(Aws::Utils::DateTime&& value) { m_disabledDate = std::move(value); }
    inline DescribeResourceResult& WithDisabledDate(const Aws::Utils::DateTime& value) { SetDisabledDate(value); return *this;}
    inline DescribeResourceResult& WithDisabledDate(Aws::Utils::DateTime&& value) { SetDisabledDate(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const{ return m_description; }
    inline void SetDescription(const Aws::String& value) { m_description = value; }
    inline void SetDescription(Aws::String&& value) { m_description = std::move(value); }
    inline void SetDescription(const char* value) { m_description.assign(value); }
    inline DescribeResourceResult& WithDescription(const Aws::String& value) { SetDescription(value); return *this;}
    inline DescribeResourceResult& WithDescription(Aws::String&& value) { SetDescription(std::move(value)); return *this;}
    inline DescribeResourceResult& WithDescription(const char* value) { SetDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the resource is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const{ return m_hiddenFromGlobalAddressList; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressList = value; }
    inline DescribeResourceResult& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const{ return m_requestId; }
    inline void SetRequestId(const Aws::String& value) { m_requestId = value; }
    inline void SetRequestId(Aws::String&& value) { m_requestId = std::move(value); }
    inline void SetRequestId(const char* value) { m_requestId.assign(value); }
    inline DescribeResourceResult& WithRequestId(const Aws::String& value) { SetRequestId(value); return *this;}
    inline DescribeResourceResult& WithRequestId(Aws::String&& value) { SetRequestId(std::move(value)); return *this;}
    inline DescribeResourceResult& WithRequestId(const char* value) { SetRequestId(value); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;

    Aws::String m_email;

    Aws::String m_name;

    ResourceType m_type;

    BookingOptions m_bookingOptions;

    EntityState m_state;

    Aws::Utils::DateTime m_enabledDate;

    Aws::Utils::DateTime m_disabledDate;

    Aws::String m_description;

    bool m_hiddenFromGlobalAddressList;

    Aws::String m_requestId;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
