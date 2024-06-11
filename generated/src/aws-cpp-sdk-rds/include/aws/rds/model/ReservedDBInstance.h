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
    AWS_RDS_API ReservedDBInstance();
    AWS_RDS_API ReservedDBInstance(const Aws::Utils::Xml::XmlNode& xmlNode);
    AWS_RDS_API ReservedDBInstance& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

    AWS_RDS_API void OutputToStream(Aws::OStream& ostream, const char* location, unsigned index, const char* locationValue) const;
    AWS_RDS_API void OutputToStream(Aws::OStream& oStream, const char* location) const;


    ///@{
    /**
     * <p>The unique identifier for the reservation.</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const{ return m_reservedDBInstanceId; }
    inline bool ReservedDBInstanceIdHasBeenSet() const { return m_reservedDBInstanceIdHasBeenSet; }
    inline void SetReservedDBInstanceId(const Aws::String& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }
    inline void SetReservedDBInstanceId(Aws::String&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = std::move(value); }
    inline void SetReservedDBInstanceId(const char* value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId.assign(value); }
    inline ReservedDBInstance& WithReservedDBInstanceId(const Aws::String& value) { SetReservedDBInstanceId(value); return *this;}
    inline ReservedDBInstance& WithReservedDBInstanceId(Aws::String&& value) { SetReservedDBInstanceId(std::move(value)); return *this;}
    inline ReservedDBInstance& WithReservedDBInstanceId(const char* value) { SetReservedDBInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering identifier.</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const{ return m_reservedDBInstancesOfferingId; }
    inline bool ReservedDBInstancesOfferingIdHasBeenSet() const { return m_reservedDBInstancesOfferingIdHasBeenSet; }
    inline void SetReservedDBInstancesOfferingId(const Aws::String& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }
    inline void SetReservedDBInstancesOfferingId(Aws::String&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = std::move(value); }
    inline void SetReservedDBInstancesOfferingId(const char* value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId.assign(value); }
    inline ReservedDBInstance& WithReservedDBInstancesOfferingId(const Aws::String& value) { SetReservedDBInstancesOfferingId(value); return *this;}
    inline ReservedDBInstance& WithReservedDBInstancesOfferingId(Aws::String&& value) { SetReservedDBInstancesOfferingId(std::move(value)); return *this;}
    inline ReservedDBInstance& WithReservedDBInstancesOfferingId(const char* value) { SetReservedDBInstancesOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance class for the reserved DB instance.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline ReservedDBInstance& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline ReservedDBInstance& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline ReservedDBInstance& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The time the reservation started.</p>
     */
    inline const Aws::Utils::DateTime& GetStartTime() const{ return m_startTime; }
    inline bool StartTimeHasBeenSet() const { return m_startTimeHasBeenSet; }
    inline void SetStartTime(const Aws::Utils::DateTime& value) { m_startTimeHasBeenSet = true; m_startTime = value; }
    inline void SetStartTime(Aws::Utils::DateTime&& value) { m_startTimeHasBeenSet = true; m_startTime = std::move(value); }
    inline ReservedDBInstance& WithStartTime(const Aws::Utils::DateTime& value) { SetStartTime(value); return *this;}
    inline ReservedDBInstance& WithStartTime(Aws::Utils::DateTime&& value) { SetStartTime(std::move(value)); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration of the reservation in seconds.</p>
     */
    inline int GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(int value) { m_durationHasBeenSet = true; m_duration = value; }
    inline ReservedDBInstance& WithDuration(int value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The fixed price charged for this reserved DB instance.</p>
     */
    inline double GetFixedPrice() const{ return m_fixedPrice; }
    inline bool FixedPriceHasBeenSet() const { return m_fixedPriceHasBeenSet; }
    inline void SetFixedPrice(double value) { m_fixedPriceHasBeenSet = true; m_fixedPrice = value; }
    inline ReservedDBInstance& WithFixedPrice(double value) { SetFixedPrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The hourly price charged for this reserved DB instance.</p>
     */
    inline double GetUsagePrice() const{ return m_usagePrice; }
    inline bool UsagePriceHasBeenSet() const { return m_usagePriceHasBeenSet; }
    inline void SetUsagePrice(double value) { m_usagePriceHasBeenSet = true; m_usagePrice = value; }
    inline ReservedDBInstance& WithUsagePrice(double value) { SetUsagePrice(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The currency code for the reserved DB instance.</p>
     */
    inline const Aws::String& GetCurrencyCode() const{ return m_currencyCode; }
    inline bool CurrencyCodeHasBeenSet() const { return m_currencyCodeHasBeenSet; }
    inline void SetCurrencyCode(const Aws::String& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = value; }
    inline void SetCurrencyCode(Aws::String&& value) { m_currencyCodeHasBeenSet = true; m_currencyCode = std::move(value); }
    inline void SetCurrencyCode(const char* value) { m_currencyCodeHasBeenSet = true; m_currencyCode.assign(value); }
    inline ReservedDBInstance& WithCurrencyCode(const Aws::String& value) { SetCurrencyCode(value); return *this;}
    inline ReservedDBInstance& WithCurrencyCode(Aws::String&& value) { SetCurrencyCode(std::move(value)); return *this;}
    inline ReservedDBInstance& WithCurrencyCode(const char* value) { SetCurrencyCode(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The number of reserved DB instances.</p>
     */
    inline int GetDBInstanceCount() const{ return m_dBInstanceCount; }
    inline bool DBInstanceCountHasBeenSet() const { return m_dBInstanceCountHasBeenSet; }
    inline void SetDBInstanceCount(int value) { m_dBInstanceCountHasBeenSet = true; m_dBInstanceCount = value; }
    inline ReservedDBInstance& WithDBInstanceCount(int value) { SetDBInstanceCount(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The description of the reserved DB instance.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }
    inline ReservedDBInstance& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}
    inline ReservedDBInstance& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}
    inline ReservedDBInstance& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering type of this reserved DB instance.</p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }
    inline ReservedDBInstance& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}
    inline ReservedDBInstance& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}
    inline ReservedDBInstance& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Indicates whether the reservation applies to Multi-AZ deployments.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline ReservedDBInstance& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The state of the reserved DB instance.</p>
     */
    inline const Aws::String& GetState() const{ return m_state; }
    inline bool StateHasBeenSet() const { return m_stateHasBeenSet; }
    inline void SetState(const Aws::String& value) { m_stateHasBeenSet = true; m_state = value; }
    inline void SetState(Aws::String&& value) { m_stateHasBeenSet = true; m_state = std::move(value); }
    inline void SetState(const char* value) { m_stateHasBeenSet = true; m_state.assign(value); }
    inline ReservedDBInstance& WithState(const Aws::String& value) { SetState(value); return *this;}
    inline ReservedDBInstance& WithState(Aws::String&& value) { SetState(std::move(value)); return *this;}
    inline ReservedDBInstance& WithState(const char* value) { SetState(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The recurring price charged to run this reserved DB instance.</p>
     */
    inline const Aws::Vector<RecurringCharge>& GetRecurringCharges() const{ return m_recurringCharges; }
    inline bool RecurringChargesHasBeenSet() const { return m_recurringChargesHasBeenSet; }
    inline void SetRecurringCharges(const Aws::Vector<RecurringCharge>& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = value; }
    inline void SetRecurringCharges(Aws::Vector<RecurringCharge>&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges = std::move(value); }
    inline ReservedDBInstance& WithRecurringCharges(const Aws::Vector<RecurringCharge>& value) { SetRecurringCharges(value); return *this;}
    inline ReservedDBInstance& WithRecurringCharges(Aws::Vector<RecurringCharge>&& value) { SetRecurringCharges(std::move(value)); return *this;}
    inline ReservedDBInstance& AddRecurringCharges(const RecurringCharge& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(value); return *this; }
    inline ReservedDBInstance& AddRecurringCharges(RecurringCharge&& value) { m_recurringChargesHasBeenSet = true; m_recurringCharges.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The Amazon Resource Name (ARN) for the reserved DB instance.</p>
     */
    inline const Aws::String& GetReservedDBInstanceArn() const{ return m_reservedDBInstanceArn; }
    inline bool ReservedDBInstanceArnHasBeenSet() const { return m_reservedDBInstanceArnHasBeenSet; }
    inline void SetReservedDBInstanceArn(const Aws::String& value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn = value; }
    inline void SetReservedDBInstanceArn(Aws::String&& value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn = std::move(value); }
    inline void SetReservedDBInstanceArn(const char* value) { m_reservedDBInstanceArnHasBeenSet = true; m_reservedDBInstanceArn.assign(value); }
    inline ReservedDBInstance& WithReservedDBInstanceArn(const Aws::String& value) { SetReservedDBInstanceArn(value); return *this;}
    inline ReservedDBInstance& WithReservedDBInstanceArn(Aws::String&& value) { SetReservedDBInstanceArn(std::move(value)); return *this;}
    inline ReservedDBInstance& WithReservedDBInstanceArn(const char* value) { SetReservedDBInstanceArn(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The unique identifier for the lease associated with the reserved DB
     * instance.</p>  <p>Amazon Web Services Support might request the lease ID
     * for an issue related to a reserved DB instance.</p> 
     */
    inline const Aws::String& GetLeaseId() const{ return m_leaseId; }
    inline bool LeaseIdHasBeenSet() const { return m_leaseIdHasBeenSet; }
    inline void SetLeaseId(const Aws::String& value) { m_leaseIdHasBeenSet = true; m_leaseId = value; }
    inline void SetLeaseId(Aws::String&& value) { m_leaseIdHasBeenSet = true; m_leaseId = std::move(value); }
    inline void SetLeaseId(const char* value) { m_leaseIdHasBeenSet = true; m_leaseId.assign(value); }
    inline ReservedDBInstance& WithLeaseId(const Aws::String& value) { SetLeaseId(value); return *this;}
    inline ReservedDBInstance& WithLeaseId(Aws::String&& value) { SetLeaseId(std::move(value)); return *this;}
    inline ReservedDBInstance& WithLeaseId(const char* value) { SetLeaseId(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet = false;

    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::Utils::DateTime m_startTime;
    bool m_startTimeHasBeenSet = false;

    int m_duration;
    bool m_durationHasBeenSet = false;

    double m_fixedPrice;
    bool m_fixedPriceHasBeenSet = false;

    double m_usagePrice;
    bool m_usagePriceHasBeenSet = false;

    Aws::String m_currencyCode;
    bool m_currencyCodeHasBeenSet = false;

    int m_dBInstanceCount;
    bool m_dBInstanceCountHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    bool m_multiAZ;
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
