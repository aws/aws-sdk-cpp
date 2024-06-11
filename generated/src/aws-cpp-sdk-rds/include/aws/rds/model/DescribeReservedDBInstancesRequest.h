/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/RDSRequest.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/model/Filter.h>
#include <utility>

namespace Aws
{
namespace RDS
{
namespace Model
{

  /**
   * <p/><p><h3>See Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/rds-2014-10-31/DescribeReservedDBInstancesMessage">AWS
   * API Reference</a></p>
   */
  class DescribeReservedDBInstancesRequest : public RDSRequest
  {
  public:
    AWS_RDS_API DescribeReservedDBInstancesRequest();

    // Service request name is the Operation name which will send this request out,
    // each operation should has unique request name, so that we can get operation's name from this request.
    // Note: this is not true for response, multiple operations may have the same response name,
    // so we can not get operation's name from response.
    inline virtual const char* GetServiceRequestName() const override { return "DescribeReservedDBInstances"; }

    AWS_RDS_API Aws::String SerializePayload() const override;

  protected:
    AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri ) const override;

  public:

    ///@{
    /**
     * <p>The reserved DB instance identifier filter value. Specify this parameter to
     * show only the reservation that matches the specified reservation ID.</p>
     */
    inline const Aws::String& GetReservedDBInstanceId() const{ return m_reservedDBInstanceId; }
    inline bool ReservedDBInstanceIdHasBeenSet() const { return m_reservedDBInstanceIdHasBeenSet; }
    inline void SetReservedDBInstanceId(const Aws::String& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = value; }
    inline void SetReservedDBInstanceId(Aws::String&& value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId = std::move(value); }
    inline void SetReservedDBInstanceId(const char* value) { m_reservedDBInstanceIdHasBeenSet = true; m_reservedDBInstanceId.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstanceId(const Aws::String& value) { SetReservedDBInstanceId(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstanceId(Aws::String&& value) { SetReservedDBInstanceId(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstanceId(const char* value) { SetReservedDBInstanceId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering identifier filter value. Specify this parameter to show only
     * purchased reservations matching the specified offering identifier.</p>
     */
    inline const Aws::String& GetReservedDBInstancesOfferingId() const{ return m_reservedDBInstancesOfferingId; }
    inline bool ReservedDBInstancesOfferingIdHasBeenSet() const { return m_reservedDBInstancesOfferingIdHasBeenSet; }
    inline void SetReservedDBInstancesOfferingId(const Aws::String& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = value; }
    inline void SetReservedDBInstancesOfferingId(Aws::String&& value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId = std::move(value); }
    inline void SetReservedDBInstancesOfferingId(const char* value) { m_reservedDBInstancesOfferingIdHasBeenSet = true; m_reservedDBInstancesOfferingId.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstancesOfferingId(const Aws::String& value) { SetReservedDBInstancesOfferingId(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstancesOfferingId(Aws::String&& value) { SetReservedDBInstancesOfferingId(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithReservedDBInstancesOfferingId(const char* value) { SetReservedDBInstancesOfferingId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The DB instance class filter value. Specify this parameter to show only those
     * reservations matching the specified DB instances class.</p>
     */
    inline const Aws::String& GetDBInstanceClass() const{ return m_dBInstanceClass; }
    inline bool DBInstanceClassHasBeenSet() const { return m_dBInstanceClassHasBeenSet; }
    inline void SetDBInstanceClass(const Aws::String& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = value; }
    inline void SetDBInstanceClass(Aws::String&& value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass = std::move(value); }
    inline void SetDBInstanceClass(const char* value) { m_dBInstanceClassHasBeenSet = true; m_dBInstanceClass.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithDBInstanceClass(const Aws::String& value) { SetDBInstanceClass(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithDBInstanceClass(Aws::String&& value) { SetDBInstanceClass(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithDBInstanceClass(const char* value) { SetDBInstanceClass(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The duration filter value, specified in years or seconds. Specify this
     * parameter to show only reservations for this duration.</p> <p>Valid Values:
     * <code>1 | 3 | 31536000 | 94608000</code> </p>
     */
    inline const Aws::String& GetDuration() const{ return m_duration; }
    inline bool DurationHasBeenSet() const { return m_durationHasBeenSet; }
    inline void SetDuration(const Aws::String& value) { m_durationHasBeenSet = true; m_duration = value; }
    inline void SetDuration(Aws::String&& value) { m_durationHasBeenSet = true; m_duration = std::move(value); }
    inline void SetDuration(const char* value) { m_durationHasBeenSet = true; m_duration.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithDuration(const Aws::String& value) { SetDuration(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithDuration(Aws::String&& value) { SetDuration(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithDuration(const char* value) { SetDuration(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The product description filter value. Specify this parameter to show only
     * those reservations matching the specified product description.</p>
     */
    inline const Aws::String& GetProductDescription() const{ return m_productDescription; }
    inline bool ProductDescriptionHasBeenSet() const { return m_productDescriptionHasBeenSet; }
    inline void SetProductDescription(const Aws::String& value) { m_productDescriptionHasBeenSet = true; m_productDescription = value; }
    inline void SetProductDescription(Aws::String&& value) { m_productDescriptionHasBeenSet = true; m_productDescription = std::move(value); }
    inline void SetProductDescription(const char* value) { m_productDescriptionHasBeenSet = true; m_productDescription.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithProductDescription(const Aws::String& value) { SetProductDescription(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithProductDescription(Aws::String&& value) { SetProductDescription(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithProductDescription(const char* value) { SetProductDescription(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The offering type filter value. Specify this parameter to show only the
     * available offerings matching the specified offering type.</p> <p>Valid Values:
     * <code>"Partial Upfront" | "All Upfront" | "No Upfront" </code> </p>
     */
    inline const Aws::String& GetOfferingType() const{ return m_offeringType; }
    inline bool OfferingTypeHasBeenSet() const { return m_offeringTypeHasBeenSet; }
    inline void SetOfferingType(const Aws::String& value) { m_offeringTypeHasBeenSet = true; m_offeringType = value; }
    inline void SetOfferingType(Aws::String&& value) { m_offeringTypeHasBeenSet = true; m_offeringType = std::move(value); }
    inline void SetOfferingType(const char* value) { m_offeringTypeHasBeenSet = true; m_offeringType.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithOfferingType(const Aws::String& value) { SetOfferingType(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithOfferingType(Aws::String&& value) { SetOfferingType(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithOfferingType(const char* value) { SetOfferingType(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>Specifies whether to show only those reservations that support Multi-AZ.</p>
     */
    inline bool GetMultiAZ() const{ return m_multiAZ; }
    inline bool MultiAZHasBeenSet() const { return m_multiAZHasBeenSet; }
    inline void SetMultiAZ(bool value) { m_multiAZHasBeenSet = true; m_multiAZ = value; }
    inline DescribeReservedDBInstancesRequest& WithMultiAZ(bool value) { SetMultiAZ(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>The lease identifier filter value. Specify this parameter to show only the
     * reservation that matches the specified lease ID.</p>  <p>Amazon Web
     * Services Support might request the lease ID for an issue related to a reserved
     * DB instance.</p> 
     */
    inline const Aws::String& GetLeaseId() const{ return m_leaseId; }
    inline bool LeaseIdHasBeenSet() const { return m_leaseIdHasBeenSet; }
    inline void SetLeaseId(const Aws::String& value) { m_leaseIdHasBeenSet = true; m_leaseId = value; }
    inline void SetLeaseId(Aws::String&& value) { m_leaseIdHasBeenSet = true; m_leaseId = std::move(value); }
    inline void SetLeaseId(const char* value) { m_leaseIdHasBeenSet = true; m_leaseId.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithLeaseId(const Aws::String& value) { SetLeaseId(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithLeaseId(Aws::String&& value) { SetLeaseId(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithLeaseId(const char* value) { SetLeaseId(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>This parameter isn't currently supported.</p>
     */
    inline const Aws::Vector<Filter>& GetFilters() const{ return m_filters; }
    inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
    inline void SetFilters(const Aws::Vector<Filter>& value) { m_filtersHasBeenSet = true; m_filters = value; }
    inline void SetFilters(Aws::Vector<Filter>&& value) { m_filtersHasBeenSet = true; m_filters = std::move(value); }
    inline DescribeReservedDBInstancesRequest& WithFilters(const Aws::Vector<Filter>& value) { SetFilters(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithFilters(Aws::Vector<Filter>&& value) { SetFilters(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& AddFilters(const Filter& value) { m_filtersHasBeenSet = true; m_filters.push_back(value); return *this; }
    inline DescribeReservedDBInstancesRequest& AddFilters(Filter&& value) { m_filtersHasBeenSet = true; m_filters.push_back(std::move(value)); return *this; }
    ///@}

    ///@{
    /**
     * <p>The maximum number of records to include in the response. If more than the
     * <code>MaxRecords</code> value is available, a pagination token called a marker
     * is included in the response so you can retrieve the remaining results.</p>
     * <p>Default: 100</p> <p>Constraints: Minimum 20, maximum 100.</p>
     */
    inline int GetMaxRecords() const{ return m_maxRecords; }
    inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
    inline void SetMaxRecords(int value) { m_maxRecordsHasBeenSet = true; m_maxRecords = value; }
    inline DescribeReservedDBInstancesRequest& WithMaxRecords(int value) { SetMaxRecords(value); return *this;}
    ///@}

    ///@{
    /**
     * <p>An optional pagination token provided by a previous request. If this
     * parameter is specified, the response includes only records beyond the marker, up
     * to the value specified by <code>MaxRecords</code>.</p>
     */
    inline const Aws::String& GetMarker() const{ return m_marker; }
    inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
    inline void SetMarker(const Aws::String& value) { m_markerHasBeenSet = true; m_marker = value; }
    inline void SetMarker(Aws::String&& value) { m_markerHasBeenSet = true; m_marker = std::move(value); }
    inline void SetMarker(const char* value) { m_markerHasBeenSet = true; m_marker.assign(value); }
    inline DescribeReservedDBInstancesRequest& WithMarker(const Aws::String& value) { SetMarker(value); return *this;}
    inline DescribeReservedDBInstancesRequest& WithMarker(Aws::String&& value) { SetMarker(std::move(value)); return *this;}
    inline DescribeReservedDBInstancesRequest& WithMarker(const char* value) { SetMarker(value); return *this;}
    ///@}
  private:

    Aws::String m_reservedDBInstanceId;
    bool m_reservedDBInstanceIdHasBeenSet = false;

    Aws::String m_reservedDBInstancesOfferingId;
    bool m_reservedDBInstancesOfferingIdHasBeenSet = false;

    Aws::String m_dBInstanceClass;
    bool m_dBInstanceClassHasBeenSet = false;

    Aws::String m_duration;
    bool m_durationHasBeenSet = false;

    Aws::String m_productDescription;
    bool m_productDescriptionHasBeenSet = false;

    Aws::String m_offeringType;
    bool m_offeringTypeHasBeenSet = false;

    bool m_multiAZ;
    bool m_multiAZHasBeenSet = false;

    Aws::String m_leaseId;
    bool m_leaseIdHasBeenSet = false;

    Aws::Vector<Filter> m_filters;
    bool m_filtersHasBeenSet = false;

    int m_maxRecords;
    bool m_maxRecordsHasBeenSet = false;

    Aws::String m_marker;
    bool m_markerHasBeenSet = false;
  };

} // namespace Model
} // namespace RDS
} // namespace Aws
