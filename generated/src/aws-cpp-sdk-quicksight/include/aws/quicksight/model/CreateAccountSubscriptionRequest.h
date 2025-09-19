/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/quicksight/model/Edition.h>
#include <aws/quicksight/model/AuthenticationMethodOption.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class CreateAccountSubscriptionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API CreateAccountSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountSubscription"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The edition of QuickSight that you want your account to have. Currently, you
     * can choose from <code>ENTERPRISE</code> or <code>ENTERPRISE_AND_Q</code>.</p>
     * <p>If you choose <code>ENTERPRISE_AND_Q</code>, the following parameters are
     * required:</p> <ul> <li> <p> <code>FirstName</code> </p> </li> <li> <p>
     * <code>LastName</code> </p> </li> <li> <p> <code>EmailAddress</code> </p> </li>
     * <li> <p> <code>ContactNumber</code> </p> </li> </ul>
     */
    inline Edition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(Edition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline CreateAccountSubscriptionRequest& WithEdition(Edition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that you want to use to authenticate your QuickSight account.</p>
     * <p>If you choose <code>ACTIVE_DIRECTORY</code>, provide an
     * <code>ActiveDirectoryName</code> and an <code>AdminGroup</code> associated with
     * your Active Directory.</p> <p>If you choose <code>IAM_IDENTITY_CENTER</code>,
     * provide an <code>AdminGroup</code> associated with your IAM Identity Center
     * account.</p>
     */
    inline AuthenticationMethodOption GetAuthenticationMethod() const { return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    inline void SetAuthenticationMethod(AuthenticationMethodOption value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }
    inline CreateAccountSubscriptionRequest& WithAuthenticationMethod(AuthenticationMethodOption value) { SetAuthenticationMethod(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    CreateAccountSubscriptionRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your QuickSight account. This name is unique over all of Amazon
     * Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the QuickSight account is created.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    CreateAccountSubscriptionRequest& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your QuickSight account or QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const { return m_notificationEmail; }
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }
    template<typename NotificationEmailT = Aws::String>
    void SetNotificationEmail(NotificationEmailT&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::forward<NotificationEmailT>(value); }
    template<typename NotificationEmailT = Aws::String>
    CreateAccountSubscriptionRequest& WithNotificationEmail(NotificationEmailT&& value) { SetNotificationEmail(std::forward<NotificationEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * QuickSight account.</p>
     */
    inline const Aws::String& GetActiveDirectoryName() const { return m_activeDirectoryName; }
    inline bool ActiveDirectoryNameHasBeenSet() const { return m_activeDirectoryNameHasBeenSet; }
    template<typename ActiveDirectoryNameT = Aws::String>
    void SetActiveDirectoryName(ActiveDirectoryNameT&& value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName = std::forward<ActiveDirectoryNameT>(value); }
    template<typename ActiveDirectoryNameT = Aws::String>
    CreateAccountSubscriptionRequest& WithActiveDirectoryName(ActiveDirectoryNameT&& value) { SetActiveDirectoryName(std::forward<ActiveDirectoryNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The realm of the Active Directory that is associated with your QuickSight
     * account. This field is required if <code>ACTIVE_DIRECTORY</code> is the selected
     * authentication method of the new QuickSight account.</p>
     */
    inline const Aws::String& GetRealm() const { return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    template<typename RealmT = Aws::String>
    void SetRealm(RealmT&& value) { m_realmHasBeenSet = true; m_realm = std::forward<RealmT>(value); }
    template<typename RealmT = Aws::String>
    CreateAccountSubscriptionRequest& WithRealm(RealmT&& value) { SetRealm(std::forward<RealmT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Active Directory that is associated with your QuickSight
     * account.</p>
     */
    inline const Aws::String& GetDirectoryId() const { return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    template<typename DirectoryIdT = Aws::String>
    void SetDirectoryId(DirectoryIdT&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::forward<DirectoryIdT>(value); }
    template<typename DirectoryIdT = Aws::String>
    CreateAccountSubscriptionRequest& WithDirectoryId(DirectoryIdT&& value) { SetDirectoryId(std::forward<DirectoryIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The admin group associated with your Active Directory or IAM Identity Center
     * account. Either this field or the <code>AdminProGroup</code> field is required
     * if <code>ACTIVE_DIRECTORY</code> or <code>IAM_IDENTITY_CENTER</code> is the
     * selected authentication method of the new QuickSight account.</p> <p>For more
     * information about using IAM Identity Center in QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with QuickSight Enterprise Edition</a> in the QuickSight
     * User Guide. For more information about using Active Directory in QuickSight, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with QuickSight Enterprise Edition</a> in the QuickSight User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminGroup() const { return m_adminGroup; }
    inline bool AdminGroupHasBeenSet() const { return m_adminGroupHasBeenSet; }
    template<typename AdminGroupT = Aws::Vector<Aws::String>>
    void SetAdminGroup(AdminGroupT&& value) { m_adminGroupHasBeenSet = true; m_adminGroup = std::forward<AdminGroupT>(value); }
    template<typename AdminGroupT = Aws::Vector<Aws::String>>
    CreateAccountSubscriptionRequest& WithAdminGroup(AdminGroupT&& value) { SetAdminGroup(std::forward<AdminGroupT>(value)); return *this;}
    template<typename AdminGroupT = Aws::String>
    CreateAccountSubscriptionRequest& AddAdminGroup(AdminGroupT&& value) { m_adminGroupHasBeenSet = true; m_adminGroup.emplace_back(std::forward<AdminGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The author group associated with your Active Directory or IAM Identity Center
     * account.</p> <p>For more information about using IAM Identity Center in
     * QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with QuickSight Enterprise Edition</a> in the QuickSight
     * User Guide. For more information about using Active Directory in QuickSight, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with QuickSight Enterprise Edition</a> in the QuickSight User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorGroup() const { return m_authorGroup; }
    inline bool AuthorGroupHasBeenSet() const { return m_authorGroupHasBeenSet; }
    template<typename AuthorGroupT = Aws::Vector<Aws::String>>
    void SetAuthorGroup(AuthorGroupT&& value) { m_authorGroupHasBeenSet = true; m_authorGroup = std::forward<AuthorGroupT>(value); }
    template<typename AuthorGroupT = Aws::Vector<Aws::String>>
    CreateAccountSubscriptionRequest& WithAuthorGroup(AuthorGroupT&& value) { SetAuthorGroup(std::forward<AuthorGroupT>(value)); return *this;}
    template<typename AuthorGroupT = Aws::String>
    CreateAccountSubscriptionRequest& AddAuthorGroup(AuthorGroupT&& value) { m_authorGroupHasBeenSet = true; m_authorGroup.emplace_back(std::forward<AuthorGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reader group associated with your Active Directory or IAM Identity Center
     * account.</p> <p>For more information about using IAM Identity Center in
     * QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with QuickSight Enterprise Edition</a> in the QuickSight
     * User Guide. For more information about using Active Directory in QuickSight, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with QuickSight Enterprise Edition</a> in the QuickSight User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaderGroup() const { return m_readerGroup; }
    inline bool ReaderGroupHasBeenSet() const { return m_readerGroupHasBeenSet; }
    template<typename ReaderGroupT = Aws::Vector<Aws::String>>
    void SetReaderGroup(ReaderGroupT&& value) { m_readerGroupHasBeenSet = true; m_readerGroup = std::forward<ReaderGroupT>(value); }
    template<typename ReaderGroupT = Aws::Vector<Aws::String>>
    CreateAccountSubscriptionRequest& WithReaderGroup(ReaderGroupT&& value) { SetReaderGroup(std::forward<ReaderGroupT>(value)); return *this;}
    template<typename ReaderGroupT = Aws::String>
    CreateAccountSubscriptionRequest& AddReaderGroup(ReaderGroupT&& value) { m_readerGroupHasBeenSet = true; m_readerGroup.emplace_back(std::forward<ReaderGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The admin pro group associated with your Active Directory or IAM Identity
     * Center account. Either this field or the <code>AdminGroup</code> field is
     * required if <code>ACTIVE_DIRECTORY</code> or <code>IAM_IDENTITY_CENTER</code> is
     * the selected authentication method of the new QuickSight account.</p> <p>For
     * more information about using IAM Identity Center in QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with QuickSight Enterprise Edition</a> in the QuickSight
     * User Guide. For more information about using Active Directory in QuickSight, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with QuickSight Enterprise Edition</a> in the QuickSight User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminProGroup() const { return m_adminProGroup; }
    inline bool AdminProGroupHasBeenSet() const { return m_adminProGroupHasBeenSet; }
    template<typename AdminProGroupT = Aws::Vector<Aws::String>>
    void SetAdminProGroup(AdminProGroupT&& value) { m_adminProGroupHasBeenSet = true; m_adminProGroup = std::forward<AdminProGroupT>(value); }
    template<typename AdminProGroupT = Aws::Vector<Aws::String>>
    CreateAccountSubscriptionRequest& WithAdminProGroup(AdminProGroupT&& value) { SetAdminProGroup(std::forward<AdminProGroupT>(value)); return *this;}
    template<typename AdminProGroupT = Aws::String>
    CreateAccountSubscriptionRequest& AddAdminProGroup(AdminProGroupT&& value) { m_adminProGroupHasBeenSet = true; m_adminProGroup.emplace_back(std::forward<AdminProGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The author pro group associated with your Active Directory or IAM Identity
     * Center account.</p> <p>For more information about using IAM Identity Center in
     * QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with QuickSight Enterprise Edition</a> in the QuickSight
     * User Guide. For more information about using Active Directory in QuickSight, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with QuickSight Enterprise Edition</a> in the QuickSight User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorProGroup() const { return m_authorProGroup; }
    inline bool AuthorProGroupHasBeenSet() const { return m_authorProGroupHasBeenSet; }
    template<typename AuthorProGroupT = Aws::Vector<Aws::String>>
    void SetAuthorProGroup(AuthorProGroupT&& value) { m_authorProGroupHasBeenSet = true; m_authorProGroup = std::forward<AuthorProGroupT>(value); }
    template<typename AuthorProGroupT = Aws::Vector<Aws::String>>
    CreateAccountSubscriptionRequest& WithAuthorProGroup(AuthorProGroupT&& value) { SetAuthorProGroup(std::forward<AuthorProGroupT>(value)); return *this;}
    template<typename AuthorProGroupT = Aws::String>
    CreateAccountSubscriptionRequest& AddAuthorProGroup(AuthorProGroupT&& value) { m_authorProGroupHasBeenSet = true; m_authorProGroup.emplace_back(std::forward<AuthorProGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reader pro group associated with your Active Directory or IAM Identity
     * Center account.</p> <p>For more information about using IAM Identity Center in
     * QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with QuickSight Enterprise Edition</a> in the QuickSight
     * User Guide. For more information about using Active Directory in QuickSight, see
     * <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with QuickSight Enterprise Edition</a> in the QuickSight User
     * Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaderProGroup() const { return m_readerProGroup; }
    inline bool ReaderProGroupHasBeenSet() const { return m_readerProGroupHasBeenSet; }
    template<typename ReaderProGroupT = Aws::Vector<Aws::String>>
    void SetReaderProGroup(ReaderProGroupT&& value) { m_readerProGroupHasBeenSet = true; m_readerProGroup = std::forward<ReaderProGroupT>(value); }
    template<typename ReaderProGroupT = Aws::Vector<Aws::String>>
    CreateAccountSubscriptionRequest& WithReaderProGroup(ReaderProGroupT&& value) { SetReaderProGroup(std::forward<ReaderProGroupT>(value)); return *this;}
    template<typename ReaderProGroupT = Aws::String>
    CreateAccountSubscriptionRequest& AddReaderProGroup(ReaderProGroupT&& value) { m_readerProGroupHasBeenSet = true; m_readerProGroup.emplace_back(std::forward<ReaderProGroupT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The first name of the author of the QuickSight account to use for future
     * communications. This field is required if <code>ENTERPPRISE_AND_Q</code> is the
     * selected edition of the new QuickSight account.</p>
     */
    inline const Aws::String& GetFirstName() const { return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    template<typename FirstNameT = Aws::String>
    void SetFirstName(FirstNameT&& value) { m_firstNameHasBeenSet = true; m_firstName = std::forward<FirstNameT>(value); }
    template<typename FirstNameT = Aws::String>
    CreateAccountSubscriptionRequest& WithFirstName(FirstNameT&& value) { SetFirstName(std::forward<FirstNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the author of the QuickSight account to use for future
     * communications. This field is required if <code>ENTERPPRISE_AND_Q</code> is the
     * selected edition of the new QuickSight account.</p>
     */
    inline const Aws::String& GetLastName() const { return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    template<typename LastNameT = Aws::String>
    void SetLastName(LastNameT&& value) { m_lastNameHasBeenSet = true; m_lastName = std::forward<LastNameT>(value); }
    template<typename LastNameT = Aws::String>
    CreateAccountSubscriptionRequest& WithLastName(LastNameT&& value) { SetLastName(std::forward<LastNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the author of the QuickSight account to use for future
     * communications. This field is required if <code>ENTERPPRISE_AND_Q</code> is the
     * selected edition of the new QuickSight account.</p>
     */
    inline const Aws::String& GetEmailAddress() const { return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    template<typename EmailAddressT = Aws::String>
    void SetEmailAddress(EmailAddressT&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::forward<EmailAddressT>(value); }
    template<typename EmailAddressT = Aws::String>
    CreateAccountSubscriptionRequest& WithEmailAddress(EmailAddressT&& value) { SetEmailAddress(std::forward<EmailAddressT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 10-digit phone number for the author of the QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new QuickSight account.</p>
     */
    inline const Aws::String& GetContactNumber() const { return m_contactNumber; }
    inline bool ContactNumberHasBeenSet() const { return m_contactNumberHasBeenSet; }
    template<typename ContactNumberT = Aws::String>
    void SetContactNumber(ContactNumberT&& value) { m_contactNumberHasBeenSet = true; m_contactNumber = std::forward<ContactNumberT>(value); }
    template<typename ContactNumberT = Aws::String>
    CreateAccountSubscriptionRequest& WithContactNumber(ContactNumberT&& value) { SetContactNumber(std::forward<ContactNumberT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetIAMIdentityCenterInstanceArn() const { return m_iAMIdentityCenterInstanceArn; }
    inline bool IAMIdentityCenterInstanceArnHasBeenSet() const { return m_iAMIdentityCenterInstanceArnHasBeenSet; }
    template<typename IAMIdentityCenterInstanceArnT = Aws::String>
    void SetIAMIdentityCenterInstanceArn(IAMIdentityCenterInstanceArnT&& value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn = std::forward<IAMIdentityCenterInstanceArnT>(value); }
    template<typename IAMIdentityCenterInstanceArnT = Aws::String>
    CreateAccountSubscriptionRequest& WithIAMIdentityCenterInstanceArn(IAMIdentityCenterInstanceArnT&& value) { SetIAMIdentityCenterInstanceArn(std::forward<IAMIdentityCenterInstanceArnT>(value)); return *this;}
    ///@}
  private:

    Edition m_edition{Edition::NOT_SET};
    bool m_editionHasBeenSet = false;

    AuthenticationMethodOption m_authenticationMethod{AuthenticationMethodOption::NOT_SET};
    bool m_authenticationMethodHasBeenSet = false;

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet = false;

    Aws::String m_activeDirectoryName;
    bool m_activeDirectoryNameHasBeenSet = false;

    Aws::String m_realm;
    bool m_realmHasBeenSet = false;

    Aws::String m_directoryId;
    bool m_directoryIdHasBeenSet = false;

    Aws::Vector<Aws::String> m_adminGroup;
    bool m_adminGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorGroup;
    bool m_authorGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_readerGroup;
    bool m_readerGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_adminProGroup;
    bool m_adminProGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_authorProGroup;
    bool m_authorProGroupHasBeenSet = false;

    Aws::Vector<Aws::String> m_readerProGroup;
    bool m_readerProGroupHasBeenSet = false;

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_contactNumber;
    bool m_contactNumberHasBeenSet = false;

    Aws::String m_iAMIdentityCenterInstanceArn;
    bool m_iAMIdentityCenterInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
