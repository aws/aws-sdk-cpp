/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/ModifyCertificatesRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::RDS::Model;
using namespace Aws::Utils;

ModifyCertificatesRequest::ModifyCertificatesRequest() : 
    m_certificateIdentifierHasBeenSet(false),
    m_removeCustomerOverride(false),
    m_removeCustomerOverrideHasBeenSet(false)
{
}

Aws::String ModifyCertificatesRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=ModifyCertificates&";
  if(m_certificateIdentifierHasBeenSet)
  {
    ss << "CertificateIdentifier=" << StringUtils::URLEncode(m_certificateIdentifier.c_str()) << "&";
  }

  if(m_removeCustomerOverrideHasBeenSet)
  {
    ss << "RemoveCustomerOverride=" << std::boolalpha << m_removeCustomerOverride << "&";
  }

  ss << "Version=2014-10-31";
  return ss.str();
}


void  ModifyCertificatesRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
