/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/quicksight/QuickSight_EXPORTS.h>
#include <aws/quicksight/QuickSightRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace QuickSight
{
namespace Model
{

  /**
   */
  class DeleteAccountSubscriptionRequest : public QuickSightRequest
  {
  public:
    AWS_QUICKSIGHT_API DeleteAccountSubscriptionRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DeleteAccountSubscription"; }

    AWS_QUICKSIGHT_API Aws::String SerializePayload() const override;


    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline const Aws::String& GetAwsAccountId() const{ return m_awsAccountId; }

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline bool AwsAccountIdHasBeenSet() const { return m_awsAccountIdHasBeenSet; }

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline void SetAwsAccountId(const Aws::String& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = value; }

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline void SetAwsAccountId(Aws::String&& value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId = std::move(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline void SetAwsAccountId(const char* value) { m_awsAccountIdHasBeenSet = true; m_awsAccountId.assign(value); }

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline DeleteAccountSubscriptionRequest& WithAwsAccountId(const Aws::String& value) { SetAwsAccountId(value); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline DeleteAccountSubscriptionRequest& WithAwsAccountId(Aws::String&& value) { SetAwsAccountId(std::move(value)); return *this;}

    /**
     * <p>The Amazon Web Services account ID of the account that you want to
     * delete.</p>
     */
    inline DeleteAccountSubscriptionRequest& WithAwsAccountId(const char* value) { SetAwsAccountId(value); return *this;}

  private:

    Aws::String m_awsAccountId;
    bool m_awsAccountIdHasBeenSet = false;
  };

} // namespace Model
} // namespace QuickSight
} // namespace Aws
