/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/SecondaryClusterInfo.h>
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

SecondaryClusterInfo::SecondaryClusterInfo() : 
    m_availabilityZoneHasBeenSet(false),
    m_clusterNodesHasBeenSet(false)
{
}

SecondaryClusterInfo::SecondaryClusterInfo(const XmlNode& xmlNode) : 
    m_availabilityZoneHasBeenSet(false),
    m_clusterNodesHasBeenSet(false)
{
  *this = xmlNode;
}

SecondaryClusterInfo& SecondaryClusterInfo::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode clusterNodesNode = resultNode.FirstChild("ClusterNodes");
    if(!clusterNodesNode.IsNull())
    {
      XmlNode clusterNodesMember = clusterNodesNode.FirstChild("member");
      while(!clusterNodesMember.IsNull())
      {
        m_clusterNodes.push_back(clusterNodesMember);
        clusterNodesMember = clusterNodesMember.NextNode("member");
      }

      m_clusterNodesHasBeenSet = true;
    }
  }

  return *this;
}

void SecondaryClusterInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if(m_clusterNodesHasBeenSet)
  {
      unsigned clusterNodesIdx = 1;
      for(auto& item : m_clusterNodes)
      {
        Aws::StringStream clusterNodesSs;
        clusterNodesSs << location << index << locationValue << ".ClusterNodes.member." << clusterNodesIdx++;
        item.OutputToStream(oStream, clusterNodesSs.str().c_str());
      }
  }

}

void SecondaryClusterInfo::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if(m_clusterNodesHasBeenSet)
  {
      unsigned clusterNodesIdx = 1;
      for(auto& item : m_clusterNodes)
      {
        Aws::StringStream clusterNodesSs;
        clusterNodesSs << location <<  ".ClusterNodes.member." << clusterNodesIdx++;
        item.OutputToStream(oStream, clusterNodesSs.str().c_str());
      }
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
