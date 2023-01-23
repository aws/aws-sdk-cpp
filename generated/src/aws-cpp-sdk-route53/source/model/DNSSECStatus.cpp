/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/route53/model/DNSSECStatus.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Route53
{
namespace Model
{

DNSSECStatus::DNSSECStatus() : 
    m_serveSignatureHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
}

DNSSECStatus::DNSSECStatus(const XmlNode& xmlNode) : 
    m_serveSignatureHasBeenSet(false),
    m_statusMessageHasBeenSet(false)
{
  *this = xmlNode;
}

DNSSECStatus& DNSSECStatus::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode serveSignatureNode = resultNode.FirstChild("ServeSignature");
    if(!serveSignatureNode.IsNull())
    {
      m_serveSignature = Aws::Utils::Xml::DecodeEscapedXmlText(serveSignatureNode.GetText());
      m_serveSignatureHasBeenSet = true;
    }
    XmlNode statusMessageNode = resultNode.FirstChild("StatusMessage");
    if(!statusMessageNode.IsNull())
    {
      m_statusMessage = Aws::Utils::Xml::DecodeEscapedXmlText(statusMessageNode.GetText());
      m_statusMessageHasBeenSet = true;
    }
  }

  return *this;
}

void DNSSECStatus::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_serveSignatureHasBeenSet)
  {
   XmlNode serveSignatureNode = parentNode.CreateChildElement("ServeSignature");
   serveSignatureNode.SetText(m_serveSignature);
  }

  if(m_statusMessageHasBeenSet)
  {
   XmlNode statusMessageNode = parentNode.CreateChildElement("StatusMessage");
   statusMessageNode.SetText(m_statusMessage);
  }

}

} // namespace Model
} // namespace Route53
} // namespace Aws
