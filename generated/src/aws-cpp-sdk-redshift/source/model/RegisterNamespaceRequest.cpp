/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RegisterNamespaceRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String RegisterNamespaceRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RegisterNamespace&";
  if(m_namespaceIdentifierHasBeenSet)
  {
    m_namespaceIdentifier.OutputToStream(ss, "NamespaceIdentifier");
  }

  if(m_consumerIdentifiersHasBeenSet)
  {
    if (m_consumerIdentifiers.empty())
    {
      ss << "ConsumerIdentifiers=&";
    }
    else
    {
      unsigned consumerIdentifiersCount = 1;
      for(auto& item : m_consumerIdentifiers)
      {
        ss << "ConsumerIdentifiers.member." << consumerIdentifiersCount << "="
            << StringUtils::URLEncode(item.c_str()) << "&";
        consumerIdentifiersCount++;
      }
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  RegisterNamespaceRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
