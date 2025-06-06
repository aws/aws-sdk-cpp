﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/s3-crt/model/AnalyticsAndOperator.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws
{
namespace S3Crt
{
namespace Model
{

AnalyticsAndOperator::AnalyticsAndOperator(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

AnalyticsAndOperator& AnalyticsAndOperator::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode prefixNode = resultNode.FirstChild("Prefix");
    if(!prefixNode.IsNull())
    {
      m_prefix = Aws::Utils::Xml::DecodeEscapedXmlText(prefixNode.GetText());
      m_prefixHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tag");
    if(!tagsNode.IsNull())
    {
      XmlNode tagMember = tagsNode;
      m_tagsHasBeenSet = !tagMember.IsNull();
      while(!tagMember.IsNull())
      {
        m_tags.push_back(tagMember);
        tagMember = tagMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void AnalyticsAndOperator::AddToNode(XmlNode& parentNode) const
{
  Aws::StringStream ss;
  if(m_prefixHasBeenSet)
  {
   XmlNode prefixNode = parentNode.CreateChildElement("Prefix");
   prefixNode.SetText(m_prefix);
  }

  if(m_tagsHasBeenSet)
  {
   for(const auto& item : m_tags)
   {
     XmlNode tagsNode = parentNode.CreateChildElement("Tag");
     item.AddToNode(tagsNode);
   }
  }

}

} // namespace Model
} // namespace S3Crt
} // namespace Aws
