/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/DomainMetadataRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::SimpleDB::Model;
using namespace Aws::Utils;

DomainMetadataRequest::DomainMetadataRequest() : 
    m_domainNameHasBeenSet(false)
{
}

Aws::String DomainMetadataRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DomainMetadata&";
  if(m_domainNameHasBeenSet)
  {
    ss << "DomainName=" << StringUtils::URLEncode(m_domainName.c_str()) << "&";
  }

  ss << "Version=2009-04-15";
  return ss.str();
}


void  DomainMetadataRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
