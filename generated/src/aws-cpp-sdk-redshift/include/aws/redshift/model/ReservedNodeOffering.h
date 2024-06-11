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
    AWS_REDSHIFT_API ReservedNodeOffering();
    AWS_REDSHIFT_API ReservedNodeOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_REDSHIFT_API ReservedNodeOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_REDSHIFT_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedNodeOfferingId() const{ return m_reservedNodeOfferingId; }
    inline bool ReservedNodeOfferingIdHasBeenSet() const { return m_reservedNodeOfferingIdHasBeenSet; }
    inline void SetReservedNodeOfferingId(const Aws::String& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = value; }
    inline void SetReservedNodeOfferingId(Aws::String&& value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId = std::move(value); }
    inline void SetReservedNodeOfferingId(const char* value) { m_reservedNodeOfferingIdHasBeenSet = true; m_reservedNodeOfferingId.assign(value); }
    inline ReservedNodeOffering& WithReservedNodeOfferingId(const Aws::String& value) { SetReservedNodeOfferingId(value); return *this;}
    inline ReservedNodeOffering& WithReservedNodeOfferingId(Aws::String&& value) { SetReservedNodeOfferingId(std::move(value)); return *this;}
    inline ReservedNodeOffering& WithReservedNodeOfferingId(const char* value) { SetReservedNodeOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The node type offered by the reserved node offering.</p>
     */
    inline const Aws::String& GetNodeType() const{ return m_nodeType; }
    inline bool NodeTypeHasBeenSet() const { return m_nodeTypeHasBeenSet; }
    inline void SetNodeType(const Aws::String& value) { m_nodeTypeHasBeenSet = true; m_nodeType = value; }
    inline void SetNodeType(Aws::String&& value) { m_nodeTypeHasBeenSet = true; m_nodeType = std::move(value); }
    inline void SetNodeType(const char* value) { m_nodeTypeHasBeenSet = true; m_nodeType.assign(value); }
    inline ReservedNodeOffering& WithNodeType(const Aws::String& value) { SetNodeType(value); return *this;}
    inline ReservedNodeOffering& WithNodeType(Aws::String&& value) { SetNodeType(std::move(value)); return *this;}
    inline ReservedNodeOffering& WithNodeType(const char* value) { SetNodeType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration, in seconds, for which the offering will reserve the node.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedNodeOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The upfront fixed charge you will pay to purchase the specific reserved node
     * offering.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedNodeOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The rate you are charged for each hour the cluster that is using the offering
     * is running.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedNodeOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the compute nodes offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline ReservedNodeOffering& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline ReservedNodeOffering& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline ReservedNodeOffering& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The anticipated utilization of the reserved node, as defined in the reserved
     * node offering.</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }
    inline ReservedNodeOffering& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}
    inline ReservedNodeOffering& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}
    inline ReservedNodeOffering& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The charge to your account regardless of whether you are creating any
     * clusters using the node offering. Recurring charges are only in effect for
     * heavy-utilization reserved nodes.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }
    inline ReservedNodeOffering& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}
    inline ReservedNodeOffering& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}
    inline ReservedNodeOffering& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }
    inline ReservedNodeOffering& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p/>
     */
    inline const ReservedNodeOfferingType& GetReservedNodeOfferingType() const{ return m_reservedNodeOfferingType; }
    inline bool ReservedNodeOfferingTypeHasBeenSet() const { return m_reservedNodeOfferingTypeHasBeenSet; }
    inline void SetReservedNodeOfferingType(const ReservedNodeOfferingType& value) { m_reservedNodeOfferingTypeHasBeenSet = true; m_reservedNodeOfferingType = value; }
    inline void SetReservedNodeOfferingType(ReservedNodeOfferingType&& value) { m_reservedNodeOfferingTypeHasBeenSet = true; m_reservedNodeOfferingType = std::move(value); }
    inline ReservedNodeOffering& WithReservedNodeOfferingType(const ReservedNodeOfferingType& value) { SetReservedNodeOfferingType(value); return *this;}
    inline ReservedNodeOffering& WithReservedNodeOfferingType(ReservedNodeOfferingType&& value) { SetReservedNodeOfferingType(std::move(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedNodeOfferingId;
    bool m_reservedNodeOfferingIdHasBeenSet = false;

    Aws::String m_nodeType;
    bool m_nodeTypeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    ReservedNodeOfferingType m_reservedNodeOfferingType;
    bool m_reservedNodeOfferingTypeHasBeenSet = false;
  };

} // namespace Model
} // namespace Redshift
} // namespace Aws
