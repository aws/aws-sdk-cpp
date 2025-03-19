/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workmail/WorkMail_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
  class DescribeGroupResult
  {
  public:
    AWS_WORKMAIL_API DescribeGroupResult() = default;
    AWS_WORKMAIL_API DescribeGroupResult(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);
    AWS_WORKMAIL_API DescribeGroupResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Json::JsonValue>& result);


    ///@{
    /**
     * <p>The identifier of the described group.</p>
     */
    inline const Aws::String& GetGroupId() const { return m_groupId; }
    template<typename GroupIdT = Aws::String>
    void SetGroupId(GroupIdT&& value) { m_groupIdHasBeenSet = true; m_groupId = std::forward<GroupIdT>(value); }
    template<typename GroupIdT = Aws::String>
    DescribeGroupResult& WithGroupId(GroupIdT&& value) { SetGroupId(std::forward<GroupIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of the described group.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DescribeGroupResult& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email of the described group.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    DescribeGroupResult& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the user: enabled (registered to WorkMail) or disabled
     * (deregistered or never registered to WorkMail).</p>
     */
    inline EntityState GetState() const { return m_state; }
    inline void SetState(EntityState value) { m_stateHasBeenSet = true; m_state = value; }
    inline DescribeGroupResult& WithState(EntityState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a user was registered to WorkMail, in UNIX epoch time
     * format.</p>
     */
    inline const Aws::Utils::DateTime& GetEnabledDate() const { return m_enabledDate; }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    void SetEnabledDate(EnabledDateT&& value) { m_enabledDateHasBeenSet = true; m_enabledDate = std::forward<EnabledDateT>(value); }
    template<typename EnabledDateT = Aws::Utils::DateTime>
    DescribeGroupResult& WithEnabledDate(EnabledDateT&& value) { SetEnabledDate(std::forward<EnabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date and time when a user was deregistered from WorkMail, in UNIX epoch
     * time format.</p>
     */
    inline const Aws::Utils::DateTime& GetDisabledDate() const { return m_disabledDate; }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    void SetDisabledDate(DisabledDateT&& value) { m_disabledDateHasBeenSet = true; m_disabledDate = std::forward<DisabledDateT>(value); }
    template<typename DisabledDateT = Aws::Utils::DateTime>
    DescribeGroupResult& WithDisabledDate(DisabledDateT&& value) { SetDisabledDate(std::forward<DisabledDateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>If the value is set to <i>true</i>, the group is hidden from the address
     * book.</p>
     */
    inline bool GetHiddenFromGlobalAddressList() const { return m_hiddenFromGlobalAddressList; }
    inline void SetHiddenFromGlobalAddressList(bool value) { m_hiddenFromGlobalAddressListHasBeenSet = true; m_hiddenFromGlobalAddressList = value; }
    inline DescribeGroupResult& WithHiddenFromGlobalAddressList(bool value) { SetHiddenFromGlobalAddressList(value); return *this;}
    ///@}

    ///@{
    
    inline const Aws::String& GetRequestId() const { return m_requestId; }
    template<typename RequestIdT = Aws::String>
    void SetRequestId(RequestIdT&& value) { m_requestIdHasBeenSet = true; m_requestId = std::forward<RequestIdT>(value); }
    template<typename RequestIdT = Aws::String>
    DescribeGroupResult& WithRequestId(RequestIdT&& value) { SetRequestId(std::forward<RequestIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_groupId;
    bool m_groupIdHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    EntityState m_state{EntityState::NOT_SET};
    bool m_stateHasBeenSet = false;

    Aws::Utils::DateTime m_enabledDate{};
    bool m_enabledDateHasBeenSet = false;

    Aws::Utils::DateTime m_disabledDate{};
    bool m_disabledDateHasBeenSet = false;

    bool m_hiddenFromGlobalAddressList{false};
    bool m_hiddenFromGlobalAddressListHasBeenSet = false;

    Aws::String m_requestId;
    bool m_requestIdHasBeenSet = false;
  };

} // namespace Model
} // namespace WorkMail
} // namespace Aws
