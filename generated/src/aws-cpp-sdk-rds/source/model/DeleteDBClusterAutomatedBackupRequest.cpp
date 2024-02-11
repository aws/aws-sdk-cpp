/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBClusterAutomatedBackupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBClusterAutomatedBackupRequest::DeleteDBClusterAutomatedBackupRequest() : 
    m_dbClusterResourceIdHasBeenSet(false)
{
}

Aws::String DeleteDBClusterAutomatedBackupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBClusterAutomatedBackup&";
  if(m_dbClusterResourceIdHasBeenSet)
  {
    ss << "DbClusterResourceId=" << StringUtils::URLEncode(m_dbClusterResourceId.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBClusterAutomatedBackupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
