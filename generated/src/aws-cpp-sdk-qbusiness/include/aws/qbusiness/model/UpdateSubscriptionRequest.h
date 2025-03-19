/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/SubscriptionType.h>
#include <utility>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class UpdateSubscriptionRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API UpdateSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "UpdateSubscription"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application where the subscription
     * update should take effect.</p>
     */
    inline const Aws::String& GetApplicationId() const { return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    template<typename ApplicationIdT = Aws::String>
    void SetApplicationId(ApplicationIdT&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::forward<ApplicationIdT>(value); }
    template<typename ApplicationIdT = Aws::String>
    UpdateSubscriptionRequest& WithApplicationId(ApplicationIdT&& value) { SetApplicationId(std::forward<ApplicationIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier of the Amazon Q Business subscription to be updated.</p>
     */
    inline const Aws::String& GetSubscriptionId() const { return m_subscriptionId; }
    inline bool SubscriptionIdHasBeenSet() const { return m_subscriptionIdHasBeenSet; }
    template<typename SubscriptionIdT = Aws::String>
    void SetSubscriptionId(SubscriptionIdT&& value) { m_subscriptionIdHasBeenSet = true; m_subscriptionId = std::forward<SubscriptionIdT>(value); }
    template<typename SubscriptionIdT = Aws::String>
    UpdateSubscriptionRequest& WithSubscriptionId(SubscriptionIdT&& value) { SetSubscriptionId(std::forward<SubscriptionIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of the Amazon Q Business subscription to be updated.</p>
     */
    inline SubscriptionType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(SubscriptionType value) { m_typeHasBeenSet = true; m_type = value; }
    inline UpdateSubscriptionRequest& WithType(SubscriptionType value) { SetType(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    Aws::String m_subscriptionId;
    bool m_subscriptionIdHasBeenSet = false;

    SubscriptionType m_type{SubscriptionType::NOT_SET};
    bool m_typeHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
