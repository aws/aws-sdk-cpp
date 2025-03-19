/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/RecurringCharge.h>
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
namespace RDS
{
namespace Model
{

  /**
   * <p>This data type is used as a response element in the
   * <code>DescribeReservedDBInstancesOfferings</code> action.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstancesOffering">AWS
   * API Reference</a></p>
   */
  class ReservedDBInstancesOffering
  {
  public:
    AWS_RDS_API ReservedDBInstancesOffering() = default;
    AWS_RDS_API ReservedDBInstancesOffering(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ReservedDBInstancesOffering& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const { return m_reservedDBInstancesOfferingId; }
    inline bool ReservedDBInstancesOfferingIdHasBeenSet() const { return m_reservedDBInstancesOfferingIdHasBeenSet; }
    template<typename ReservedDBInstancesOfferingIdT = Aws::String>
    void SetReservedDBInstancesOfferingId(ReservedDBInstancesOfferingIdT&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = std::forward<ReservedDBInstancesOfferingIdT>(value); }
    template<typename ReservedDBInstancesOfferingIdT = Aws::String>
    ReservedDBInstancesOffering& WithReservedDBInstancesOfferingId(ReservedDBInstancesOfferingIdT&& value) { SetReservedDBInstancesOfferingId(std::forward<ReservedDBInstancesOfferingIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const { return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    template<typename DBInstanceClassT = Aws::String>
    void SetDBInstanceClass(DBInstanceClassT&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::forward<DBInstanceClassT>(value); }
    template<typename DBInstanceClassT = Aws::String>
    ReservedDBInstancesOffering& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the offering in seconds.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedDBInstancesOffering& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fixed price charged for this offering.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedDBInstancesOffering& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price charged for this offering.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedDBInstancesOffering& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the reserved DB instance offering.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservedDBInstancesOffering& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The database engine used by the offering.</p>
     */
    inline const Aws::String& GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    template<typename ProductDescriptionT = Aws::String>
    void SetProductDescription(ProductDescriptionT&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::forward<ProductDescriptionT>(value); }
    template<typename ProductDescriptionT = Aws::String>
    ReservedDBInstancesOffering& WithProductDescription(ProductDescriptionT&& value) { SetProductDescription(std::forward<ProductDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering type.</p>
     */
    inline const Aws::String& GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    template<typename OfferingTypeT = Aws::String>
    void SetOfferingType(OfferingTypeT&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::forward<OfferingTypeT>(value); }
    template<typename OfferingTypeT = Aws::String>
    ReservedDBInstancesOffering& WithOfferingType(OfferingTypeT&& value) { SetOfferingType(std::forward<OfferingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the offering applies to Multi-AZ deployments.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ReservedDBInstancesOffering& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const { return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    void SetRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::forward<RecurringChargesT>(value); }
    template<typename RecurringChargesT = Aws::Vector<RecurringCharge>>
    ReservedDBInstancesOffering& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedDBInstancesOffering& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}
  private:

    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    int m_duration{0};
    bool m_durationHasBeenSet = false;

    double m_fixedPrice{0.0};
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice{0.0};
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
