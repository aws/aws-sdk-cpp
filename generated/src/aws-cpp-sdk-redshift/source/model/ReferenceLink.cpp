/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ReferenceLink.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Redshift
{
namespace Model
{

ReferenceLink::ReferenceLink() : 
    m_textHasBeenSet(false),
    m_linkHasBeenSet(false)
{
}

ReferenceLink::ReferenceLink(const XmlNode& xmlNode) : 
    m_textHasBeenSet(false),
    m_linkHasBeenSet(false)
{
  *this = xmlNode;
}

ReferenceLink& ReferenceLink::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode textNode = resultNode.FirstChild("Text");
    if(!textNode.IsNull())
    {
      m_text = Aws::Utils::Xml::DecodeEscapedXmlText(textNode.GetText());
      m_textHasBeenSet = true;
    }
    XmlNode linkNode = resultNode.FirstChild("Link");
    if(!linkNode.IsNull())
    {
      m_link = Aws::Utils::Xml::DecodeEscapedXmlText(linkNode.GetText());
      m_linkHasBeenSet = true;
    }
  }

  return *this;
}

void ReferenceLink::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_textHasBeenSet)
  {
      oStream << location << index << locationValue << ".Text=" << StringUtils::URLEncode(m_text.c_str()) << "&";
  }

  if(m_linkHasBeenSet)
  {
      oStream << location << index << locationValue << ".Link=" << StringUtils::URLEncode(m_link.c_str()) << "&";
  }

}

void ReferenceLink::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_textHasBeenSet)
  {
      oStream << location << ".Text=" << StringUtils::URLEncode(m_text.c_str()) << "&";
  }
  if(m_linkHasBeenSet)
  {
      oStream << location << ".Link=" << StringUtils::URLEncode(m_link.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
