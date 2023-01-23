/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/CreateDBClusterSnapshotRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

CreateDBClusterSnapshotRequest::CreateDBClusterSnapshotRequest() : 
    m_dBClusterSnapshotIdentifierHasBeenSet(false),
    m_dBClusterIdentifierHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDBClusterSnapshotRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBClusterSnapshot&";
  if(m_dBClusterSnapshotIdentifierHasBeenSet)
  {
    ss << "DBClusterSnapshotIdentifier=" << StringUtils::URLEncode(m_dBClusterSnapshotIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
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


void  CreateDBClusterSnapshotRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
