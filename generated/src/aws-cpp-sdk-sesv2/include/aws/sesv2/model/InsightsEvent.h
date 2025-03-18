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
    AWS_SESV2_API InsightsEvent() = default;
    AWS_SESV2_API InsightsEvent(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API InsightsEvent& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The timestamp of the event.</p>
     */
    inline const Aws::Utils::DateTime& GetTimestamp() const { return m_timestamp; }
    inline bool TimestampHasBeenSet() const { return m_timestampHasBeenSet; }
    template<typename TimestampT = Aws::Utils::DateTime>
    void SetTimestamp(TimestampT&& value) { m_timestampHasBeenSet = true; m_timestamp = std::forward<TimestampT>(value); }
    template<typename TimestampT = Aws::Utils::DateTime>
    InsightsEvent& WithTimestamp(TimestampT&& value) { SetTimestamp(std::forward<TimestampT>(value)); return *this;}
    ///@}

    ///@{
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
    inline EventType GetType() const { return m_type; }
    inline bool TypeHasBeenSet() const { return m_typeHasBeenSet; }
    inline void SetType(EventType value) { m_typeHasBeenSet = true; m_type = value; }
    inline InsightsEvent& WithType(EventType value) { SetType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Details about bounce or complaint events.</p>
     */
    inline const EventDetails& GetDetails() const { return m_details; }
    inline bool DetailsHasBeenSet() const { return m_detailsHasBeenSet; }
    template<typename DetailsT = EventDetails>
    void SetDetails(DetailsT&& value) { m_detailsHasBeenSet = true; m_details = std::forward<DetailsT>(value); }
    template<typename DetailsT = EventDetails>
    InsightsEvent& WithDetails(DetailsT&& value) { SetDetails(std::forward<DetailsT>(value)); return *this;}
    ///@}
  private:

    Aws::Utils::DateTime m_timestamp{};
    bool m_timestampHasBeenSet = false;

    EventType m_type{EventType::NOT_SET};
    bool m_typeHasBeenSet = false;

    EventDetails m_details;
    bool m_detailsHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
