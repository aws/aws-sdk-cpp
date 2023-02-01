/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/TagResourceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::CloudWatch::Model;
using namespace Aws::Utils;

TagResourceRequest::TagResourceRequest() : 
    m_resourceARNHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String TagResourceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=TagResource&";
  if(m_resourceARNHasBeenSet)
  {
    ss << "ResourceARN=" << StringUtils::URLEncode(m_resourceARN.c_str()) << "&";
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

  ss << "Version=2010-08-01";
  return ss.str();
}


void  TagResourceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
