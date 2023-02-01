/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/StopDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

StopDBInstanceRequest::StopDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_dBSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String StopDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=StopDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  StopDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
