/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/SNSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <utility>

namespace Aws
{
namespace SNS
{
namespace Model
{

  /**
   * <p>Input for Subscribe action.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sns-2010-03-31/SubscribeInput">AWS
   * API Reference</a></p>
   */
  class SubscribeRequest : public SNSRequest
  {
  public:
    AWS_SNS_API SubscribeRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "Subscribe"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline const Aws::String& GetTopicArn() const{ return m_topicArn; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline bool TopicArnHasBeenSet() const { return m_topicArnHasBeenSet; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(const Aws::String& value) { m_topicArnHasBeenSet = true; m_topicArn = value; }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(Aws::String&& value) { m_topicArnHasBeenSet = true; m_topicArn = std::move(value); }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline void SetTopicArn(const char* value) { m_topicArnHasBeenSet = true; m_topicArn.assign(value); }

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(const Aws::String& value) { SetTopicArn(value); return *this;}

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(Aws::String&& value) { SetTopicArn(std::move(value)); return *this;}

    /**
     * <p>The ARN of the topic you want to subscribe to.</p>
     */
    inline SubscribeRequest& WithTopicArn(const char* value) { SetTopicArn(value); return *this;}


    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline const Aws::String& GetProtocol() const{ return m_protocol; }

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline bool ProtocolHasBeenSet() const { return m_protocolHasBeenSet; }

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline void SetProtocol(const Aws::String& value) { m_protocolHasBeenSet = true; m_protocol = value; }

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline void SetProtocol(Aws::String&& value) { m_protocolHasBeenSet = true; m_protocol = std::move(value); }

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline void SetProtocol(const char* value) { m_protocolHasBeenSet = true; m_protocol.assign(value); }

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline SubscribeRequest& WithProtocol(const Aws::String& value) { SetProtocol(value); return *this;}

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline SubscribeRequest& WithProtocol(Aws::String&& value) { SetProtocol(std::move(value)); return *this;}

    /**
     * <p>The protocol that you want to use. Supported protocols include:</p> <ul> <li>
     * <p> <code>http</code> – delivery of JSON-encoded message via HTTP POST</p> </li>
     * <li> <p> <code>https</code> – delivery of JSON-encoded message via HTTPS
     * POST</p> </li> <li> <p> <code>email</code> – delivery of message via SMTP</p>
     * </li> <li> <p> <code>email-json</code> – delivery of JSON-encoded message via
     * SMTP</p> </li> <li> <p> <code>sms</code> – delivery of message via SMS</p> </li>
     * <li> <p> <code>sqs</code> – delivery of JSON-encoded message to an Amazon SQS
     * queue</p> </li> <li> <p> <code>application</code> – delivery of JSON-encoded
     * message to an EndpointArn for a mobile app and device</p> </li> <li> <p>
     * <code>lambda</code> – delivery of JSON-encoded message to an Lambda function</p>
     * </li> <li> <p> <code>firehose</code> – delivery of JSON-encoded message to an
     * Amazon Kinesis Data Firehose delivery stream.</p> </li> </ul>
     */
    inline SubscribeRequest& WithProtocol(const char* value) { SetProtocol(value); return *this;}


    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline const Aws::String& GetEndpoint() const{ return m_endpoint; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline bool EndpointHasBeenSet() const { return m_endpointHasBeenSet; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline void SetEndpoint(const Aws::String& value) { m_endpointHasBeenSet = true; m_endpoint = value; }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline void SetEndpoint(Aws::String&& value) { m_endpointHasBeenSet = true; m_endpoint = std::move(value); }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline void SetEndpoint(const char* value) { m_endpointHasBeenSet = true; m_endpoint.assign(value); }

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline SubscribeRequest& WithEndpoint(const Aws::String& value) { SetEndpoint(value); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline SubscribeRequest& WithEndpoint(Aws::String&& value) { SetEndpoint(std::move(value)); return *this;}

    /**
     * <p>The endpoint that you want to receive notifications. Endpoints vary by
     * protocol:</p> <ul> <li> <p>For the <code>http</code> protocol, the (public)
     * endpoint is a URL beginning with <code>http://</code>.</p> </li> <li> <p>For the
     * <code>https</code> protocol, the (public) endpoint is a URL beginning with
     * <code>https://</code>.</p> </li> <li> <p>For the <code>email</code> protocol,
     * the endpoint is an email address.</p> </li> <li> <p>For the
     * <code>email-json</code> protocol, the endpoint is an email address.</p> </li>
     * <li> <p>For the <code>sms</code> protocol, the endpoint is a phone number of an
     * SMS-enabled device.</p> </li> <li> <p>For the <code>sqs</code> protocol, the
     * endpoint is the ARN of an Amazon SQS queue.</p> </li> <li> <p>For the
     * <code>application</code> protocol, the endpoint is the EndpointArn of a mobile
     * app and device.</p> </li> <li> <p>For the <code>lambda</code> protocol, the
     * endpoint is the ARN of an Lambda function.</p> </li> <li> <p>For the
     * <code>firehose</code> protocol, the endpoint is the ARN of an Amazon Kinesis
     * Data Firehose delivery stream.</p> </li> </ul>
     */
    inline SubscribeRequest& WithEndpoint(const char* value) { SetEndpoint(value); return *this;}


    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>Subscribe</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>FilterPolicy</code> – The simple JSON object that lets your subscriber
     * receive only a subset of messages, rather than receiving every message published
     * to the topic.</p> </li> <li> <p> <code>FilterPolicyScope</code> – This attribute
     * lets you choose the filtering scope by using one of the following string value
     * types:</p> <ul> <li> <p> <code>MessageAttributes</code> (default) – The filter
     * is applied on the message attributes.</p> </li> <li> <p>
     * <code>MessageBody</code> – The filter is applied on the message body.</p> </li>
     * </ul> </li> <li> <p> <code>RawMessageDelivery</code> – When set to
     * <code>true</code>, enables raw message delivery to Amazon SQS or HTTP/S
     * endpoints. This eliminates the need for the endpoints to process JSON
     * formatting, which is otherwise created for Amazon SNS metadata.</p> </li> <li>
     * <p> <code>RedrivePolicy</code> – When specified, sends undeliverable messages to
     * the specified Amazon SQS dead-letter queue. Messages that can't be delivered due
     * to client errors (for example, when the subscribed endpoint is unreachable) or
     * server errors (for example, when the service that powers the subscribed endpoint
     * becomes unavailable) are held in the dead-letter queue for further analysis or
     * reprocessing.</p> </li> </ul> <p>The following attribute applies only to Amazon
     * Kinesis Data Firehose delivery stream subscriptions:</p> <ul> <li> <p>
     * <code>SubscriptionRoleArn</code> – The ARN of the IAM role that has the
     * following:</p> <ul> <li> <p>Permission to write to the Kinesis Data Firehose
     * delivery stream</p> </li> <li> <p>Amazon SNS listed as a trusted entity</p>
     * </li> </ul> <p>Specifying a valid ARN for this attribute is required for Kinesis
     * Data Firehose delivery stream subscriptions. For more information, see <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-firehose-as-subscriber.html">Fanout
     * to Kinesis Data Firehose delivery streams</a> in the <i>Amazon SNS Developer
     * Guide</i>.</p> </li> </ul> <p>The following attributes apply only to <a
     * href="https://docs.aws.amazon.com/sns/latest/dg/sns-fifo-topics.html">FIFO
     * topics</a>:</p> <ul> <li> <p> <code>ReplayPolicy</code> – Adds or updates an
     * inline policy document for a subscription to replay messages stored in the
     * specified Amazon SNS topic.</p> </li> <li> <p> <code>ReplayStatus</code> –
     * Retrieves the status of the subscription message replay, which can be one of the
     * following:</p> <ul> <li> <p> <code>Completed</code> – The replay has
     * successfully redelivered all messages, and is now delivering newly published
     * messages. If an ending point was specified in the <code>ReplayPolicy</code> then
     * the subscription will no longer receive newly published messages.</p> </li> <li>
     * <p> <code>In progress</code> – The replay is currently replaying the selected
     * messages.</p> </li> <li> <p> <code>Failed</code> – The replay was unable to
     * complete.</p> </li> <li> <p> <code>Pending</code> – The default state while the
     * replay initiates.</p> </li> </ul> </li> </ul>
     */
    inline SubscribeRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>true</code>, the response includes the ARN in
     * all cases, even if the subscription is not yet confirmed. In addition to the ARN
     * for confirmed subscriptions, the response also includes the <code>pending
     * subscription</code> ARN value for subscriptions that aren't yet confirmed. A
     * subscription becomes confirmed when the subscriber calls the
     * <code>ConfirmSubscription</code> action with a confirmation token.</p> <p/>
     * <p>The default value is <code>false</code>.</p>
     */
    inline bool GetReturnSubscriptionArn() const{ return m_returnSubscriptionArn; }

    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>true</code>, the response includes the ARN in
     * all cases, even if the subscription is not yet confirmed. In addition to the ARN
     * for confirmed subscriptions, the response also includes the <code>pending
     * subscription</code> ARN value for subscriptions that aren't yet confirmed. A
     * subscription becomes confirmed when the subscriber calls the
     * <code>ConfirmSubscription</code> action with a confirmation token.</p> <p/>
     * <p>The default value is <code>false</code>.</p>
     */
    inline bool ReturnSubscriptionArnHasBeenSet() const { return m_returnSubscriptionArnHasBeenSet; }

    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>true</code>, the response includes the ARN in
     * all cases, even if the subscription is not yet confirmed. In addition to the ARN
     * for confirmed subscriptions, the response also includes the <code>pending
     * subscription</code> ARN value for subscriptions that aren't yet confirmed. A
     * subscription becomes confirmed when the subscriber calls the
     * <code>ConfirmSubscription</code> action with a confirmation token.</p> <p/>
     * <p>The default value is <code>false</code>.</p>
     */
    inline void SetReturnSubscriptionArn(bool value) { m_returnSubscriptionArnHasBeenSet = true; m_returnSubscriptionArn = value; }

    /**
     * <p>Sets whether the response from the <code>Subscribe</code> request includes
     * the subscription ARN, even if the subscription is not yet confirmed.</p> <p>If
     * you set this parameter to <code>true</code>, the response includes the ARN in
     * all cases, even if the subscription is not yet confirmed. In addition to the ARN
     * for confirmed subscriptions, the response also includes the <code>pending
     * subscription</code> ARN value for subscriptions that aren't yet confirmed. A
     * subscription becomes confirmed when the subscriber calls the
     * <code>ConfirmSubscription</code> action with a confirmation token.</p> <p/>
     * <p>The default value is <code>false</code>.</p>
     */
    inline SubscribeRequest& WithReturnSubscriptionArn(bool value) { SetReturnSubscriptionArn(value); return *this;}

  private:

    Aws::String m_topicArn;
    bool m_topicArnHasBeenSet = false;

    Aws::String m_protocol;
    bool m_protocolHasBeenSet = false;

    Aws::String m_endpoint;
    bool m_endpointHasBeenSet = false;

    Aws::Map<Aws::String, Aws::String> m_attributes;
    bool m_attributesHasBeenSet = false;

    bool m_returnSubscriptionArn;
    bool m_returnSubscriptionArnHasBeenSet = false;
  };

} // namespace Model
} // namespace SNS
} // namespace Aws
