/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/BatchDeleteClusterSnapshotsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

BatchDeleteClusterSnapshotsRequest::BatchDeleteClusterSnapshotsRequest() : 
    m_identifiersHasBeenSet(false)
{
}

Aws::String BatchDeleteClusterSnapshotsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchDeleteClusterSnapshots&";
  if(m_identifiersHasBeenSet)
  {
    unsigned identifiersCount = 1;
    for(auto& item : m_identifiers)
    {
      item.OutputToStream(ss, "Identifiers.member.", identifiersCount, "");
      identifiersCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  BatchDeleteClusterSnapshotsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
