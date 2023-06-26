/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/Event.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace Neptune
{
namespace Model
{

Event::Event() : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_sourceArnHasBeenSet(false)
{
}

Event::Event(const XmlNode& xmlNode) : 
    m_sourceIdentifierHasBeenSet(false),
    m_sourceType(SourceType::NOT_SET),
    m_sourceTypeHasBeenSet(false),
    m_messageHasBeenSet(false),
    m_eventCategoriesHasBeenSet(false),
    m_dateHasBeenSet(false),
    m_sourceArnHasBeenSet(false)
{
  *this = xmlNode;
}

Event& Event::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode sourceIdentifierNode = resultNode.FirstChild("SourceIdentifier");
    if(!sourceIdentifierNode.IsNull())
    {
      m_sourceIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(sourceIdentifierNode.GetText());
      m_sourceIdentifierHasBeenSet = true;
    }
    XmlNode sourceTypeNode = resultNode.FirstChild("SourceType");
    if(!sourceTypeNode.IsNull())
    {
      m_sourceType = SourceTypeMapper::GetSourceTypeForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sourceTypeNode.GetText()).c_str()).c_str());
      m_sourceTypeHasBeenSet = true;
    }
    XmlNode messageNode = resultNode.FirstChild("Message");
    if(!messageNode.IsNull())
    {
      m_message = Aws::Utils::Xml::DecodeEscapedXmlText(messageNode.GetText());
      m_messageHasBeenSet = true;
    }
    XmlNode eventCategoriesNode = resultNode.FirstChild("EventCategories");
    if(!eventCategoriesNode.IsNull())
    {
      XmlNode eventCategoriesMember = eventCategoriesNode.FirstChild("EventCategory");
      while(!eventCategoriesMember.IsNull())
      {
        m_eventCategories.push_back(eventCategoriesMember.GetText());
        eventCategoriesMember = eventCategoriesMember.NextNode("EventCategory");
      }

      m_eventCategoriesHasBeenSet = true;
    }
    XmlNode dateNode = resultNode.FirstChild("Date");
    if(!dateNode.IsNull())
    {
      m_date = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(dateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_dateHasBeenSet = true;
    }
    XmlNode sourceArnNode = resultNode.FirstChild("SourceArn");
    if(!sourceArnNode.IsNull())
    {
      m_sourceArn = Aws::Utils::Xml::DecodeEscapedXmlText(sourceArnNode.GetText());
      m_sourceArnHasBeenSet = true;
    }
  }

  return *this;
}

void Event::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_sourceIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }

  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceType=" << SourceTypeMapper::GetNameForSourceType(m_sourceType) << "&";
  }

  if(m_messageHasBeenSet)
  {
      oStream << location << index << locationValue << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }

  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << index << locationValue << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_dateHasBeenSet)
  {
      oStream << location << index << locationValue << ".Date=" << StringUtils::URLEncode(m_date.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_sourceArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }

}

void Event::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_sourceIdentifierHasBeenSet)
  {
      oStream << location << ".SourceIdentifier=" << StringUtils::URLEncode(m_sourceIdentifier.c_str()) << "&";
  }
  if(m_sourceTypeHasBeenSet)
  {
      oStream << location << ".SourceType=" << SourceTypeMapper::GetNameForSourceType(m_sourceType) << "&";
  }
  if(m_messageHasBeenSet)
  {
      oStream << location << ".Message=" << StringUtils::URLEncode(m_message.c_str()) << "&";
  }
  if(m_eventCategoriesHasBeenSet)
  {
      unsigned eventCategoriesIdx = 1;
      for(auto& item : m_eventCategories)
      {
        oStream << location << ".EventCategory." << eventCategoriesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_dateHasBeenSet)
  {
      oStream << location << ".Date=" << StringUtils::URLEncode(m_date.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_sourceArnHasBeenSet)
  {
      oStream << location << ".SourceArn=" << StringUtils::URLEncode(m_sourceArn.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
