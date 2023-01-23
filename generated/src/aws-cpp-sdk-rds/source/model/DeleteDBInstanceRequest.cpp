/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBInstanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBInstanceRequest::DeleteDBInstanceRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false),
    m_skipFinalSnapshot(false),
    m_skipFinalSnapshotHasBeenSet(false),
    m_finalDBSnapshotIdentifierHasBeenSet(false),
    m_deleteAutomatedBackups(false),
    m_deleteAutomatedBackupsHasBeenSet(false)
{
}

Aws::String DeleteDBInstanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBInstance&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_skipFinalSnapshotHasBeenSet)
  {
    ss << "SkipFinalSnapshot=" << std::boolalpha << m_skipFinalSnapshot << "&";
  }

  if(m_finalDBSnapshotIdentifierHasBeenSet)
  {
    ss << "FinalDBSnapshotIdentifier=" << StringUtils::URLEncode(m_finalDBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_deleteAutomatedBackupsHasBeenSet)
  {
    ss << "DeleteAutomatedBackups=" << std::boolalpha << m_deleteAutomatedBackups << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBInstanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
