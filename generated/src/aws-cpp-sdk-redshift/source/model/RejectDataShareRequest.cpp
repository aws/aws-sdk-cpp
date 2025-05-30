﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RejectDataShareRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String RejectDataShareRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=RejectDataShare&";
  if(m_dataShareArnHasBeenSet)
  {
    ss << "DataShareArn=" << StringUtils::URLEncode(m_dataShareArn.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  RejectDataShareRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
