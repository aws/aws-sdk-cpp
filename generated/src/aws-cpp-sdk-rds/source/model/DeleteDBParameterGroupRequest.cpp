/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBParameterGroupRequest::DeleteDBParameterGroupRequest() : 
    m_dBParameterGroupNameHasBeenSet(false)
{
}

Aws::String DeleteDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBParameterGroup&";
  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
