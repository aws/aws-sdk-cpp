/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/monitoring/model/Entity.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace CloudWatch
{
namespace Model
{

Entity::Entity(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

Entity& Entity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode keyAttributesNode = resultNode.FirstChild("KeyAttributes");

    if(!keyAttributesNode.IsNull())
    {
      XmlNode keyAttributesEntry = keyAttributesNode.FirstChild("entry");
      m_keyAttributesHasBeenSet = !keyAttributesEntry.IsNull();
      while(!keyAttributesEntry.IsNull())
      {
        XmlNode keyNode = keyAttributesEntry.FirstChild("key");
        XmlNode valueNode = keyAttributesEntry.FirstChild("value");
        m_keyAttributes[keyNode.GetText()] =
            valueNode.GetText();
        keyAttributesEntry = keyAttributesEntry.NextNode("entry");
      }

      m_keyAttributesHasBeenSet = true;
    }
    XmlNode attributesNode = resultNode.FirstChild("Attributes");

    if(!attributesNode.IsNull())
    {
      XmlNode attributesEntry = attributesNode.FirstChild("entry");
      m_attributesHasBeenSet = !attributesEntry.IsNull();
      while(!attributesEntry.IsNull())
      {
        XmlNode keyNode = attributesEntry.FirstChild("key");
        XmlNode valueNode = attributesEntry.FirstChild("value");
        m_attributes[keyNode.GetText()] =
            valueNode.GetText();
        attributesEntry = attributesEntry.NextNode("entry");
      }

      m_attributesHasBeenSet = true;
    }
  }

  return *this;
}

void Entity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_keyAttributesHasBeenSet)
  {
      unsigned keyAttributesIdx = 1;
      for(auto& item : m_keyAttributes)
      {
        oStream << location << index << locationValue << ".KeyAttributes.entry." << keyAttributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".KeyAttributes.entry." << keyAttributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        keyAttributesIdx++;
      }
  }

  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        oStream << location << index << locationValue << ".Attributes.entry." << attributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << index << locationValue << ".Attributes.entry." << attributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        attributesIdx++;
      }
  }

}

void Entity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_keyAttributesHasBeenSet)
  {
      unsigned keyAttributesIdx = 1;
      for(auto& item : m_keyAttributes)
      {
        oStream << location << ".KeyAttributes.entry." << keyAttributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << ".KeyAttributes.entry." << keyAttributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        keyAttributesIdx++;
      }
  }
  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        oStream << location << ".Attributes.entry." << attributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location << ".Attributes.entry." << attributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        attributesIdx++;
      }
  }
}

} // namespace Model
} // namespace CloudWatch
} // namespace Aws
