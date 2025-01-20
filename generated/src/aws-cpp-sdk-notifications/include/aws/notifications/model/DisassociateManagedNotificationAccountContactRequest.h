﻿/**
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
    AWS_NOTIFICATIONS_API DisassociateManagedNotificationAccountContactRequest();

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
    inline const AccountContactType& GetContactIdentifier() const{ return m_contactIdentifier; }
    inline bool ContactIdentifierHasBeenSet() const { return m_contactIdentifierHasBeenSet; }
    inline void SetContactIdentifier(const AccountContactType& value) { m_contactIdentifierHasBeenSet = true; m_contactIdentifier = value; }
    inline void SetContactIdentifier(AccountContactType&& value) { m_contactIdentifierHasBeenSet = true; m_contactIdentifier = std::move(value); }
    inline DisassociateManagedNotificationAccountContactRequest& WithContactIdentifier(const AccountContactType& value) { SetContactIdentifier(value); return *this;}
    inline DisassociateManagedNotificationAccountContactRequest& WithContactIdentifier(AccountContactType&& value) { SetContactIdentifier(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the
     * <code>ManagedNotificationConfiguration</code> to associate with the Account
     * Contact.</p>
     */
    inline const Aws::String& GetManagedNotificationConfigurationArn() const{ return m_managedNotificationConfigurationArn; }
    inline bool ManagedNotificationConfigurationArnHasBeenSet() const { return m_managedNotificationConfigurationArnHasBeenSet; }
    inline void SetManagedNotificationConfigurationArn(const Aws::String& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = value; }
    inline void SetManagedNotificationConfigurationArn(Aws::String&& value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn = std::move(value); }
    inline void SetManagedNotificationConfigurationArn(const char* value) { m_managedNotificationConfigurationArnHasBeenSet = true; m_managedNotificationConfigurationArn.assign(value); }
    inline DisassociateManagedNotificationAccountContactRequest& WithManagedNotificationConfigurationArn(const Aws::String& value) { SetManagedNotificationConfigurationArn(value); return *this;}
    inline DisassociateManagedNotificationAccountContactRequest& WithManagedNotificationConfigurationArn(Aws::String&& value) { SetManagedNotificationConfigurationArn(std::move(value)); return *this;}
    inline DisassociateManagedNotificationAccountContactRequest& WithManagedNotificationConfigurationArn(const char* value) { SetManagedNotificationConfigurationArn(value); return *this;}
    ///@}
  private:

    AccountContactType m_contactIdentifier;
    bool m_contactIdentifierHasBeenSet = false;

    Aws::String m_managedNotificationConfigurationArn;
    bool m_managedNotificationConfigurationArnHasBeenSet = false;
  };

} // namespace Model
} // namespace Notifications
} // namespace Aws
