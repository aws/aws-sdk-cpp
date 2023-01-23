/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DescribeDBSnapshotAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DescribeDBSnapshotAttributesRequest::DescribeDBSnapshotAttributesRequest() : 
    m_dBSnapshotIdentifierHasBeenSet(false)
{
}

Aws::String DescribeDBSnapshotAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeDBSnapshotAttributes&";
  if(m_dBSnapshotIdentifierHasBeenSet)
  {
    ss << "DBSnapshotIdentifier=" << StringUtils::URLEncode(m_dBSnapshotIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeDBSnapshotAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
