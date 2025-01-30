/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/SubscriptionPrincipal.h>
#include <aws/qbusiness/model/SubscriptionDetails.h>
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
namespace QBusiness
{
namespace Model
{

  /**
   * <p>Information about an Amazon Q Business subscription.</p> <p>Subscriptions are
   * used to provide access for an IAM Identity Center user or a group to an Amazon Q
   * Business application.</p> <p>Amazon Q Business offers two subscription tiers:
   * <code>Q_LITE</code> and <code>Q_BUSINESS</code>. Subscription tier determines
   * feature access for the user. For more information on subscriptions and pricing
   * tiers, see <a href="https://aws.amazon.com/q/business/pricing/">Amazon Q
   * Business pricing</a>.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/qbusiness-2023-11-27/Subscription">AWS
   * API Reference</a></p>
   */
  class Subscription
  {
  public:
    AWS_QBUSINESS_API Subscription();
    AWS_QBUSINESS_API Subscription(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Subscription& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_QBUSINESS_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business subscription to be updated.</p>
     */
    inline const Aws::String& GetSubscriptionId() const{ return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    inline void SetSubscriptionId(const Aws::String& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = value; }
    inline void SetSubscriptionId(Aws::String&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::move(value); }
    inline void SetSubscriptionId(const char* value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId.assign(value); }
    inline Subscription& WithSubscriptionId(const Aws::String& value) { SetSubscriptionId(value); return *this;}
    inline Subscription& WithSubscriptionId(Aws::String&& value) { SetSubscriptionId(std::move(value)); return *this;}
    inline Subscription& WithSubscriptionId(const char* value) { SetSubscriptionId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) of the Amazon Q Business subscription that was
     * updated.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }
    inline Subscription& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}
    inline Subscription& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}
    inline Subscription& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The IAM Identity Center <code>UserId</code> or <code>GroupId</code> of a user
     * or group in the IAM Identity Center instance connected to the Amazon Q Business
     * application.</p>
     */
    inline const SubscriptionPrincipal& GetPrincipal() const{ return m_principal; }
    inline bool PrincipalHasBeenSet() const { return m_principalHasBeenSet; }
    inline void SetPrincipal(const SubscriptionPrincipal& value) { m_principalHasBeenSet = true; m_principal = value; }
    inline void SetPrincipal(SubscriptionPrincipal&& value) { m_principalHasBeenSet = true; m_principal = std::move(value); }
    inline Subscription& WithPrincipal(const SubscriptionPrincipal& value) { SetPrincipal(value); return *this;}
    inline Subscription& WithPrincipal(SubscriptionPrincipal&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of your current Amazon Q Business subscription.</p>
     */
    inline const SubscriptionDetails& GetCurrentSubscription() const{ return m_currentSubscription; }
    inline bool CurrentSubscriptionHasBeenSet() const { return m_currentSubscriptionHasBeenSet; }
    inline void SetCurrentSubscription(const SubscriptionDetails& value) { m_currentSubscriptionHasBeenSet = true; m_currentSubscription = value; }
    inline void SetCurrentSubscription(SubscriptionDetails&& value) { m_currentSubscriptionHasBeenSet = true; m_currentSubscription = std::move(value); }
    inline Subscription& WithCurrentSubscription(const SubscriptionDetails& value) { SetCurrentSubscription(value); return *this;}
    inline Subscription& WithCurrentSubscription(SubscriptionDetails&& value) { SetCurrentSubscription(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Q Business subscription for the next month.</p>
     */
    inline const SubscriptionDetails& GetNextSubscription() const{ return m_nextSubscription; }
    inline bool NextSubscriptionHasBeenSet() const { return m_nextSubscriptionHasBeenSet; }
    inline void SetNextSubscription(const SubscriptionDetails& value) { m_nextSubscriptionHasBeenSet = true; m_nextSubscription = value; }
    inline void SetNextSubscription(SubscriptionDetails&& value) { m_nextSubscriptionHasBeenSet = true; m_nextSubscription = std::move(value); }
    inline Subscription& WithNextSubscription(const SubscriptionDetails& value) { SetNextSubscription(value); return *this;}
    inline Subscription& WithNextSubscription(SubscriptionDetails&& value) { SetNextSubscription(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;

    SubscriptionPrincipal m_principal;
    bool m_principalHasBeenSet = false;

    SubscriptionDetails m_currentSubscription;
    bool m_currentSubscriptionHasBeenSet = false;

    SubscriptionDetails m_nextSubscription;
    bool m_nextSubscriptionHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
