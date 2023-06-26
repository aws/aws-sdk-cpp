/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/TaggedResource.h>
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

TaggedResource::TaggedResource() : 
    m_tagHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
}

TaggedResource::TaggedResource(const XmlNode& xmlNode) : 
    m_tagHasBeenSet(false),
    m_resourceNameHasBeenSet(false),
    m_resourceTypeHasBeenSet(false)
{
  *this = xmlNode;
}

TaggedResource& TaggedResource::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode tagNode = resultNode.FirstChild("Tag");
    if(!tagNode.IsNull())
    {
      m_tag = tagNode;
      m_tagHasBeenSet = true;
    }
    XmlNode resourceNameNode = resultNode.FirstChild("ResourceName");
    if(!resourceNameNode.IsNull())
    {
      m_resourceName = Aws::Utils::Xml::DecodeEscapedXmlText(resourceNameNode.GetText());
      m_resourceNameHasBeenSet = true;
    }
    XmlNode resourceTypeNode = resultNode.FirstChild("ResourceType");
    if(!resourceTypeNode.IsNull())
    {
      m_resourceType = Aws::Utils::Xml::DecodeEscapedXmlText(resourceTypeNode.GetText());
      m_resourceTypeHasBeenSet = true;
    }
  }

  return *this;
}

void TaggedResource::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_tagHasBeenSet)
  {
      Aws::StringStream tagLocationAndMemberSs;
      tagLocationAndMemberSs << location << index << locationValue << ".Tag";
      m_tag.OutputToStream(oStream, tagLocationAndMemberSs.str().c_str());
  }

  if(m_resourceNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
  }

  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << index << locationValue << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }

}

void TaggedResource::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_tagHasBeenSet)
  {
      Aws::String tagLocationAndMember(location);
      tagLocationAndMember += ".Tag";
      m_tag.OutputToStream(oStream, tagLocationAndMember.c_str());
  }
  if(m_resourceNameHasBeenSet)
  {
      oStream << location << ".ResourceName=" << StringUtils::URLEncode(m_resourceName.c_str()) << "&";
  }
  if(m_resourceTypeHasBeenSet)
  {
      oStream << location << ".ResourceType=" << StringUtils::URLEncode(m_resourceType.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
