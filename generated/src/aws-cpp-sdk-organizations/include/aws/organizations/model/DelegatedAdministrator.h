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
    AWS_ORGANIZATIONS_API DelegatedAdministrator();
    AWS_ORGANIZATIONS_API DelegatedAdministrator(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API DelegatedAdministrator& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_ORGANIZATIONS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The unique identifier (ID) of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetId() const{ return m_id; }
    inline bool IdHasBeenSet() const { return m_idHasBeenSet; }
    inline void SetId(const Aws::String& value) { m_idHasBeenSet = true; m_id = value; }
    inline void SetId(Aws::String&& value) { m_idHasBeenSet = true; m_id = std::move(value); }
    inline void SetId(const char* value) { m_idHasBeenSet = true; m_id.assign(value); }
    inline DelegatedAdministrator& WithId(const Aws::String& value) { SetId(value); return *this;}
    inline DelegatedAdministrator& WithId(Aws::String&& value) { SetId(std::move(value)); return *this;}
    inline DelegatedAdministrator& WithId(const char* value) { SetId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetArn() const{ return m_arn; }
    inline bool ArnHasBeenSet() const { return m_arnHasBeenSet; }
    inline void SetArn(const Aws::String& value) { m_arnHasBeenSet = true; m_arn = value; }
    inline void SetArn(Aws::String&& value) { m_arnHasBeenSet = true; m_arn = std::move(value); }
    inline void SetArn(const char* value) { m_arnHasBeenSet = true; m_arn.assign(value); }
    inline DelegatedAdministrator& WithArn(const Aws::String& value) { SetArn(value); return *this;}
    inline DelegatedAdministrator& WithArn(Aws::String&& value) { SetArn(std::move(value)); return *this;}
    inline DelegatedAdministrator& WithArn(const char* value) { SetArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that is associated with the delegated administrator's
     * Amazon Web Services account.</p>
     */
    inline const Aws::String& GetEmail() const{ return m_email; }
    inline bool EmailHasBeenSet() const { return m_emailHasBeenSet; }
    inline void SetEmail(const Aws::String& value) { m_emailHasBeenSet = true; m_email = value; }
    inline void SetEmail(Aws::String&& value) { m_emailHasBeenSet = true; m_email = std::move(value); }
    inline void SetEmail(const char* value) { m_emailHasBeenSet = true; m_email.assign(value); }
    inline DelegatedAdministrator& WithEmail(const Aws::String& value) { SetEmail(value); return *this;}
    inline DelegatedAdministrator& WithEmail(Aws::String&& value) { SetEmail(std::move(value)); return *this;}
    inline DelegatedAdministrator& WithEmail(const char* value) { SetEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The friendly name of the delegated administrator's account.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }
    inline DelegatedAdministrator& WithName(const Aws::String& value) { SetName(value); return *this;}
    inline DelegatedAdministrator& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}
    inline DelegatedAdministrator& WithName(const char* value) { SetName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of the delegated administrator's account in the organization.</p>
     */
    inline const AccountStatus& GetStatus() const{ return m_status; }
    inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
    inline void SetStatus(const AccountStatus& value) { m_statusHasBeenSet = true; m_status = value; }
    inline void SetStatus(AccountStatus&& value) { m_statusHasBeenSet = true; m_status = std::move(value); }
    inline DelegatedAdministrator& WithStatus(const AccountStatus& value) { SetStatus(value); return *this;}
    inline DelegatedAdministrator& WithStatus(AccountStatus&& value) { SetStatus(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method by which the delegated administrator's account joined the
     * organization.</p>
     */
    inline const AccountJoinedMethod& GetJoinedMethod() const{ return m_joinedMethod; }
    inline bool JoinedMethodHasBeenSet() const { return m_joinedMethodHasBeenSet; }
    inline void SetJoinedMethod(const AccountJoinedMethod& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = value; }
    inline void SetJoinedMethod(AccountJoinedMethod&& value) { m_joinedMethodHasBeenSet = true; m_joinedMethod = std::move(value); }
    inline DelegatedAdministrator& WithJoinedMethod(const AccountJoinedMethod& value) { SetJoinedMethod(value); return *this;}
    inline DelegatedAdministrator& WithJoinedMethod(AccountJoinedMethod&& value) { SetJoinedMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the delegated administrator's account became a part of the
     * organization.</p>
     */
    inline const Aws::Utils::DateTime& GetJoinedTimestamp() const{ return m_joinedTimestamp; }
    inline bool JoinedTimestampHasBeenSet() const { return m_joinedTimestampHasBeenSet; }
    inline void SetJoinedTimestamp(const Aws::Utils::DateTime& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = value; }
    inline void SetJoinedTimestamp(Aws::Utils::DateTime&& value) { m_joinedTimestampHasBeenSet = true; m_joinedTimestamp = std::move(value); }
    inline DelegatedAdministrator& WithJoinedTimestamp(const Aws::Utils::DateTime& value) { SetJoinedTimestamp(value); return *this;}
    inline DelegatedAdministrator& WithJoinedTimestamp(Aws::Utils::DateTime&& value) { SetJoinedTimestamp(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The date when the account was made a delegated administrator.</p>
     */
    inline const Aws::Utils::DateTime& GetDelegationEnabledDate() const{ return m_delegationEnabledDate; }
    inline bool DelegationEnabledDateHasBeenSet() const { return m_delegationEnabledDateHasBeenSet; }
    inline void SetDelegationEnabledDate(const Aws::Utils::DateTime& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = value; }
    inline void SetDelegationEnabledDate(Aws::Utils::DateTime&& value) { m_delegationEnabledDateHasBeenSet = true; m_delegationEnabledDate = std::move(value); }
    inline DelegatedAdministrator& WithDelegationEnabledDate(const Aws::Utils::DateTime& value) { SetDelegationEnabledDate(value); return *this;}
    inline DelegatedAdministrator& WithDelegationEnabledDate(Aws::Utils::DateTime&& value) { SetDelegationEnabledDate(std::move(value)); return *this;}
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

    AccountStatus m_status;
    bool m_statusHasBeenSet = false;

    AccountJoinedMethod m_joinedMethod;
    bool m_joinedMethodHasBeenSet = false;

    Aws::Utils::DateTime m_joinedTimestamp;
    bool m_joinedTimestampHasBeenSet = false;

    Aws::Utils::DateTime m_delegationEnabledDate;
    bool m_delegationEnabledDateHasBeenSet = false;
  };

} // namespace Model
} // namespace Organizations
} // namespace Aws
