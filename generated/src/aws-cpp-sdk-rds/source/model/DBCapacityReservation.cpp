/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/DBCapacityReservation.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

DBCapacityReservation::DBCapacityReservation(const XmlNode& xmlNode) { *this = xmlNode; }

DBCapacityReservation& DBCapacityReservation::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode dBCapacityReservationNameNode = resultNode.FirstChild("DBCapacityReservationName");
    if (!dBCapacityReservationNameNode.IsNull()) {
      m_dBCapacityReservationName = Aws::Utils::Xml::DecodeEscapedXmlText(dBCapacityReservationNameNode.GetText());
      m_dBCapacityReservationNameHasBeenSet = true;
    }
    XmlNode dBInstanceClassNode = resultNode.FirstChild("DBInstanceClass");
    if (!dBInstanceClassNode.IsNull()) {
      m_dBInstanceClass = Aws::Utils::Xml::DecodeEscapedXmlText(dBInstanceClassNode.GetText());
      m_dBInstanceClassHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if (!engineNode.IsNull()) {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode licenseModelNode = resultNode.FirstChild("LicenseModel");
    if (!licenseModelNode.IsNull()) {
      m_licenseModel = Aws::Utils::Xml::DecodeEscapedXmlText(licenseModelNode.GetText());
      m_licenseModelHasBeenSet = true;
    }
    XmlNode reservedCapacityPerAvailabilityZoneNode = resultNode.FirstChild("ReservedCapacityPerAvailabilityZone");
    if (!reservedCapacityPerAvailabilityZoneNode.IsNull()) {
      m_reservedCapacityPerAvailabilityZone = StringUtils::ConvertToInt32(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(reservedCapacityPerAvailabilityZoneNode.GetText()).c_str()).c_str());
      m_reservedCapacityPerAvailabilityZoneHasBeenSet = true;
    }
    XmlNode availableCapacityPerAvailabilityZoneListNode = resultNode.FirstChild("AvailableCapacityPerAvailabilityZoneList");
    if (!availableCapacityPerAvailabilityZoneListNode.IsNull()) {
      XmlNode availableCapacityPerAvailabilityZoneListMember =
          availableCapacityPerAvailabilityZoneListNode.FirstChild("AvailableCapacityPerAvailabilityZone");
      m_availableCapacityPerAvailabilityZoneListHasBeenSet = !availableCapacityPerAvailabilityZoneListMember.IsNull();
      while (!availableCapacityPerAvailabilityZoneListMember.IsNull()) {
        m_availableCapacityPerAvailabilityZoneList.push_back(availableCapacityPerAvailabilityZoneListMember);
        availableCapacityPerAvailabilityZoneListMember =
            availableCapacityPerAvailabilityZoneListMember.NextNode("AvailableCapacityPerAvailabilityZone");
      }

      m_availableCapacityPerAvailabilityZoneListHasBeenSet = true;
    }
    XmlNode endDateNode = resultNode.FirstChild("EndDate");
    if (!endDateNode.IsNull()) {
      m_endDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(endDateNode.GetText()).c_str()).c_str(),
                           Aws::Utils::DateFormat::ISO_8601);
      m_endDateHasBeenSet = true;
    }
    XmlNode createDateNode = resultNode.FirstChild("CreateDate");
    if (!createDateNode.IsNull()) {
      m_createDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(createDateNode.GetText()).c_str()).c_str(),
                              Aws::Utils::DateFormat::ISO_8601);
      m_createDateHasBeenSet = true;
    }
    XmlNode startDateNode = resultNode.FirstChild("StartDate");
    if (!startDateNode.IsNull()) {
      m_startDate = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(startDateNode.GetText()).c_str()).c_str(),
                             Aws::Utils::DateFormat::ISO_8601);
      m_startDateHasBeenSet = true;
    }
    XmlNode commitmentInfoNode = resultNode.FirstChild("CommitmentInfo");
    if (!commitmentInfoNode.IsNull()) {
      m_commitmentInfo = commitmentInfoNode;
      m_commitmentInfoHasBeenSet = true;
    }
    XmlNode stateNode = resultNode.FirstChild("State");
    if (!stateNode.IsNull()) {
      m_state = DBCapacityReservationStateMapper::GetDBCapacityReservationStateForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(stateNode.GetText()).c_str()));
      m_stateHasBeenSet = true;
    }
    XmlNode dBCapacityReservationArnNode = resultNode.FirstChild("DBCapacityReservationArn");
    if (!dBCapacityReservationArnNode.IsNull()) {
      m_dBCapacityReservationArn = Aws::Utils::Xml::DecodeEscapedXmlText(dBCapacityReservationArnNode.GetText());
      m_dBCapacityReservationArnHasBeenSet = true;
    }
    XmlNode dBCapacityReservationIdentifierNode = resultNode.FirstChild("DBCapacityReservationIdentifier");
    if (!dBCapacityReservationIdentifierNode.IsNull()) {
      m_dBCapacityReservationIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(dBCapacityReservationIdentifierNode.GetText());
      m_dBCapacityReservationIdentifierHasBeenSet = true;
    }
    XmlNode tagListNode = resultNode.FirstChild("TagList");
    if (!tagListNode.IsNull()) {
      XmlNode tagListMember = tagListNode.FirstChild("Tag");
      m_tagListHasBeenSet = !tagListMember.IsNull();
      while (!tagListMember.IsNull()) {
        m_tagList.push_back(tagListMember);
        tagListMember = tagListMember.NextNode("Tag");
      }

      m_tagListHasBeenSet = true;
    }
  }

  return *this;
}

void DBCapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_dBCapacityReservationNameHasBeenSet) {
    oStream << location << index << locationValue
            << ".DBCapacityReservationName=" << StringUtils::URLEncode(m_dBCapacityReservationName.c_str()) << "&";
  }

  if (m_dBInstanceClassHasBeenSet) {
    oStream << location << index << locationValue << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }

  if (m_engineHasBeenSet) {
    oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if (m_licenseModelHasBeenSet) {
    oStream << location << index << locationValue << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }

  if (m_reservedCapacityPerAvailabilityZoneHasBeenSet) {
    oStream << location << index << locationValue << ".ReservedCapacityPerAvailabilityZone=" << m_reservedCapacityPerAvailabilityZone
            << "&";
  }

  if (m_availableCapacityPerAvailabilityZoneListHasBeenSet) {
    unsigned availableCapacityPerAvailabilityZoneListIdx = 1;
    for (auto& item : m_availableCapacityPerAvailabilityZoneList) {
      Aws::StringStream availableCapacityPerAvailabilityZoneListSs;
      availableCapacityPerAvailabilityZoneListSs << location << index << locationValue
                                                 << ".AvailableCapacityPerAvailabilityZoneList.AvailableCapacityPerAvailabilityZone."
                                                 << availableCapacityPerAvailabilityZoneListIdx++;
      item.OutputToStream(oStream, availableCapacityPerAvailabilityZoneListSs.str().c_str());
    }
  }

  if (m_endDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_createDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_startDateHasBeenSet) {
    oStream << location << index << locationValue
            << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }

  if (m_commitmentInfoHasBeenSet) {
    Aws::StringStream commitmentInfoLocationAndMemberSs;
    commitmentInfoLocationAndMemberSs << location << index << locationValue << ".CommitmentInfo";
    m_commitmentInfo.OutputToStream(oStream, commitmentInfoLocationAndMemberSs.str().c_str());
  }

  if (m_stateHasBeenSet) {
    oStream << location << index << locationValue
            << ".State=" << StringUtils::URLEncode(DBCapacityReservationStateMapper::GetNameForDBCapacityReservationState(m_state)) << "&";
  }

  if (m_dBCapacityReservationArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".DBCapacityReservationArn=" << StringUtils::URLEncode(m_dBCapacityReservationArn.c_str()) << "&";
  }

  if (m_dBCapacityReservationIdentifierHasBeenSet) {
    oStream << location << index << locationValue
            << ".DBCapacityReservationIdentifier=" << StringUtils::URLEncode(m_dBCapacityReservationIdentifier.c_str()) << "&";
  }

  if (m_tagListHasBeenSet) {
    unsigned tagListIdx = 1;
    for (auto& item : m_tagList) {
      Aws::StringStream tagListSs;
      tagListSs << location << index << locationValue << ".TagList.Tag." << tagListIdx++;
      item.OutputToStream(oStream, tagListSs.str().c_str());
    }
  }
}

