/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSStreamFwd.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/DateTime.h>
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
   * <code>DescribeReservedDBInstances</code> and
   * <code>PurchaseReservedDBInstancesOffering</code> actions.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/ReservedDBInstance">AWS
   * API Reference</a></p>
   */
  class ReservedDBInstance
  {
  public:
    AWS_RDS_API ReservedDBInstance() = default;
    AWS_RDS_API ReservedDBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ReservedDBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const { return m_reservedDBInstanceId; }
    inline bool ReservedDBInstanceIdHasBeenSet() const { return m_reservedDBInstanceIdHasBeenSet; }
    template<typename ReservedDBInstanceIdT = Aws::String>
    void SetReservedDBInstanceId(ReservedDBInstanceIdT&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = std::forward<ReservedDBInstanceIdT>(value); }
    template<typename ReservedDBInstanceIdT = Aws::String>
    ReservedDBInstance& WithReservedDBInstanceId(ReservedDBInstanceIdT&& value) { SetReservedDBInstanceId(std::forward<ReservedDBInstanceIdT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const { return m_reservedDBInstancesOfferingId; }
    inline bool ReservedDBInstancesOfferingIdHasBeenSet() const { return m_reservedDBInstancesOfferingIdHasBeenSet; }
    template<typename ReservedDBInstancesOfferingIdT = Aws::String>
    void SetReservedDBInstancesOfferingId(ReservedDBInstancesOfferingIdT&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = std::forward<ReservedDBInstancesOfferingIdT>(value); }
    template<typename ReservedDBInstancesOfferingIdT = Aws::String>
    ReservedDBInstance& WithReservedDBInstancesOfferingId(ReservedDBInstancesOfferingIdT&& value) { SetReservedDBInstancesOfferingId(std::forward<ReservedDBInstancesOfferingIdT>(value)); return *this;}
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
    ReservedDBInstance& WithDBInstanceClass(DBInstanceClassT&& value) { SetDBInstanceClass(std::forward<DBInstanceClassT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const { return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    template<typename StartTimeT = Aws::Utils::DateTime>
    void SetStartTime(StartTimeT&& value) { m_startTimeHasBeenSet = true; m_startTime = std::forward<StartTimeT>(value); }
    template<typename StartTimeT = Aws::Utils::DateTime>
    ReservedDBInstance& WithStartTime(StartTimeT&& value) { SetStartTime(std::forward<StartTimeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline int GetDuration() const { return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedDBInstance& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fixed price charged for this reserved DB instance.</p>
     */
    inline double GetFixedPrice() const { return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedDBInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price charged for this reserved DB instance.</p>
     */
    inline double GetUsagePrice() const { return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedDBInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const { return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    template<typename CurrencyCodeT = Aws::String>
    void SetCurrencyCode(CurrencyCodeT&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::forward<CurrencyCodeT>(value); }
    template<typename CurrencyCodeT = Aws::String>
    ReservedDBInstance& WithCurrencyCode(CurrencyCodeT&& value) { SetCurrencyCode(std::forward<CurrencyCodeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reserved DB instances.</p>
     */
    inline int GetDBInstanceCount() const { return m_dBInstanceCount; }
    inline bool DBInstanceCountHasBeenSet() const { return m_dBInstanceCountHasBeenSet; }
    inline void SetDBInstanceCount(int value) { m_dBInstanceCountHasBeenSet = true; m_dBInstanceCount = value; }
    inline ReservedDBInstance& WithDBInstanceCount(int value) { SetDBInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline const Aws::String& GetProductDescription() const { return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    template<typename ProductDescriptionT = Aws::String>
    void SetProductDescription(ProductDescriptionT&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::forward<ProductDescriptionT>(value); }
    template<typename ProductDescriptionT = Aws::String>
    ReservedDBInstance& WithProductDescription(ProductDescriptionT&& value) { SetProductDescription(std::forward<ProductDescriptionT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline const Aws::String& GetOfferingType() const { return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    template<typename OfferingTypeT = Aws::String>
    void SetOfferingType(OfferingTypeT&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::forward<OfferingTypeT>(value); }
    template<typename OfferingTypeT = Aws::String>
    ReservedDBInstance& WithOfferingType(OfferingTypeT&& value) { SetOfferingType(std::forward<OfferingTypeT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the reservation applies to Multi-AZ deployments.</p>
     */
    inline bool GetMultiAZ() const { return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ReservedDBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline const Aws::String& GetState() const { return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    template<typename StateT = Aws::String>
    void SetState(StateT&& value) { m_stateHasBeenSet = true; m_state = std::forward<StateT>(value); }
    template<typename StateT = Aws::String>
    ReservedDBInstance& WithState(StateT&& value) { SetState(std::forward<StateT>(value)); return *this;}
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
    ReservedDBInstance& WithRecurringCharges(RecurringChargesT&& value) { SetRecurringCharges(std::forward<RecurringChargesT>(value)); return *this;}
    template<typename RecurringChargesT = RecurringCharge>
    ReservedDBInstance& AddRecurringCharges(RecurringChargesT&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.emplace_back(std::forward<RecurringChargesT>(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline const Aws::String& GetReservedDBInstanceArn() const { return m_reservedDBInstanceArn; }
    inline bool ReservedDBInstanceArnHasBeenSet() const { return m_reservedDBInstanceArnHasBeenSet; }
    template<typename ReservedDBInstanceArnT = Aws::String>
    void SetReservedDBInstanceArn(ReservedDBInstanceArnT&& value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn = std::forward<ReservedDBInstanceArnT>(value); }
    template<typename ReservedDBInstanceArnT = Aws::String>
    ReservedDBInstance& WithReservedDBInstanceArn(ReservedDBInstanceArnT&& value) { SetReservedDBInstanceArn(std::forward<ReservedDBInstanceArnT>(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the lease associated with the reserved DB
     * instance.</p>  <p>Amazon Web Services Support might request the lease ID
     * for an issue related to a reserved DB instance.</p> 
     */
    inline const Aws::String& GetLeaseId() const { return m_leaseId; }
    inline bool LeaseIdHasBeenSet() const { return m_leaseIdHasBeenSet; }
    template<typename LeaseIdT = Aws::String>
    void SetLeaseId(LeaseIdT&& value) { m_leaseIdHasBeenSet = true; m_leaseId = std::forward<LeaseIdT>(value); }
    template<typename LeaseIdT = Aws::String>
    ReservedDBInstance& WithLeaseId(LeaseIdT&& value) { SetLeaseId(std::forward<LeaseIdT>(value)); return *this;}
    ///@}
  private:

    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet = false;

    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

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

    int m_dBInstanceCount{0};
    bool m_dBInstanceCountHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    bool m_multiAZ{false};
    bool m_multiAZHasBeenSet = false;

    Aws::String m_state;
    bool m_stateHasBeenSet = false;

    Aws::Vector<RecurringCharge> m_recurringCharges;
    bool m_recurringChargesHasBeenSet = false;

    Aws::String m_reservedDBInstanceArn;
    bool m_reservedDBInstanceArnHasBeenSet = false;

    Aws::String m_leaseId;
    bool m_leaseIdHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
