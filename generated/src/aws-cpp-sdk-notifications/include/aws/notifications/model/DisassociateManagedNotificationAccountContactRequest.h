/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/notifications/Notifications_EXPORTS.h>
#include <aws/notifications/NotificationsRequest.h>
#include <aws/notifications/model/AccountContactType.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace Notifications
{
namespace Model
{

  /**
   */
  class DisassociateManagedNotificationAccountContactRequest : public NotificationsRequest
  {
  public:
    AWS_NOTIFICATIONS_API DisassociateManagedNotificationAccountContactRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DisassociateManagedNotificationAccountContact"; }

    AWS_NOTIFICATIONS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The unique value of an Account Contact Type to associate with the
     * <code>ManagedNotificationConfiguration</code>.</p>
     */
    inline AccountContactType GetContactIdentifier() const { return m_contactIdentifier; }
    inline bool ContactIdentifierHasBeenSet() const { return m_contactIdentifierHasBeenSet; }
    inline void SetContactIdentifier(AccountContactType value) { m_contactIdentifierHasBeenSet = true; m_contactIdentifier = value; }
    inline DisassociateManagedNotificationAccountContactRequest& WithContactIdentifier(AccountContactType value) { SetContactIdentifier(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationConfiguration</code> to associate with the Account
     * Contact.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const { return m_managedNotificationConfigurationArn; }
    inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
    template<typename ManagedNotificationConfigurationArnT = Aws::String>
    void SetManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = std::forward<ManagedNotificationConfigurationArnT>(value); }
    template<typename ManagedNotificationConfigurationArnT = Aws::String>
    DisassociateManagedNotificationAccountContactRequest& WithManagedNotificationConfigurationArn(ManagedNotificationConfigurationArnT&& value) { SetManagedNotificationConfigurationArn(std::forward<ManagedNotificationConfigurationArnT>(value)); return *this;}
    ///@}
  private:

    AccountContactType m_contactIdentifier{AccountContactType::NOT_SET};
    bool m_contactIdentifierHasBeenSet = false;

    Aws::String m_managedNotificationConfigurationArn;
    bool m_managedNotificationConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
