/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/StartDBInstanceAutomatedBackupsReplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

StartDBInstanceAutomatedBackupsReplicationRequest::StartDBInstanceAutomatedBackupsReplicationRequest() : 
    m_sourceDBInstanceArnHasBeenSet(false),
    m_backupRetentionPeriod(0),
    m_backupRetentionPeriodHasBeenSet(false),
    m_kmsKeyIdHasBeenSet(false),
    m_preSignedUrlHasBeenSet(false),
    m_sourceRegionHasBeenSet(false)
{
}

Aws::String StartDBInstanceAutomatedBackupsReplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StartDBInstanceAutomatedBackupsReplication&";
  if(m_sourceDBInstanceArnHasBeenSet)
  {
    ss << "SourceDBInstanceArn=" << StringUtils::URLEncode(m_sourceDBInstanceArn.c_str()) << "&";
  }

  if(m_backupRetentionPeriodHasBeenSet)
  {
    ss << "BackupRetentionPeriod=" << m_backupRetentionPeriod << "&";
  }

  if(m_kmsKeyIdHasBeenSet)
  {
    ss << "KmsKeyId=" << StringUtils::URLEncode(m_kmsKeyId.c_str()) << "&";
  }

  if(m_preSignedUrlHasBeenSet)
  {
    ss << "PreSignedUrl=" << StringUtils::URLEncode(m_preSignedUrl.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StartDBInstanceAutomatedBackupsReplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
