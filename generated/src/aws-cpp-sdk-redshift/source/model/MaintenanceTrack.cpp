/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/MaintenanceTrack.h>
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

MaintenanceTrack::MaintenanceTrack() : 
    m_maintenanceTrackNameHasBeenSet(false),
    m_databaseVersionHasBeenSet(false),
    m_updateTargetsHasBeenSet(false)
{
}

MaintenanceTrack::MaintenanceTrack(const XmlNode& xmlNode) : 
    m_maintenanceTrackNameHasBeenSet(false),
    m_databaseVersionHasBeenSet(false),
    m_updateTargetsHasBeenSet(false)
{
  *this = xmlNode;
}

MaintenanceTrack& MaintenanceTrack::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode maintenanceTrackNameNode = resultNode.FirstChild("MaintenanceTrackName");
    if(!maintenanceTrackNameNode.IsNull())
    {
      m_maintenanceTrackName = Aws::Utils::Xml::DecodeEscapedXmlText(maintenanceTrackNameNode.GetText());
      m_maintenanceTrackNameHasBeenSet = true;
    }
    XmlNode databaseVersionNode = resultNode.FirstChild("DatabaseVersion");
    if(!databaseVersionNode.IsNull())
    {
      m_databaseVersion = Aws::Utils::Xml::DecodeEscapedXmlText(databaseVersionNode.GetText());
      m_databaseVersionHasBeenSet = true;
    }
    XmlNode updateTargetsNode = resultNode.FirstChild("UpdateTargets");
    if(!updateTargetsNode.IsNull())
    {
      XmlNode updateTargetsMember = updateTargetsNode.FirstChild("UpdateTarget");
      while(!updateTargetsMember.IsNull())
      {
        m_updateTargets.push_back(updateTargetsMember);
        updateTargetsMember = updateTargetsMember.NextNode("UpdateTarget");
      }

      m_updateTargetsHasBeenSet = true;
    }
  }

  return *this;
}

void MaintenanceTrack::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << index << locationValue << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }

  if(m_databaseVersionHasBeenSet)
  {
      oStream << location << index << locationValue << ".DatabaseVersion=" << StringUtils::URLEncode(m_databaseVersion.c_str()) << "&";
  }

  if(m_updateTargetsHasBeenSet)
  {
      unsigned updateTargetsIdx = 1;
      for(auto& item : m_updateTargets)
      {
        Aws::StringStream updateTargetsSs;
        updateTargetsSs << location << index << locationValue << ".UpdateTarget." << updateTargetsIdx++;
        item.OutputToStream(oStream, updateTargetsSs.str().c_str());
      }
  }

}

void MaintenanceTrack::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_maintenanceTrackNameHasBeenSet)
  {
      oStream << location << ".MaintenanceTrackName=" << StringUtils::URLEncode(m_maintenanceTrackName.c_str()) << "&";
  }
  if(m_databaseVersionHasBeenSet)
  {
      oStream << location << ".DatabaseVersion=" << StringUtils::URLEncode(m_databaseVersion.c_str()) << "&";
  }
  if(m_updateTargetsHasBeenSet)
  {
      unsigned updateTargetsIdx = 1;
      for(auto& item : m_updateTargets)
      {
        Aws::StringStream updateTargetsSs;
        updateTargetsSs << location <<  ".UpdateTarget." << updateTargetsIdx++;
        item.OutputToStream(oStream, updateTargetsSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
