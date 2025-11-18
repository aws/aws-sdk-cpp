/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/redshift/model/GetIdentityCenterAuthTokenRequest.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String GetIdentityCenterAuthTokenRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=GetIdentityCenterAuthToken&";
  if (m_clusterIdsHasBeenSet) {
    if (m_clusterIds.empty()) {
      ss << "ClusterIds=&";
    } else {
      unsigned clusterIdsCount = 1;
      for (auto& item : m_clusterIds) {
        ss << "ClusterIds.ClusterIdentifier." << clusterIdsCount << "=" << StringUtils::URLEncode(item.c_str()) << "&";
        clusterIdsCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}

void GetIdentityCenterAuthTokenRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
