﻿/**
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
  class DeleteSubscriberRequest : public SecurityLakeRequest
  {
  public:
    AWS_SECURITYLAKE_API DeleteSubscriberRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteSubscriber"; }

    AWS_SECURITYLAKE_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>A value created by Security Lake that uniquely identifies your
     * <code>DeleteSubscriber</code> API request.</p>
     */
    inline const Aws::String& GetSubscriberId() const{ return m_subscriberId; }
    inline bool SubscriberIdHasBeenSet() const { return m_subscriberIdHasBeenSet; }
    inline void SetSubscriberId(const Aws::String& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = value; }
    inline void SetSubscriberId(Aws::String&& value) { m_subscriberIdHasBeenSet = true; m_subscriberId = std::move(value); }
    inline void SetSubscriberId(const char* value) { m_subscriberIdHasBeenSet = true; m_subscriberId.assign(value); }
    inline DeleteSubscriberRequest& WithSubscriberId(const Aws::String& value) { SetSubscriberId(value); return *this;}
    inline DeleteSubscriberRequest& WithSubscriberId(Aws::String&& value) { SetSubscriberId(std::move(value)); return *this;}
    inline DeleteSubscriberRequest& WithSubscriberId(const char* value) { SetSubscriberId(value); return *this;}
    ///@}
  private:

    Aws::String m_subscriberId;
    bool m_subscriberIdHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityLake
} // namespace Aws
