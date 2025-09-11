/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/quicksight/model/Edition.h>
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
namespace QuickSight
{
namespace Model
{

  /**
   * <p>A structure that contains the following account information elements:</p>
   * <ul> <li> <p>Your QuickSight account name.</p> </li> <li> <p>The edition of
   * QuickSight that your account is using.</p> </li> <li> <p>The notification email
   * address that is associated with the QuickSight account. </p> </li> <li> <p>The
   * authentication type of the QuickSight account.</p> </li> <li> <p>The status of
   * the QuickSight account's subscription.</p> </li> </ul><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccountInfo">AWS
   * API Reference</a></p>
   */
  class AccountInfo
  {
  public:
    AWS_QUICKSIGHT_API AccountInfo() = default;
    AWS_QUICKSIGHT_API AccountInfo(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AccountInfo& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The account name that you provided for the QuickSight subscription in your
     * Amazon Web Services account. You create this name when you sign up for
     * QuickSight. It's unique over all of Amazon Web Services, and it appears only
     * when users sign in.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    AccountInfo& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edition of your QuickSight account.</p>
     */
    inline Edition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(Edition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline AccountInfo& WithEdition(Edition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that will be used for QuickSight to send notifications
     * regarding your Amazon Web Services account or QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const { return m_notificationEmail; }
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }
    template<typename NotificationEmailT = Aws::String>
    void SetNotificationEmail(NotificationEmailT&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::forward<NotificationEmailT>(value); }
    template<typename NotificationEmailT = Aws::String>
    AccountInfo& WithNotificationEmail(NotificationEmailT&& value) { SetNotificationEmail(std::forward<NotificationEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The way that your QuickSight account is authenticated.</p>
     */
    inline const Aws::String& GetAuthenticationType() const { return m_authenticationType; }
    inline bool AuthenticationTypeHasBeenSet() const { return m_authenticationTypeHasBeenSet; }
    template<typename AuthenticationTypeT = Aws::String>
    void SetAuthenticationType(AuthenticationTypeT&& value) { m_authenticationTypeHasBeenSet = true; m_authenticationType = std::forward<AuthenticationTypeT>(value); }
    template<typename AuthenticationTypeT = Aws::String>
    AccountInfo& WithAuthenticationType(AuthenticationTypeT&& value) { SetAuthenticationType(std::forward<AuthenticationTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The status of your account subscription.</p>
     */
    inline const Aws::String& GetAccountSubscriptionStatus() const { return m_accountSubscriptionStatus; }
    inline bool AccountSubscriptionStatusHasBeenSet() const { return m_accountSubscriptionStatusHasBeenSet; }
    template<typename AccountSubscriptionStatusT = Aws::String>
    void SetAccountSubscriptionStatus(AccountSubscriptionStatusT&& value) { m_accountSubscriptionStatusHasBeenSet = true; m_accountSubscriptionStatus = std::forward<AccountSubscriptionStatusT>(value); }
    template<typename AccountSubscriptionStatusT = Aws::String>
    AccountInfo& WithAccountSubscriptionStatus(AccountSubscriptionStatusT&& value) { SetAccountSubscriptionStatus(std::forward<AccountSubscriptionStatusT>(value)); return *this;}
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
    AccountInfo& WithIAMIdentityCenterInstanceArn(IAMIdentityCenterInstanceArnT&& value) { SetIAMIdentityCenterInstanceArn(std::forward<IAMIdentityCenterInstanceArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Edition m_edition{Edition::NOT_SET};
    bool m_editionHasBeenSet = false;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet = false;

    Aws::String m_authenticationType;
    bool m_authenticationTypeHasBeenSet = false;

    Aws::String m_accountSubscriptionStatus;
    bool m_accountSubscriptionStatusHasBeenSet = false;

    Aws::String m_iAMIdentityCenterInstanceArn;
    bool m_iAMIdentityCenterInstanceArnHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
