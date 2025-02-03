/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/QBusinessRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/qbusiness/model/SubscriptionPrincipal.h>
#include <aws/qbusiness/model/SubscriptionType.h>
#include <utility>
#include <aws/core/utils/UUID.h>

namespace Aws
{
namespace QBusiness
{
namespace Model
{

  /**
   */
  class CreateSubscriptionRequest : public QBusinessRequest
  {
  public:
    AWS_QBUSINESS_API CreateSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateSubscription"; }

    AWS_QBUSINESS_API Aws::String SerializePayload() const override;


    ///@{
    /**
     * <p>The identifier of the Amazon Q Business application the subscription should
     * be added to.</p>
     */
    inline const Aws::String& GetApplicationId() const{ return m_applicationId; }
    inline bool ApplicationIdHasBeenSet() const { return m_applicationIdHasBeenSet; }
    inline void SetApplicationId(const Aws::String& value) { m_applicationIdHasBeenSet = true; m_applicationId = value; }
    inline void SetApplicationId(Aws::String&& value) { m_applicationIdHasBeenSet = true; m_applicationId = std::move(value); }
    inline void SetApplicationId(const char* value) { m_applicationIdHasBeenSet = true; m_applicationId.assign(value); }
    inline CreateSubscriptionRequest& WithApplicationId(const Aws::String& value) { SetApplicationId(value); return *this;}
    inline CreateSubscriptionRequest& WithApplicationId(Aws::String&& value) { SetApplicationId(std::move(value)); return *this;}
    inline CreateSubscriptionRequest& WithApplicationId(const char* value) { SetApplicationId(value); return *this;}
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
    inline CreateSubscriptionRequest& WithPrincipal(const SubscriptionPrincipal& value) { SetPrincipal(value); return *this;}
    inline CreateSubscriptionRequest& WithPrincipal(SubscriptionPrincipal&& value) { SetPrincipal(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The type of Amazon Q Business subscription you want to create.</p>
     */
    inline const SubscriptionType& GetType() const{ return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(const SubscriptionType& value) { m_typeHasBeenSet = true; m_type = value; }
    inline void SetType(SubscriptionType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }
    inline CreateSubscriptionRequest& WithType(const SubscriptionType& value) { SetType(value); return *this;}
    inline CreateSubscriptionRequest& WithType(SubscriptionType&& value) { SetType(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A token that you provide to identify the request to create a subscription for
     * your Amazon Q Business application.</p>
     */
    inline const Aws::String& GetClientToken() const{ return m_clientToken; }
    inline bool ClientTokenHasBeenSet() const { return m_clientTokenHasBeenSet; }
    inline void SetClientToken(const Aws::String& value) { m_clientTokenHasBeenSet = true; m_clientToken = value; }
    inline void SetClientToken(Aws::String&& value) { m_clientTokenHasBeenSet = true; m_clientToken = std::move(value); }
    inline void SetClientToken(const char* value) { m_clientTokenHasBeenSet = true; m_clientToken.assign(value); }
    inline CreateSubscriptionRequest& WithClientToken(const Aws::String& value) { SetClientToken(value); return *this;}
    inline CreateSubscriptionRequest& WithClientToken(Aws::String&& value) { SetClientToken(std::move(value)); return *this;}
    inline CreateSubscriptionRequest& WithClientToken(const char* value) { SetClientToken(value); return *this;}
    ///@}
  private:

    Aws::String m_applicationId;
    bool m_applicationIdHasBeenSet = false;

    SubscriptionPrincipal m_principal;
    bool m_principalHasBeenSet = false;

    SubscriptionType m_type;
    bool m_typeHasBeenSet = false;

    Aws::String m_clientToken;
    bool m_clientTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace QBusiness
} // namespace Aws
