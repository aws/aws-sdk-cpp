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
   * <p>Input for SetTopicAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SetTopicAttributesInput">AWS
   * API Reference</a></p>
   */
  class SetTopicAttributesRequest : public SNSRequest
  {
  public:
    AWS_SNS_API SetTopicAttributesRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "SetTopicAttributes"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The ARN of the topic to modify.</p>
     */
    inline const Aws::String& GetTopicArn() const { return m_topicArn; }
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }
    template<typename TopicArnT = Aws::String>
    void SetTopicArn(TopicArnT&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::forward<TopicArnT>(value); }
    template<typename TopicArnT = Aws::String>
    SetTopicAttributesRequest& WithTopicArn(TopicArnT&& value) { SetTopicArn(std::forward<TopicArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>SetTopicAttributes</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>TracingConfig</code> – Tracing
     * mode of an Amazon SNS topic. By default <code>TracingConfig</code> is set to
     * <code>PassThrough</code>, and the topic passes through the tracing header it
     * receives from an Amazon SNS publisher to its subscriptions. If set to
     * <code>Active</code>, Amazon SNS will vend X-Ray segment data to topic owner
     * account if the sampled flag in the tracing header is true. This is only
     * supported on standard topics.</p> </li> <li> <p>HTTP</p> <ul> <li> <p>
     * <code>HTTPSuccessFeedbackRoleArn</code> – Indicates successful message delivery
     * status for an Amazon SNS topic that is subscribed to an HTTP endpoint. </p>
     * </li> <li> <p> <code>HTTPSuccessFeedbackSampleRate</code> – Indicates percentage
     * of successful messages to sample for an Amazon SNS topic that is subscribed to
     * an HTTP endpoint.</p> </li> <li> <p> <code>HTTPFailureFeedbackRoleArn</code> –
     * Indicates failed message delivery status for an Amazon SNS topic that is
     * subscribed to an HTTP endpoint.</p> </li> </ul> </li> <li> <p>Amazon Data
     * Firehose</p> <ul> <li> <p> <code>FirehoseSuccessFeedbackRoleArn</code> –
     * Indicates successful message delivery status for an Amazon SNS topic that is
     * subscribed to an Amazon Data Firehose endpoint.</p> </li> <li> <p>
     * <code>FirehoseSuccessFeedbackSampleRate</code> – Indicates percentage of
     * successful messages to sample for an Amazon SNS topic that is subscribed to an
     * Amazon Data Firehose endpoint.</p> </li> <li> <p>
     * <code>FirehoseFailureFeedbackRoleArn</code> – Indicates failed message delivery
     * status for an Amazon SNS topic that is subscribed to an Amazon Data Firehose
     * endpoint. </p> </li> </ul> </li> <li> <p>Lambda</p> <ul> <li> <p>
     * <code>LambdaSuccessFeedbackRoleArn</code> – Indicates successful message
     * delivery status for an Amazon SNS topic that is subscribed to an Lambda
     * endpoint.</p> </li> <li> <p> <code>LambdaSuccessFeedbackSampleRate</code> –
     * Indicates percentage of successful messages to sample for an Amazon SNS topic
     * that is subscribed to an Lambda endpoint.</p> </li> <li> <p>
     * <code>LambdaFailureFeedbackRoleArn</code> – Indicates failed message delivery
     * status for an Amazon SNS topic that is subscribed to an Lambda endpoint. </p>
     * </li> </ul> </li> <li> <p>Platform application endpoint</p> <ul> <li> <p>
     * <code>ApplicationSuccessFeedbackRoleArn</code> – Indicates successful message
     * delivery status for an Amazon SNS topic that is subscribed to an platform
     * application endpoint.</p> </li> <li> <p>
     * <code>ApplicationSuccessFeedbackSampleRate</code> – Indicates percentage of
     * successful messages to sample for an Amazon SNS topic that is subscribed to an
     * platform application endpoint.</p> </li> <li> <p>
     * <code>ApplicationFailureFeedbackRoleArn</code> – Indicates failed message
     * delivery status for an Amazon SNS topic that is subscribed to an platform
     * application endpoint.</p> </li> </ul>  <p>In addition to being able to
     * configure topic attributes for message delivery status of notification messages
     * sent to Amazon SNS application endpoints, you can also configure application
     * attributes for the delivery status of push notification messages sent to push
     * notification services.</p> <p>For example, For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-msg-status.html">Using
     * Amazon SNS Application Attributes for Message Delivery Status</a>. </p> 
     * </li> <li> <p>Amazon SQS</p> <ul> <li> <p>
     * <code>SQSSuccessFeedbackRoleArn</code> – Indicates successful message delivery
     * status for an Amazon SNS topic that is subscribed to an Amazon SQS endpoint.
     * </p> </li> <li> <p> <code>SQSSuccessFeedbackSampleRate</code> – Indicates
     * percentage of successful messages to sample for an Amazon SNS topic that is
     * subscribed to an Amazon SQS endpoint. </p> </li> <li> <p>
     * <code>SQSFailureFeedbackRoleArn</code> – Indicates failed message delivery
     * status for an Amazon SNS topic that is subscribed to an Amazon SQS endpoint.
     * </p> </li> </ul> </li> </ul>  <p>The
     * &lt;ENDPOINT&gt;SuccessFeedbackRoleArn and
     * &lt;ENDPOINT&gt;FailureFeedbackRoleArn attributes are used to give Amazon SNS
     * write access to use CloudWatch Logs on your behalf. The
     * &lt;ENDPOINT&gt;SuccessFeedbackSampleRate attribute is for specifying the sample
     * rate percentage (0-100) of successfully delivered messages. After you configure
     * the &lt;ENDPOINT&gt;FailureFeedbackRoleArn attribute, then all failed message
     * deliveries generate CloudWatch Logs. </p>  <p>The following attribute
     * applies only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side-encryption</a>:</p>
     * <ul> <li> <p> <code>KmsMasterKeyId</code> – The ID of an Amazon Web Services
     * managed customer master key (CMK) for Amazon SNS or a custom CMK. For more
     * information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>Key Management Service API Reference</i>. </p> </li> <li> <p>
     * <code>SignatureVersion</code> – The signature version corresponds to the hashing
     * algorithm used while creating the signature of the notifications, subscription
     * confirmations, or unsubscribe confirmation messages sent by Amazon SNS. By
     * default, <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> </ul>
     * <p>The following attribute applies only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – The policy that sets
     * the retention period for messages stored in the message archive of an Amazon SNS
     * FIFO topic.</p> </li> <li> <p> <code>ContentBasedDeduplication</code> – Enables
     * content-based deduplication for FIFO topics.</p> <ul> <li> <p>By default,
     * <code>ContentBasedDeduplication</code> is set to <code>false</code>. If you
     * create a FIFO topic and this attribute is <code>false</code>, you must specify a
     * value for the <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul> <ul> <li> <p>
     * <code>FifoThroughputScope</code> – Enables higher throughput for your FIFO topic
     * by adjusting the scope of deduplication. This attribute has two possible
     * values:</p> <ul> <li> <p> <code>Topic</code> – The scope of message
     * deduplication is across the entire topic. This is the default value and
     * maintains existing behavior, with a maximum throughput of 3000 messages per
     * second or 20MB per second, whichever comes first.</p> </li> <li> <p>
     * <code>MessageGroup</code> �� The scope of deduplication is within each
     * individual message group, which enables higher throughput per topic subject to
     * regional quotas. For more information on quotas or to request an increase, see
     * <a href="https://docs.aws.amazon.com/general/latest/gr/sns.html">Amazon SNS
     * service quotas</a> in the Amazon Web Services General Reference.</p> </li> </ul>
     * </li> </ul>
     */
    inline const Aws::String& GetAttributeName() const { return m_attributeName; }
    inline bool AttributeNameHasBeenSet() const { return m_attributeNameHasBeenSet; }
    template<typename AttributeNameT = Aws::String>
    void SetAttributeName(AttributeNameT&& value) { m_attributeNameHasBeenSet = true; m_attributeName = std::forward<AttributeNameT>(value); }
    template<typename AttributeNameT = Aws::String>
    SetTopicAttributesRequest& WithAttributeName(AttributeNameT&& value) { SetAttributeName(std::forward<AttributeNameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The new value for the attribute.</p>
     */
    inline const Aws::String& GetAttributeValue() const { return m_attributeValue; }
    inline bool AttributeValueHasBeenSet() const { return m_attributeValueHasBeenSet; }
    template<typename AttributeValueT = Aws::String>
    void SetAttributeValue(AttributeValueT&& value) { m_attributeValueHasBeenSet = true; m_attributeValue = std::forward<AttributeValueT>(value); }
    template<typename AttributeValueT = Aws::String>
    SetTopicAttributesRequest& WithAttributeValue(AttributeValueT&& value) { SetAttributeValue(std::forward<AttributeValueT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_attributeName;
    bool m_attributeNameHasBeenSet = false;

    Aws::String m_attributeValue;
    bool m_attributeValueHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
