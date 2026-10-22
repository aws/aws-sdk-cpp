/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rds/model/ModifyDBCapacityReservationRequest.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String ModifyDBCapacityReservationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=ModifyDBCapacityReservation&";
  if (m_dBCapacityReservationIdentifierHasBeenSet) {
    ss << "DBCapacityReservationIdentifier=" << StringUtils::URLEncode(m_dBCapacityReservationIdentifier.c_str()) << "&";
  }

  if (m_capacityPerAvailabilityZoneHasBeenSet) {
    ss << "CapacityPerAvailabilityZone=" << m_capacityPerAvailabilityZone << "&";
  }

  if (m_endDateTypeHasBeenSet) {
    ss << "EndDateType=" << StringUtils::URLEncode(EndDateTypeMapper::GetNameForEndDateType(m_endDateType)) << "&";
  }

  if (m_endDateHasBeenSet) {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

void ModifyDBCapacityReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
