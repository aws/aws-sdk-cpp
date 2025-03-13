/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/sns/model/ResponseMetadata.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <utility>

namespace Aws
{
template<typename RESULT_TYPE>
class AmazonWebServiceResult;

namespace Utils
{
namespace Xml
{
  class XmlDocument;
} // namespace Xml
} // namespace Utils
namespace SNS
{
namespace Model
{
  /**
   * <p>Response for GetSubscriptionAttributes action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/GetSubscriptionAttributesResponse">AWS
   * API Reference</a></p>
   */
  class GetSubscriptionAttributesResult
  {
  public:
    AWS_SNS_API GetSubscriptionAttributesResult() = default;
    AWS_SNS_API GetSubscriptionAttributesResult(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);
    AWS_SNS_API GetSubscriptionAttributesResult& operator=(const Aws::AmazonWebServiceResult<Aws::Utils::Xml::XmlDocument>& result);


    ///@{
    /**
     * <p>A map of the subscription's attributes. Attributes in this map include the
     * following:</p> <ul> <li> <p> <code>ConfirmationWasAuthenticated</code> –
     * <code>true</code> if the subscription confirmation request was
     * authenticated.</p> </li> <li> <p> <code>DeliveryPolicy</code> – The JSON
     * serialization of the subscription's delivery policy.</p> </li> <li> <p>
     * <code>EffectiveDeliveryPolicy</code> – The JSON serialization of the effective
     * delivery policy that takes into account the topic delivery policy and account
     * system defaults.</p> </li> <li> <p> <code>FilterPolicy</code> – The filter
     * policy JSON that is assigned to the subscription. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-message-filtering.html">Amazon
     * SNS Message Filtering</a> in the <i>Amazon SNS Developer Guide</i>.</p> </li>
     * <li> <p> <code>FilterPolicyScope</code> – This attribute lets you choose the
     * filtering scope by using one of the following string value types:</p> <ul> <li>
     * <p> <code>MessageAttributes</code> (default) – The filter is applied on the
     * message attributes.</p> </li> <li> <p> <code>MessageBody</code> – The filter is
     * applied on the message body.</p> </li> </ul> </li> <li> <p> <code>Owner</code> –
     * The Amazon Web Services account ID of the subscription's owner.</p> </li> <li>
     * <p> <code>PendingConfirmation</code> – <code>true</code> if the subscription
     * hasn't been confirmed. To confirm a pending subscription, call the
     * <code>ConfirmSubscription</code> action with a confirmation token.</p> </li>
     * <li> <p> <code>RawMessageDelivery</code> – <code>true</code> if raw message
     * delivery is enabled for the subscription. Raw messages are free of JSON
     * formatting and can be sent to HTTP/S and Amazon SQS endpoints.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> <li> <p> <code>SubscriptionArn</code> – The
     * subscription's ARN.</p> </li> <li> <p> <code>TopicArn</code> – The topic ARN
     * that the subscription is associated with.</p> </li> </ul> <p>The following
     * attribute applies only to Amazon Data Firehose delivery stream
     * subscriptions:</p> <ul> <li> <p> <code>SubscriptionRoleArn</code> – The ARN of
     * the IAM role that has the following:</p> <ul> <li> <p>Permission to write to the
     * Firehose delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted
     * entity</p> </li> </ul> <p>Specifying a valid ARN for this attribute is required
     * for Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Firehose delivery streams</a> in the <i>Amazon SNS Developer Guide</i>.</p>
     * </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const { return m_attributes; }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    void SetAttributes(AttributesT&& value) { m_attributesHasBeenSet = true; m_attributes = std::forward<AttributesT>(value); }
    template<typename AttributesT = Aws::Map<Aws::String, Aws::String>>
    GetSubscriptionAttributesResult& WithAttributes(AttributesT&& value) { SetAttributes(std::forward<AttributesT>(value)); return *this;}
    template<typename AttributesKeyT = Aws::String, typename AttributesValueT = Aws::String>
    GetSubscriptionAttributesResult& AddAttributes(AttributesKeyT&& key, AttributesValueT&& value) {
      m_attributesHasBeenSet = true; m_attributes.emplace(std::forward<AttributesKeyT>(key), std::forward<AttributesValueT>(value)); return *this;
    }
    ///@}

    ///@{
    
    inline const ResponseMetadata& GetResponseMetadata() const { return m_responseMetadata; }
    template<typename ResponseMetadataT = ResponseMetadata>
    void SetResponseMetadata(ResponseMetadataT&& value) { m_responseMetadataHasBeenSet = true; m_responseMetadata = std::forward<ResponseMetadataT>(value); }
    template<typename ResponseMetadataT = ResponseMetadata>
    GetSubscriptionAttributesResult& WithResponseMetadata(ResponseMetadataT&& value) { SetResponseMetadata(std::forward<ResponseMetadataT>(value)); return *this;}
    ///@}
  private:

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    ResponseMetadata m_responseMetadata;
    bool m_responseMetadataHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
