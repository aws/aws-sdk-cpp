/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/securityhub/SecurityHub_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/securityhub/model/AwsSnsTopicSubscription.h>
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
namespace SecurityHub
{
namespace Model
{

  /**
   * <p>Provides information about an Amazon SNS topic to which notifications can be
   * published.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/securityhub-2018-10-26/AwsSnsTopicDetails">AWS
   * API Reference</a></p>
   */
  class AwsSnsTopicDetails
  {
  public:
    AWS_SECURITYHUB_API AwsSnsTopicDetails() = default;
    AWS_SECURITYHUB_API AwsSnsTopicDetails(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API AwsSnsTopicDetails& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SECURITYHUB_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The ID of an Amazon Web Services managed key for Amazon SNS or a customer
     * managed key.</p>
     */
    inline const Aws::String& GetKmsMasterKeyId() const { return m_kmsMasterKeyId; }
    inline bool KmsMasterKeyIdHasBeenSet() const { return m_kmsMasterKeyIdHasBeenSet; }
    template<typename KmsMasterKeyIdT = Aws::String>
    void SetKmsMasterKeyId(KmsMasterKeyIdT&& value) { m_kmsMasterKeyIdHasBeenSet = true; m_kmsMasterKeyId = std::forward<KmsMasterKeyIdT>(value); }
    template<typename KmsMasterKeyIdT = Aws::String>
    AwsSnsTopicDetails& WithKmsMasterKeyId(KmsMasterKeyIdT&& value) { SetKmsMasterKeyId(std::forward<KmsMasterKeyIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Subscription is an embedded property that describes the subscription
     * endpoints of an Amazon SNS topic.</p>
     */
    inline const Aws::Vector<AwsSnsTopicSubscription>& GetSubscription() const { return m_subscription; }
    inline bool SubscriptionHasBeenSet() const { return m_subscriptionHasBeenSet; }
    template<typename SubscriptionT = Aws::Vector<AwsSnsTopicSubscription>>
    void SetSubscription(SubscriptionT&& value) { m_subscriptionHasBeenSet = true; m_subscription = std::forward<SubscriptionT>(value); }
    template<typename SubscriptionT = Aws::Vector<AwsSnsTopicSubscription>>
    AwsSnsTopicDetails& WithSubscription(SubscriptionT&& value) { SetSubscription(std::forward<SubscriptionT>(value)); return *this;}
    template<typename SubscriptionT = AwsSnsTopicSubscription>
    AwsSnsTopicDetails& AddSubscription(SubscriptionT&& value) { m_subscriptionHasBeenSet = true; m_subscription.emplace_back(std::forward<SubscriptionT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The name of the Amazon SNS topic.</p>
     */
    inline const Aws::String& GetTopicName() const { return m_topicName; }
    inline bool TopicNameHasBeenSet() const { return m_topicNameHasBeenSet; }
    template<typename TopicNameT = Aws::String>
    void SetTopicName(TopicNameT&& value) { m_topicNameHasBeenSet = true; m_topicName = std::forward<TopicNameT>(value); }
    template<typename TopicNameT = Aws::String>
    AwsSnsTopicDetails& WithTopicName(TopicNameT&& value) { SetTopicName(std::forward<TopicNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The subscription's owner.</p>
     */
    inline const Aws::String& GetOwner() const { return m_owner; }
    inline bool OwnerHasBeenSet() const { return m_ownerHasBeenSet; }
    template<typename OwnerT = Aws::String>
    void SetOwner(OwnerT&& value) { m_ownerHasBeenSet = true; m_owner = std::forward<OwnerT>(value); }
    template<typename OwnerT = Aws::String>
    AwsSnsTopicDetails& WithOwner(OwnerT&& value) { SetOwner(std::forward<OwnerT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline const Aws::String& GetSqsSuccessFeedbackRoleArn() const { return m_sqsSuccessFeedbackRoleArn; }
    inline bool SqsSuccessFeedbackRoleArnHasBeenSet() const { return m_sqsSuccessFeedbackRoleArnHasBeenSet; }
    template<typename SqsSuccessFeedbackRoleArnT = Aws::String>
    void SetSqsSuccessFeedbackRoleArn(SqsSuccessFeedbackRoleArnT&& value) { m_sqsSuccessFeedbackRoleArnHasBeenSet = true; m_sqsSuccessFeedbackRoleArn = std::forward<SqsSuccessFeedbackRoleArnT>(value); }
    template<typename SqsSuccessFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithSqsSuccessFeedbackRoleArn(SqsSuccessFeedbackRoleArnT&& value) { SetSqsSuccessFeedbackRoleArn(std::forward<SqsSuccessFeedbackRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p>
     */
    inline const Aws::String& GetSqsFailureFeedbackRoleArn() const { return m_sqsFailureFeedbackRoleArn; }
    inline bool SqsFailureFeedbackRoleArnHasBeenSet() const { return m_sqsFailureFeedbackRoleArnHasBeenSet; }
    template<typename SqsFailureFeedbackRoleArnT = Aws::String>
    void SetSqsFailureFeedbackRoleArn(SqsFailureFeedbackRoleArnT&& value) { m_sqsFailureFeedbackRoleArnHasBeenSet = true; m_sqsFailureFeedbackRoleArn = std::forward<SqsFailureFeedbackRoleArnT>(value); }
    template<typename SqsFailureFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithSqsFailureFeedbackRoleArn(SqsFailureFeedbackRoleArnT&& value) { SetSqsFailureFeedbackRoleArn(std::forward<SqsFailureFeedbackRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to a platform application endpoint. </p>
     */
    inline const Aws::String& GetApplicationSuccessFeedbackRoleArn() const { return m_applicationSuccessFeedbackRoleArn; }
    inline bool ApplicationSuccessFeedbackRoleArnHasBeenSet() const { return m_applicationSuccessFeedbackRoleArnHasBeenSet; }
    template<typename ApplicationSuccessFeedbackRoleArnT = Aws::String>
    void SetApplicationSuccessFeedbackRoleArn(ApplicationSuccessFeedbackRoleArnT&& value) { m_applicationSuccessFeedbackRoleArnHasBeenSet = true; m_applicationSuccessFeedbackRoleArn = std::forward<ApplicationSuccessFeedbackRoleArnT>(value); }
    template<typename ApplicationSuccessFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithApplicationSuccessFeedbackRoleArn(ApplicationSuccessFeedbackRoleArnT&& value) { SetApplicationSuccessFeedbackRoleArn(std::forward<ApplicationSuccessFeedbackRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline const Aws::String& GetFirehoseSuccessFeedbackRoleArn() const { return m_firehoseSuccessFeedbackRoleArn; }
    inline bool FirehoseSuccessFeedbackRoleArnHasBeenSet() const { return m_firehoseSuccessFeedbackRoleArnHasBeenSet; }
    template<typename FirehoseSuccessFeedbackRoleArnT = Aws::String>
    void SetFirehoseSuccessFeedbackRoleArn(FirehoseSuccessFeedbackRoleArnT&& value) { m_firehoseSuccessFeedbackRoleArnHasBeenSet = true; m_firehoseSuccessFeedbackRoleArn = std::forward<FirehoseSuccessFeedbackRoleArnT>(value); }
    template<typename FirehoseSuccessFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithFirehoseSuccessFeedbackRoleArn(FirehoseSuccessFeedbackRoleArnT&& value) { SetFirehoseSuccessFeedbackRoleArn(std::forward<FirehoseSuccessFeedbackRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Kinesis Data Firehose endpoint. </p>
     */
    inline const Aws::String& GetFirehoseFailureFeedbackRoleArn() const { return m_firehoseFailureFeedbackRoleArn; }
    inline bool FirehoseFailureFeedbackRoleArnHasBeenSet() const { return m_firehoseFailureFeedbackRoleArnHasBeenSet; }
    template<typename FirehoseFailureFeedbackRoleArnT = Aws::String>
    void SetFirehoseFailureFeedbackRoleArn(FirehoseFailureFeedbackRoleArnT&& value) { m_firehoseFailureFeedbackRoleArnHasBeenSet = true; m_firehoseFailureFeedbackRoleArn = std::forward<FirehoseFailureFeedbackRoleArnT>(value); }
    template<typename FirehoseFailureFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithFirehoseFailureFeedbackRoleArn(FirehoseFailureFeedbackRoleArnT&& value) { SetFirehoseFailureFeedbackRoleArn(std::forward<FirehoseFailureFeedbackRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline const Aws::String& GetHttpSuccessFeedbackRoleArn() const { return m_httpSuccessFeedbackRoleArn; }
    inline bool HttpSuccessFeedbackRoleArnHasBeenSet() const { return m_httpSuccessFeedbackRoleArnHasBeenSet; }
    template<typename HttpSuccessFeedbackRoleArnT = Aws::String>
    void SetHttpSuccessFeedbackRoleArn(HttpSuccessFeedbackRoleArnT&& value) { m_httpSuccessFeedbackRoleArnHasBeenSet = true; m_httpSuccessFeedbackRoleArn = std::forward<HttpSuccessFeedbackRoleArnT>(value); }
    template<typename HttpSuccessFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithHttpSuccessFeedbackRoleArn(HttpSuccessFeedbackRoleArnT&& value) { SetHttpSuccessFeedbackRoleArn(std::forward<HttpSuccessFeedbackRoleArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint. </p>
     */
    inline const Aws::String& GetHttpFailureFeedbackRoleArn() const { return m_httpFailureFeedbackRoleArn; }
    inline bool HttpFailureFeedbackRoleArnHasBeenSet() const { return m_httpFailureFeedbackRoleArnHasBeenSet; }
    template<typename HttpFailureFeedbackRoleArnT = Aws::String>
    void SetHttpFailureFeedbackRoleArn(HttpFailureFeedbackRoleArnT&& value) { m_httpFailureFeedbackRoleArnHasBeenSet = true; m_httpFailureFeedbackRoleArn = std::forward<HttpFailureFeedbackRoleArnT>(value); }
    template<typename HttpFailureFeedbackRoleArnT = Aws::String>
    AwsSnsTopicDetails& WithHttpFailureFeedbackRoleArn(HttpFailureFeedbackRoleArnT&& value) { SetHttpFailureFeedbackRoleArn(std::forward<HttpFailureFeedbackRoleArnT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_kmsMasterKeyId;
    bool m_kmsMasterKeyIdHasBeenSet = false;

    Aws::Vector<AwsSnsTopicSubscription> m_subscription;
    bool m_subscriptionHasBeenSet = false;

    Aws::String m_topicName;
    bool m_topicNameHasBeenSet = false;

    Aws::String m_owner;
    bool m_ownerHasBeenSet = false;

    Aws::String m_sqsSuccessFeedbackRoleArn;
    bool m_sqsSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_sqsFailureFeedbackRoleArn;
    bool m_sqsFailureFeedbackRoleArnHasBeenSet = false;

    Aws::String m_applicationSuccessFeedbackRoleArn;
    bool m_applicationSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_firehoseSuccessFeedbackRoleArn;
    bool m_firehoseSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_firehoseFailureFeedbackRoleArn;
    bool m_firehoseFailureFeedbackRoleArnHasBeenSet = false;

    Aws::String m_httpSuccessFeedbackRoleArn;
    bool m_httpSuccessFeedbackRoleArnHasBeenSet = false;

    Aws::String m_httpFailureFeedbackRoleArn;
    bool m_httpFailureFeedbackRoleArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SecurityHub
} // namespace Aws
