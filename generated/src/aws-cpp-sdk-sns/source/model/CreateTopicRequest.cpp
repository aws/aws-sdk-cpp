/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/CreateTopicRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SNS::Model;
using namespace Aws::Utils;

CreateTopicRequest::CreateTopicRequest() : 
    m_nameHasBeenSet(false),
    m_attributesHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_dataProtectionPolicyHasBeenSet(false)
{
}

Aws::String CreateTopicRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateTopic&";
  if(m_nameHasBeenSet)
  {
    ss << "Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
    unsigned attributesCount = 1;
    for(auto& item : m_attributes)
    {
      ss << "Attributes.entry." << attributesCount << ".key="
          << StringUtils::URLEncode(item.first.c_str()) << "&";
      ss << "Attributes.entry." << attributesCount << ".value="
          << StringUtils::URLEncode(item.second.c_str()) << "&";
      attributesCount++;
    }
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

  if(m_dataProtectionPolicyHasBeenSet)
  {
    ss << "DataProtectionPolicy=" << StringUtils::URLEncode(m_dataProtectionPolicy.c_str()) << "&";
  }

  ss << "Version=2010-03-31";
  return ss.str();
}


void  CreateTopicRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
