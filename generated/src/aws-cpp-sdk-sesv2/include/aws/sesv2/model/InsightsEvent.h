/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/DateTime.h>
#include <aws/sesv2/model/EventType.h>
#include <aws/sesv2/model/EventDetails.h>
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
   * <p>An object containing details about a specific event.</p><p><h3>See Also:</h3>
   * <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/InsightsEvent">AWS
   * API Reference</a></p>
   */
  class InsightsEvent
  {
  public:
    AWS_SESV2_API InsightsEvent();
    AWS_SESV2_API InsightsEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API InsightsEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The timestamp of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const{ return m_timestamp; }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline void SetTimestamp(const Aws::Utils::DateTime& value) { m_timestampHasBeenSet = true; m_timestamp = value; }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline void SetTimestamp(Aws::Utils::DateTime&& value) { m_timestampHasBeenSet = true; m_timestamp = std::move(value); }

    /**
     * <p>The timestamp of the event.</p>
     */
    inline InsightsEvent& WithTimestamp(const Aws::Utils::DateTime& value) { SetTimestamp(value); return *this;}

    /**
     * <p>The timestamp of the event.</p>
     */
    inline InsightsEvent& WithTimestamp(Aws::Utils::DateTime&& value) { SetTimestamp(std::move(value)); return *this;}


    /**
     * <p>The type of event:</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.) </p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server. Excludes deliveries to the mailbox simulator, and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>BOUNCE</code> -
     * Feedback received for delivery failures. Additional details about the bounce are
     * provided in the <code>Details</code> object. Excludes bounces from the mailbox
     * simulator, and those from emails addressed to more than one recipient. </p>
     * </li> <li> <p> <code>COMPLAINT</code> - Complaint received for the email.
     * Additional details about the complaint are provided in the <code>Details</code>
     * object. This excludes complaints from the mailbox simulator, those originating
     * from your account-level suppression list (if enabled), and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>OPEN</code> -
     * Open event for emails including open trackers. Excludes opens for emails
     * addressed to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> -
     * Click event for emails including wrapped links. Excludes clicks for emails
     * addressed to more than one recipient.</p> </li> </ul>
     */
    inline const EventType& GetType() const{ return m_type; }

    /**
     * <p>The type of event:</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.) </p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server. Excludes deliveries to the mailbox simulator, and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>BOUNCE</code> -
     * Feedback received for delivery failures. Additional details about the bounce are
     * provided in the <code>Details</code> object. Excludes bounces from the mailbox
     * simulator, and those from emails addressed to more than one recipient. </p>
     * </li> <li> <p> <code>COMPLAINT</code> - Complaint received for the email.
     * Additional details about the complaint are provided in the <code>Details</code>
     * object. This excludes complaints from the mailbox simulator, those originating
     * from your account-level suppression list (if enabled), and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>OPEN</code> -
     * Open event for emails including open trackers. Excludes opens for emails
     * addressed to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> -
     * Click event for emails including wrapped links. Excludes clicks for emails
     * addressed to more than one recipient.</p> </li> </ul>
     */
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }

    /**
     * <p>The type of event:</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.) </p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server. Excludes deliveries to the mailbox simulator, and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>BOUNCE</code> -
     * Feedback received for delivery failures. Additional details about the bounce are
     * provided in the <code>Details</code> object. Excludes bounces from the mailbox
     * simulator, and those from emails addressed to more than one recipient. </p>
     * </li> <li> <p> <code>COMPLAINT</code> - Complaint received for the email.
     * Additional details about the complaint are provided in the <code>Details</code>
     * object. This excludes complaints from the mailbox simulator, those originating
     * from your account-level suppression list (if enabled), and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>OPEN</code> -
     * Open event for emails including open trackers. Excludes opens for emails
     * addressed to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> -
     * Click event for emails including wrapped links. Excludes clicks for emails
     * addressed to more than one recipient.</p> </li> </ul>
     */
    inline void SetType(const EventType& value) { m_typeHasBeenSet = true; m_type = value; }

    /**
     * <p>The type of event:</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.) </p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server. Excludes deliveries to the mailbox simulator, and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>BOUNCE</code> -
     * Feedback received for delivery failures. Additional details about the bounce are
     * provided in the <code>Details</code> object. Excludes bounces from the mailbox
     * simulator, and those from emails addressed to more than one recipient. </p>
     * </li> <li> <p> <code>COMPLAINT</code> - Complaint received for the email.
     * Additional details about the complaint are provided in the <code>Details</code>
     * object. This excludes complaints from the mailbox simulator, those originating
     * from your account-level suppression list (if enabled), and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>OPEN</code> -
     * Open event for emails including open trackers. Excludes opens for emails
     * addressed to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> -
     * Click event for emails including wrapped links. Excludes clicks for emails
     * addressed to more than one recipient.</p> </li> </ul>
     */
    inline void SetType(EventType&& value) { m_typeHasBeenSet = true; m_type = std::move(value); }

    /**
     * <p>The type of event:</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.) </p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server. Excludes deliveries to the mailbox simulator, and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>BOUNCE</code> -
     * Feedback received for delivery failures. Additional details about the bounce are
     * provided in the <code>Details</code> object. Excludes bounces from the mailbox
     * simulator, and those from emails addressed to more than one recipient. </p>
     * </li> <li> <p> <code>COMPLAINT</code> - Complaint received for the email.
     * Additional details about the complaint are provided in the <code>Details</code>
     * object. This excludes complaints from the mailbox simulator, those originating
     * from your account-level suppression list (if enabled), and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>OPEN</code> -
     * Open event for emails including open trackers. Excludes opens for emails
     * addressed to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> -
     * Click event for emails including wrapped links. Excludes clicks for emails
     * addressed to more than one recipient.</p> </li> </ul>
     */
    inline InsightsEvent& WithType(const EventType& value) { SetType(value); return *this;}

    /**
     * <p>The type of event:</p> <ul> <li> <p> <code>SEND</code> - The send request was
     * successful and SES will attempt to deliver the message to the recipient’s mail
     * server. (If account-level or global suppression is being used, SES will still
     * count it as a send, but delivery is suppressed.) </p> </li> <li> <p>
     * <code>DELIVERY</code> - SES successfully delivered the email to the recipient's
     * mail server. Excludes deliveries to the mailbox simulator, and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>BOUNCE</code> -
     * Feedback received for delivery failures. Additional details about the bounce are
     * provided in the <code>Details</code> object. Excludes bounces from the mailbox
     * simulator, and those from emails addressed to more than one recipient. </p>
     * </li> <li> <p> <code>COMPLAINT</code> - Complaint received for the email.
     * Additional details about the complaint are provided in the <code>Details</code>
     * object. This excludes complaints from the mailbox simulator, those originating
     * from your account-level suppression list (if enabled), and those from emails
     * addressed to more than one recipient. </p> </li> <li> <p> <code>OPEN</code> -
     * Open event for emails including open trackers. Excludes opens for emails
     * addressed to more than one recipient.</p> </li> <li> <p> <code>CLICK</code> -
     * Click event for emails including wrapped links. Excludes clicks for emails
     * addressed to more than one recipient.</p> </li> </ul>
     */
    inline InsightsEvent& WithType(EventType&& value) { SetType(std::move(value)); return *this;}


    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline const EventDetails& GetDetails() const{ return m_details; }

    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }

    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline void SetDetails(const EventDetails& value) { m_detailsHasBeenSet = true; m_details = value; }

    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline void SetDetails(EventDetails&& value) { m_detailsHasBeenSet = true; m_details = std::move(value); }

    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline InsightsEvent& WithDetails(const EventDetails& value) { SetDetails(value); return *this;}

    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline InsightsEvent& WithDetails(EventDetails&& value) { SetDetails(std::move(value)); return *this;}

  private:

    Aws::Utils::DateTime m_timestamp;
    bool m_timestampHasBeenSet = false;

    EventType m_type;
    bool m_typeHasBeenSet = false;

    EventDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
