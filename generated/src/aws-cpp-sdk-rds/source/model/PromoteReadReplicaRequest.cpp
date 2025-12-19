/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/rds/model/PromoteReadReplicaRequest.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String PromoteReadReplicaRequest::SerializePayload() const {
  Aws::StringStream ss;
  ss << "Action=PromoteReadReplica&";
  if (m_dBInstanceIdentifierHasBeenSet) {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if (m_backupRetentionPeriodHasBeenSet) {
    ss << "BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if (m_preferredBackupWindowHasBeenSet) {
    ss << "PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  if (m_tagSpecificationsHasBeenSet) {
    if (m_tagSpecifications.empty()) {
      ss << "TagSpecifications=&";
    } else {
      unsigned tagSpecificationsCount = 1;
      for (auto& item : m_tagSpecifications) {
        item.OutputToStream(ss, "TagSpecifications.item.", tagSpecificationsCount, "");
        tagSpecificationsCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}

void PromoteReadReplicaRequest::DumpBodyToUrl(Aws::Http::URI& uri) const { uri.SetQueryString(SerializePayload()); }
