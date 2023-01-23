/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/GetDNSSECResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

GetDNSSECResult::GetDNSSECResult()
{
}

GetDNSSECResult::GetDNSSECResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

GetDNSSECResult& GetDNSSECResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode statusNode = resultNode.FirstChild("Status");
    if(!statusNode.IsNull())
    {
      m_status = statusNode;
    }
    XmlNode keySigningKeysNode = resultNode.FirstChild("KeySigningKeys");
    if(!keySigningKeysNode.IsNull())
    {
      XmlNode keySigningKeysMember = keySigningKeysNode.FirstChild("member");
      while(!keySigningKeysMember.IsNull())
      {
        m_keySigningKeys.push_back(keySigningKeysMember);
        keySigningKeysMember = keySigningKeysMember.NextNode("member");
      }

    }
  }

  return *this;
}
