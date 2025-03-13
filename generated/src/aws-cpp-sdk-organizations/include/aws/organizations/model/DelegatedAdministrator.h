/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/AccountStatus.h>
#include <aws/organizations/model/AccountJoinedMethod.h>
#include <aws/core/utils/DateTime.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
  class JsonView;
} // namespace Json
} // namespace Utils
namespace Organizations
{
namespace Model
{

  /**
   * <p>Contains information about the delegated administrator.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/DelegatedAdministrator">AWS
   * API Reference</a></p>
   */
  class DelegatedAdministrator
  {
  public:
    AWS_ORGANIZATIONS_API DelegatedAdministrator() = default;
    AWS_ORGANIZATIONS_API DelegatedAdministrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API DelegatedAdministrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    DelegatedAdministrator& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    DelegatedAdministrator& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    DelegatedAdministrator& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    DelegatedAdministrator& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline AccountStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AccountStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline DelegatedAdministrator& WithStatus(AccountStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline AccountJoinedMethod GetJoinedMethod() const { return m_joinedMethod; }
    inline bool JoinedMethodHasBeenSet() const { return m_joinedMethodHasBeenSet; }
    inline void SetJoinedMethod(AccountJoinedMethod value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }
    inline DelegatedAdministrator& WithJoinedMethod(AccountJoinedMethod value) { SetJoinedMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline const Aws::Utils::DateTime& GetJoinedTimestamp() const { return m_joinedTimestamp; }
    inline bool JoinedTimestampHasBeenSet() const { return m_joinedTimestampHasBeenSet; }
    template<typename JoinedTimestampT = Aws::Utils::DateTime>
    void SetJoinedTimestamp(JoinedTimestampT&& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = std::forward<JoinedTimestampT>(value); }
    template<typename JoinedTimestampT = Aws::Utils::DateTime>
    DelegatedAdministrator& WithJoinedTimestamp(JoinedTimestampT&& value) { SetJoinedTimestamp(std::forward<JoinedTimestampT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline const Aws::Utils::DateTime& GetDelegationEnabledDate() const { return m_delegationEnabledDate; }
    inline bool DelegationEnabledDateHasBeenSet() const { return m_delegationEnabledDateHasBeenSet; }
    template<typename DelegationEnabledDateT = Aws::Utils::DateTime>
    void SetDelegationEnabledDate(DelegationEnabledDateT&& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = std::forward<DelegationEnabledDateT>(value); }
    template<typename DelegationEnabledDateT = Aws::Utils::DateTime>
    DelegatedAdministrator& WithDelegationEnabledDate(DelegationEnabledDateT&& value) { SetDelegationEnabledDate(std::forward<DelegationEnabledDateT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_id;
    bool m_idHasBeenSet = false;

    Aws::String m_arn;
    bool m_arnHasBeenSet = false;

    Aws::String m_email;
    bool m_emailHasBeenSet = false;

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    AccountStatus m_status{AccountStatus::NOT_SET};
    bool m_statusHasBeenSet = false;

    AccountJoinedMethod m_joinedMethod{AccountJoinedMethod::NOT_SET};
    bool m_joinedMethodHasBeenSet = false;

    Aws::Utils::DateTime m_joinedTimestamp{};
    bool m_joinedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_delegationEnabledDate{};
    bool m_delegationEnabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
