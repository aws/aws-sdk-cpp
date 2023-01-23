/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DescribeEventCategoriesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Neptune::Model;
using namespace Aws::Utils;

DescribeEventCategoriesRequest::DescribeEventCategoriesRequest() : 
    m_sourceTypeHasBeenSet(false),
    m_filtersHasBeenSet(false)
{
}

Aws::String DescribeEventCategoriesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DescribeEventCategories&";
  if(m_sourceTypeHasBeenSet)
  {
    ss << "SourceType=" << StringUtils::URLEncode(m_sourceType.c_str()) << "&";
  }

  if(m_filtersHasBeenSet)
  {
    unsigned filtersCount = 1;
    for(auto& item : m_filters)
    {
      item.OutputToStream(ss, "Filters.member.", filtersCount, "");
      filtersCount++;
    }
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  DescribeEventCategoriesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
