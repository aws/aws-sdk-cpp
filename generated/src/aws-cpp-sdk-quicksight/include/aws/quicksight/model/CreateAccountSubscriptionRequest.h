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

    /**
     * <p>The edition of Amazon QuickSight that you want your account to have.
     * Currently, you can choose from <code>ENTERPRISE</code> or
     * <code>ENTERPRISE_AND_Q</code>.</p> <p>If you choose
     * <code>ENTERPRISE_AND_Q</code>, the following parameters are required:</p> <ul>
     * <li> <p> <code>FirstName</code> </p> </li> <li> <p> <code>LastName</code> </p>
     * </li> <li> <p> <code>EmailAddress</code> </p> </li> <li> <p>
     * <code>ContactNumber</code> </p> </li> </ul>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The edition of Amazon QuickSight that you want your account to have.
     * Currently, you can choose from <code>ENTERPRISE</code> or
     * <code>ENTERPRISE_AND_Q</code>.</p> <p>If you choose
     * <code>ENTERPRISE_AND_Q</code>, the following parameters are required:</p> <ul>
     * <li> <p> <code>FirstName</code> </p> </li> <li> <p> <code>LastName</code> </p>
     * </li> <li> <p> <code>EmailAddress</code> </p> </li> <li> <p>
     * <code>ContactNumber</code> </p> </li> </ul>
     */
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The edition of Amazon QuickSight that you want your account to have.
     * Currently, you can choose from <code>ENTERPRISE</code> or
     * <code>ENTERPRISE_AND_Q</code>.</p> <p>If you choose
     * <code>ENTERPRISE_AND_Q</code>, the following parameters are required:</p> <ul>
     * <li> <p> <code>FirstName</code> </p> </li> <li> <p> <code>LastName</code> </p>
     * </li> <li> <p> <code>EmailAddress</code> </p> </li> <li> <p>
     * <code>ContactNumber</code> </p> </li> </ul>
     */
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The edition of Amazon QuickSight that you want your account to have.
     * Currently, you can choose from <code>ENTERPRISE</code> or
     * <code>ENTERPRISE_AND_Q</code>.</p> <p>If you choose
     * <code>ENTERPRISE_AND_Q</code>, the following parameters are required:</p> <ul>
     * <li> <p> <code>FirstName</code> </p> </li> <li> <p> <code>LastName</code> </p>
     * </li> <li> <p> <code>EmailAddress</code> </p> </li> <li> <p>
     * <code>ContactNumber</code> </p> </li> </ul>
     */
    inline CreateAccountSubscriptionRequest& WithEdition(const Edition& value) { SetEdition(value); return *this;}

    /**
     * <p>The edition of Amazon QuickSight that you want your account to have.
     * Currently, you can choose from <code>ENTERPRISE</code> or
     * <code>ENTERPRISE_AND_Q</code>.</p> <p>If you choose
     * <code>ENTERPRISE_AND_Q</code>, the following parameters are required:</p> <ul>
     * <li> <p> <code>FirstName</code> </p> </li> <li> <p> <code>LastName</code> </p>
     * </li> <li> <p> <code>EmailAddress</code> </p> </li> <li> <p>
     * <code>ContactNumber</code> </p> </li> </ul>
     */
    inline CreateAccountSubscriptionRequest& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}


    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account. Currently, the valid values for this parameter are
     * <code>IAM_AND_QUICKSIGHT</code>, <code>IAM_ONLY</code>, and
     * <code>ACTIVE_DIRECTORY</code>.</p> <p>If you choose
     * <code>ACTIVE_DIRECTORY</code>, provide an <code>ActiveDirectoryName</code> and
     * an <code>AdminGroup</code> associated with your Active Directory.</p>
     */
    inline const AuthenticationMethodOption& GetAuthenticationMethod() const{ return m_authenticationMethod; }

    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account. Currently, the valid values for this parameter are
     * <code>IAM_AND_QUICKSIGHT</code>, <code>IAM_ONLY</code>, and
     * <code>ACTIVE_DIRECTORY</code>.</p> <p>If you choose
     * <code>ACTIVE_DIRECTORY</code>, provide an <code>ActiveDirectoryName</code> and
     * an <code>AdminGroup</code> associated with your Active Directory.</p>
     */
    inline bool AuthenticationMethodHasBeenSet() const { return m_authenticationMethodHasBeenSet; }

    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account. Currently, the valid values for this parameter are
     * <code>IAM_AND_QUICKSIGHT</code>, <code>IAM_ONLY</code>, and
     * <code>ACTIVE_DIRECTORY</code>.</p> <p>If you choose
     * <code>ACTIVE_DIRECTORY</code>, provide an <code>ActiveDirectoryName</code> and
     * an <code>AdminGroup</code> associated with your Active Directory.</p>
     */
    inline void SetAuthenticationMethod(const AuthenticationMethodOption& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = value; }

    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account. Currently, the valid values for this parameter are
     * <code>IAM_AND_QUICKSIGHT</code>, <code>IAM_ONLY</code>, and
     * <code>ACTIVE_DIRECTORY</code>.</p> <p>If you choose
     * <code>ACTIVE_DIRECTORY</code>, provide an <code>ActiveDirectoryName</code> and
     * an <code>AdminGroup</code> associated with your Active Directory.</p>
     */
    inline void SetAuthenticationMethod(AuthenticationMethodOption&& value) { m_authenticationMethodHasBeenSet = true; m_authenticationMethod = std::move(value); }

    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account. Currently, the valid values for this parameter are
     * <code>IAM_AND_QUICKSIGHT</code>, <code>IAM_ONLY</code>, and
     * <code>ACTIVE_DIRECTORY</code>.</p> <p>If you choose
     * <code>ACTIVE_DIRECTORY</code>, provide an <code>ActiveDirectoryName</code> and
     * an <code>AdminGroup</code> associated with your Active Directory.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAuthenticationMethod(const AuthenticationMethodOption& value) { SetAuthenticationMethod(value); return *this;}

    /**
     * <p>The method that you want to use to authenticate your Amazon QuickSight
     * account. Currently, the valid values for this parameter are
     * <code>IAM_AND_QUICKSIGHT</code>, <code>IAM_ONLY</code>, and
     * <code>ACTIVE_DIRECTORY</code>.</p> <p>If you choose
     * <code>ACTIVE_DIRECTORY</code>, provide an <code>ActiveDirectoryName</code> and
     * an <code>AdminGroup</code> associated with your Active Directory.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAuthenticationMethod(AuthenticationMethodOption&& value) { SetAuthenticationMethod(std::move(value)); return *this;}


    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that you're using to create
     * your Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}


    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The name of your Amazon QuickSight account. This name is unique over all of
     * Amazon Web Services, and it appears only when users sign in. You can't change
     * <code>AccountName</code> value after the Amazon QuickSight account is
     * created.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const{ return m_notificationEmail; }

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const Aws::String& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = value; }

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(Aws::String&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::move(value); }

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const char* value) { m_notificationEmailHasBeenSet = true; m_notificationEmail.assign(value); }

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline CreateAccountSubscriptionRequest& WithNotificationEmail(const Aws::String& value) { SetNotificationEmail(value); return *this;}

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline CreateAccountSubscriptionRequest& WithNotificationEmail(Aws::String&& value) { SetNotificationEmail(std::move(value)); return *this;}

    /**
     * <p>The email address that you want Amazon QuickSight to send notifications to
     * regarding your Amazon QuickSight account or Amazon QuickSight subscription.</p>
     */
    inline CreateAccountSubscriptionRequest& WithNotificationEmail(const char* value) { SetNotificationEmail(value); return *this;}


    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetActiveDirectoryName() const{ return m_activeDirectoryName; }

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline bool ActiveDirectoryNameHasBeenSet() const { return m_activeDirectoryNameHasBeenSet; }

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline void SetActiveDirectoryName(const Aws::String& value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName = value; }

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline void SetActiveDirectoryName(Aws::String&& value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName = std::move(value); }

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline void SetActiveDirectoryName(const char* value) { m_activeDirectoryNameHasBeenSet = true; m_activeDirectoryName.assign(value); }

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithActiveDirectoryName(const Aws::String& value) { SetActiveDirectoryName(value); return *this;}

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithActiveDirectoryName(Aws::String&& value) { SetActiveDirectoryName(std::move(value)); return *this;}

    /**
     * <p>The name of your Active Directory. This field is required if
     * <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the new
     * Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithActiveDirectoryName(const char* value) { SetActiveDirectoryName(value); return *this;}


    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetRealm() const{ return m_realm; }

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline bool RealmHasBeenSet() const { return m_realmHasBeenSet; }

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline void SetRealm(const Aws::String& value) { m_realmHasBeenSet = true; m_realm = value; }

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline void SetRealm(Aws::String&& value) { m_realmHasBeenSet = true; m_realm = std::move(value); }

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline void SetRealm(const char* value) { m_realmHasBeenSet = true; m_realm.assign(value); }

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithRealm(const Aws::String& value) { SetRealm(value); return *this;}

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithRealm(Aws::String&& value) { SetRealm(std::move(value)); return *this;}

    /**
     * <p>The realm of the Active Directory that is associated with your Amazon
     * QuickSight account. This field is required if <code>ACTIVE_DIRECTORY</code> is
     * the selected authentication method of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithRealm(const char* value) { SetRealm(value); return *this;}


    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline const Aws::String& GetDirectoryId() const{ return m_directoryId; }

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline bool DirectoryIdHasBeenSet() const { return m_directoryIdHasBeenSet; }

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline void SetDirectoryId(const Aws::String& value) { m_directoryIdHasBeenSet = true; m_directoryId = value; }

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline void SetDirectoryId(Aws::String&& value) { m_directoryIdHasBeenSet = true; m_directoryId = std::move(value); }

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline void SetDirectoryId(const char* value) { m_directoryIdHasBeenSet = true; m_directoryId.assign(value); }

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithDirectoryId(const Aws::String& value) { SetDirectoryId(value); return *this;}

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithDirectoryId(Aws::String&& value) { SetDirectoryId(std::move(value)); return *this;}

    /**
     * <p>The ID of the Active Directory that is associated with your Amazon QuickSight
     * account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithDirectoryId(const char* value) { SetDirectoryId(value); return *this;}


    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAdminGroup() const{ return m_adminGroup; }

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline bool AdminGroupHasBeenSet() const { return m_adminGroupHasBeenSet; }

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline void SetAdminGroup(const Aws::Vector<Aws::String>& value) { m_adminGroupHasBeenSet = true; m_adminGroup = value; }

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline void SetAdminGroup(Aws::Vector<Aws::String>&& value) { m_adminGroupHasBeenSet = true; m_adminGroup = std::move(value); }

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAdminGroup(const Aws::Vector<Aws::String>& value) { SetAdminGroup(value); return *this;}

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAdminGroup(Aws::Vector<Aws::String>&& value) { SetAdminGroup(std::move(value)); return *this;}

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& AddAdminGroup(const Aws::String& value) { m_adminGroupHasBeenSet = true; m_adminGroup.push_back(value); return *this; }

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& AddAdminGroup(Aws::String&& value) { m_adminGroupHasBeenSet = true; m_adminGroup.push_back(std::move(value)); return *this; }

    /**
     * <p>The admin group associated with your Active Directory. This field is required
     * if <code>ACTIVE_DIRECTORY</code> is the selected authentication method of the
     * new Amazon QuickSight account. For more information about using Active Directory
     * in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& AddAdminGroup(const char* value) { m_adminGroupHasBeenSet = true; m_adminGroup.push_back(value); return *this; }


    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline const Aws::Vector<Aws::String>& GetAuthorGroup() const{ return m_authorGroup; }

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline bool AuthorGroupHasBeenSet() const { return m_authorGroupHasBeenSet; }

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline void SetAuthorGroup(const Aws::Vector<Aws::String>& value) { m_authorGroupHasBeenSet = true; m_authorGroup = value; }

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline void SetAuthorGroup(Aws::Vector<Aws::String>&& value) { m_authorGroupHasBeenSet = true; m_authorGroup = std::move(value); }

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAuthorGroup(const Aws::Vector<Aws::String>& value) { SetAuthorGroup(value); return *this;}

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& WithAuthorGroup(Aws::Vector<Aws::String>&& value) { SetAuthorGroup(std::move(value)); return *this;}

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& AddAuthorGroup(const Aws::String& value) { m_authorGroupHasBeenSet = true; m_authorGroup.push_back(value); return *this; }

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& AddAuthorGroup(Aws::String&& value) { m_authorGroupHasBeenSet = true; m_authorGroup.push_back(std::move(value)); return *this; }

    /**
     * <p>The author group associated with your Active Directory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the Amazon
     * QuickSight User Guide.</p>
     */
    inline CreateAccountSubscriptionRequest& AddAuthorGroup(const char* value) { m_authorGroupHasBeenSet = true; m_authorGroup.push_back(value); return *this; }


    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline const Aws::Vector<Aws::String>& GetReaderGroup() const{ return m_readerGroup; }

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline bool ReaderGroupHasBeenSet() const { return m_readerGroupHasBeenSet; }

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline void SetReaderGroup(const Aws::Vector<Aws::String>& value) { m_readerGroupHasBeenSet = true; m_readerGroup = value; }

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline void SetReaderGroup(Aws::Vector<Aws::String>&& value) { m_readerGroupHasBeenSet = true; m_readerGroup = std::move(value); }

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline CreateAccountSubscriptionRequest& WithReaderGroup(const Aws::Vector<Aws::String>& value) { SetReaderGroup(value); return *this;}

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline CreateAccountSubscriptionRequest& WithReaderGroup(Aws::Vector<Aws::String>&& value) { SetReaderGroup(std::move(value)); return *this;}

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline CreateAccountSubscriptionRequest& AddReaderGroup(const Aws::String& value) { m_readerGroupHasBeenSet = true; m_readerGroup.push_back(value); return *this; }

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline CreateAccountSubscriptionRequest& AddReaderGroup(Aws::String&& value) { m_readerGroupHasBeenSet = true; m_readerGroup.push_back(std::move(value)); return *this; }

    /**
     * <p>The reader group associated with your Active Direcrtory. For more information
     * about using Active Directory in Amazon QuickSight, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/user/aws-directory-service.html">Using
     * Active Directory with Amazon QuickSight Enterprise Edition</a> in the <i>Amazon
     * QuickSight User Guide</i>.</p>
     */
    inline CreateAccountSubscriptionRequest& AddReaderGroup(const char* value) { m_readerGroupHasBeenSet = true; m_readerGroup.push_back(value); return *this; }


    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetFirstName() const{ return m_firstName; }

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline bool FirstNameHasBeenSet() const { return m_firstNameHasBeenSet; }

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetFirstName(const Aws::String& value) { m_firstNameHasBeenSet = true; m_firstName = value; }

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetFirstName(Aws::String&& value) { m_firstNameHasBeenSet = true; m_firstName = std::move(value); }

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetFirstName(const char* value) { m_firstNameHasBeenSet = true; m_firstName.assign(value); }

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithFirstName(const Aws::String& value) { SetFirstName(value); return *this;}

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithFirstName(Aws::String&& value) { SetFirstName(std::move(value)); return *this;}

    /**
     * <p>The first name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithFirstName(const char* value) { SetFirstName(value); return *this;}


    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetLastName() const{ return m_lastName; }

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline bool LastNameHasBeenSet() const { return m_lastNameHasBeenSet; }

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetLastName(const Aws::String& value) { m_lastNameHasBeenSet = true; m_lastName = value; }

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetLastName(Aws::String&& value) { m_lastNameHasBeenSet = true; m_lastName = std::move(value); }

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetLastName(const char* value) { m_lastNameHasBeenSet = true; m_lastName.assign(value); }

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithLastName(const Aws::String& value) { SetLastName(value); return *this;}

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithLastName(Aws::String&& value) { SetLastName(std::move(value)); return *this;}

    /**
     * <p>The last name of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithLastName(const char* value) { SetLastName(value); return *this;}


    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline const Aws::String& GetEmailAddress() const{ return m_emailAddress; }

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline bool EmailAddressHasBeenSet() const { return m_emailAddressHasBeenSet; }

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetEmailAddress(const Aws::String& value) { m_emailAddressHasBeenSet = true; m_emailAddress = value; }

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetEmailAddress(Aws::String&& value) { m_emailAddressHasBeenSet = true; m_emailAddress = std::move(value); }

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline void SetEmailAddress(const char* value) { m_emailAddressHasBeenSet = true; m_emailAddress.assign(value); }

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithEmailAddress(const Aws::String& value) { SetEmailAddress(value); return *this;}

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithEmailAddress(Aws::String&& value) { SetEmailAddress(std::move(value)); return *this;}

    /**
     * <p>The email address of the author of the Amazon QuickSight account to use for
     * future communications. This field is required if <code>ENTERPPRISE_AND_Q</code>
     * is the selected edition of the new Amazon QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithEmailAddress(const char* value) { SetEmailAddress(value); return *this;}


    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline const Aws::String& GetContactNumber() const{ return m_contactNumber; }

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline bool ContactNumberHasBeenSet() const { return m_contactNumberHasBeenSet; }

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline void SetContactNumber(const Aws::String& value) { m_contactNumberHasBeenSet = true; m_contactNumber = value; }

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline void SetContactNumber(Aws::String&& value) { m_contactNumberHasBeenSet = true; m_contactNumber = std::move(value); }

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline void SetContactNumber(const char* value) { m_contactNumberHasBeenSet = true; m_contactNumber.assign(value); }

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithContactNumber(const Aws::String& value) { SetContactNumber(value); return *this;}

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithContactNumber(Aws::String&& value) { SetContactNumber(std::move(value)); return *this;}

    /**
     * <p>A 10-digit phone number for the author of the Amazon QuickSight account to
     * use for future communications. This field is required if
     * <code>ENTERPPRISE_AND_Q</code> is the selected edition of the new Amazon
     * QuickSight account.</p>
     */
    inline CreateAccountSubscriptionRequest& WithContactNumber(const char* value) { SetContactNumber(value); return *this;}

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

    Aws::String m_firstName;
    bool m_firstNameHasBeenSet = false;

    Aws::String m_lastName;
    bool m_lastNameHasBeenSet = false;

    Aws::String m_emailAddress;
    bool m_emailAddressHasBeenSet = false;

    Aws::String m_contactNumber;
    bool m_contactNumberHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
