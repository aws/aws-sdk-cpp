/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/GetClusterCredentialsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

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
    if (m_dbGroups.empty())
    {
      ss << "DbGroups=&";
    }
    else
    {
      unsigned dbGroupsCount = 1;
      for(auto& item : m_dbGroups)
      {
        ss << "DbGroups.DbGroup." << dbGroupsCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        dbGroupsCount++;
      }
    }
  }

  if(m_customDomainNameHasBeenSet)
  {
    ss << "CustomDomainName=" << StringUtils::URLEncode(m_customDomainName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  GetClusterCredentialsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
