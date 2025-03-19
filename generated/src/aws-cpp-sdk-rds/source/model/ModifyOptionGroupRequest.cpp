/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyOptionGroupRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String ModifyOptionGroupRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyOptionGroup&";
  if(m_optionGroupNameHasBeenSet)
  {
    ss << "OptionGroupName=" << StringUtils::URLEncode(m_optionGroupName.c_str()) << "&";
  }

  if(m_optionsToIncludeHasBeenSet)
  {
    if (m_optionsToInclude.empty())
    {
      ss << "OptionsToInclude=&";
    }
    else
    {
      unsigned optionsToIncludeCount = 1;
      for(auto& item : m_optionsToInclude)
      {
        item.OutputToStream(ss, "OptionsToInclude.OptionConfiguration.", optionsToIncludeCount, "");
        optionsToIncludeCount++;
      }
    }
  }

  if(m_optionsToRemoveHasBeenSet)
  {
    if (m_optionsToRemove.empty())
    {
      ss << "OptionsToRemove=&";
    }
    else
    {
      unsigned optionsToRemoveCount = 1;
      for(auto& item : m_optionsToRemove)
      {
        ss << "OptionsToRemove.member." << optionsToRemoveCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        optionsToRemoveCount++;
      }
    }
  }

  if(m_applyImmediatelyHasBeenSet)
  {
    ss << "ApplyImmediately=" << std::boolalpha << m_applyImmediately << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyOptionGroupRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
