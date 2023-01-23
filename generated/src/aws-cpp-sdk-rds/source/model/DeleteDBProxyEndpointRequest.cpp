/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeleteDBProxyEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeleteDBProxyEndpointRequest::DeleteDBProxyEndpointRequest() : 
    m_dBProxyEndpointNameHasBeenSet(false)
{
}

Aws::String DeleteDBProxyEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteDBProxyEndpoint&";
  if(m_dBProxyEndpointNameHasBeenSet)
  {
    ss << "DBProxyEndpointName=" << StringUtils::URLEncode(m_dBProxyEndpointName.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeleteDBProxyEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
