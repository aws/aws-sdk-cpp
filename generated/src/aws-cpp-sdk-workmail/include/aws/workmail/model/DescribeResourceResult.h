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
    AWS_WORKMAIL_API DescribeResourceResult() = default;
    AWS_WORKMAIL_API DescribeResourceResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeResourceResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the described resource.</p>
     */
    inline const Aws::String& GetResourceId() const { return m_resourceId; }
    template<typename ResourceIdT = Aws::String>
    void SetResourceId(ResourceIdT&& value) { m_resourceIdHasBeenSet = true; m_resourceId = std::forward<ResourceIdT>(value); }
    template<typename ResourceIdT = Aws::String>
    DescribeResourceResult& WithResourceId(ResourceIdT&& value) { SetResourceId(std::forward<ResourceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the described resource.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    DescribeResourceResult& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the described resource.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeResourceResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the described resource.</p>
     */
    inline ResourceType GetType() const { return m_type; }
    inline void SetType(ResourceType value) { m_typeHasBeenSet = true; m_type = value; }
    inline DescribeResourceResult& WithType(ResourceType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The booking options for the described resource.</p>
     */
    inline const BookingOptions& GetBookingOptions() const { return m_bookingOptions; }
    template<typename BookingOptionsT = BookingOptions>
    void SetBookingOptions(BookingOptionsT&& value) { m_bookingOptionsHasBeenSet = true; m_bookingOptions = std::forward<BookingOptionsT>(value); }
    template<typename BookingOptionsT = BookingOptions>
    DescribeResourceResult& WithBookingOptions(BookingOptionsT&& value) { SetBookingOptions(std::forward<BookingOptionsT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the resource: enabled (registered to WorkMail), disabled
     * (deregistered or never registered to WorkMail), or deleted.</p>
     */
    inline EntityState GetState() const { return m_state; }
    inline void SetState(EntityState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeResourceResult& WithState(EntityState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a resource was enabled for WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const { return m_enabledDate; }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    void SetEnabledDate(EnabledDateT&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::forward<EnabledDateT>(value); }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    DescribeResourceResult& WithEnabledDate(EnabledDateT&& value) { SetEnabledDate(std::forward<EnabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a resource was disabled from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const { return m_disabledDate; }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    void SetDisabledDate(DisabledDateT&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::forward<DisabledDateT>(value); }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    DescribeResourceResult& WithDisabledDate(DisabledDateT&& value) { SetDisabledDate(std::forward<DisabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Description of the resource.</p>
     */
    inline const Aws::String& GetDescription() const { return m_description; }
    template<typename DescriptionT = Aws::String>
    void SetDescription(DescriptionT&& value) { m_descriptionHasBeenSet = true; m_description = std::forward<DescriptionT>(value); }
    template<typename DescriptionT = Aws::String>
    DescribeResourceResult& WithDescription(DescriptionT&& value) { SetDescription(std::forward<DescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If enabled, the resource is hidden from the global address list.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const { return m_hiddenFromGlobalAddressList; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline DescribeResourceResult& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeResourceResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_resourceId;
    bool m_resourceIdHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    ResourceType m_type{ResourceType::NOT_SET};
    bool m_typeHasBeenSet = false;

    BookingOptions m_bookingOptions;
    bool m_bookingOptionsHasBeenSet = false;

    EntityState m_state{EntityState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate{};
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate{};
    bool m_disabledDateHasBeenSet = false;

    Aws::String m_description;
    bool m_descriptionHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList{false};
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
