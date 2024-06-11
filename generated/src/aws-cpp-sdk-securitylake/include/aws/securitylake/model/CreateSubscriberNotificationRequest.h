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
  class CreateSubscriberNotificationRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API CreateSubscriberNotificationRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscriberNotification"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>Specify the configuration using which you want to create the subscriber
     * notification.</p>
     */
    inline const NotificationConfiguration& GetConfiguration() const{ return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    inline void SetConfiguration(const NotificationConfiguration& value) { m_configurationHasBeenSet = true; m_configuration = value; }
    inline void SetConfiguration(NotificationConfiguration&& value) { m_configurationHasBeenSet = true; m_configuration = std::move(value); }
    inline CreateSubscriberNotificationRequest& WithConfiguration(const NotificationConfiguration& value) { SetConfiguration(value); return *this;}
    inline CreateSubscriberNotificationRequest& WithConfiguration(NotificationConfiguration&& value) { SetConfiguration(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscriber ID for the notification subscription.</p>
     */
    inline const Aws::String& GetSubscriberId() const{ return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    inline void SetSubscriberId(const Aws::String& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = value; }
    inline void SetSubscriberId(Aws::String&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::move(value); }
    inline void SetSubscriberId(const char* value) { m_subscriberIdHasBeenSet = true; m_subscriberId.assign(value); }
    inline CreateSubscriberNotificationRequest& WithSubscriberId(const Aws::String& value) { SetSubscriberId(value); return *this;}
    inline CreateSubscriberNotificationRequest& WithSubscriberId(Aws::String&& value) { SetSubscriberId(std::move(value)); return *this;}
    inline CreateSubscriberNotificationRequest& WithSubscriberId(const char* value) { SetSubscriberId(value); return *this;}
    ///@}
  private:

    NotificationConfiguration m_configuration;
    bool m_configurationHasBeenSet = false;

    Aws::String m_subscriberId;
    bool m_subscriberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
