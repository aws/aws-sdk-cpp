/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateDBSecurityGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateDBSecurityGroupRequest::CreateDBSecurityGroupRequest() : 
    m_dBSecurityGroupNameHasBeenSet(false),
    m_dBSecurityGroupDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateDBSecurityGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateDBSecurityGroup&";
  if(m_dBSecurityGroupNameHasBeenSet)
  {
    ss << "DBSecurityGroupName=" << StringUtils::URLEncode(m_dBSecurityGroupName.c_str()) << "&";
  }

  if(m_dBSecurityGroupDescriptionHasBeenSet)
  {
    ss << "DBSecurityGroupDescription=" << StringUtils::URLEncode(m_dBSecurityGroupDescription.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  CreateDBSecurityGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
