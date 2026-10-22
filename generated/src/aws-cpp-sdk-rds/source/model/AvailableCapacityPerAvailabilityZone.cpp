/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/AvailableCapacityPerAvailabilityZone.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

AvailableCapacityPerAvailabilityZone::AvailableCapacityPerAvailabilityZone(const XmlNode& xmlNode) { *this = xmlNode; }

AvailableCapacityPerAvailabilityZone& AvailableCapacityPerAvailabilityZone::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode availabilityZoneNode = resultNode.FirstChild("AvailabilityZone");
    if (!availabilityZoneNode.IsNull()) {
      m_availabilityZone = Aws::Utils::Xml::DecodeEscapedXmlText(availabilityZoneNode.GetText());
      m_availabilityZoneHasBeenSet = true;
    }
    XmlNode availableCapacityNode = resultNode.FirstChild("AvailableCapacity");
    if (!availableCapacityNode.IsNull()) {
      m_availableCapacity = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(availableCapacityNode.GetText()).c_str()).c_str());
      m_availableCapacityHasBeenSet = true;
    }
  }

  return *this;
}

void AvailableCapacityPerAvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                          const char* locationValue) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }

  if (m_availableCapacityHasBeenSet) {
    oStream << location << index << locationValue << ".AvailableCapacity=" << m_availableCapacity << "&";
  }
}

void AvailableCapacityPerAvailabilityZone::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_availabilityZoneHasBeenSet) {
    oStream << location << ".AvailabilityZone=" << StringUtils::URLEncode(m_availabilityZone.c_str()) << "&";
  }
  if (m_availableCapacityHasBeenSet) {
    oStream << location << ".AvailableCapacity=" << m_availableCapacity << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
