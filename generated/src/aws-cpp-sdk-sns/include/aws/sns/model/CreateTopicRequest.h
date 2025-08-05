/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sns/model/Tag.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for CreateTopic action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/CreateTopicInput">AWS
   * API Reference</a></p>
   */
  class CreateTopicRequest : public SNSRequest
  {
  public:
    AWS_SNS_API CreateTopicRequest() = default;

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopic"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline const Aws::String& GetName() const { return m_name; }
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }
    template<typename NameT = Aws::String>
    void SetName(NameT&& value) { m_nameHasBeenSet = true; m_name = std::forward<NameT>(value); }
    template<typename NameT = Aws::String>
    CreateTopicRequest& WithName(NameT&& value) { SetName(std::forward<NameT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists names, descriptions, and values of the special request parameters that the
     * <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
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
     * delivery status for an Amazon SNS topic that is subscribed to a platform
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
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html">server-side
     * encryption</a>:</p> <ul> <li> <p> <code>KmsMasterKeyId</code> – The ID of an
     * Amazon Web Services managed customer master key (CMK) for Amazon SNS or a custom
     * CMK. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-server-side-encryption.html#sse-key-terms">Key
     * Terms</a>. For more examples, see <a
     * href="https://docs.aws.amazon.com/kms/latest/APIReference/API_DescribeKey.html#API_DescribeKey_RequestParameters">KeyId</a>
     * in the <i>Key Management Service API Reference</i>. </p> </li> </ul> <p>The
     * following attributes apply only to <a
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
     * <code>MessageGroup</code> – The scope of deduplication is within each individual
     * message group, which enables higher throughput per topic subject to regional
     * quotas. For more information on quotas or to request an increase, see <a
     * href="https://docs.aws.amazon.com/general/latest/gr/sns.html">Amazon SNS service
     * quotas</a> in the Amazon Web Services General Reference.</p> </li> </ul> </li>
     * </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    CreateTopicRequest& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    CreateTopicRequest& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const { return m_tags; }
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }
    template<typename TagsT = Aws::Vector<Tag>>
    void SetTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags = std::forward<TagsT>(value); }
    template<typename TagsT = Aws::Vector<Tag>>
    CreateTopicRequest& WithTags(TagsT&& value) { SetTags(std::forward<TagsT>(value)); return *this;}
    template<typename TagsT = Tag>
    CreateTopicRequest& AddTags(TagsT&& value) { m_tagsHasBeenSet = true; m_tags.emplace_back(std::forward<TagsT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline const Aws::String& GetDataProtectionPolicy() const { return m_dataProtectionPolicy; }
    inline bool DataProtectionPolicyHasBeenSet() const { return m_dataProtectionPolicyHasBeenSet; }
    template<typename DataProtectionPolicyT = Aws::String>
    void SetDataProtectionPolicy(DataProtectionPolicyT&& value) { m_dataProtectionPolicyHasBeenSet = true; m_dataProtectionPolicy = std::forward<DataProtectionPolicyT>(value); }
    template<typename DataProtectionPolicyT = Aws::String>
    CreateTopicRequest& WithDataProtectionPolicy(DataProtectionPolicyT&& value) { SetDataProtectionPolicy(std::forward<DataProtectionPolicyT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    Aws::Vector<Tag> m_tags;
    bool m_tagsHasBeenSet = false;

    Aws::String m_dataProtectionPolicy;
    bool m_dataProtectionPolicyHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
