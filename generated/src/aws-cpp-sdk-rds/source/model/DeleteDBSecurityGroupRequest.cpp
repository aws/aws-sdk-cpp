/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBSecurityGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBSecurityGroupRequest::DeleteDBSecurityGroupRequest() : 
    m_dBSecurityGroupNameHasBeenSet(false)
{
}

Aws::String DeleteDBSecurityGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBSecurityGroup&";
  if(m_dBSecurityGroupNameHasBeenSet)
  {
    ss << "DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBSecurityGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
