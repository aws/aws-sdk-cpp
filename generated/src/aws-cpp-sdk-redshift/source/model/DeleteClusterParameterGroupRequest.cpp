/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteClusterParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteClusterParameterGroupRequest::DeleteClusterParameterGroupRequest() : 
    m_parameterGroupNameHasBeenSet(false)
{
}

Aws::String DeleteClusterParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteClusterParameterGroup&";
  if(m_parameterGroupNameHasBeenSet)
  {
    ss << "ParameterGroupName=" << StringUtils::URLEncode(m_parameterGroupName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteClusterParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
