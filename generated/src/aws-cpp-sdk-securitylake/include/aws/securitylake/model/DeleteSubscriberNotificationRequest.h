/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securitylake/SecurityLake_EXPORTS.h>
#include <aws/securitylake/SecurityLakeRequest.h>
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
  class DeleteSubscriberNotificationRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteSubscriberNotificationRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubscriberNotification"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The ID of the Security Lake subscriber account.</p>
     */
    inline const Aws::String& GetSubscriberId() const { return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    template<typename SubscriberIdT = Aws::String>
    void SetSubscriberId(SubscriberIdT&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::forward<SubscriberIdT>(value); }
    template<typename SubscriberIdT = Aws::String>
    DeleteSubscriberNotificationRequest& WithSubscriberId(SubscriberIdT&& value) { SetSubscriberId(std::forward<SubscriberIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriberId;
    bool m_subscriberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
