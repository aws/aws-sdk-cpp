/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/rds/RDSRequest.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/Filter.h>

#include <utility>

namespace Aws {
namespace RDS {
namespace Model {

/**
 */
class DescribeDBCapacityReservationsRequest : public RDSRequest {
 public:
  AWS_RDS_API DescribeDBCapacityReservationsRequest() = default;

  // Service request name is the Operation name which will send this request out,
  // each operation should has unique request name, so that we can get operation's name from this request.
  // Note: this is not true for response, multiple operations may have the same response name,
  // so we can not get operation's name from response.
  inline virtual const char* GetServiceRequestName() const override { return "DescribeDBCapacityReservations"; }

  AWS_RDS_API Aws::String SerializePayload() const override;

 protected:
  AWS_RDS_API void DumpBodyToUrl(Aws::Http::URI& uri) const override;

 public:
  ///@{
  /**
   * <p>The identifier or the name of the DB capacity reservation to describe. You
   * can specify the identifier, which has the prefix <code>dbcr-</code>, or the
   * reservation name.</p>
   */
  inline const Aws::String& GetDBCapacityReservationIdentifier() const { return m_dBCapacityReservationIdentifier; }
  inline bool DBCapacityReservationIdentifierHasBeenSet() const { return m_dBCapacityReservationIdentifierHasBeenSet; }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  void SetDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    m_dBCapacityReservationIdentifierHasBeenSet = true;
    m_dBCapacityReservationIdentifier = std::forward<DBCapacityReservationIdentifierT>(value);
  }
  template <typename DBCapacityReservationIdentifierT = Aws::String>
  DescribeDBCapacityReservationsRequest& WithDBCapacityReservationIdentifier(DBCapacityReservationIdentifierT&& value) {
    SetDBCapacityReservationIdentifier(std::forward<DBCapacityReservationIdentifierT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>An optional pagination token provided by a previous
   * <code>DescribeDBCapacityReservations</code> request. If this parameter is
   * specified, the response includes only records beyond the marker, up to the value
   * specified by <code>MaxRecords</code>.</p>
   */
  inline const Aws::String& GetMarker() const { return m_marker; }
  inline bool MarkerHasBeenSet() const { return m_markerHasBeenSet; }
  template <typename MarkerT = Aws::String>
  void SetMarker(MarkerT&& value) {
    m_markerHasBeenSet = true;
    m_marker = std::forward<MarkerT>(value);
  }
  template <typename MarkerT = Aws::String>
  DescribeDBCapacityReservationsRequest& WithMarker(MarkerT&& value) {
    SetMarker(std::forward<MarkerT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The maximum number of records to include in the response. If more records
   * exist than the specified <code>MaxRecords</code> value, a pagination token
   * called a marker is included in the response so that you can retrieve the
   * remaining results.</p> <p>Default: 100</p> <p>Constraints:</p> <ul> <li> <p>Must
   * be a minimum of 20.</p> </li> <li> <p>Can't exceed 100.</p> </li> </ul>
   */
  inline int GetMaxRecords() const { return m_maxRecords; }
  inline bool MaxRecordsHasBeenSet() const { return m_maxRecordsHasBeenSet; }
  inline void SetMaxRecords(int value) {
    m_maxRecordsHasBeenSet = true;
    m_maxRecords = value;
  }
  inline DescribeDBCapacityReservationsRequest& WithMaxRecords(int value) {
    SetMaxRecords(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>A filter that specifies which DB capacity reservations to describe.</p>
   * <p>Supported filters:</p> <ul> <li> <p>
   * <code>db-capacity-reservation-name</code> - Accepts DB capacity reservation
   * names. The response includes only the reservations that these names identify.
   * Use this filter to describe several reservations by name in one request.</p>
   * </li> <li> <p> <code>state</code> - Accepts reservation states. The response
   * includes only the reservations in these states.</p> </li> <li> <p>
   * <code>engine</code> - Accepts database engine names. The response includes only
   * the reservations that reserve capacity for these engines.</p> </li> <li> <p>
   * <code>db-instance-class</code> - Accepts DB instance classes. The response
   * includes only the reservations that reserve capacity for these DB instance
   * classes.</p> </li> <li> <p> <code>availability-zone</code> - Accepts
   * Availability Zone names. The response includes only the reservations that cover
   * these Availability Zones.</p> </li> </ul> <p>When you specify more than one
   * value for a filter, the response includes the reservations that match any of
   * those values. When you specify more than one filter, the response includes only
   * the reservations that match every filter.</p> <p>Amazon RDS rejects the request
   * when a filter name isn't in this list, or when a filter specifies no values.</p>
   *  <p>The <code>state</code> filter doesn't accept <code>expired</code>. To
   * find an expired reservation, compare <code>EndDate</code> against the current
   * date and time.</p>
   */
  inline const Aws::Vector<Filter>& GetFilters() const { return m_filters; }
  inline bool FiltersHasBeenSet() const { return m_filtersHasBeenSet; }
  template <typename FiltersT = Aws::Vector<Filter>>
  void SetFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters = std::forward<FiltersT>(value);
  }
  template <typename FiltersT = Aws::Vector<Filter>>
  DescribeDBCapacityReservationsRequest& WithFilters(FiltersT&& value) {
    SetFilters(std::forward<FiltersT>(value));
    return *this;
  }
  template <typename FiltersT = Filter>
  DescribeDBCapacityReservationsRequest& AddFilters(FiltersT&& value) {
    m_filtersHasBeenSet = true;
    m_filters.emplace_back(std::forward<FiltersT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_dBCapacityReservationIdentifier;

  Aws::String m_marker;

  int m_maxRecords{0};

  Aws::Vector<Filter> m_filters;
  bool m_dBCapacityReservationIdentifierHasBeenSet = false;
  bool m_markerHasBeenSet = false;
  bool m_maxRecordsHasBeenSet = false;
  bool m_filtersHasBeenSet = false;
};

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
