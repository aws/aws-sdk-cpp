/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DeregisterDBProxyTargetsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

DeregisterDBProxyTargetsRequest::DeregisterDBProxyTargetsRequest() : 
    m_dBProxyNameHasBeenSet(false),
    m_targetGroupNameHasBeenSet(false),
    m_dBInstanceIdentifiersHasBeenSet(false),
    m_dBClusterIdentifiersHasBeenSet(false)
{
}

Aws::String DeregisterDBProxyTargetsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeregisterDBProxyTargets&";
  if(m_dBProxyNameHasBeenSet)
  {
    ss << "DBProxyName=" << StringUtils::URLEncode(m_dBProxyName.c_str()) << "&";
  }

  if(m_targetGroupNameHasBeenSet)
  {
    ss << "TargetGroupName=" << StringUtils::URLEncode(m_targetGroupName.c_str()) << "&";
  }

  if(m_dBInstanceIdentifiersHasBeenSet)
  {
    unsigned dBInstanceIdentifiersCount = 1;
    for(auto& item : m_dBInstanceIdentifiers)
    {
      ss << "DBInstanceIdentifiers.member." << dBInstanceIdentifiersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dBInstanceIdentifiersCount++;
    }
  }

  if(m_dBClusterIdentifiersHasBeenSet)
  {
    unsigned dBClusterIdentifiersCount = 1;
    for(auto& item : m_dBClusterIdentifiers)
    {
      ss << "DBClusterIdentifiers.member." << dBClusterIdentifiersCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dBClusterIdentifiersCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DeregisterDBProxyTargetsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
