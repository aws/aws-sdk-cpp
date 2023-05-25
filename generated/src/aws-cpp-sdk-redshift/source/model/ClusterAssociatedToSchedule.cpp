/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/ClusterAssociatedToSchedule.h>
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

ClusterAssociatedToSchedule::ClusterAssociatedToSchedule() : 
    m_clusterIdentifierHasBeenSet(false),
    m_scheduleAssociationState(ScheduleState::NOT_SET),
    m_scheduleAssociationStateHasBeenSet(false)
{
}

ClusterAssociatedToSchedule::ClusterAssociatedToSchedule(const XmlNode& xmlNode) : 
    m_clusterIdentifierHasBeenSet(false),
    m_scheduleAssociationState(ScheduleState::NOT_SET),
    m_scheduleAssociationStateHasBeenSet(false)
{
  *this = xmlNode;
}

ClusterAssociatedToSchedule& ClusterAssociatedToSchedule::operator =(const XmlNode& xmlNode)
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
    XmlNode scheduleAssociationStateNode = resultNode.FirstChild("ScheduleAssociationState");
    if(!scheduleAssociationStateNode.IsNull())
    {
      m_scheduleAssociationState = ScheduleStateMapper::GetScheduleStateForName(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(scheduleAssociationStateNode.GetText()).c_str()).c_str());
      m_scheduleAssociationStateHasBeenSet = true;
    }
  }

  return *this;
}

void ClusterAssociatedToSchedule::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << index << locationValue << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }

  if(m_scheduleAssociationStateHasBeenSet)
  {
      oStream << location << index << locationValue << ".ScheduleAssociationState=" << ScheduleStateMapper::GetNameForScheduleState(m_scheduleAssociationState) << "&";
  }

}

void ClusterAssociatedToSchedule::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_clusterIdentifierHasBeenSet)
  {
      oStream << location << ".ClusterIdentifier=" << StringUtils::URLEncode(m_clusterIdentifier.c_str()) << "&";
  }
  if(m_scheduleAssociationStateHasBeenSet)
  {
      oStream << location << ".ScheduleAssociationState=" << ScheduleStateMapper::GetNameForScheduleState(m_scheduleAssociationState) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
