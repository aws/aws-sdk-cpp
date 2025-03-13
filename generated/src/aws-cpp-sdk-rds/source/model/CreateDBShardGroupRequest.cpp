/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBShardGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateDBShardGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBShardGroup&";
  if(m_dBShardGroupIdentifierHasBeenSet)
  {
    ss << "DBShardGroupIdentifier=" << StringUtils::URLEncode(m_dBShardGroupIdentifier.c_str()) << "&";
  }

  if(m_dBClusterIdentifierHasBeenSet)
  {
    ss << "DBClusterIdentifier=" << StringUtils::URLEncode(m_dBClusterIdentifier.c_str()) << "&";
  }

  if(m_computeRedundancyHasBeenSet)
  {
    ss << "ComputeRedundancy=" << m_computeRedundancy << "&";
  }

  if(m_maxACUHasBeenSet)
  {
    ss << "MaxACU=" << StringUtils::URLEncode(m_maxACU) << "&";
  }

  if(m_minACUHasBeenSet)
  {
    ss << "MinACU=" << StringUtils::URLEncode(m_minACU) << "&";
  }

  if(m_publiclyAccessibleHasBeenSet)
  {
    ss << "PubliclyAccessible=" << std::boolalpha << m_publiclyAccessible << "&";
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


void  CreateDBShardGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
