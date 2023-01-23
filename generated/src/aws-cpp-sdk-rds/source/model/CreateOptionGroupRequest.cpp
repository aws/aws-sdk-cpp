/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/CreateOptionGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

CreateOptionGroupRequest::CreateOptionGroupRequest() : 
    m_optionGroupNameHasBeenSet(false),
    m_engineNameHasBeenSet(false),
    m_majorEngineVersionHasBeenSet(false),
    m_optionGroupDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateOptionGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateOptionGroup&";
  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_engineNameHasBeenSet)
  {
    ss << "EngineName=" << StringUtils::URLEncode(m_engineName.c_str()) << "&";
  }

  if(m_majorEngineVersionHasBeenSet)
  {
    ss << "MajorEngineVersion=" << StringUtils::URLEncode(m_majorEngineVersion.c_str()) << "&";
  }

  if(m_optionGroupDescriptionHasBeenSet)
  {
    ss << "OptionGroupDescription=" << StringUtils::URLEncode(m_optionGroupDescription.c_str()) << "&";
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


void  CreateOptionGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
