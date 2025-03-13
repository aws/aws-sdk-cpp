/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
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
   * <p>Describes a reserved node offering.</p><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/redshift-2012-12-01/ReservedNodeOffering">AWS
   * API Reference</a></p>
   */
  class ReservedNodeOffering
  {
  public:
    AWS_REDSHIFT_API ReservedNodeOffering() = default;
    AWS_REDSHIFT_API ReservedNodeOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReservedNodeOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedNodeOfferingId() const { return m_reservedNodeOfferingId; }
    inline bool ReservedNodeOfferingIdHasBeenSet() const { return m_reservedNodeOfferingIdHasBeenSet; }
    template<typename ReservedNodeOfferingIdT = Aws::String>
    void SetReservedNodeOfferingId(ReservedNodeOfferingIdT&& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = std::forward<ReservedNodeOfferingIdT>(value); }
    template<typename ReservedNodeOfferingIdT = Aws::String>
    ReservedNodeOffering& WithReservedNodeOfferingId(ReservedNodeOfferingIdT&& value) { SetReservedNodeOfferingId(std::forward<ReservedNodeOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline const Aws::String& GetNodeType() const { return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    template<typename NodeTypeT = Aws::String>
    void SetNodeType(NodeTypeT&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::forward<NodeTypeT>(value); }
    template<typename NodeTypeT = Aws::String>
    ReservedNodeOffering& WithNodeType(NodeTypeT&& value) { SetNodeType(std::forward<NodeTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the offering will reserve the node.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedNodeOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved node
     * offering.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedNodeOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate you are charged for each hour the cluster that is using the offering
     * is running.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedNodeOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservedNodeOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
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
    ReservedNodeOffering& WithOfferingType(OfferingTypeT&& value) { SetOfferingType(std::forward<OfferingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    ReservedNodeOffering& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedNodeOffering& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline ReservedNodeOfferingType GetReservedNodeOfferingType() const { return m_reservedNodeOfferingType; }
    inline bool ReservedNodeOfferingTypeHasBeenSet() const { return m_reservedNodeOfferingTypeHasBeenSet; }
    inline void SetReservedNodeOfferingType(ReservedNodeOfferingType value) { m_reservedNodeOfferingTypeHasBeenSet = true; m_reservedNodeOfferingType = value; }
    inline ReservedNodeOffering& WithReservedNodeOfferingType(ReservedNodeOfferingType value) { SetReservedNodeOfferingType(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodeOfferingId;
    bool m_reservedNodeOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

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
