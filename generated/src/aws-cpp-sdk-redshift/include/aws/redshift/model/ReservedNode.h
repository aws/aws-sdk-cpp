/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/redshift/model/ReservedNodeOfferingType.h>
#include <aws/redshift/model/RecurringCharge.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Xml
{
  class XmlNode;
} // namespace Xml
} // namespace Utils
namespace Redshift
{
namespace Model
{

  /**
   * <p>Describes a reserved node. You can call the
   * <a>DescribeReservedNodeOfferings</a> API to obtain the available reserved node
   * offerings. </p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNode">AWS
   * API Reference</a></p>
   */
  class ReservedNode
  {
  public:
    AWS_REDSHIFT_API ReservedNode() = default;
    AWS_REDSHIFT_API ReservedNode(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReservedNode& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedNodeId() const { return m_reservedNodeId; }
    inline bool ReservedNodeIdHasBeenSet() const { return m_reservedNodeIdHasBeenSet; }
    template<typename ReservedNodeIdT = Aws::String>
    void SetReservedNodeId(ReservedNodeIdT&& value) { m_reservedNodeIdHasBeenSet = true; m_reservedNodeId = std::forward<ReservedNodeIdT>(value); }
    template<typename ReservedNodeIdT = Aws::String>
    ReservedNode& WithReservedNodeId(ReservedNodeIdT&& value) { SetReservedNodeId(std::forward<ReservedNodeIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The identifier for the reserved node offering.</p>
     */
    inline const Aws::String& GetReservedNodeOfferingId() const { return m_reservedNodeOfferingId; }
    inline bool ReservedNodeOfferingIdHasBeenSet() const { return m_reservedNodeOfferingIdHasBeenSet; }
    template<typename ReservedNodeOfferingIdT = Aws::String>
    void SetReservedNodeOfferingId(ReservedNodeOfferingIdT&& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = std::forward<ReservedNodeOfferingIdT>(value); }
    template<typename ReservedNodeOfferingIdT = Aws::String>
    ReservedNode& WithReservedNodeOfferingId(ReservedNodeOfferingIdT&& value) { SetReservedNodeOfferingId(std::forward<ReservedNodeOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type of the reserved node.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    ReservedNode& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the reservation started. You purchase a reserved node offering for a
     * duration. This is the start time of that duration.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ReservedNode& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the node reservation in seconds.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedNode& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fixed cost Amazon Redshift charges you for this reserved node.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedNode& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly rate Amazon Redshift charges you for this reserved node.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedNode& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the reserved cluster.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservedNode& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reserved compute nodes.</p>
     */
    inline int GetNodeCount() const { return m_nodeCount; }
    inline bool NodeCountHasBeenSet() const { return m_nodeCountHasBeenSet; }
    inline void SetNodeCount(int value) { m_nodeCountHasBeenSet = true; m_nodeCount = value; }
    inline ReservedNode& WithNodeCount(int value) { SetNodeCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reserved compute node.</p> <p>Possible Values:</p> <ul> <li>
     * <p>pending-payment-This reserved node has recently been purchased, and the sale
     * has been approved, but payment has not yet been confirmed.</p> </li> <li>
     * <p>active-This reserved node is owned by the caller and is available for
     * use.</p> </li> <li> <p>payment-failed-Payment failed for the purchase
     * attempt.</p> </li> <li> <p>retired-The reserved node is no longer available.
     * </p> </li> <li> <p>exchanging-The owner is exchanging the reserved node for
     * another reserved node.</p> </li> </ul>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ReservedNode& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline const Aws::String& GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    template<typename OfferingTypeT = Aws::String>
    void SetOfferingType(OfferingTypeT&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::forward<OfferingTypeT>(value); }
    template<typename OfferingTypeT = Aws::String>
    ReservedNode& WithOfferingType(OfferingTypeT&& value) { SetOfferingType(std::forward<OfferingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring charges for the reserved node.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    ReservedNode& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedNode& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline ReservedNodeOfferingType GetReservedNodeOfferingType() const { return m_reservedNodeOfferingType; }
    inline bool ReservedNodeOfferingTypeHasBeenSet() const { return m_reservedNodeOfferingTypeHasBeenSet; }
    inline void SetReservedNodeOfferingType(ReservedNodeOfferingType value) { m_reservedNodeOfferingTypeHasBeenSet = true; m_reservedNodeOfferingType = value; }
    inline ReservedNode& WithReservedNodeOfferingType(ReservedNodeOfferingType value) { SetReservedNodeOfferingType(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodeId;
    bool m_reservedNodeIdHasBeenSet = false;

    Aws::String m_reservedNodeOfferingId;
    bool m_reservedNodeOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    Aws::Utils::DateTime m_startTime{};
    bool m_startTimeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_nodeCount{0};
    bool m_nodeCountHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    ReservedNodeOfferingType m_reservedNodeOfferingType{ReservedNodeOfferingType::NOT_SET};
    bool m_reservedNodeOfferingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
