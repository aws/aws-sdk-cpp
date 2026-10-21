/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rds/model/CreateDBCapacityReservationRequest.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateDBCapacityReservationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CreateDBCapacityReservation&";
  if (m_dBCapacityReservationNameHasBeenSet) {
    ss << "DBCapacityReservationName=" << StringUtils::URLEncode(m_dBCapacityReservationName.c_str()) << "&";
  }

  if (m_dBInstanceClassHasBeenSet) {
    ss << "DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if (m_engineHasBeenSet) {
    ss << "Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if (m_capacityPerAvailabilityZoneHasBeenSet) {
    ss << "CapacityPerAvailabilityZone=" << m_capacityPerAvailabilityZone << "&";
  }

  if (m_availabilityZonesHasBeenSet) {
    if (m_availabilityZones.empty()) {
      ss << "AvailabilityZones=&";
    } else {
      unsigned availabilityZonesCount = 1;
      for (auto& item : m_availabilityZones) {
        ss << "AvailabilityZones.AvailabilityZone." << availabilityZonesCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        availabilityZonesCount++;
      }
    }
  }

  if (m_endDateHasBeenSet) {
    ss << "EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_startDateHasBeenSet) {
    ss << "StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_commitmentDurationHasBeenSet) {
    ss << "CommitmentDuration=" << m_commitmentDuration << "&";
  }

  if (m_licenseModelHasBeenSet) {
    ss << "LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if (m_tagsHasBeenSet) {
    if (m_tags.empty()) {
      ss << "Tags=&";
    } else {
      unsigned tagsCount = 1;
      for (auto& item : m_tags) {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

void CreateDBCapacityReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
