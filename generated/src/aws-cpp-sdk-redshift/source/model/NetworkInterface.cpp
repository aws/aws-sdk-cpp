/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/redshift/model/NetworkInterface.h>
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

NetworkInterface::NetworkInterface() : 
    m_networkInterfaceIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
}

NetworkInterface::NetworkInterface(const XmlNode& xmlNode) : 
    m_networkInterfaceIdHasBeenSet(false),
    m_subnetIdHasBeenSet(false),
    m_privateIpAddressHasBeenSet(false),
    m_availabilityZoneHasBeenSet(false)
{
  *this = xmlNode;
}

NetworkInterface& NetworkInterface::operator =(const XmlNode& xmlNode)
{
  XmlNode resultNode = xmlNode;

  if(!resultNode.IsNull())
  {
    XmlNode networkInterfaceIdNode = resultNode.FirstChild("NetworkInterfaceId");
    if(!networkInterfaceIdNode.IsNull())
    {
      m_networkInterfaceId = Aws::Utils::Xml::DecodeEscapedXmlText(networkInterfaceIdNode.GetText());
      m_networkInterfaceIdHasBeenSet = true;
    }
    XmlNode subnetIdNode = resultNode.FirstChild("SubnetId");
    if(!subnetIdNode.IsNull())
    {
      m_subnetId = Aws::Utils::Xml::DecodeEscapedXmlText(subnetIdNode.GetText());
      m_subnetIdHasBeenSet = true;
    }
    XmlNode privateIpAddressNode = resultNode.FirstChild("PrivateIpAddress");
    if(!privateIpAddressNode.IsNull())
    {
      m_privateIpAddress = Aws::Utils::Xml::DecodeEscapedXmlText(privateIpAddressNode.GetText());
      m_privateIpAddressHasBeenSet = true;
    }
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if(!availabilityZoneNode.IsNull())
    {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
  }

  return *this;
}

void NetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const
{
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }

  if(m_subnetIdHasBeenSet)
  {
      oStream << location << index << locationValue << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }

  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << index << locationValue << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }

  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

}

void NetworkInterface::OutputToStream(Aws::OStream& oStream, const char* location) const
{
  if(m_networkInterfaceIdHasBeenSet)
  {
      oStream << location << ".NetworkInterfaceId=" << StringUtils::URLEncode(m_networkInterfaceId.c_str()) << "&";
  }
  if(m_subnetIdHasBeenSet)
  {
      oStream << location << ".SubnetId=" << StringUtils::URLEncode(m_subnetId.c_str()) << "&";
  }
  if(m_privateIpAddressHasBeenSet)
  {
      oStream << location << ".PrivateIpAddress=" << StringUtils::URLEncode(m_privateIpAddress.c_str()) << "&";
  }
  if(m_availabilityZoneHasBeenSet)
  {
      oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
}

} // namespace Model
} // namespace Redshift
} // namespace Aws
