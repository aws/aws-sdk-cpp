/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyIntegrationRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

Aws::String ModifyIntegrationRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyIntegration&";
  if(m_integrationIdentifierHasBeenSet)
  {
    ss << "IntegrationIdentifier=" << StringUtils::URLEncode(m_integrationIdentifier.c_str()) << "&";
  }

  if(m_integrationNameHasBeenSet)
  {
    ss << "IntegrationName=" << StringUtils::URLEncode(m_integrationName.c_str()) << "&";
  }

  if(m_dataFilterHasBeenSet)
  {
    ss << "DataFilter=" << StringUtils::URLEncode(m_dataFilter.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
    ss << "Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyIntegrationRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
