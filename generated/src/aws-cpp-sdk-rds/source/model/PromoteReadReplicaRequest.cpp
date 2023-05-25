/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/PromoteReadReplicaRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

PromoteReadReplicaRequest::PromoteReadReplicaRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_preferredBackupWindowHasBeenSet(false)
{
}

Aws::String PromoteReadReplicaRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=PromoteReadReplica&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
    ss << "BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_preferredBackupWindowHasBeenSet)
  {
    ss << "PreferredBackupWindow=" << StringUtils::URLEncode(m_preferredBackupWindow.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  PromoteReadReplicaRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
