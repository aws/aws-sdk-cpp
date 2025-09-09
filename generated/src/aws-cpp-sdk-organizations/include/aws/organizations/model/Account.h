/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/organizations/Organizations_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/organizations/model/AccountStatus.h>
#include <aws/organizations/model/AccountState.h>
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
   * <p>Contains information about an Amazon Web Services account that is a member of
   * an organization.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/organizations-2016-11-28/Account">AWS
   * API Reference</a></p>
   */
  class Account
  {
  public:
    AWS_ORGANIZATIONS_API Account() = default;
    AWS_ORGANIZATIONS_API Account(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Account& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> for an account ID
     * string requires exactly 12 digits.</p>
     */
    inline const Aws::String& GetId() const { return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    template<typename IdT = Aws::String>
    void SetId(IdT&& value) { m_idHasBeenSet = true; m_id = std::forward<IdT>(value); }
    template<typename IdT = Aws::String>
    Account& WithId(IdT&& value) { SetId(std::forward<IdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the account.</p> <p>For more information
     * about ARNs in Organizations, see <a
     * href="https://docs.aws.amazon.com/service-authorization/latest/reference/list_awsorganizations.html#awsorganizations-resources-for-iam-policies">ARN
     * Formats Supported by Organizations</a> in the <i>Amazon Web Services Service
     * Authorization Reference</i>.</p>
     */
    inline const Aws::String& GetArn() const { return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    template<typename ArnT = Aws::String>
    void SetArn(ArnT&& value) { m_arnHasBeenSet = true; m_arn = std::forward<ArnT>(value); }
    template<typename ArnT = Aws::String>
    Account& WithArn(ArnT&& value) { SetArn(std::forward<ArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address associated with the Amazon Web Services account.</p> <p>The
     * <a href="http://wikipedia.org/wiki/regex">regex pattern</a> for this parameter
     * is a string of characters that represents a standard internet email address.</p>
     */
    inline const Aws::String& GetEmail() const { return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    template<typename EmailT = Aws::String>
    void SetEmail(EmailT&& value) { m_emailHasBeenSet = true; m_email = std::forward<EmailT>(value); }
    template<typename EmailT = Aws::String>
    Account& WithEmail(EmailT&& value) { SetEmail(std::forward<EmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the account.</p> <p>The <a
     * href="http://wikipedia.org/wiki/regex">regex pattern</a> that is used to
     * validate this parameter is a string of any of the characters in the ASCII
     * character range.</p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    Account& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the account in the organization.</p>  <p>The
     * <code>Status</code> parameter in the <code>Account</code> object will be retired
     * on September 9, 2026. Although both the account <code>State</code> and account
     * <code>Status</code> parameters are currently available in the Organizations APIs
     * (<code>DescribeAccount</code>, <code>ListAccounts</code>,
     * <code>ListAccountsForParent</code>), we recommend that you update your scripts
     * or other code to use the <code>State</code> parameter instead of
     * <code>Status</code> before September 9, 2026.</p> 
     */
    inline AccountStatus GetStatus() const { return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(AccountStatus value) { m_statusHasBeenSet = true; m_status = value; }
    inline Account& WithStatus(AccountStatus value) { SetStatus(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Each state represents a specific phase in the account lifecycle. Use this
     * information to manage account access, automate workflows, or trigger actions
     * based on account state changes.</p> <p>For more information about account states
     * and their implications, see <a
     * href="https://docs.aws.amazon.com/organizations/latest/userguide/orgs_manage_accounts_account_state.html">Monitor
     * the state of your Amazon Web Services accounts </a> in the <i>Organizations User
     * Guide</i>.</p>
     */
    inline AccountState GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(AccountState value) { m_stateHasBeenSet = true; m_state = value; }
    inline Account& WithState(AccountState value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method by which the account joined the organization.</p>
     */
    inline AccountJoinedMethod GetJoinedMethod() const { return m_joinedMethod; }
    inline bool JoinedMethodHasBeenSet() const { return m_joinedMethodHasBeenSet; }
    inline void SetJoinedMethod(AccountJoinedMethod value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }
    inline Account& WithJoinedMethod(AccountJoinedMethod value) { SetJoinedMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date the account became a part of the organization.</p>
     */
    inline const Aws::Utils::DateTime& GetJoinedTimestamp() const { return m_joinedTimestamp; }
    inline bool JoinedTimestampHasBeenSet() const { return m_joinedTimestampHasBeenSet; }
    template<typename JoinedTimestampT = Aws::Utils::DateTime>
    void SetJoinedTimestamp(JoinedTimestampT&& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = std::forward<JoinedTimestampT>(value); }
    template<typename JoinedTimestampT = Aws::Utils::DateTime>
    Account& WithJoinedTimestamp(JoinedTimestampT&& value) { SetJoinedTimestamp(std::forward<JoinedTimestampT>(value)); return *this;}
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

    AccountState m_state{AccountState::NOT_SET};
    bool m_stateHasBeenSet = false;

    AccountJoinedMethod m_joinedMethod{AccountJoinedMethod::NOT_SET};
    bool m_joinedMethodHasBeenSet = false;

    Aws::Utils::DateTime m_joinedTimestamp{};
    bool m_joinedTimestampHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
