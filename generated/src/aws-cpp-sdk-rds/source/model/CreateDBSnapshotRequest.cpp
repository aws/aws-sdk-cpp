/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBSnapshotRequest::CreateDBSnapshotRequest() : 
    m_dBSnapshotIdentifierHasBeenSet(false),
    m_dBInstanceIdentifierHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDBSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBSnapshot&";
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
