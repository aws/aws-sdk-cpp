/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

GetClusterCredentialsRequest::GetClusterCredentialsRequest() : 
    m_dbUserHasBeenSet(false),
    m_dbNameHasBeenSet(false),
    m_clusterIdentifierHasBeenSet(false),
    m_durationSeconds(0),
    m_durationSecondsHasBeenSet(false),
    m_autoCreate(false),
    m_autoCreateHasBeenSet(false),
    m_dbGroupsHasBeenSet(false)
{
}

Aws::String GetClusterCredentialsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetClusterCredentials&";
  if(m_dbUserHasBeenSet)
  {
    ss << "DbUser=" << StringUtils::URLEncode(m_dbUser.c_str()) << "&";
  }

  if(m_dbNameHasBeenSet)
  {
    ss << "DbName=" << StringUtils::URLEncode(m_dbName.c_str()) << "&";
  }

  if(m_clusterIdentifierHasBeenSet)
  {
    ss << "ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_durationSecondsHasBeenSet)
  {
    ss << "DurationSeconds=" << m_durationSeconds << "&";
  }

  if(m_autoCreateHasBeenSet)
  {
    ss << "AutoCreate=" << std::boolalpha << m_autoCreate << "&";
  }

  if(m_dbGroupsHasBeenSet)
  {
    unsigned dbGroupsCount = 1;
    for(auto& item : m_dbGroups)
    {
      ss << "DbGroups.member." << dbGroupsCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      dbGroupsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetClusterCredentialsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
