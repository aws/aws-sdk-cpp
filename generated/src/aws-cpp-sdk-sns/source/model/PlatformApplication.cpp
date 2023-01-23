﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/sns/model/PlatformApplication.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace SNS
{
namespace Model
{

PlatformApplication::PlatformApplication() : 
    m_platformApplicationArnHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
}

PlatformApplication::PlatformApplication(const XmlNode& xmlNode) : 
    m_platformApplicationArnHasBeenSet(false),
    m_attributesHasBeenSet(false)
{
  *this = xmlNode;
}

PlatformApplication& PlatformApplication::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode platformApplicationArnNode = resultNode.FirstChild("PlatformApplicationArn");
    if(!platformApplicationArnNode.IsNull())
    {
      m_platformApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(platformApplicationArnNode.GetText());
      m_platformApplicationArnHasBeenSet = true;
    }
    XmlNode attributesNode = resultNode.FirstChild("Attributes");

    if(!attributesNode.IsNull())
    {
      XmlNode attributesEntry = attributesNode.FirstChild("entry");
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

void PlatformApplication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_platformApplicationArnHasBeenSet)
  {
      oStream << location << index << locationValue << ".PlatformApplicationArn=" << StringUtils::URLEncode(m_platformApplicationArn.c_str()) << "&";
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

void PlatformApplication::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_platformApplicationArnHasBeenSet)
  {
      oStream << location << ".PlatformApplicationArn=" << StringUtils::URLEncode(m_platformApplicationArn.c_str()) << "&";
  }
  if(m_attributesHasBeenSet)
  {
      unsigned attributesIdx = 1;
      for(auto& item : m_attributes)
      {
        oStream << location << ".Attributes.entry."  << attributesIdx << ".key="
            << StringUtils::URLEncode(item.first.c_str()) << "&";
        oStream << location <<  ".Attributes.entry." << attributesIdx << ".value="
            << StringUtils::URLEncode(item.second.c_str()) << "&";
        attributesIdx++;
      }

  }
}

} // namespace Model
} // namespace SNS
} // namespace Aws
