/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/sesv2/model/KinesisFirehoseDestination.h>
#include <aws/sesv2/model/CloudWatchDestination.h>
#include <aws/sesv2/model/SnsDestination.h>
#include <aws/sesv2/model/PinpointDestination.h>
#include <aws/sesv2/model/EventType.h>
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
namespace SESV2
{
namespace Model
{

  /**
   * <p>In the Amazon SES API v2, <i>events</i> include message sends, deliveries,
   * opens, clicks, bounces, complaints and delivery delays. <i>Event
   * destinations</i> are places that you can send information about these events to.
   * For example, you can send event data to Amazon SNS to receive notifications when
   * you receive bounces or complaints, or you can use Amazon Kinesis Data Firehose
   * to stream data to Amazon S3 for long-term storage.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/EventDestination">AWS
   * API Reference</a></p>
   */
  class EventDestination
  {
  public:
    AWS_SESV2_API EventDestination();
    AWS_SESV2_API EventDestination(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API EventDestination& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline const Aws::String& GetName() const{ return m_name; }

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline bool NameHasBeenSet() const { return m_nameHasBeenSet; }

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline void SetName(const Aws::String& value) { m_nameHasBeenSet = true; m_name = value; }

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline void SetName(Aws::String&& value) { m_nameHasBeenSet = true; m_name = std::move(value); }

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline void SetName(const char* value) { m_nameHasBeenSet = true; m_name.assign(value); }

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline EventDestination& WithName(const Aws::String& value) { SetName(value); return *this;}

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline EventDestination& WithName(Aws::String&& value) { SetName(std::move(value)); return *this;}

    /**
     * <p>A name that identifies the event destination.</p>
     */
    inline EventDestination& WithName(const char* value) { SetName(value); return *this;}


    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline bool GetEnabled() const{ return m_enabled; }

    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline bool EnabledHasBeenSet() const { return m_enabledHasBeenSet; }

    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline void SetEnabled(bool value) { m_enabledHasBeenSet = true; m_enabled = value; }

    /**
     * <p>If <code>true</code>, the event destination is enabled. When the event
     * destination is enabled, the specified event types are sent to the destinations
     * in this <code>EventDestinationDefinition</code>.</p> <p>If <code>false</code>,
     * the event destination is disabled. When the event destination is disabled,
     * events aren't sent to the specified destinations.</p>
     */
    inline EventDestination& WithEnabled(bool value) { SetEnabled(value); return *this;}


    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline const Aws::Vector<EventType>& GetMatchingEventTypes() const{ return m_matchingEventTypes; }

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline bool MatchingEventTypesHasBeenSet() const { return m_matchingEventTypesHasBeenSet; }

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline void SetMatchingEventTypes(const Aws::Vector<EventType>& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = value; }

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline void SetMatchingEventTypes(Aws::Vector<EventType>&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes = std::move(value); }

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline EventDestination& WithMatchingEventTypes(const Aws::Vector<EventType>& value) { SetMatchingEventTypes(value); return *this;}

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline EventDestination& WithMatchingEventTypes(Aws::Vector<EventType>&& value) { SetMatchingEventTypes(std::move(value)); return *this;}

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline EventDestination& AddMatchingEventTypes(const EventType& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(value); return *this; }

    /**
     * <p>The types of events that Amazon SES sends to the specified event
     * destinations.</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.)</p> </li> <li> <p>
     * <code>REJECT</code> - SES accepted the email, but determined that it contained a
     * virus and didn’t attempt to deliver it to the recipient’s mail server.</p> </li>
     * <li> <p> <code>BOUNCE</code> - (<i>Hard bounce</i>) The recipient's mail server
     * permanently rejected the email. (<i>Soft bounces</i> are only included when SES
     * fails to deliver the email after retrying for a period of time.)</p> </li> <li>
     * <p> <code>COMPLAINT</code> - The email was successfully delivered to the
     * recipient’s mail server, but the recipient marked it as spam.</p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server.</p> </li> <li> <p> <code>OPEN</code> - The recipient received the
     * message and opened it in their email client.</p> </li> <li> <p>
     * <code>CLICK</code> - The recipient clicked one or more links in the email.</p>
     * </li> <li> <p> <code>RENDERING_FAILURE</code> - The email wasn't sent because of
     * a template rendering issue. This event type can occur when template data is
     * missing, or when there is a mismatch between template parameters and data. (This
     * event type only occurs when you send email using the <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendTemplatedEmail.html">
     * <code>SendTemplatedEmail</code> </a> or <a
     * href="https://docs.aws.amazon.com/ses/latest/APIReference/API_SendBulkTemplatedEmail.html">
     * <code>SendBulkTemplatedEmail</code> </a> API operations.) </p> </li> <li> <p>
     * <code>DELIVERY_DELAY</code> - The email couldn't be delivered to the recipient’s
     * mail server because a temporary issue occurred. Delivery delays can occur, for
     * example, when the recipient's inbox is full, or when the receiving email server
     * experiences a transient issue.</p> </li> <li> <p> <code>SUBSCRIPTION</code> -
     * The email was successfully delivered, but the recipient updated their
     * subscription preferences by clicking on an <i>unsubscribe</i> link as part of
     * your <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/sending-email-subscription-management.html">subscription
     * management</a>.</p> </li> </ul>
     */
    inline EventDestination& AddMatchingEventTypes(EventType&& value) { m_matchingEventTypesHasBeenSet = true; m_matchingEventTypes.push_back(std::move(value)); return *this; }


    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline const KinesisFirehoseDestination& GetKinesisFirehoseDestination() const{ return m_kinesisFirehoseDestination; }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline bool KinesisFirehoseDestinationHasBeenSet() const { return m_kinesisFirehoseDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline void SetKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = value; }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline void SetKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { m_kinesisFirehoseDestinationHasBeenSet = true; m_kinesisFirehoseDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline EventDestination& WithKinesisFirehoseDestination(const KinesisFirehoseDestination& value) { SetKinesisFirehoseDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon Kinesis Data Firehose destination for email
     * events. You can use Amazon Kinesis Data Firehose to stream data to other
     * services, such as Amazon S3 and Amazon Redshift.</p>
     */
    inline EventDestination& WithKinesisFirehoseDestination(KinesisFirehoseDestination&& value) { SetKinesisFirehoseDestination(std::move(value)); return *this;}


    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline const CloudWatchDestination& GetCloudWatchDestination() const{ return m_cloudWatchDestination; }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline bool CloudWatchDestinationHasBeenSet() const { return m_cloudWatchDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline void SetCloudWatchDestination(const CloudWatchDestination& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = value; }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline void SetCloudWatchDestination(CloudWatchDestination&& value) { m_cloudWatchDestinationHasBeenSet = true; m_cloudWatchDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline EventDestination& WithCloudWatchDestination(const CloudWatchDestination& value) { SetCloudWatchDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon CloudWatch destination for email events. You
     * can use Amazon CloudWatch to monitor and gain insights on your email sending
     * metrics.</p>
     */
    inline EventDestination& WithCloudWatchDestination(CloudWatchDestination&& value) { SetCloudWatchDestination(std::move(value)); return *this;}


    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline const SnsDestination& GetSnsDestination() const{ return m_snsDestination; }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline bool SnsDestinationHasBeenSet() const { return m_snsDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline void SetSnsDestination(const SnsDestination& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = value; }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline void SetSnsDestination(SnsDestination&& value) { m_snsDestinationHasBeenSet = true; m_snsDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline EventDestination& WithSnsDestination(const SnsDestination& value) { SetSnsDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon SNS destination for email events. You can
     * use Amazon SNS to send notification when certain email events occur.</p>
     */
    inline EventDestination& WithSnsDestination(SnsDestination&& value) { SetSnsDestination(std::move(value)); return *this;}


    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline const PinpointDestination& GetPinpointDestination() const{ return m_pinpointDestination; }

    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline bool PinpointDestinationHasBeenSet() const { return m_pinpointDestinationHasBeenSet; }

    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline void SetPinpointDestination(const PinpointDestination& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = value; }

    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline void SetPinpointDestination(PinpointDestination&& value) { m_pinpointDestinationHasBeenSet = true; m_pinpointDestination = std::move(value); }

    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline EventDestination& WithPinpointDestination(const PinpointDestination& value) { SetPinpointDestination(value); return *this;}

    /**
     * <p>An object that defines an Amazon Pinpoint project destination for email
     * events. You can send email event data to a Amazon Pinpoint project to view
     * metrics using the Transactional Messaging dashboards that are built in to Amazon
     * Pinpoint. For more information, see <a
     * href="https://docs.aws.amazon.com/pinpoint/latest/userguide/analytics-transactional-messages.html">Transactional
     * Messaging Charts</a> in the <i>Amazon Pinpoint User Guide</i>.</p>
     */
    inline EventDestination& WithPinpointDestination(PinpointDestination&& value) { SetPinpointDestination(std::move(value)); return *this;}

  private:

    Aws::String m_name;
    bool m_nameHasBeenSet = false;

    bool m_enabled;
    bool m_enabledHasBeenSet = false;

    Aws::Vector<EventType> m_matchingEventTypes;
    bool m_matchingEventTypesHasBeenSet = false;

    KinesisFirehoseDestination m_kinesisFirehoseDestination;
    bool m_kinesisFirehoseDestinationHasBeenSet = false;

    CloudWatchDestination m_cloudWatchDestination;
    bool m_cloudWatchDestinationHasBeenSet = false;

    SnsDestination m_snsDestination;
    bool m_snsDestinationHasBeenSet = false;

    PinpointDestination m_pinpointDestination;
    bool m_pinpointDestinationHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
