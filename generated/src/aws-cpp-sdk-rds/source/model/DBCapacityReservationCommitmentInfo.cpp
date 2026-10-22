/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/DBCapacityReservationCommitmentInfo.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

DBCapacityReservationCommitmentInfo::DBCapacityReservationCommitmentInfo(const XmlNode& xmlNode) { *this = xmlNode; }

DBCapacityReservationCommitmentInfo& DBCapacityReservationCommitmentInfo::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode committedCapacityPerAvailabilityZoneNode = resultNode.FirstChild("CommittedCapacityPerAvailabilityZone");
    if (!committedCapacityPerAvailabilityZoneNode.IsNull()) {
      m_committedCapacityPerAvailabilityZone = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(committedCapacityPerAvailabilityZoneNode.GetText()).c_str()).c_str());
      m_committedCapacityPerAvailabilityZoneHasBeenSet = true;
    }
    XmlNode commitmentEndDateNode = resultNode.FirstChild("CommitmentEndDate");
    if (!commitmentEndDateNode.IsNull()) {
      m_commitmentEndDate =
          DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(commitmentEndDateNode.GetText()).c_str()).c_str(),
                   Aws::Utils::DateFormat::ISO_8601);
      m_commitmentEndDateHasBeenSet = true;
    }
  }

  return *this;
}

void DBCapacityReservationCommitmentInfo::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                         const char* locationValue) const {
  if (m_committedCapacityPerAvailabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".CommittedCapacityPerAvailabilityZone=" << m_committedCapacityPerAvailabilityZone
            << "&";
  }

  if (m_commitmentEndDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".CommitmentEndDate=" << StringUtils::URLEncode(m_commitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

void DBCapacityReservationCommitmentInfo::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_committedCapacityPerAvailabilityZoneHasBeenSet) {
    oStream << location << ".CommittedCapacityPerAvailabilityZone=" << m_committedCapacityPerAvailabilityZone << "&";
  }
  if (m_commitmentEndDateHasBeenSet) {
    oStream << location
            << ".CommitmentEndDate=" << StringUtils::URLEncode(m_commitmentEndDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
