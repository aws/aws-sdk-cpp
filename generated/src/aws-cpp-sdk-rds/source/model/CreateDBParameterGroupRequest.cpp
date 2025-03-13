/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBParameterGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String CreateDBParameterGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBParameterGroup&";
  if(m_dBParameterGroupNameHasBeenSet)
  {
    ss << "DBParameterGroupName=" << StringUtils::URLEncode(m_dBParameterGroupName.c_str()) << "&";
  }

  if(m_dBParameterGroupFamilyHasBeenSet)
  {
    ss << "DBParameterGroupFamily=" << StringUtils::URLEncode(m_dBParameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
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


void  CreateDBParameterGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
