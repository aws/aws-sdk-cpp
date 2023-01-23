/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/RevisionTarget.h>
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

RevisionTarget::RevisionTarget() : 
    m_databaseRevisionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseRevisionReleaseDateHasBeenSet(false)
{
}

RevisionTarget::RevisionTarget(const XmlNode& xmlNode) : 
    m_databaseRevisionHasBeenSet(false),
    m_descriptionHasBeenSet(false),
    m_databaseRevisionReleaseDateHasBeenSet(false)
{
  *this = xmlNode;
}

RevisionTarget& RevisionTarget::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode databaseRevisionNode = resultNode.FirstChild("DatabaseRevision");
    if(!databaseRevisionNode.IsNull())
    {
      m_databaseRevision = Aws::Utils::Xml::DecodeEscapedXmlText(databaseRevisionNode.GetText());
      m_databaseRevisionHasBeenSet = true;
    }
    XmlNode descriptionNode = resultNode.FirstChild("Description");
    if(!descriptionNode.IsNull())
    {
      m_description = Aws::Utils::Xml::DecodeEscapedXmlText(descriptionNode.GetText());
      m_descriptionHasBeenSet = true;
    }
    XmlNode databaseRevisionReleaseDateNode = resultNode.FirstChild("DatabaseRevisionReleaseDate");
    if(!databaseRevisionReleaseDateNode.IsNull())
    {
      m_databaseRevisionReleaseDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(databaseRevisionReleaseDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_databaseRevisionReleaseDateHasBeenSet = true;
    }
  }

  return *this;
}

void RevisionTarget::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_databaseRevisionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseRevision=" << StringUtils::URLEncode(m_databaseRevision.c_str()) << "&";
  }

  if(m_descriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }

  if(m_databaseRevisionReleaseDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseRevisionReleaseDate=" << StringUtils::URLEncode(m_databaseRevisionReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

}

void RevisionTarget::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_databaseRevisionHasBeenSet)
  {
      oStream << location << ".DatabaseRevision=" << StringUtils::URLEncode(m_databaseRevision.c_str()) << "&";
  }
  if(m_descriptionHasBeenSet)
  {
      oStream << location << ".Description=" << StringUtils::URLEncode(m_description.c_str()) << "&";
  }
  if(m_databaseRevisionReleaseDateHasBeenSet)
  {
      oStream << location << ".DatabaseRevisionReleaseDate=" << StringUtils::URLEncode(m_databaseRevisionReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
