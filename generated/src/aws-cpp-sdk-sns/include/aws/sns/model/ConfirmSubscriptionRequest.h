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
   * <p>Input for ConfirmSubscription action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ConfirmSubscriptionInput">AWS
   * API Reference</a></p>
   */
  class ConfirmSubscriptionRequest : public SNSRequest
  {
  public:
    AWS_SNS_API ConfirmSubscriptionRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ConfirmSubscription"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN of the topic for which you wish to confirm a subscription.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    ConfirmSubscriptionRequest& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Short-lived token sent to an endpoint during the <code>Subscribe</code>
     * action.</p>
     */
    inline const Aws::String& GetToken() const { return m_token; }
    inline bool TokenHasBeenSet() const { return m_tokenHasBeenSet; }
    template<typename TokenT = Aws::String>
    void SetToken(TokenT&& value) { m_tokenHasBeenSet = true; m_token = std::forward<TokenT>(value); }
    template<typename TokenT = Aws::String>
    ConfirmSubscriptionRequest& WithToken(TokenT&& value) { SetToken(std::forward<TokenT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Disallows unauthenticated unsubscribes of the subscription. If the value of
     * this parameter is <code>true</code> and the request has an Amazon Web Services
     * signature, then only the topic owner and the subscription owner can unsubscribe
     * the endpoint. The unsubscribe action requires Amazon Web Services
     * authentication. </p>
     */
    inline const Aws::String& GetAuthenticateOnUnsubscribe() const { return m_authenticateOnUnsubscribe; }
    inline bool AuthenticateOnUnsubscribeHasBeenSet() const { return m_authenticateOnUnsubscribeHasBeenSet; }
    template<typename AuthenticateOnUnsubscribeT = Aws::String>
    void SetAuthenticateOnUnsubscribe(AuthenticateOnUnsubscribeT&& value) { m_authenticateOnUnsubscribeHasBeenSet = true; m_authenticateOnUnsubscribe = std::forward<AuthenticateOnUnsubscribeT>(value); }
    template<typename AuthenticateOnUnsubscribeT = Aws::String>
    ConfirmSubscriptionRequest& WithAuthenticateOnUnsubscribe(AuthenticateOnUnsubscribeT&& value) { SetAuthenticateOnUnsubscribe(std::forward<AuthenticateOnUnsubscribeT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_token;
    bool m_tokenHasBeenSet = false;

    Aws::String m_authenticateOnUnsubscribe;
    bool m_authenticateOnUnsubscribeHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
