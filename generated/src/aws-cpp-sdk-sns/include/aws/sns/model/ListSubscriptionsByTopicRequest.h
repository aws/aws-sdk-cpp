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
   * <p>Input for ListSubscriptionsByTopic action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/ListSubscriptionsByTopicInput">AWS
   * API Reference</a></p>
   */
  class ListSubscriptionsByTopicRequest : public SNSRequest
  {
  public:
    AWS_SNS_API ListSubscriptionsByTopicRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "ListSubscriptionsByTopic"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the topic for which you wish to find subscriptions.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline const Aws::String& GetNextToken() const{ return m_nextToken; }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline bool NextTokenHasBeenSet() const { return m_nextTokenHasBeenSet; }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline void SetNextToken(const Aws::String& value) { m_nextTokenHasBeenSet = true; m_nextToken = value; }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline void SetNextToken(Aws::String&& value) { m_nextTokenHasBeenSet = true; m_nextToken = std::move(value); }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline void SetNextToken(const char* value) { m_nextTokenHasBeenSet = true; m_nextToken.assign(value); }

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithNextToken(const Aws::String& value) { SetNextToken(value); return *this;}

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithNextToken(Aws::String&& value) { SetNextToken(std::move(value)); return *this;}

    /**
     * <p>Token returned by the previous <code>ListSubscriptionsByTopic</code>
     * request.</p>
     */
    inline ListSubscriptionsByTopicRequest& WithNextToken(const char* value) { SetNextToken(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_nextToken;
    bool m_nextTokenHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
