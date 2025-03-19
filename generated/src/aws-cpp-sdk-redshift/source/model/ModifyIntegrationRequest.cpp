/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ModifyIntegrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

Aws::String ModifyIntegrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIntegration&";
  if(m_integrationArnHasBeenSet)
  {
    ss << "IntegrationArn=" << StringUtils::URLEncode(m_integrationArn.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_integrationNameHasBeenSet)
  {
    ss << "IntegrationName=" << StringUtils::URLEncode(m_integrationName.c_str()) << "&";
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  ModifyIntegrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
