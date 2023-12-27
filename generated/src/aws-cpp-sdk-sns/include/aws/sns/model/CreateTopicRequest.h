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
    AWS_SNS_API CreateTopicRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "CreateTopic"; }

    AWS_SNS_API Aws::String SerializePayload() const override;

  protected:
    AWS_SNS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline CreateTopicRequest& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline CreateTopicRequest& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>The name of the topic you want to create.</p> <p>Constraints: Topic names
     * must be made up of only uppercase and lowercase ASCII letters, numbers,
     * underscores, and hyphens, and must be between 1 and 256 characters long.</p>
     * <p>For a FIFO (first-in-first-out) topic, the name must end with the
     * <code>.fifo</code> suffix. </p>
     */
    inline CreateTopicRequest& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline const Aws::Map<Aws::String, Aws::String>& GetAttributes() const{ return m_attributes; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline bool AttributesHasBeenSet() const { return m_attributesHasBeenSet; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline void SetAttributes(const Aws::Map<Aws::String, Aws::String>& value) { m_attributesHasBeenSet = true; m_attributes = value; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline void SetAttributes(Aws::Map<Aws::String, Aws::String>&& value) { m_attributesHasBeenSet = true; m_attributes = std::move(value); }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& WithAttributes(const Aws::Map<Aws::String, Aws::String>& value) { SetAttributes(value); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& WithAttributes(Aws::Map<Aws::String, Aws::String>&& value) { SetAttributes(std::move(value)); return *this;}

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const Aws::String& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(Aws::String&& key, const Aws::String& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const Aws::String& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(Aws::String&& key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const char* key, Aws::String&& value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, std::move(value)); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(Aws::String&& key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(std::move(key), value); return *this; }

    /**
     * <p>A map of attributes with their corresponding values.</p> <p>The following
     * lists the names, descriptions, and values of the special request parameters that
     * the <code>CreateTopic</code> action uses:</p> <ul> <li> <p>
     * <code>DeliveryPolicy</code> – The policy that defines how Amazon SNS retries
     * failed deliveries to HTTP/S endpoints.</p> </li> <li> <p>
     * <code>DisplayName</code> – The display name to use for a topic with SMS
     * subscriptions.</p> </li> <li> <p> <code>FifoTopic</code> – Set to true to create
     * a FIFO topic.</p> </li> <li> <p> <code>Policy</code> – The policy that defines
     * who can access your topic. By default, only the topic owner can publish or
     * subscribe to the topic.</p> </li> <li> <p> <code>SignatureVersion</code> – The
     * signature version corresponds to the hashing algorithm used while creating the
     * signature of the notifications, subscription confirmations, or unsubscribe
     * confirmation messages sent by Amazon SNS. By default,
     * <code>SignatureVersion</code> is set to <code>1</code>.</p> </li> <li> <p>
     * <code>TracingConfig</code> – Tracing mode of an Amazon SNS topic. By default
     * <code>TracingConfig</code> is set to <code>PassThrough</code>, and the topic
     * passes through the tracing header it receives from an Amazon SNS publisher to
     * its subscriptions. If set to <code>Active</code>, Amazon SNS will vend X-Ray
     * segment data to topic owner account if the sampled flag in the tracing header is
     * true. This is only supported on standard topics.</p> </li> </ul> <p>The
     * following attribute applies only to <a
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
     * topics</a>:</p> <ul> <li> <p> <code>ArchivePolicy</code> – Adds or updates an
     * inline policy document to archive messages stored in the specified Amazon SNS
     * topic.</p> </li> <li> <p> <code>BeginningArchiveTime</code> – The earliest
     * starting point at which a message in the topic’s archive can be replayed from.
     * This point in time is based on the configured message retention period set by
     * the topic’s message archiving policy.</p> </li> <li> <p>
     * <code>ContentBasedDeduplication</code> – Enables content-based deduplication for
     * FIFO topics.</p> <ul> <li> <p>By default, <code>ContentBasedDeduplication</code>
     * is set to <code>false</code>. If you create a FIFO topic and this attribute is
     * <code>false</code>, you must specify a value for the
     * <code>MessageDeduplicationId</code> parameter for the <a
     * href="https://docs.aws.amazon.com/sns/latest/api/API_Publish.html">Publish</a>
     * action. </p> </li> <li> <p>When you set <code>ContentBasedDeduplication</code>
     * to <code>true</code>, Amazon SNS uses a SHA-256 hash to generate the
     * <code>MessageDeduplicationId</code> using the body of the message (but not the
     * attributes of the message).</p> <p>(Optional) To override the generated value,
     * you can specify a value for the <code>MessageDeduplicationId</code> parameter
     * for the <code>Publish</code> action.</p> </li> </ul> </li> </ul>
     */
    inline CreateTopicRequest& AddAttributes(const char* key, const char* value) { m_attributesHasBeenSet = true; m_attributes.emplace(key, value); return *this; }


    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline const Aws::Vector<Tag>& GetTags() const{ return m_tags; }

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline bool TagsHasBeenSet() const { return m_tagsHasBeenSet; }

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline void SetTags(const Aws::Vector<Tag>& value) { m_tagsHasBeenSet = true; m_tags = value; }

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline void SetTags(Aws::Vector<Tag>&& value) { m_tagsHasBeenSet = true; m_tags = std::move(value); }

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline CreateTopicRequest& WithTags(const Aws::Vector<Tag>& value) { SetTags(value); return *this;}

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline CreateTopicRequest& WithTags(Aws::Vector<Tag>&& value) { SetTags(std::move(value)); return *this;}

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline CreateTopicRequest& AddTags(const Tag& value) { m_tagsHasBeenSet = true; m_tags.push_back(value); return *this; }

    /**
     * <p>The list of tags to add to a new topic.</p>  <p>To be able to tag a
     * topic on creation, you must have the <code>sns:CreateTopic</code> and
     * <code>sns:TagResource</code> permissions.</p> 
     */
    inline CreateTopicRequest& AddTags(Tag&& value) { m_tagsHasBeenSet = true; m_tags.push_back(std::move(value)); return *this; }


    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline const Aws::String& GetDataProtectionPolicy() const{ return m_dataProtectionPolicy; }

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline bool DataProtectionPolicyHasBeenSet() const { return m_dataProtectionPolicyHasBeenSet; }

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline void SetDataProtectionPolicy(const Aws::String& value) { m_dataProtectionPolicyHasBeenSet = true; m_dataProtectionPolicy = value; }

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline void SetDataProtectionPolicy(Aws::String&& value) { m_dataProtectionPolicyHasBeenSet = true; m_dataProtectionPolicy = std::move(value); }

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline void SetDataProtectionPolicy(const char* value) { m_dataProtectionPolicyHasBeenSet = true; m_dataProtectionPolicy.assign(value); }

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline CreateTopicRequest& WithDataProtectionPolicy(const Aws::String& value) { SetDataProtectionPolicy(value); return *this;}

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline CreateTopicRequest& WithDataProtectionPolicy(Aws::String&& value) { SetDataProtectionPolicy(std::move(value)); return *this;}

    /**
     * <p>The body of the policy document you want to use for this topic.</p> <p>You
     * can only add one policy per topic.</p> <p>The policy must be in JSON string
     * format.</p> <p>Length Constraints: Maximum length of 30,720.</p>
     */
    inline CreateTopicRequest& WithDataProtectionPolicy(const char* value) { SetDataProtectionPolicy(value); return *this;}

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
