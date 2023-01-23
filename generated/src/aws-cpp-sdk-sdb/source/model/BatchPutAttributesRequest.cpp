/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/BatchPutAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

BatchPutAttributesRequest::BatchPutAttributesRequest() : 
    m_domainNameHasBeenSet(false),
    m_itemsHasBeenSet(false)
{
}

Aws::String BatchPutAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=BatchPutAttributes&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_itemsHasBeenSet)
  {
    unsigned itemsCount = 1;
    for(auto& item : m_items)
    {
      item.OutputToStream(ss, "Item.", itemsCount, "");
      itemsCount++;
    }
  }

  ss << "Version=2009-04-15";
  return ss.str();
}


void  BatchPutAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
