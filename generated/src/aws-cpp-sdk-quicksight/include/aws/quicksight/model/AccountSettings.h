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
   * <p>The QuickSight settings associated with your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AccountSettings
  {
  public:
    AWS_QUICKSIGHT_API AccountSettings() = default;
    AWS_QUICKSIGHT_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The "account name" you provided for the QuickSight subscription in your
     * Amazon Web Services account. You create this name when you sign up for
     * QuickSight. It is unique in all of Amazon Web Services and it appears only when
     * users sign in.</p>
     */
    inline const Aws::String& GetAccountName() const { return m_accountName; }
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }
    template<typename AccountNameT = Aws::String>
    void SetAccountName(AccountNameT&& value) { m_accountNameHasBeenSet = true; m_accountName = std::forward<AccountNameT>(value); }
    template<typename AccountNameT = Aws::String>
    AccountSettings& WithAccountName(AccountNameT&& value) { SetAccountName(std::forward<AccountNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The edition of QuickSight that you're currently subscribed to: Enterprise
     * edition or Standard edition.</p>
     */
    inline Edition GetEdition() const { return m_edition; }
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }
    inline void SetEdition(Edition value) { m_editionHasBeenSet = true; m_edition = value; }
    inline AccountSettings& WithEdition(Edition value) { SetEdition(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The default QuickSight namespace for your Amazon Web Services account. </p>
     */
    inline const Aws::String& GetDefaultNamespace() const { return m_defaultNamespace; }
    inline bool DefaultNamespaceHasBeenSet() const { return m_defaultNamespaceHasBeenSet; }
    template<typename DefaultNamespaceT = Aws::String>
    void SetDefaultNamespace(DefaultNamespaceT&& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = std::forward<DefaultNamespaceT>(value); }
    template<typename DefaultNamespaceT = Aws::String>
    AccountSettings& WithDefaultNamespace(DefaultNamespaceT&& value) { SetDefaultNamespace(std::forward<DefaultNamespaceT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The main notification email for your QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const { return m_notificationEmail; }
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }
    template<typename NotificationEmailT = Aws::String>
    void SetNotificationEmail(NotificationEmailT&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::forward<NotificationEmailT>(value); }
    template<typename NotificationEmailT = Aws::String>
    AccountSettings& WithNotificationEmail(NotificationEmailT&& value) { SetNotificationEmail(std::forward<NotificationEmailT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * QuickSight account. For more information about turning on public sharing, see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdatePublicSharingSettings.html">UpdatePublicSharingSettings</a>.</p>
     */
    inline bool GetPublicSharingEnabled() const { return m_publicSharingEnabled; }
    inline bool PublicSharingEnabledHasBeenSet() const { return m_publicSharingEnabledHasBeenSet; }
    inline void SetPublicSharingEnabled(bool value) { m_publicSharingEnabledHasBeenSet = true; m_publicSharingEnabled = value; }
    inline AccountSettings& WithPublicSharingEnabled(bool value) { SetPublicSharingEnabled(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>A boolean value that determines whether or not an QuickSight account can be
     * deleted. A <code>True</code> value doesn't allow the account to be deleted and
     * results in an error message if a user tries to make a
     * <code>DeleteAccountSubsctiption</code> request. A <code>False</code> value will
     * allow the ccount to be deleted. </p>
     */
    inline bool GetTerminationProtectionEnabled() const { return m_terminationProtectionEnabled; }
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }
    inline AccountSettings& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}
    ///@}
  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Edition m_edition{Edition::NOT_SET};
    bool m_editionHasBeenSet = false;

    Aws::String m_defaultNamespace;
    bool m_defaultNamespaceHasBeenSet = false;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet = false;

    bool m_publicSharingEnabled{false};
    bool m_publicSharingEnabledHasBeenSet = false;

    bool m_terminationProtectionEnabled{false};
    bool m_terminationProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
