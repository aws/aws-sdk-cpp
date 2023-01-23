/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyClusterMaintenanceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

ModifyClusterMaintenanceRequest::ModifyClusterMaintenanceRequest() : 
    m_clusterIdentifierHasBeenSet(false),
    m_deferMaintenance(false),
    m_deferMaintenanceHasBeenSet(false),
    m_deferMaintenanceIdentifierHasBeenSet(false),
    m_deferMaintenanceStartTimeHasBeenSet(false),
    m_deferMaintenanceEndTimeHasBeenSet(false),
    m_deferMaintenanceDuration(0),
    m_deferMaintenanceDurationHasBeenSet(false)
{
}

Aws::String ModifyClusterMaintenanceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyClusterMaintenance&";
  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_deferMaintenanceHasBeenSet)
  {
    ss << "DeferMaintenance=" << std::boolalpha << m_deferMaintenance << "&";
  }

  if(m_deferMaintenanceIdentifierHasBeenSet)
  {
    ss << "DeferMaintenanceIdentifier=" << StringUtils::URLEncode(m_deferMaintenanceIdentifier.c_str()) << "&";
  }

  if(m_deferMaintenanceStartTimeHasBeenSet)
  {
    ss << "DeferMaintenanceStartTime=" << StringUtils::URLEncode(m_deferMaintenanceStartTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deferMaintenanceEndTimeHasBeenSet)
  {
    ss << "DeferMaintenanceEndTime=" << StringUtils::URLEncode(m_deferMaintenanceEndTime.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_deferMaintenanceDurationHasBeenSet)
  {
    ss << "DeferMaintenanceDuration=" << m_deferMaintenanceDuration << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyClusterMaintenanceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
