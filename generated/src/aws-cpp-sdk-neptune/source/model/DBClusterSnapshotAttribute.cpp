﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/neptune/model/DBClusterSnapshotAttribute.h>
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

DBClusterSnapshotAttribute::DBClusterSnapshotAttribute(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

DBClusterSnapshotAttribute& DBClusterSnapshotAttribute::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNameNode = resultNode.FirstChild("AttributeName");
    if(!attributeNameNode.IsNull())
    {
      m_attributeName = Aws::Utils::Xml::DecodeEscapedXmlText(attributeNameNode.GetText());
      m_attributeNameHasBeenSet = true;
    }
    XmlNode attributeValuesNode = resultNode.FirstChild("AttributeValues");
    if(!attributeValuesNode.IsNull())
    {
      XmlNode attributeValuesMember = attributeValuesNode.FirstChild("AttributeValue");
      m_attributeValuesHasBeenSet = !attributeValuesMember.IsNull();
      while(!attributeValuesMember.IsNull())
      {
        m_attributeValues.push_back(attributeValuesMember.GetText());
        attributeValuesMember = attributeValuesMember.NextNode("AttributeValue");
      }

      m_attributeValuesHasBeenSet = true;
    }
  }

  return *this;
}

void DBClusterSnapshotAttribute::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }

  if(m_attributeValuesHasBeenSet)
  {
      unsigned attributeValuesIdx = 1;
      for(auto& item : m_attributeValues)
      {
        oStream << location << index << locationValue << ".AttributeValues.AttributeValue." << attributeValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

}

void DBClusterSnapshotAttribute::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeNameHasBeenSet)
  {
      oStream << location << ".AttributeName=" << StringUtils::URLEncode(m_attributeName.c_str()) << "&";
  }
  if(m_attributeValuesHasBeenSet)
  {
      unsigned attributeValuesIdx = 1;
      for(auto& item : m_attributeValues)
      {
        oStream << location << ".AttributeValues.AttributeValue." << attributeValuesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
}

} // namespace Model
} // namespace Neptune
} // namespace Aws
