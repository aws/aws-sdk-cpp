/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CancelSubscriptionRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CancelSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CancelSubscription"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application for which the
     * subscription is being cancelled.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CancelSubscriptionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CancelSubscriptionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CancelSubscriptionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business subscription being cancelled.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }
    inline CancelSubscriptionRequest& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}
    inline CancelSubscriptionRequest& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}
    inline CancelSubscriptionRequest& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
