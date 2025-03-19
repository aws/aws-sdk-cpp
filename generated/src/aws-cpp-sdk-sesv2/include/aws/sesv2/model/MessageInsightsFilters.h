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
    AWS_SESV2_API MessageInsightsFilters() = default;
    AWS_SESV2_API MessageInsightsFilters(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API MessageInsightsFilters& operator=(Aws::Utils::Json::JsonView jsonValue);
    AWS_SESV2_API Aws::Utils::Json::JsonValue Jsonize() const;


    ///@{
    /**
     * <p>The from address used to send the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetFromEmailAddress() const { return m_fromEmailAddress; }
    inline bool FromEmailAddressHasBeenSet() const { return m_fromEmailAddressHasBeenSet; }
    template<typename FromEmailAddressT = Aws::Vector<Aws::String>>
    void SetFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress = std::forward<FromEmailAddressT>(value); }
    template<typename FromEmailAddressT = Aws::Vector<Aws::String>>
    MessageInsightsFilters& WithFromEmailAddress(FromEmailAddressT&& value) { SetFromEmailAddress(std::forward<FromEmailAddressT>(value)); return *this;}
    template<typename FromEmailAddressT = Aws::String>
    MessageInsightsFilters& AddFromEmailAddress(FromEmailAddressT&& value) { m_fromEmailAddressHasBeenSet = true; m_fromEmailAddress.emplace_back(std::forward<FromEmailAddressT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recipient's email address.</p>
     */
    inline const Aws::Vector<Aws::String>& GetDestination() const { return m_destination; }
    inline bool DestinationHasBeenSet() const { return m_destinationHasBeenSet; }
    template<typename DestinationT = Aws::Vector<Aws::String>>
    void SetDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination = std::forward<DestinationT>(value); }
    template<typename DestinationT = Aws::Vector<Aws::String>>
    MessageInsightsFilters& WithDestination(DestinationT&& value) { SetDestination(std::forward<DestinationT>(value)); return *this;}
    template<typename DestinationT = Aws::String>
    MessageInsightsFilters& AddDestination(DestinationT&& value) { m_destinationHasBeenSet = true; m_destination.emplace_back(std::forward<DestinationT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The subject line of the message.</p>
     */
    inline const Aws::Vector<Aws::String>& GetSubject() const { return m_subject; }
    inline bool SubjectHasBeenSet() const { return m_subjectHasBeenSet; }
    template<typename SubjectT = Aws::Vector<Aws::String>>
    void SetSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject = std::forward<SubjectT>(value); }
    template<typename SubjectT = Aws::Vector<Aws::String>>
    MessageInsightsFilters& WithSubject(SubjectT&& value) { SetSubject(std::forward<SubjectT>(value)); return *this;}
    template<typename SubjectT = Aws::String>
    MessageInsightsFilters& AddSubject(SubjectT&& value) { m_subjectHasBeenSet = true; m_subject.emplace_back(std::forward<SubjectT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The recipient's ISP (e.g., <code>Gmail</code>, <code>Yahoo</code>, etc.).</p>
     */
    inline const Aws::Vector<Aws::String>& GetIsp() const { return m_isp; }
    inline bool IspHasBeenSet() const { return m_ispHasBeenSet; }
    template<typename IspT = Aws::Vector<Aws::String>>
    void SetIsp(IspT&& value) { m_ispHasBeenSet = true; m_isp = std::forward<IspT>(value); }
    template<typename IspT = Aws::Vector<Aws::String>>
    MessageInsightsFilters& WithIsp(IspT&& value) { SetIsp(std::forward<IspT>(value)); return *this;}
    template<typename IspT = Aws::String>
    MessageInsightsFilters& AddIsp(IspT&& value) { m_ispHasBeenSet = true; m_isp.emplace_back(std::forward<IspT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p> The last delivery-related event for the email, where the ordering is as
     * follows: <code>SEND</code> &lt; <code>BOUNCE</code> &lt; <code>DELIVERY</code>
     * &lt; <code>COMPLAINT</code>. </p>
     */
    inline const Aws::Vector<DeliveryEventType>& GetLastDeliveryEvent() const { return m_lastDeliveryEvent; }
    inline bool LastDeliveryEventHasBeenSet() const { return m_lastDeliveryEventHasBeenSet; }
    template<typename LastDeliveryEventT = Aws::Vector<DeliveryEventType>>
    void SetLastDeliveryEvent(LastDeliveryEventT&& value) { m_lastDeliveryEventHasBeenSet = true; m_lastDeliveryEvent = std::forward<LastDeliveryEventT>(value); }
    template<typename LastDeliveryEventT = Aws::Vector<DeliveryEventType>>
    MessageInsightsFilters& WithLastDeliveryEvent(LastDeliveryEventT&& value) { SetLastDeliveryEvent(std::forward<LastDeliveryEventT>(value)); return *this;}
    inline MessageInsightsFilters& AddLastDeliveryEvent(DeliveryEventType value) { m_lastDeliveryEventHasBeenSet = true; m_lastDeliveryEvent.push_back(value); return *this; }
    ///@}

    ///@{
    /**
     * <p> The last engagement-related event for the email, where the ordering is as
     * follows: <code>OPEN</code> &lt; <code>CLICK</code>. </p> <p> Engagement events
     * are only available if <a
     * href="https://docs.aws.amazon.com/ses/latest/dg/vdm-settings.html">Engagement
     * tracking</a> is enabled. </p>
     */
    inline const Aws::Vector<EngagementEventType>& GetLastEngagementEvent() const { return m_lastEngagementEvent; }
    inline bool LastEngagementEventHasBeenSet() const { return m_lastEngagementEventHasBeenSet; }
    template<typename LastEngagementEventT = Aws::Vector<EngagementEventType>>
    void SetLastEngagementEvent(LastEngagementEventT&& value) { m_lastEngagementEventHasBeenSet = true; m_lastEngagementEvent = std::forward<LastEngagementEventT>(value); }
    template<typename LastEngagementEventT = Aws::Vector<EngagementEventType>>
    MessageInsightsFilters& WithLastEngagementEvent(LastEngagementEventT&& value) { SetLastEngagementEvent(std::forward<LastEngagementEventT>(value)); return *this;}
    inline MessageInsightsFilters& AddLastEngagementEvent(EngagementEventType value) { m_lastEngagementEventHasBeenSet = true; m_lastEngagementEvent.push_back(value); return *this; }
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
