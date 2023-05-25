/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/StopDBInstanceAutomatedBackupsReplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

StopDBInstanceAutomatedBackupsReplicationRequest::StopDBInstanceAutomatedBackupsReplicationRequest() : 
    m_sourceDBInstanceArnHasBeenSet(false)
{
}

Aws::String StopDBInstanceAutomatedBackupsReplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StopDBInstanceAutomatedBackupsReplication&";
  if(m_sourceDBInstanceArnHasBeenSet)
  {
    ss << "SourceDBInstanceArn=" << StringUtils::URLEncode(m_sourceDBInstanceArn.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StopDBInstanceAutomatedBackupsReplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
