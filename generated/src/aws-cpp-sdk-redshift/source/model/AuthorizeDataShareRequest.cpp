/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/AuthorizeDataShareRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

AuthorizeDataShareRequest::AuthorizeDataShareRequest() : 
    m_dataShareArnHasBeenSet(false),
    m_consumerIdentifierHasBeenSet(false),
    m_allowWrites(false),
    m_allowWritesHasBeenSet(false)
{
}

Aws::String AuthorizeDataShareRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=AuthorizeDataShare&";
  if(m_dataShareArnHasBeenSet)
  {
    ss << "DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }

  if(m_consumerIdentifierHasBeenSet)
  {
    ss << "ConsumerIdentifier=" << StringUtils::URLEncode(m_consumerIdentifier.c_str()) << "&";
  }

  if(m_allowWritesHasBeenSet)
  {
    ss << "AllowWrites=" << std::boolalpha << m_allowWrites << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  AuthorizeDataShareRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
