/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBSnapshotRequest::DeleteDBSnapshotRequest() : 
    m_dBSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String DeleteDBSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBSnapshot&";
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
