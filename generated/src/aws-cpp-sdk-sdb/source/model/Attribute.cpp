/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sdb/model/Attribute.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SimpleDB
{
namespace Model
{

Attribute::Attribute() : 
    m_nameHasBeenSet(false),
    m_alternateNameEncodingHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_alternateValueEncodingHasBeenSet(false)
{
}

Attribute::Attribute(const XmlNode& xmlNode) : 
    m_nameHasBeenSet(false),
    m_alternateNameEncodingHasBeenSet(false),
    m_valueHasBeenSet(false),
    m_alternateValueEncodingHasBeenSet(false)
{
  *this = xmlNode;
}

Attribute& Attribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode nameNode = resultNode.FirstChild("Name");
    if(!nameNode.IsNull())
    {
      m_name = Aws::Utils::Xml::DecodeEscapedXmlText(nameNode.GetText());
      m_nameHasBeenSet = true;
    }
    XmlNode alternateNameEncodingNode = resultNode.FirstChild("AlternateNameEncoding");
    if(!alternateNameEncodingNode.IsNull())
    {
      m_alternateNameEncoding = Aws::Utils::Xml::DecodeEscapedXmlText(alternateNameEncodingNode.GetText());
      m_alternateNameEncodingHasBeenSet = true;
    }
    XmlNode valueNode = resultNode.FirstChild("Value");
    if(!valueNode.IsNull())
    {
      m_value = Aws::Utils::Xml::DecodeEscapedXmlText(valueNode.GetText());
      m_valueHasBeenSet = true;
    }
    XmlNode alternateValueEncodingNode = resultNode.FirstChild("AlternateValueEncoding");
    if(!alternateValueEncodingNode.IsNull())
    {
      m_alternateValueEncoding = Aws::Utils::Xml::DecodeEscapedXmlText(alternateValueEncodingNode.GetText());
      m_alternateValueEncodingHasBeenSet = true;
    }
  }

  return *this;
}

void Attribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << index << locationValue << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }

  if(m_alternateNameEncodingHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlternateNameEncoding=" << StringUtils::URLEncode(m_alternateNameEncoding.c_str()) << "&";
  }

  if(m_valueHasBeenSet)
  {
      oStream << location << index << locationValue << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }

  if(m_alternateValueEncodingHasBeenSet)
  {
      oStream << location << index << locationValue << ".AlternateValueEncoding=" << StringUtils::URLEncode(m_alternateValueEncoding.c_str()) << "&";
  }

}

void Attribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_nameHasBeenSet)
  {
      oStream << location << ".Name=" << StringUtils::URLEncode(m_name.c_str()) << "&";
  }
  if(m_alternateNameEncodingHasBeenSet)
  {
      oStream << location << ".AlternateNameEncoding=" << StringUtils::URLEncode(m_alternateNameEncoding.c_str()) << "&";
  }
  if(m_valueHasBeenSet)
  {
      oStream << location << ".Value=" << StringUtils::URLEncode(m_value.c_str()) << "&";
  }
  if(m_alternateValueEncodingHasBeenSet)
  {
      oStream << location << ".AlternateValueEncoding=" << StringUtils::URLEncode(m_alternateValueEncoding.c_str()) << "&";
  }
}

} // namespace Model
} // namespace SimpleDB
} // namespace Aws
