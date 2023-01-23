/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for Unsubscribe action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/UnsubscribeInput">AWS
   * API Reference</a></p>
   */
  class UnsubscribeRequest : public SNSRequest
  {
  public:
    AWS_SNS_API UnsubscribeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Unsubscribe"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline const Aws::String& GetSubscriptionArn() const{ return m_subscriptionArn; }

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline bool SubscriptionArnHasBeenSet() const { return m_subscriptionArnHasBeenSet; }

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline void SetSubscriptionArn(const Aws::String& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = value; }

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline void SetSubscriptionArn(Aws::String&& value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn = std::move(value); }

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline void SetSubscriptionArn(const char* value) { m_subscriptionArnHasBeenSet = true; m_subscriptionArn.assign(value); }

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline UnsubscribeRequest& WithSubscriptionArn(const Aws::String& value) { SetSubscriptionArn(value); return *this;}

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline UnsubscribeRequest& WithSubscriptionArn(Aws::String&& value) { SetSubscriptionArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the subscription to be deleted.</p>
     */
    inline UnsubscribeRequest& WithSubscriptionArn(const char* value) { SetSubscriptionArn(value); return *this;}

  private:

    Aws::String m_subscriptionArn;
    bool m_subscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
