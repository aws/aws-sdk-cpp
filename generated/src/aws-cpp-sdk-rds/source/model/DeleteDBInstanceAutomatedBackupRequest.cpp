﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBInstanceAutomatedBackupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBInstanceAutomatedBackupRequest::DeleteDBInstanceAutomatedBackupRequest() : 
    m_dbiResourceIdHasBeenSet(false),
    m_dBInstanceAutomatedBackupsArnHasBeenSet(false)
{
}

Aws::String DeleteDBInstanceAutomatedBackupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBInstanceAutomatedBackup&";
  if(m_dbiResourceIdHasBeenSet)
  {
    ss << "DbiResourceId=" << StringUtils::URLEncode(m_dbiResourceId.c_str()) << "&";
  }

  if(m_dBInstanceAutomatedBackupsArnHasBeenSet)
  {
    ss << "DBInstanceAutomatedBackupsArn=" << StringUtils::URLEncode(m_dBInstanceAutomatedBackupsArn.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBInstanceAutomatedBackupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
