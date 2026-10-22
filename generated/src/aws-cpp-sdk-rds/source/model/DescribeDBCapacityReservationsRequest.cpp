/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rds/model/DescribeDBCapacityReservationsRequest.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String DescribeDBCapacityReservationsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DescribeDBCapacityReservations&";
  if (m_dBCapacityReservationIdentifierHasBeenSet) {
    ss << "DBCapacityReservationIdentifier=" << StringUtils::URLEncode(m_dBCapacityReservationIdentifier.c_str()) << "&";
  }

  if (m_markerHasBeenSet) {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  if (m_maxRecordsHasBeenSet) {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if (m_filtersHasBeenSet) {
    if (m_filters.empty()) {
      ss << "Filters=&";
    } else {
      unsigned filtersCount = 1;
      for (auto& item : m_filters) {
        item.OutputToStream(ss, "Filters.Filter.", filtersCount, "");
        filtersCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

void DescribeDBCapacityReservationsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
