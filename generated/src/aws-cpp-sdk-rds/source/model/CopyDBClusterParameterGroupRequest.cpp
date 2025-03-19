/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CopyDBClusterParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CopyDBClusterParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CopyDBClusterParameterGroup&";
  if(m_sourceDBClusterParameterGroupIdentifierHasBeenSet)
  {
    ss << "SourceDBClusterParameterGroupIdentifier=" << StringUtils::URLEncode(m_sourceDBClusterParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBClusterParameterGroupIdentifierHasBeenSet)
  {
    ss << "TargetDBClusterParameterGroupIdentifier=" << StringUtils::URLEncode(m_targetDBClusterParameterGroupIdentifier.c_str()) << "&";
  }

  if(m_targetDBClusterParameterGroupDescriptionHasBeenSet)
  {
    ss << "TargetDBClusterParameterGroupDescription=" << StringUtils::URLEncode(m_targetDBClusterParameterGroupDescription.c_str()) << "&";
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


void  CopyDBClusterParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