void DBCapacityReservation::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_dBCapacityReservationNameHasBeenSet) {
    oStream << location << ".DBCapacityReservationName=" << StringUtils::URLEncode(m_dBCapacityReservationName.c_str()) << "&";
  }
  if (m_dBInstanceClassHasBeenSet) {
    oStream << location << ".DBInstanceClass=" << StringUtils::URLEncode(m_dBInstanceClass.c_str()) << "&";
  }
  if (m_engineHasBeenSet) {
    oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if (m_licenseModelHasBeenSet) {
    oStream << location << ".LicenseModel=" << StringUtils::URLEncode(m_licenseModel.c_str()) << "&";
  }
  if (m_reservedCapacityPerAvailabilityZoneHasBeenSet) {
    oStream << location << ".ReservedCapacityPerAvailabilityZone=" << m_reservedCapacityPerAvailabilityZone << "&";
  }
  if (m_availableCapacityPerAvailabilityZoneListHasBeenSet) {
    unsigned availableCapacityPerAvailabilityZoneListIdx = 1;
    for (auto& item : m_availableCapacityPerAvailabilityZoneList) {
      Aws::StringStream availableCapacityPerAvailabilityZoneListSs;
      availableCapacityPerAvailabilityZoneListSs << location
                                                 << ".AvailableCapacityPerAvailabilityZoneList.AvailableCapacityPerAvailabilityZone."
                                                 << availableCapacityPerAvailabilityZoneListIdx++;
      item.OutputToStream(oStream, availableCapacityPerAvailabilityZoneListSs.str().c_str());
    }
  }
  if (m_endDateHasBeenSet) {
    oStream << location << ".EndDate=" << StringUtils::URLEncode(m_endDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str()) << "&";
  }
  if (m_createDateHasBeenSet) {
    oStream << location << ".CreateDate=" << StringUtils::URLEncode(m_createDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_startDateHasBeenSet) {
    oStream << location << ".StartDate=" << StringUtils::URLEncode(m_startDate.ToGmtString(Aws::Utils::DateFormat::ISO_8601).c_str())
            << "&";
  }
  if (m_commitmentInfoHasBeenSet) {
    Aws::String commitmentInfoLocationAndMember(location);
    commitmentInfoLocationAndMember += ".CommitmentInfo";
    m_commitmentInfo.OutputToStream(oStream, commitmentInfoLocationAndMember.c_str());
  }
  if (m_stateHasBeenSet) {
    oStream << location
            << ".State=" << StringUtils::URLEncode(DBCapacityReservationStateMapper::GetNameForDBCapacityReservationState(m_state)) << "&";
  }
  if (m_dBCapacityReservationArnHasBeenSet) {
    oStream << location << ".DBCapacityReservationArn=" << StringUtils::URLEncode(m_dBCapacityReservationArn.c_str()) << "&";
  }
  if (m_dBCapacityReservationIdentifierHasBeenSet) {
    oStream << location << ".DBCapacityReservationIdentifier=" << StringUtils::URLEncode(m_dBCapacityReservationIdentifier.c_str()) << "&";
  }
  if (m_tagListHasBeenSet) {
    unsigned tagListIdx = 1;
    for (auto& item : m_tagList) {
      Aws::StringStream tagListSs;
      tagListSs << location << ".TagList.Tag." << tagListIdx++;
      item.OutputToStream(oStream, tagListSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
