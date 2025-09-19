/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class UpdateAccountSettingsRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API UpdateAccountSettingsRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateAccountSettings"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID for the Amazon Web Services account that contains the QuickSight
     * settings that you want to list.</p>
     */
    inline const Aws::String& GetAwsAccountId() const { return m_awsAccountId; }
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }
    template<typename AwsAccountIdT = Aws::String>
    void SetAwsAccountId(AwsAccountIdT&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::forward<AwsAccountIdT>(value); }
    template<typename AwsAccountIdT = Aws::String>
    UpdateAccountSettingsRequest& WithAwsAccountId(AwsAccountIdT&& value) { SetAwsAccountId(std::forward<AwsAccountIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default namespace for this Amazon Web Services account. Currently, the
     * default is <code>default</code>. IAM users that register for the first time with
     * QuickSight provide an email address that becomes associated with the default
     * namespace. </p>
     */
    inline const Aws::String& GetDefaultNamespace() const { return m_defaultNamespace; }
    inline bool DefaultNamespaceHasBeenSet() const { return m_defaultNamespaceHasBeenSet; }
    template<typename DefaultNamespaceT = Aws::String>
    void SetDefaultNamespace(DefaultNamespaceT&& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = std::forward<DefaultNamespaceT>(value); }
    template<typename DefaultNamespaceT = Aws::String>
    UpdateAccountSettingsRequest& WithDefaultNamespace(DefaultNamespaceT&& value) { SetDefaultNamespace(std::forward<DefaultNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The email address that you want QuickSight to send notifications to regarding
     * your Amazon Web Services account or QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const { return m_notificationEmail; }
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }
    template<typename NotificationEmailT = Aws::String>
    void SetNotificationEmail(NotificationEmailT&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::forward<NotificationEmailT>(value); }
    template<typename NotificationEmailT = Aws::String>
    UpdateAccountSettingsRequest& WithNotificationEmail(NotificationEmailT&& value) { SetNotificationEmail(std::forward<NotificationEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that determines whether or not an QuickSight account can be
     * deleted. A <code>True</code> value doesn't allow the account to be deleted and
     * results in an error message if a user tries to make a
     * <code>DeleteAccountSubscription</code> request. A <code>False</code> value will
     * allow the account to be deleted.</p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline UpdateAccountSettingsRequest& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;

    Aws::String m_defaultNamespace;
    bool m_defaultNamespaceHasBeenSet = false;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
