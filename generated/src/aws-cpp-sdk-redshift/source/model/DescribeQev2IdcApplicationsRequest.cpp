/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift/model/DescribeQev2IdcApplicationsRequest.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String DescribeQev2IdcApplicationsRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=DescribeQev2IdcApplications&";
  if (m_qev2IdcApplicationArnHasBeenSet) {
    ss << "Qev2IdcApplicationArn=" << StringUtils::URLEncode(m_qev2IdcApplicationArn.c_str()) << "&";
  }

  if (m_maxRecordsHasBeenSet) {
    ss << "MaxRecords=" << m_maxRecords << "&";
  }

  if (m_markerHasBeenSet) {
    ss << "Marker=" << StringUtils::URLEncode(m_marker.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

void DescribeQev2IdcApplicationsRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
