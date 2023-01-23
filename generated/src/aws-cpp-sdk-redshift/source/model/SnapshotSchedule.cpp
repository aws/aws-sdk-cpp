/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SnapshotSchedule.h>
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

SnapshotSchedule::SnapshotSchedule() : 
    m_scheduleDefinitionsHasBeenSet(false),
    m_scheduleIdentifierHasBeenSet(false),
    m_scheduleDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nextInvocationsHasBeenSet(false),
    m_associatedClusterCount(0),
    m_associatedClusterCountHasBeenSet(false),
    m_associatedClustersHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
}

SnapshotSchedule::SnapshotSchedule(const XmlNode& xmlNode) : 
    m_scheduleDefinitionsHasBeenSet(false),
    m_scheduleIdentifierHasBeenSet(false),
    m_scheduleDescriptionHasBeenSet(false),
    m_tagsHasBeenSet(false),
    m_nextInvocationsHasBeenSet(false),
    m_associatedClusterCount(0),
    m_associatedClusterCountHasBeenSet(false),
    m_associatedClustersHasBeenSet(false),
    m_responseMetadataHasBeenSet(false)
{
  *this = xmlNode;
}

SnapshotSchedule& SnapshotSchedule::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode scheduleDefinitionsNode = resultNode.FirstChild("ScheduleDefinitions");
    if(!scheduleDefinitionsNode.IsNull())
    {
      XmlNode scheduleDefinitionsMember = scheduleDefinitionsNode.FirstChild("ScheduleDefinition");
      while(!scheduleDefinitionsMember.IsNull())
      {
        m_scheduleDefinitions.push_back(scheduleDefinitionsMember.GetText());
        scheduleDefinitionsMember = scheduleDefinitionsMember.NextNode("ScheduleDefinition");
      }

      m_scheduleDefinitionsHasBeenSet = true;
    }
    XmlNode scheduleIdentifierNode = resultNode.FirstChild("ScheduleIdentifier");
    if(!scheduleIdentifierNode.IsNull())
    {
      m_scheduleIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleIdentifierNode.GetText());
      m_scheduleIdentifierHasBeenSet = true;
    }
    XmlNode scheduleDescriptionNode = resultNode.FirstChild("ScheduleDescription");
    if(!scheduleDescriptionNode.IsNull())
    {
      m_scheduleDescription = Aws::Utils::Xml::DecodeEscapedXmlText(scheduleDescriptionNode.GetText());
      m_scheduleDescriptionHasBeenSet = true;
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
    XmlNode nextInvocationsNode = resultNode.FirstChild("NextInvocations");
    if(!nextInvocationsNode.IsNull())
    {
      XmlNode nextInvocationsMember = nextInvocationsNode.FirstChild("SnapshotTime");
      while(!nextInvocationsMember.IsNull())
      {
        m_nextInvocations.push_back(DateTime(StringUtils::Trim(nextInvocationsMember.GetText().c_str()).c_str(), Aws::Utils::DateFormat::ISO_8601));
        nextInvocationsMember = nextInvocationsMember.NextNode("SnapshotTime");
      }

      m_nextInvocationsHasBeenSet = true;
    }
    XmlNode associatedClusterCountNode = resultNode.FirstChild("AssociatedClusterCount");
    if(!associatedClusterCountNode.IsNull())
    {
      m_associatedClusterCount = StringUtils::ConvertToInt32(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(associatedClusterCountNode.GetText()).c_str()).c_str());
      m_associatedClusterCountHasBeenSet = true;
    }
    XmlNode associatedClustersNode = resultNode.FirstChild("AssociatedClusters");
    if(!associatedClustersNode.IsNull())
    {
      XmlNode associatedClustersMember = associatedClustersNode.FirstChild("ClusterAssociatedToSchedule");
      while(!associatedClustersMember.IsNull())
      {
        m_associatedClusters.push_back(associatedClustersMember);
        associatedClustersMember = associatedClustersMember.NextNode("ClusterAssociatedToSchedule");
      }

      m_associatedClustersHasBeenSet = true;
    }
  }

  return *this;
}

void SnapshotSchedule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_scheduleDefinitionsHasBeenSet)
  {
      unsigned scheduleDefinitionsIdx = 1;
      for(auto& item : m_scheduleDefinitions)
      {
        oStream << location << index << locationValue << ".ScheduleDefinition." << scheduleDefinitionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }

  if(m_scheduleIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }

  if(m_scheduleDescriptionHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduleDescription=" << StringUtils::URLEncode(m_scheduleDescription.c_str()) << "&";
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

  if(m_nextInvocationsHasBeenSet)
  {
      unsigned nextInvocationsIdx = 1;
      for(auto& item : m_nextInvocations)
      {
        oStream << location << index << locationValue << ".SnapshotTime." << nextInvocationsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }

  if(m_associatedClusterCountHasBeenSet)
  {
      oStream << location << index << locationValue << ".AssociatedClusterCount=" << m_associatedClusterCount << "&";
  }

  if(m_associatedClustersHasBeenSet)
  {
      unsigned associatedClustersIdx = 1;
      for(auto& item : m_associatedClusters)
      {
        Aws::StringStream associatedClustersSs;
        associatedClustersSs << location << index << locationValue << ".ClusterAssociatedToSchedule." << associatedClustersIdx++;
        item.OutputToStream(oStream, associatedClustersSs.str().c_str());
      }
  }

  if(m_responseMetadataHasBeenSet)
  {
      Aws::StringStream responseMetadataLocationAndMemberSs;
      responseMetadataLocationAndMemberSs << location << index << locationValue << ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMemberSs.str().c_str());
  }

}

void SnapshotSchedule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_scheduleDefinitionsHasBeenSet)
  {
      unsigned scheduleDefinitionsIdx = 1;
      for(auto& item : m_scheduleDefinitions)
      {
        oStream << location << ".ScheduleDefinition." << scheduleDefinitionsIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
      }
  }
  if(m_scheduleIdentifierHasBeenSet)
  {
      oStream << location << ".ScheduleIdentifier=" << StringUtils::URLEncode(m_scheduleIdentifier.c_str()) << "&";
  }
  if(m_scheduleDescriptionHasBeenSet)
  {
      oStream << location << ".ScheduleDescription=" << StringUtils::URLEncode(m_scheduleDescription.c_str()) << "&";
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
  if(m_nextInvocationsHasBeenSet)
  {
      unsigned nextInvocationsIdx = 1;
      for(auto& item : m_nextInvocations)
      {
        oStream << location << ".SnapshotTime." << nextInvocationsIdx++ << "=" << StringUtils::URLEncode(item.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
      }
  }
  if(m_associatedClusterCountHasBeenSet)
  {
      oStream << location << ".AssociatedClusterCount=" << m_associatedClusterCount << "&";
  }
  if(m_associatedClustersHasBeenSet)
  {
      unsigned associatedClustersIdx = 1;
      for(auto& item : m_associatedClusters)
      {
        Aws::StringStream associatedClustersSs;
        associatedClustersSs << location <<  ".ClusterAssociatedToSchedule." << associatedClustersIdx++;
        item.OutputToStream(oStream, associatedClustersSs.str().c_str());
      }
  }
  if(m_responseMetadataHasBeenSet)
  {
      Aws::String responseMetadataLocationAndMember(location);
      responseMetadataLocationAndMember += ".ResponseMetadata";
      m_responseMetadata.OutputToStream(oStream, responseMetadataLocationAndMember.c_str());
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
