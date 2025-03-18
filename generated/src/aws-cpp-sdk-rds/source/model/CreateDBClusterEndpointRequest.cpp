/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBClusterEndpointRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateDBClusterEndpointRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBClusterEndpoint&";
  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_dBClusterEndpointIdentifierHasBeenSet)
  {
    ss << "DBClusterEndpointIdentifier=" << StringUtils::URLEncode(m_dBClusterEndpointIdentifier.c_str()) << "&";
  }

  if(m_endpointTypeHasBeenSet)
  {
    ss << "EndpointType=" << StringUtils::URLEncode(m_endpointType.c_str()) << "&";
  }

  if(m_staticMembersHasBeenSet)
  {
    if (m_staticMembers.empty())
    {
      ss << "StaticMembers=&";
    }
    else
    {
      unsigned staticMembersCount = 1;
      for(auto& item : m_staticMembers)
      {
        ss << "StaticMembers.member." << staticMembersCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        staticMembersCount++;
      }
    }
  }

  if(m_excludedMembersHasBeenSet)
  {
    if (m_excludedMembers.empty())
    {
      ss << "ExcludedMembers=&";
    }
    else
    {
      unsigned excludedMembersCount = 1;
      for(auto& item : m_excludedMembers)
      {
        ss << "ExcludedMembers.member." << excludedMembersCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        excludedMembersCount++;
      }
    }
  }

  if(m_tagsHasBeenSet)
  {
    if (m_tags.empty())
    {
      ss << "Tags=&";
    }
    else
    {
      unsigned tagsCount = 1;
      for(auto& item : m_tags)
      {
        item.OutputToStream(ss, "Tags.Tag.", tagsCount, "");
        tagsCount++;
      }
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBClusterEndpointRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
