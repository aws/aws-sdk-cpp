/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteSnapshotCopyGrantRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteSnapshotCopyGrantRequest::DeleteSnapshotCopyGrantRequest() : 
    m_snapshotCopyGrantNameHasBeenSet(false)
{
}

Aws::String DeleteSnapshotCopyGrantRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteSnapshotCopyGrant&";
  if(m_snapshotCopyGrantNameHasBeenSet)
  {
    ss << "SnapshotCopyGrantName=" << StringUtils::URLEncode(m_snapshotCopyGrantName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteSnapshotCopyGrantRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
