/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/rds/model/DocLink.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace RDS
{
namespace Model
{

DocLink::DocLink() : 
    m_textHasBeenSet(false),
    m_urlHasBeenSet(false)
{
}

DocLink::DocLink(const XmlNode& xmlNode) : 
    m_textHasBeenSet(false),
    m_urlHasBeenSet(false)
{
  *this = xmlNode;
}

DocLink& DocLink::operator =(const XmlNode& xmlNode)
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
    XmlNode urlNode = resultNode.FirstChild("Url");
    if(!urlNode.IsNull())
    {
      m_url = Aws::Utils::Xml::DecodeEscapedXmlText(urlNode.GetText());
      m_urlHasBeenSet = true;
    }
  }

  return *this;
}

void DocLink::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_textHasBeenSet)
  {
      oStream << location << index << locationValue << ".Text=" << StringUtils::URLEncode(m_text.c_str()) << "&";
  }

  if(m_urlHasBeenSet)
  {
      oStream << location << index << locationValue << ".Url=" << StringUtils::URLEncode(m_url.c_str()) << "&";
  }

}

void DocLink::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_textHasBeenSet)
  {
      oStream << location << ".Text=" << StringUtils::URLEncode(m_text.c_str()) << "&";
  }
  if(m_urlHasBeenSet)
  {
      oStream << location << ".Url=" << StringUtils::URLEncode(m_url.c_str()) << "&";
  }
}

} // namespace Model
} // namespace RDS
} // namespace Aws
