/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteTagsRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteTagsRequest::DeleteTagsRequest() : 
    m_resourceNameHasBeenSet(false),
    m_tagKeysHasBeenSet(false)
{
}

Aws::String DeleteTagsRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteTags&";
  if(m_resourceNameHasBeenSet)
  {
    ss << "ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
  }

  if(m_tagKeysHasBeenSet)
  {
    unsigned tagKeysCount = 1;
    for(auto& item : m_tagKeys)
    {
      ss << "TagKeys.member." << tagKeysCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      tagKeysCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteTagsRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
