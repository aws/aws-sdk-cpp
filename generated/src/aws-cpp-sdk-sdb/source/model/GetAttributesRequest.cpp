/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/GetAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

GetAttributesRequest::GetAttributesRequest() : 
    m_domainNameHasBeenSet(false),
    m_itemNameHasBeenSet(false),
    m_attributeNamesHasBeenSet(false),
    m_consistentRead(false),
    m_consistentReadHasBeenSet(false)
{
}

Aws::String GetAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=GetAttributes&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_itemNameHasBeenSet)
  {
    ss << "ItemName=" << StringUtils::URLEncode(m_itemName.c_str()) << "&";
  }

  if(m_attributeNamesHasBeenSet)
  {
    unsigned attributeNamesCount = 1;
    for(auto& item : m_attributeNames)
    {
      ss << "AttributeName." << attributeNamesCount << "="
          << StringUtils::URLEncode(item.c_str()) << "&";
      attributeNamesCount++;
    }
  }

  if(m_consistentReadHasBeenSet)
  {
    ss << "ConsistentRead=" << std::boolalpha << m_consistentRead << "&";
  }

  ss << "Version=2009-04-15";
  return ss.str();
}


void  GetAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
