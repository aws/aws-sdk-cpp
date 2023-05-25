/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/CreateHsmClientCertificateRequest.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

using namespace Aws::Redshift::Model;
using namespace Aws::Utils;

CreateHsmClientCertificateRequest::CreateHsmClientCertificateRequest() : 
    m_hsmClientCertificateIdentifierHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

Aws::String CreateHsmClientCertificateRequest::SerializePayload() const
{
  Aws::StringStream ss;
  ss << "Action=CreateHsmClientCertificate&";
  if(m_hsmClientCertificateIdentifierHasBeenSet)
  {
    ss << "HsmClientCertificateIdentifier=" << StringUtils::URLEncode(m_hsmClientCertificateIdentifier.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
    unsigned tagsCount = 1;
    for(auto& item : m_tags)
    {
      item.OutputToStream(ss, "Tags.member.", tagsCount, "");
      tagsCount++;
    }
  }

  ss << "Version=2012-12-01";
  return ss.str();
}


void  CreateHsmClientCertificateRequest::DumpBodyToUrl(Aws::Http::URI& uri ) const
{
  uri.SetQueryString(SerializePayload());
}
