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
    AWS_QUICKSIGHT_API CreateAccountSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateAccountSubscription"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The edition of Amazon QuickSight that you want your account to have.
     * Currently, you can choose from <code>ENTERPRISE</code> or
     * <code>ENTERPRISE_AND_Q</code>.</p> <p>If you choose
     * <code>ENTERPRISE_AND_Q</code>, the following parameters are required:</p> <ul>
     * <li> <p> <code>FirstName</code> </p> </li> <li> <p> <code>LastName</code> </p>
     * </li> <li> <p> <code>EmailAddress</code> </p> </li> <li> <p>
     * <code>ContactNumber</code> </p> </li> </ul>
     */
    inline const Edition& GetEdition() const{ return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithEdition(const Edition& value) { SetEdition(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account.</p> <p>If you choose <code>ACTIVE_DIRECTORY</code>, provide an
     * <code>ActiveDirectoryName</code> and an <code>AdminGroup</code> associated with
     * your Active Directory.</p> <p>If you choose <code>IAM_IDENTITY_CENTER</code>,
     * provide an <code>AdminGroup</code> associated with your IAM Identity Center
     * account.</p>
     */
    inline const AuthenticationMethodOption& GetAuthenticationMethod() const{ return m_authenticationMethod; }
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }
    inline void SetAuthenticationMethod(const AuthenticationMethodOption& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }
    inline void SetAuthenticationMethod(AuthenticationMethodOption&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithAuthenticationMethod(const AuthenticationMethodOption& value) { SetAuthenticationMethod(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAuthenticationMethod(AuthenticationMethodOption&& value) { SetAuthenticationMethod(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }
    inline CreateAccountSubscriptionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }
    inline CreateAccountSubscriptionRequest& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithAccountName(const char* value) { SetAccountName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const{ return m_notificationEmail; }
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }
    inline void SetNotificationEmail(const Aws::String& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = value; }
    inline void SetNotificationEmail(Aws::String&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::move(value); }
    inline void SetNotificationEmail(const char* value) { m_notificationEmailHasBeenSet = true; m_notificationEmail.assign(value); }
    inline CreateAccountSubscriptionRequest& WithNotificationEmail(const Aws::String& value) { SetNotificationEmail(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithNotificationEmail(Aws::String&& value) { SetNotificationEmail(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithNotificationEmail(const char* value) { SetNotificationEmail(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetActiveDirectoryName() const{ return m_activeDirectoryName; }
    inline bool ActiveDirectoryNameHasBeenSet() const { return m_activeDirectoryNameHasBeenSet; }
    inline void SetActiveDirectoryName(const Aws::String& value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName = value; }
    inline void SetActiveDirectoryName(Aws::String&& value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName = std::move(value); }
    inline void SetActiveDirectoryName(const char* value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName.assign(value); }
    inline CreateAccountSubscriptionRequest& WithActiveDirectoryName(const Aws::String& value) { SetActiveDirectoryName(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithActiveDirectoryName(Aws::String&& value) { SetActiveDirectoryName(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithActiveDirectoryName(const char* value) { SetActiveDirectoryName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }
    inline CreateAccountSubscriptionRequest& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithRealm(const char* value) { SetRealm(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }
    inline CreateAccountSubscriptionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The admin group associated with your Active Directory or IAM Identity Center
     * account. Either this field or the <code>AdminProGroup</code> field is required
     * if <code>ACTIVE_DIRECTORY</code> or <code>IAM_IDENTITY_CENTER</code> is the
     * selected authentication method of the new Amazon QuickSight account.</p> <p>For
     * more information about using IAM Identity Center in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide. For more information about using Active Directory in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminGroup() const{ return m_adminGroup; }
    inline bool AdminGroupHasBeenSet() const { return m_adminGroupHasBeenSet; }
    inline void SetAdminGroup(const Aws::Vector<Aws::String>& value) { m_adminGroupHasBeenSet = true; m_adminGroup = value; }
    inline void SetAdminGroup(Aws::Vector<Aws::String>&& value) { m_adminGroupHasBeenSet = true; m_adminGroup = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithAdminGroup(const Aws::Vector<Aws::String>& value) { SetAdminGroup(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAdminGroup(Aws::Vector<Aws::String>&& value) { SetAdminGroup(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& AddAdminGroup(const Aws::String& value) { m_adminGroupHasBeenSet = true; m_adminGroup.push_back(value); return *this; }
    inline CreateAccountSubscriptionRequest& AddAdminGroup(Aws::String&& value) { m_adminGroupHasBeenSet = true; m_adminGroup.push_back(std::move(value)); return *this; }
    inline CreateAccountSubscriptionRequest& AddAdminGroup(const char* value) { m_adminGroupHasBeenSet = true; m_adminGroup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The author group associated with your Active Directory or IAM Identity Center
     * account.</p> <p>For more information about using IAM Identity Center in Amazon
     * QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide. For more information about using Active Directory in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorGroup() const{ return m_authorGroup; }
    inline bool AuthorGroupHasBeenSet() const { return m_authorGroupHasBeenSet; }
    inline void SetAuthorGroup(const Aws::Vector<Aws::String>& value) { m_authorGroupHasBeenSet = true; m_authorGroup = value; }
    inline void SetAuthorGroup(Aws::Vector<Aws::String>&& value) { m_authorGroupHasBeenSet = true; m_authorGroup = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithAuthorGroup(const Aws::Vector<Aws::String>& value) { SetAuthorGroup(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAuthorGroup(Aws::Vector<Aws::String>&& value) { SetAuthorGroup(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& AddAuthorGroup(const Aws::String& value) { m_authorGroupHasBeenSet = true; m_authorGroup.push_back(value); return *this; }
    inline CreateAccountSubscriptionRequest& AddAuthorGroup(Aws::String&& value) { m_authorGroupHasBeenSet = true; m_authorGroup.push_back(std::move(value)); return *this; }
    inline CreateAccountSubscriptionRequest& AddAuthorGroup(const char* value) { m_authorGroupHasBeenSet = true; m_authorGroup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reader group associated with your Active Directory or IAM Identity Center
     * account.</p> <p>For more information about using IAM Identity Center in Amazon
     * QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide. For more information about using Active Directory in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaderGroup() const{ return m_readerGroup; }
    inline bool ReaderGroupHasBeenSet() const { return m_readerGroupHasBeenSet; }
    inline void SetReaderGroup(const Aws::Vector<Aws::String>& value) { m_readerGroupHasBeenSet = true; m_readerGroup = value; }
    inline void SetReaderGroup(Aws::Vector<Aws::String>&& value) { m_readerGroupHasBeenSet = true; m_readerGroup = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithReaderGroup(const Aws::Vector<Aws::String>& value) { SetReaderGroup(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithReaderGroup(Aws::Vector<Aws::String>&& value) { SetReaderGroup(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& AddReaderGroup(const Aws::String& value) { m_readerGroupHasBeenSet = true; m_readerGroup.push_back(value); return *this; }
    inline CreateAccountSubscriptionRequest& AddReaderGroup(Aws::String&& value) { m_readerGroupHasBeenSet = true; m_readerGroup.push_back(std::move(value)); return *this; }
    inline CreateAccountSubscriptionRequest& AddReaderGroup(const char* value) { m_readerGroupHasBeenSet = true; m_readerGroup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The admin pro group associated with your Active Directory or IAM Identity
     * Center account. Either this field or the <code>AdminGroup</code> field is
     * required if <code>ACTIVE_DIRECTORY</code> or <code>IAM_IDENTITY_CENTER</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     * <p>For more information about using IAM Identity Center in Amazon QuickSight,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide. For more information about using Active Directory in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminProGroup() const{ return m_adminProGroup; }
    inline bool AdminProGroupHasBeenSet() const { return m_adminProGroupHasBeenSet; }
    inline void SetAdminProGroup(const Aws::Vector<Aws::String>& value) { m_adminProGroupHasBeenSet = true; m_adminProGroup = value; }
    inline void SetAdminProGroup(Aws::Vector<Aws::String>&& value) { m_adminProGroupHasBeenSet = true; m_adminProGroup = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithAdminProGroup(const Aws::Vector<Aws::String>& value) { SetAdminProGroup(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAdminProGroup(Aws::Vector<Aws::String>&& value) { SetAdminProGroup(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& AddAdminProGroup(const Aws::String& value) { m_adminProGroupHasBeenSet = true; m_adminProGroup.push_back(value); return *this; }
    inline CreateAccountSubscriptionRequest& AddAdminProGroup(Aws::String&& value) { m_adminProGroupHasBeenSet = true; m_adminProGroup.push_back(std::move(value)); return *this; }
    inline CreateAccountSubscriptionRequest& AddAdminProGroup(const char* value) { m_adminProGroupHasBeenSet = true; m_adminProGroup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The author pro group associated with your Active Directory or IAM Identity
     * Center account.</p> <p>For more information about using IAM Identity Center in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide. For more information about using Active Directory in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorProGroup() const{ return m_authorProGroup; }
    inline bool AuthorProGroupHasBeenSet() const { return m_authorProGroupHasBeenSet; }
    inline void SetAuthorProGroup(const Aws::Vector<Aws::String>& value) { m_authorProGroupHasBeenSet = true; m_authorProGroup = value; }
    inline void SetAuthorProGroup(Aws::Vector<Aws::String>&& value) { m_authorProGroupHasBeenSet = true; m_authorProGroup = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithAuthorProGroup(const Aws::Vector<Aws::String>& value) { SetAuthorProGroup(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithAuthorProGroup(Aws::Vector<Aws::String>&& value) { SetAuthorProGroup(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& AddAuthorProGroup(const Aws::String& value) { m_authorProGroupHasBeenSet = true; m_authorProGroup.push_back(value); return *this; }
    inline CreateAccountSubscriptionRequest& AddAuthorProGroup(Aws::String&& value) { m_authorProGroupHasBeenSet = true; m_authorProGroup.push_back(std::move(value)); return *this; }
    inline CreateAccountSubscriptionRequest& AddAuthorProGroup(const char* value) { m_authorProGroupHasBeenSet = true; m_authorProGroup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The reader pro group associated with your Active Directory or IAM Identity
     * Center account.</p> <p>For more information about using IAM Identity Center in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/sec-identity-management-identity-center.html">Using
     * IAM Identity Center with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide. For more information about using Active Directory in
     * Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaderProGroup() const{ return m_readerProGroup; }
    inline bool ReaderProGroupHasBeenSet() const { return m_readerProGroupHasBeenSet; }
    inline void SetReaderProGroup(const Aws::Vector<Aws::String>& value) { m_readerProGroupHasBeenSet = true; m_readerProGroup = value; }
    inline void SetReaderProGroup(Aws::Vector<Aws::String>&& value) { m_readerProGroupHasBeenSet = true; m_readerProGroup = std::move(value); }
    inline CreateAccountSubscriptionRequest& WithReaderProGroup(const Aws::Vector<Aws::String>& value) { SetReaderProGroup(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithReaderProGroup(Aws::Vector<Aws::String>&& value) { SetReaderProGroup(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& AddReaderProGroup(const Aws::String& value) { m_readerProGroupHasBeenSet = true; m_readerProGroup.push_back(value); return *this; }
    inline CreateAccountSubscriptionRequest& AddReaderProGroup(Aws::String&& value) { m_readerProGroupHasBeenSet = true; m_readerProGroup.push_back(std::move(value)); return *this; }
    inline CreateAccountSubscriptionRequest& AddReaderProGroup(const char* value) { m_readerProGroupHasBeenSet = true; m_readerProGroup.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }
    inline CreateAccountSubscriptionRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }
    inline CreateAccountSubscriptionRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithLastName(const char* value) { SetLastName(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }
    inline CreateAccountSubscriptionRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetContactNumber() const{ return m_contactNumber; }
    inline bool ContactNumberHasBeenSet() const { return m_contactNumberHasBeenSet; }
    inline void SetContactNumber(const Aws::String& value) { m_contactNumberHasBeenSet = true; m_contactNumber = value; }
    inline void SetContactNumber(Aws::String&& value) { m_contactNumberHasBeenSet = true; m_contactNumber = std::move(value); }
    inline void SetContactNumber(const char* value) { m_contactNumberHasBeenSet = true; m_contactNumber.assign(value); }
    inline CreateAccountSubscriptionRequest& WithContactNumber(const Aws::String& value) { SetContactNumber(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithContactNumber(Aws::String&& value) { SetContactNumber(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithContactNumber(const char* value) { SetContactNumber(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the IAM Identity Center instance.</p>
     */
    inline const Aws::String& GetIAMIdentityCenterInstanceArn() const{ return m_iAMIdentityCenterInstanceArn; }
    inline bool IAMIdentityCenterInstanceArnHasBeenSet() const { return m_iAMIdentityCenterInstanceArnHasBeenSet; }
    inline void SetIAMIdentityCenterInstanceArn(const Aws::String& value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn = value; }
    inline void SetIAMIdentityCenterInstanceArn(Aws::String&& value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn = std::move(value); }
    inline void SetIAMIdentityCenterInstanceArn(const char* value) { m_iAMIdentityCenterInstanceArnHasBeenSet = true; m_iAMIdentityCenterInstanceArn.assign(value); }
    inline CreateAccountSubscriptionRequest& WithIAMIdentityCenterInstanceArn(const Aws::String& value) { SetIAMIdentityCenterInstanceArn(value); return *this;}
    inline CreateAccountSubscriptionRequest& WithIAMIdentityCenterInstanceArn(Aws::String&& value) { SetIAMIdentityCenterInstanceArn(std::move(value)); return *this;}
    inline CreateAccountSubscriptionRequest& WithIAMIdentityCenterInstanceArn(const char* value) { SetIAMIdentityCenterInstanceArn(value); return *this;}
    ///@}
  private:

    Edition m_edition;
    bool m_editionHasBeenSet = false;

    AuthenticationMethodOption m_authenticationMethod;
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
