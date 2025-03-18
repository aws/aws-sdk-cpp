/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/ListHostedZonesByNameResult.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/AmazonWebServiceResult.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Route53::Model;
using namespace Aws::Utils::Xml;
using namespace Aws::Utils;
using namespace Aws;

ListHostedZonesByNameResult::ListHostedZonesByNameResult(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  *this = result;
}

ListHostedZonesByNameResult& ListHostedZonesByNameResult::operator =(const Aws::AmazonWebServiceResult<XmlDocument>& result)
{
  const XmlDocument& xmlDocument = result.GetPayload();
  XmlNode resultNode = xmlDocument.GetRootElement();

  if(!resultNode.IsNull())
  {
    XmlNode hostedZonesNode = resultNode.FirstChild("HostedZones");
    if(!hostedZonesNode.IsNull())
    {
      XmlNode hostedZonesMember = hostedZonesNode.FirstChild("HostedZone");
      m_hostedZonesHasBeenSet = !hostedZonesMember.IsNull();
      while(!hostedZonesMember.IsNull())
      {
        m_hostedZones.push_back(hostedZonesMember);
        hostedZonesMember = hostedZonesMember.NextNode("HostedZone");
      }

      m_hostedZonesHasBeenSet = true;
    }
    XmlNode dNSNameNode = resultNode.FirstChild("DNSName");
    if(!dNSNameNode.IsNull())
    {
      m_dNSName = Aws::Utils::Xml::DecodeEscapedXmlText(dNSNameNode.GetText());
      m_dNSNameHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if(!hostedZoneIdNode.IsNull())
    {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
    XmlNode isTruncatedNode = resultNode.FirstChild("IsTruncated");
    if(!isTruncatedNode.IsNull())
    {
      m_isTruncated = StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(isTruncatedNode.GetText()).c_str()).c_str());
      m_isTruncatedHasBeenSet = true;
    }
    XmlNode nextDNSNameNode = resultNode.FirstChild("NextDNSName");
    if(!nextDNSNameNode.IsNull())
    {
      m_nextDNSName = Aws::Utils::Xml::DecodeEscapedXmlText(nextDNSNameNode.GetText());
      m_nextDNSNameHasBeenSet = true;
    }
    XmlNode nextHostedZoneIdNode = resultNode.FirstChild("NextHostedZoneId");
    if(!nextHostedZoneIdNode.IsNull())
    {
      m_nextHostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(nextHostedZoneIdNode.GetText());
      m_nextHostedZoneIdHasBeenSet = true;
    }
    XmlNode maxItemsNode = resultNode.FirstChild("MaxItems");
    if(!maxItemsNode.IsNull())
    {
      m_maxItems = Aws::Utils::Xml::DecodeEscapedXmlText(maxItemsNode.GetText());
      m_maxItemsHasBeenSet = true;
    }
  }

  const auto& headers = result.GetHeaderValueCollection();
  const auto& requestIdIter = headers.find("x-amzn-requestid");
  if(requestIdIter != headers.end())
  {
    m_requestId = requestIdIter->second;
    m_requestIdHasBeenSet = true;
  }

  return *this;
}
