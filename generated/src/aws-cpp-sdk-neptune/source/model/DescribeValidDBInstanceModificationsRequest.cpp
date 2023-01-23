/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeValidDBInstanceModificationsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

DescribeValidDBInstanceModificationsRequest::DescribeValidDBInstanceModificationsRequest() : 
    m_dBInstanceIdentifierHasBeenSet(false)
{
}

Aws::String DescribeValidDBInstanceModificationsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeValidDBInstanceModifications&";
  if(m_dBInstanceIdentifierHasBeenSet)
  {
    ss << "DBInstanceIdentifier=" << StringUtils::URLEncode(m_dBInstanceIdentifier.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeValidDBInstanceModificationsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
