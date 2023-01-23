/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/DeleteHsmConfigurationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

DeleteHsmConfigurationRequest::DeleteHsmConfigurationRequest() : 
    m_hsmConfigurationIdentifierHasBeenSet(false)
{
}

Aws::String DeleteHsmConfigurationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=DeleteHsmConfiguration&";
  if(m_hsmConfigurationIdentifierHasBeenSet)
  {
    ss << "HsmConfigurationIdentifier=" << StringUtils::URLEncode(m_hsmConfigurationIdentifier.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  DeleteHsmConfigurationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
