/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SnapshotSortingEntity.h>
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

SnapshotSortingEntity::SnapshotSortingEntity(const XmlNode& xmlNode)
{
  *this = xmlNode;
}

SnapshotSortingEntity& SnapshotSortingEntity::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode attributeNode = resultNode.FirstChild("Attribute");
    if(!attributeNode.IsNull())
    {
      m_attribute = SnapshotAttributeToSortByMapper::GetSnapshotAttributeToSortByForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(attributeNode.GetText()).c_str()));
      m_attributeHasBeenSet = true;
    }
    XmlNode sortOrderNode = resultNode.FirstChild("SortOrder");
    if(!sortOrderNode.IsNull())
    {
      m_sortOrder = SortByOrderMapper::GetSortByOrderForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sortOrderNode.GetText()).c_str()));
      m_sortOrderHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotSortingEntity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << index << locationValue << ".Attribute=" << StringUtils::URLEncode(SnapshotAttributeToSortByMapper::GetNameForSnapshotAttributeToSortBy(m_attribute)) << "&";
  }

  if(m_sortOrderHasBeenSet)
  {
      oStream << location << index << locationValue << ".SortOrder=" << StringUtils::URLEncode(SortByOrderMapper::GetNameForSortByOrder(m_sortOrder)) << "&";
  }

}

void SnapshotSortingEntity::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_attributeHasBeenSet)
  {
      oStream << location << ".Attribute=" << StringUtils::URLEncode(SnapshotAttributeToSortByMapper::GetNameForSnapshotAttributeToSortBy(m_attribute)) << "&";
  }
  if(m_sortOrderHasBeenSet)
  {
      oStream << location << ".SortOrder=" << StringUtils::URLEncode(SortByOrderMapper::GetNameForSortByOrder(m_sortOrder)) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
