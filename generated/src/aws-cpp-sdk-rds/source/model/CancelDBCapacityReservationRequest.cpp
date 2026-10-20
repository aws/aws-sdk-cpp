/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rds/model/CancelDBCapacityReservationRequest.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CancelDBCapacityReservationRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=CancelDBCapacityReservation&";
  if (m_dBCapacityReservationIdentifierHasBeenSet) {
    ss << "DBCapacityReservationIdentifier=" << StringUtils::URLEncode(m_dBCapacityReservationIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

void CancelDBCapacityReservationRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
