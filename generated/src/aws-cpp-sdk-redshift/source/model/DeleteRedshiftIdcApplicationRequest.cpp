/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteRedshiftIdcApplicationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteRedshiftIdcApplicationRequest::DeleteRedshiftIdcApplicationRequest() : 
    m_redshiftIdcApplicationArnHasBeenSet(false)
{
}

Aws::String DeleteRedshiftIdcApplicationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteRedshiftIdcApplication&";
  if(m_redshiftIdcApplicationArnHasBeenSet)
  {
    ss << "RedshiftIdcApplicationArn=" << StringUtils::URLEncode(m_redshiftIdcApplicationArn.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteRedshiftIdcApplicationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
