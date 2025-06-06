﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/DeleteAttributesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

Aws::String DeleteAttributesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteAttributes&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  if(m_itemNameHasBeenSet)
  {
    ss << "ItemName=" << StringUtils::URLEncode(m_itemName.c_str()) << "&";
  }

  if(m_attributesHasBeenSet)
  {
    if (m_attributes.empty())
    {
      ss << "Attributes=&";
    }
    else
    {
      unsigned attributesCount = 1;
      for(auto& item : m_attributes)
      {
        item.OutputToStream(ss, "Attribute.", attributesCount, "");
        attributesCount++;
      }
    }
  }

  if(m_expectedHasBeenSet)
  {
    m_expected.OutputToStream(ss, "Expected");
  }

  ss << "Version=2009-04-15";
  return ss.str();
}


void  DeleteAttributesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
