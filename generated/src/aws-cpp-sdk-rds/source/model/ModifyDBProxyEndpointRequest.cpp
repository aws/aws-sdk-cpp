/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyDBProxyEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyDBProxyEndpointRequest::ModifyDBProxyEndpointRequest() : 
    m_dBProxyEndpointNameHasBeenSet(false),
    m_newDBProxyEndpointNameHasBeenSet(false),
    m_vpcSecurityGroupIdsHasBeenSet(false)
{
}

Aws::String ModifyDBProxyEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyDBProxyEndpoint&";
  if(m_dBProxyEndpointNameHasBeenSet)
  {
    ss << "DBProxyEndpointName=" << StringUtils::URLEncode(m_dBProxyEndpointName.c_str()) << "&";
  }

  if(m_newDBProxyEndpointNameHasBeenSet)
  {
    ss << "NewDBProxyEndpointName=" << StringUtils::URLEncode(m_newDBProxyEndpointName.c_str()) << "&";
  }

  if(m_vpcSecurityGroupIdsHasBeenSet)
  {
    unsigned vpcSecurityGroupIdsCount = 1;
    for(auto& item : m_vpcSecurityGroupIds)
    {
      ss << "VpcSecurityGroupIds.member." << vpcSecurityGroupIdsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      vpcSecurityGroupIdsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyDBProxyEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
