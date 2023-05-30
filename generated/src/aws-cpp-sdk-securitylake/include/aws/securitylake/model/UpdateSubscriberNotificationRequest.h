/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
#include <aws/securitylake/model/NotificationConfiguration.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SecurityLake
{
namespace Model
{

  /**
   */
  class UpdateSubscriberNotificationRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriberNotification"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline const NotificationConfiguration& GetConfiguration() const{ return m_configuration; }

    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }

    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline void SetConfiguration(const NotificationConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }

    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline void SetConfiguration(NotificationConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }

    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline UpdateSubscriberNotificationRequest& WithConfiguration(const NotificationConfiguration& value) { SetConfiguration(value); return *this;}

    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline UpdateSubscriberNotificationRequest& WithConfiguration(NotificationConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}


    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline const Aws::String& GetSubscriberId() const{ return m_subscriberId; }

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline void SetSubscriberId(const Aws::String& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = value; }

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline void SetSubscriberId(Aws::String&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::move(value); }

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline void SetSubscriberId(const char* value) { m_subscriberIdHasBeenSet = true; m_subscriberId.assign(value); }

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline UpdateSubscriberNotificationRequest& WithSubscriberId(const Aws::String& value) { SetSubscriberId(value); return *this;}

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline UpdateSubscriberNotificationRequest& WithSubscriberId(Aws::String&& value) { SetSubscriberId(std::move(value)); return *this;}

    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline UpdateSubscriberNotificationRequest& WithSubscriberId(const char* value) { SetSubscriberId(value); return *this;}

  private:

    NotificationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_subscriberId;
    bool m_subscriberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
