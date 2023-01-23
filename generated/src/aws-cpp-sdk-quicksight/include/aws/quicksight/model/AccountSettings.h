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
   * <p>The Amazon QuickSight settings associated with your Amazon Web Services
   * account.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/quicksight-2018-04-01/AccountSettings">AWS
   * API Reference</a></p>
   */
  class AccountSettings
  {
  public:
    AWS_QUICKSIGHT_API AccountSettings();
    AWS_QUICKSIGHT_API AccountSettings(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API AccountSettings& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QUICKSIGHT_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline const Aws::String& GetAccountName() const{ return m_accountName; }

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline bool AccountNameHasBeenSet() const { return m_accountNameHasBeenSet; }

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline void SetAccountName(const Aws::String& value) { m_accountNameHasBeenSet = true; m_accountName = value; }

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline void SetAccountName(Aws::String&& value) { m_accountNameHasBeenSet = true; m_accountName = std::move(value); }

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline void SetAccountName(const char* value) { m_accountNameHasBeenSet = true; m_accountName.assign(value); }

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline AccountSettings& WithAccountName(const Aws::String& value) { SetAccountName(value); return *this;}

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline AccountSettings& WithAccountName(Aws::String&& value) { SetAccountName(std::move(value)); return *this;}

    /**
     * <p>The "account name" you provided for the Amazon QuickSight subscription in
     * your Amazon Web Services account. You create this name when you sign up for
     * Amazon QuickSight. It is unique in all of Amazon Web Services and it appears
     * only when users sign in.</p>
     */
    inline AccountSettings& WithAccountName(const char* value) { SetAccountName(value); return *this;}


    /**
     * <p>The edition of Amazon QuickSight that you're currently subscribed to:
     * Enterprise edition or Standard edition.</p>
     */
    inline const Edition& GetEdition() const{ return m_edition; }

    /**
     * <p>The edition of Amazon QuickSight that you're currently subscribed to:
     * Enterprise edition or Standard edition.</p>
     */
    inline bool EditionHasBeenSet() const { return m_editionHasBeenSet; }

    /**
     * <p>The edition of Amazon QuickSight that you're currently subscribed to:
     * Enterprise edition or Standard edition.</p>
     */
    inline void SetEdition(const Edition& value) { m_editionHasBeenSet = true; m_edition = value; }

    /**
     * <p>The edition of Amazon QuickSight that you're currently subscribed to:
     * Enterprise edition or Standard edition.</p>
     */
    inline void SetEdition(Edition&& value) { m_editionHasBeenSet = true; m_edition = std::move(value); }

    /**
     * <p>The edition of Amazon QuickSight that you're currently subscribed to:
     * Enterprise edition or Standard edition.</p>
     */
    inline AccountSettings& WithEdition(const Edition& value) { SetEdition(value); return *this;}

    /**
     * <p>The edition of Amazon QuickSight that you're currently subscribed to:
     * Enterprise edition or Standard edition.</p>
     */
    inline AccountSettings& WithEdition(Edition&& value) { SetEdition(std::move(value)); return *this;}


    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline const Aws::String& GetDefaultNamespace() const{ return m_defaultNamespace; }

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline bool DefaultNamespaceHasBeenSet() const { return m_defaultNamespaceHasBeenSet; }

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline void SetDefaultNamespace(const Aws::String& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = value; }

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline void SetDefaultNamespace(Aws::String&& value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace = std::move(value); }

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline void SetDefaultNamespace(const char* value) { m_defaultNamespaceHasBeenSet = true; m_defaultNamespace.assign(value); }

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline AccountSettings& WithDefaultNamespace(const Aws::String& value) { SetDefaultNamespace(value); return *this;}

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline AccountSettings& WithDefaultNamespace(Aws::String&& value) { SetDefaultNamespace(std::move(value)); return *this;}

    /**
     * <p>The default Amazon QuickSight namespace for your Amazon Web Services account.
     * </p>
     */
    inline AccountSettings& WithDefaultNamespace(const char* value) { SetDefaultNamespace(value); return *this;}


    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline const Aws::String& GetNotificationEmail() const{ return m_notificationEmail; }

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline bool NotificationEmailHasBeenSet() const { return m_notificationEmailHasBeenSet; }

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const Aws::String& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = value; }

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(Aws::String&& value) { m_notificationEmailHasBeenSet = true; m_notificationEmail = std::move(value); }

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline void SetNotificationEmail(const char* value) { m_notificationEmailHasBeenSet = true; m_notificationEmail.assign(value); }

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline AccountSettings& WithNotificationEmail(const Aws::String& value) { SetNotificationEmail(value); return *this;}

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline AccountSettings& WithNotificationEmail(Aws::String&& value) { SetNotificationEmail(std::move(value)); return *this;}

    /**
     * <p>The main notification email for your Amazon QuickSight subscription.</p>
     */
    inline AccountSettings& WithNotificationEmail(const char* value) { SetNotificationEmail(value); return *this;}


    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account. For more information about turning on public sharing,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdatePublicSharingSettings.html">UpdatePublicSharingSettings</a>.</p>
     */
    inline bool GetPublicSharingEnabled() const{ return m_publicSharingEnabled; }

    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account. For more information about turning on public sharing,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdatePublicSharingSettings.html">UpdatePublicSharingSettings</a>.</p>
     */
    inline bool PublicSharingEnabledHasBeenSet() const { return m_publicSharingEnabledHasBeenSet; }

    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account. For more information about turning on public sharing,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdatePublicSharingSettings.html">UpdatePublicSharingSettings</a>.</p>
     */
    inline void SetPublicSharingEnabled(bool value) { m_publicSharingEnabledHasBeenSet = true; m_publicSharingEnabled = value; }

    /**
     * <p>A Boolean value that indicates whether public sharing is turned on for an
     * Amazon QuickSight account. For more information about turning on public sharing,
     * see <a
     * href="https://docs.aws.amazon.com/quicksight/latest/APIReference/API_UpdatePublicSharingSettings.html">UpdatePublicSharingSettings</a>.</p>
     */
    inline AccountSettings& WithPublicSharingEnabled(bool value) { SetPublicSharingEnabled(value); return *this;}


    /**
     * <p>A boolean value that determines whether or not an Amazon QuickSight account
     * can be deleted. A <code>True</code> value doesn't allow the account to be
     * deleted and results in an error message if a user tries to make a
     * <code>DeleteAccountSubsctiption</code> request. A <code>False</code> value will
     * allow the ccount to be deleted. </p>
     */
    inline bool GetTerminationProtectionEnabled() const{ return m_terminationProtectionEnabled; }

    /**
     * <p>A boolean value that determines whether or not an Amazon QuickSight account
     * can be deleted. A <code>True</code> value doesn't allow the account to be
     * deleted and results in an error message if a user tries to make a
     * <code>DeleteAccountSubsctiption</code> request. A <code>False</code> value will
     * allow the ccount to be deleted. </p>
     */
    inline bool TerminationProtectionEnabledHasBeenSet() const { return m_terminationProtectionEnabledHasBeenSet; }

    /**
     * <p>A boolean value that determines whether or not an Amazon QuickSight account
     * can be deleted. A <code>True</code> value doesn't allow the account to be
     * deleted and results in an error message if a user tries to make a
     * <code>DeleteAccountSubsctiption</code> request. A <code>False</code> value will
     * allow the ccount to be deleted. </p>
     */
    inline void SetTerminationProtectionEnabled(bool value) { m_terminationProtectionEnabledHasBeenSet = true; m_terminationProtectionEnabled = value; }

    /**
     * <p>A boolean value that determines whether or not an Amazon QuickSight account
     * can be deleted. A <code>True</code> value doesn't allow the account to be
     * deleted and results in an error message if a user tries to make a
     * <code>DeleteAccountSubsctiption</code> request. A <code>False</code> value will
     * allow the ccount to be deleted. </p>
     */
    inline AccountSettings& WithTerminationProtectionEnabled(bool value) { SetTerminationProtectionEnabled(value); return *this;}

  private:

    Aws::String m_accountName;
    bool m_accountNameHasBeenSet = false;

    Edition m_edition;
    bool m_editionHasBeenSet = false;

    Aws::String m_defaultNamespace;
    bool m_defaultNamespaceHasBeenSet = false;

    Aws::String m_notificationEmail;
    bool m_notificationEmailHasBeenSet = false;

    bool m_publicSharingEnabled;
    bool m_publicSharingEnabledHasBeenSet = false;

    bool m_terminationProtectionEnabled;
    bool m_terminationProtectionEnabledHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
