/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sesv2/SESV2_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/sesv2/model/DeliveryEventType.h>
#include <aws/sesv2/model/EngagementEventType.h>
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
   * <p>An object containing Message Insights filters.</p> <p>If you specify multiple
   * filters, the filters are joined by AND.</p> <p>If you specify multiple values
   * for a filter, the values are joined by OR. Filter values are case-sensitive.</p>
   * <p> <code>FromEmailAddress</code>, <code>Destination</code>, and
   * <code>Subject</code> filters support partial match. A partial match is performed
   * by using the <code>*</code> wildcard character placed at the beginning (suffix
   * match), the end (prefix match) or both ends of the string (contains match). In
   * order to match the literal characters <code>*</code> or <code>\</code>, they
   * must be escaped using the <code>\</code> character. If no wildcard character is
   * present, an exact match is performed. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/sesv2-2019-09-27/MessageInsightsFilters">AWS
   * API Reference</a></p>
   */
  class MessageInsightsFilters
  {
  public:
    AWS_SESV2_API MessageInsightsFilters();
    AWS_SESV2_API MessageInsightsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MessageInsightsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The from address used to send the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFromEmailAddress() const{ return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    inline void SetFromEmailAddress(const Aws::Vector<Aws::String>& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = value; }
    inline void SetFromEmailAddress(Aws::Vector<Aws::String>&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::move(value); }
    inline MessageInsightsFilters& WithFromEmailAddress(const Aws::Vector<Aws::String>& value) { SetFromEmailAddress(value); return *this;}
    inline MessageInsightsFilters& WithFromEmailAddress(Aws::Vector<Aws::String>&& value) { SetFromEmailAddress(std::move(value)); return *this;}
    inline MessageInsightsFilters& AddFromEmailAddress(const Aws::String& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.push_back(value); return *this; }
    inline MessageInsightsFilters& AddFromEmailAddress(Aws::String&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.push_back(std::move(value)); return *this; }
    inline MessageInsightsFilters& AddFromEmailAddress(const char* value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recipient's email address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestination() const{ return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    inline void SetDestination(const Aws::Vector<Aws::String>& value) { m_destinationHasBeenSet = true; m_destination = value; }
    inline void SetDestination(Aws::Vector<Aws::String>&& value) { m_destinationHasBeenSet = true; m_destination = std::move(value); }
    inline MessageInsightsFilters& WithDestination(const Aws::Vector<Aws::String>& value) { SetDestination(value); return *this;}
    inline MessageInsightsFilters& WithDestination(Aws::Vector<Aws::String>&& value) { SetDestination(std::move(value)); return *this;}
    inline MessageInsightsFilters& AddDestination(const Aws::String& value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    inline MessageInsightsFilters& AddDestination(Aws::String&& value) { m_destinationHasBeenSet = true; m_destination.push_back(std::move(value)); return *this; }
    inline MessageInsightsFilters& AddDestination(const char* value) { m_destinationHasBeenSet = true; m_destination.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subject line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubject() const{ return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    inline void SetSubject(const Aws::Vector<Aws::String>& value) { m_subjectHasBeenSet = true; m_subject = value; }
    inline void SetSubject(Aws::Vector<Aws::String>&& value) { m_subjectHasBeenSet = true; m_subject = std::move(value); }
    inline MessageInsightsFilters& WithSubject(const Aws::Vector<Aws::String>& value) { SetSubject(value); return *this;}
    inline MessageInsightsFilters& WithSubject(Aws::Vector<Aws::String>&& value) { SetSubject(std::move(value)); return *this;}
    inline MessageInsightsFilters& AddSubject(const Aws::String& value) { m_subjectHasBeenSet = true; m_subject.push_back(value); return *this; }
    inline MessageInsightsFilters& AddSubject(Aws::String&& value) { m_subjectHasBeenSet = true; m_subject.push_back(std::move(value)); return *this; }
    inline MessageInsightsFilters& AddSubject(const char* value) { m_subjectHasBeenSet = true; m_subject.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetIsp() const{ return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    inline void SetIsp(const Aws::Vector<Aws::String>& value) { m_ispHasBeenSet = true; m_isp = value; }
    inline void SetIsp(Aws::Vector<Aws::String>&& value) { m_ispHasBeenSet = true; m_isp = std::move(value); }
    inline MessageInsightsFilters& WithIsp(const Aws::Vector<Aws::String>& value) { SetIsp(value); return *this;}
    inline MessageInsightsFilters& WithIsp(Aws::Vector<Aws::String>&& value) { SetIsp(std::move(value)); return *this;}
    inline MessageInsightsFilters& AddIsp(const Aws::String& value) { m_ispHasBeenSet = true; m_isp.push_back(value); return *this; }
    inline MessageInsightsFilters& AddIsp(Aws::String&& value) { m_ispHasBeenSet = true; m_isp.push_back(std::move(value)); return *this; }
    inline MessageInsightsFilters& AddIsp(const char* value) { m_ispHasBeenSet = true; m_isp.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The last delivery-related event for the email, where the ordering is as
     * follows: <code>SEND</code> &lt; <code>BOUNCE</code> &lt; <code>DELIVERY</code>
     * &lt; <code>COMPLAINT</code>. </p>
     */
    inline const Aws::Vector<DeliveryEventType>& GetLastDeliveryEvent() const{ return m_lastDeliveryEvent; }
    inline bool LastDeliveryEventHasBeenSet() const { return m_lastDeliveryEventHasBeenSet; }
    inline void SetLastDeliveryEvent(const Aws::Vector<DeliveryEventType>& value) { m_lastDeliveryEventHasBeenSet = true; m_lastDeliveryEvent = value; }
    inline void SetLastDeliveryEvent(Aws::Vector<DeliveryEventType>&& value) { m_lastDeliveryEventHasBeenSet = true; m_lastDeliveryEvent = std::move(value); }
    inline MessageInsightsFilters& WithLastDeliveryEvent(const Aws::Vector<DeliveryEventType>& value) { SetLastDeliveryEvent(value); return *this;}
    inline MessageInsightsFilters& WithLastDeliveryEvent(Aws::Vector<DeliveryEventType>&& value) { SetLastDeliveryEvent(std::move(value)); return *this;}
    inline MessageInsightsFilters& AddLastDeliveryEvent(const DeliveryEventType& value) { m_lastDeliveryEventHasBeenSet = true; m_lastDeliveryEvent.push_back(value); return *this; }
    inline MessageInsightsFilters& AddLastDeliveryEvent(DeliveryEventType&& value) { m_lastDeliveryEventHasBeenSet = true; m_lastDeliveryEvent.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The last engagement-related event for the email, where the ordering is as
     * follows: <code>OPEN</code> &lt; <code>CLICK</code>. </p> <p> Engagement events
     * are only available if <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/vdm-settings.html">Engagement
     * tracking</a> is enabled. </p>
     */
    inline const Aws::Vector<EngagementEventType>& GetLastEngagementEvent() const{ return m_lastEngagementEvent; }
    inline bool LastEngagementEventHasBeenSet() const { return m_lastEngagementEventHasBeenSet; }
    inline void SetLastEngagementEvent(const Aws::Vector<EngagementEventType>& value) { m_lastEngagementEventHasBeenSet = true; m_lastEngagementEvent = value; }
    inline void SetLastEngagementEvent(Aws::Vector<EngagementEventType>&& value) { m_lastEngagementEventHasBeenSet = true; m_lastEngagementEvent = std::move(value); }
    inline MessageInsightsFilters& WithLastEngagementEvent(const Aws::Vector<EngagementEventType>& value) { SetLastEngagementEvent(value); return *this;}
    inline MessageInsightsFilters& WithLastEngagementEvent(Aws::Vector<EngagementEventType>&& value) { SetLastEngagementEvent(std::move(value)); return *this;}
    inline MessageInsightsFilters& AddLastEngagementEvent(const EngagementEventType& value) { m_lastEngagementEventHasBeenSet = true; m_lastEngagementEvent.push_back(value); return *this; }
    inline MessageInsightsFilters& AddLastEngagementEvent(EngagementEventType&& value) { m_lastEngagementEventHasBeenSet = true; m_lastEngagementEvent.push_back(std::move(value)); return *this; }
    ///@}
  private:

    Aws::Vector<Aws::String> m_fromEmailAddress;
    bool m_fromEmailAddressHasBeenSet = false;

    Aws::Vector<Aws::String> m_destination;
    bool m_destinationHasBeenSet = false;

    Aws::Vector<Aws::String> m_subject;
    bool m_subjectHasBeenSet = false;

    Aws::Vector<Aws::String> m_isp;
    bool m_ispHasBeenSet = false;

    Aws::Vector<DeliveryEventType> m_lastDeliveryEvent;
    bool m_lastDeliveryEventHasBeenSet = false;

    Aws::Vector<EngagementEventType> m_lastEngagementEvent;
    bool m_lastEngagementEventHasBeenSet = false;
  };

} // namespace Model
} // namespace SESV2
} // namespace Aws
