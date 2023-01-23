/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ClusterDbRevision.h>
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

ClusterDbRevision::ClusterDbRevision() : 
    m_clusterIdentifierHasBeenSet(false),
    m_currentDatabaseRevisionHasBeenSet(false),
    m_databaseRevisionReleaseDateHasBeenSet(false),
    m_revisionTargetsHasBeenSet(false)
{
}

ClusterDbRevision::ClusterDbRevision(const XmlNode& xmlNode) : 
    m_clusterIdentifierHasBeenSet(false),
    m_currentDatabaseRevisionHasBeenSet(false),
    m_databaseRevisionReleaseDateHasBeenSet(false),
    m_revisionTargetsHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterDbRevision& ClusterDbRevision::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode clusterIdentifierNode = resultNode.FirstChild("ClusterIdentifier");
    if(!clusterIdentifierNode.IsNull())
    {
      m_clusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(clusterIdentifierNode.GetText());
      m_clusterIdentifierHasBeenSet = true;
    }
    XmlNode currentDatabaseRevisionNode = resultNode.FirstChild("CurrentDatabaseRevision");
    if(!currentDatabaseRevisionNode.IsNull())
    {
      m_currentDatabaseRevision = Aws::Utils::Xml::DecodeEscapedXmlText(currentDatabaseRevisionNode.GetText());
      m_currentDatabaseRevisionHasBeenSet = true;
    }
    XmlNode databaseRevisionReleaseDateNode = resultNode.FirstChild("DatabaseRevisionReleaseDate");
    if(!databaseRevisionReleaseDateNode.IsNull())
    {
      m_databaseRevisionReleaseDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(databaseRevisionReleaseDateNode.GetText()).c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601);
      m_databaseRevisionReleaseDateHasBeenSet = true;
    }
    XmlNode revisionTargetsNode = resultNode.FirstChild("RevisionTargets");
    if(!revisionTargetsNode.IsNull())
    {
      XmlNode revisionTargetsMember = revisionTargetsNode.FirstChild("RevisionTarget");
      while(!revisionTargetsMember.IsNull())
      {
        m_revisionTargets.push_back(revisionTargetsMember);
        revisionTargetsMember = revisionTargetsMember.NextNode("RevisionTarget");
      }

      m_revisionTargetsHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterDbRevision::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_currentDatabaseRevisionHasBeenSet)
  {
      oStream << location << index << locationValue << ".CurrentDatabaseRevision=" << StringUtils::URLEncode(m_currentDatabaseRevision.c_str()) << "&";
  }

  if(m_databaseRevisionReleaseDateHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseRevisionReleaseDate=" << StringUtils::URLEncode(m_databaseRevisionReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if(m_revisionTargetsHasBeenSet)
  {
      unsigned revisionTargetsIdx = 1;
      for(auto& item : m_revisionTargets)
      {
        Aws::StringStream revisionTargetsSs;
        revisionTargetsSs << location << index << locationValue << ".RevisionTarget." << revisionTargetsIdx++;
        item.OutputToStream(oStream, revisionTargetsSs.str().c_str());
      }
  }

}

void ClusterDbRevision::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_currentDatabaseRevisionHasBeenSet)
  {
      oStream << location << ".CurrentDatabaseRevision=" << StringUtils::URLEncode(m_currentDatabaseRevision.c_str()) << "&";
  }
  if(m_databaseRevisionReleaseDateHasBeenSet)
  {
      oStream << location << ".DatabaseRevisionReleaseDate=" << StringUtils::URLEncode(m_databaseRevisionReleaseDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if(m_revisionTargetsHasBeenSet)
  {
      unsigned revisionTargetsIdx = 1;
      for(auto& item : m_revisionTargets)
      {
        Aws::StringStream revisionTargetsSs;
        revisionTargetsSs << location <<  ".RevisionTarget." << revisionTargetsIdx++;
        item.OutputToStream(oStream, revisionTargetsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
