﻿/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ClusterParameterGroup.h>
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

ClusterParameterGroup::ClusterParameterGroup() : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
}

ClusterParameterGroup::ClusterParameterGroup(const XmlNode& xmlNode) : 
    m_parameterGroupNameHasBeenSet(false),
    m_parameterGroupFamilyHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_tagsHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterParameterGroup& ClusterParameterGroup::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode parameterGroupNameNode = resultNode.FirstChild("ParameterGroupName");
    if(!parameterGroupNameNode.IsNull())
    {
      m_parameterGroupName = Aws::Utils::Xml::DecodeEscapedXmlText(parameterGroupNameNode.GetText());
      m_parameterGroupNameHasBeenSet = true;
    }
    XmlNode parameterGroupFamilyNode = resultNode.FirstChild("ParameterGroupFamily");
    if(!parameterGroupFamilyNode.IsNull())
    {
      m_parameterGroupFamily = Aws::Utils::Xml::DecodeEscapedXmlText(parameterGroupFamilyNode.GetText());
      m_parameterGroupFamilyHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if(!tagsNode.IsNull())
    {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      while(!tagsMember.IsNull())
      {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_parameterGroupNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterGroupName=" << StringUtils::URLEncode(m_parameterGroupName.c_str()) << "&";
  }

  if(m_parameterGroupFamilyHasBeenSet)
  {
      oStream << location << index << locationValue << ".ParameterGroupFamily=" << StringUtils::URLEncode(m_parameterGroupFamily.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location << index << locationValue << ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }

}

void ClusterParameterGroup::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_parameterGroupNameHasBeenSet)
  {
      oStream << location << ".ParameterGroupName=" << StringUtils::URLEncode(m_parameterGroupName.c_str()) << "&";
  }
  if(m_parameterGroupFamilyHasBeenSet)
  {
      oStream << location << ".ParameterGroupFamily=" << StringUtils::URLEncode(m_parameterGroupFamily.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_tagsHasBeenSet)
  {
      unsigned tagsIdx = 1;
      for(auto& item : m_tags)
      {
        Aws::StringStream tagsSs;
        tagsSs << location <<  ".Tag." << tagsIdx++;
        item.OutputToStream(oStream, tagsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
