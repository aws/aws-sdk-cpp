/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DescribeEventCategoriesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DescribeEventCategoriesRequest::DescribeEventCategoriesRequest() : 
    m_sourceTypeHasBeenSet(false)
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

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DescribeEventCategoriesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
