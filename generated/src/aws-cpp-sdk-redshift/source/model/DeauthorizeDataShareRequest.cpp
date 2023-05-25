/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeauthorizeDataShareRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeauthorizeDataShareRequest::DeauthorizeDataShareRequest() : 
    m_dataShareArnHasBeenSet(false),
    m_consumerIdentifierHasBeenSet(false)
{
}

Aws::String DeauthorizeDataShareRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeauthorizeDataShare&";
  if(m_dataShareArnHasBeenSet)
  {
    ss << "DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }

  if(m_consumerIdentifierHasBeenSet)
  {
    ss << "ConsumerIdentifier=" << StringUtils::URLEncode(m_consumerIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeauthorizeDataShareRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
