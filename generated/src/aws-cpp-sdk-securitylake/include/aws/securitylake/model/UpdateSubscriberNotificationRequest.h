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
    AWS_SECURITYLAKE_API UpdateSubscriberNotificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscriberNotification"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The configuration for subscriber notification.</p>
     */
    inline const NotificationConfiguration& GetConfiguration() const { return m_configuration; }
    inline bool ConfigurationHasBeenSet() const { return m_configurationHasBeenSet; }
    template<typename ConfigurationT = NotificationConfiguration>
    void SetConfiguration(ConfigurationT&& value) { m_configurationHasBeenSet = true; m_configuration = std::forward<ConfigurationT>(value); }
    template<typename ConfigurationT = NotificationConfiguration>
    UpdateSubscriberNotificationRequest& WithConfiguration(ConfigurationT&& value) { SetConfiguration(std::forward<ConfigurationT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription ID for which the subscription notification is specified.</p>
     */
    inline const Aws::String& GetSubscriberId() const { return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    template<typename SubscriberIdT = Aws::String>
    void SetSubscriberId(SubscriberIdT&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::forward<SubscriberIdT>(value); }
    template<typename SubscriberIdT = Aws::String>
    UpdateSubscriberNotificationRequest& WithSubscriberId(SubscriberIdT&& value) { SetSubscriberId(std::forward<SubscriberIdT>(value)); return *this;}
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
