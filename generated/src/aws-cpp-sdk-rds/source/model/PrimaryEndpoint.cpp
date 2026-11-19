/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/PrimaryEndpoint.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

PrimaryEndpoint::PrimaryEndpoint(const XmlNode& xmlNode) { *this = xmlNode; }

PrimaryEndpoint& PrimaryEndpoint::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode addressNode = resultNode.FirstChild("Address");
    if (!addressNode.IsNull()) {
      m_address = Aws::Utils::Xml::DecodeEscapedXmlText(addressNode.GetText());
      m_addressHasBeenSet = true;
    }
    XmlNode hostedZoneIdNode = resultNode.FirstChild("HostedZoneId");
    if (!hostedZoneIdNode.IsNull()) {
      m_hostedZoneId = Aws::Utils::Xml::DecodeEscapedXmlText(hostedZoneIdNode.GetText());
      m_hostedZoneIdHasBeenSet = true;
    }
  }

  return *this;
}

void PrimaryEndpoint::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_addressHasBeenSet) {
    oStream << location << index << locationValue << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }

  if (m_hostedZoneIdHasBeenSet) {
    oStream << location << index << locationValue << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}

void PrimaryEndpoint::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_addressHasBeenSet) {
    oStream << location << ".Address=" << StringUtils::URLEncode(m_address.c_str()) << "&";
  }
  if (m_hostedZoneIdHasBeenSet) {
    oStream << location << ".HostedZoneId=" << StringUtils::URLEncode(m_hostedZoneId.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace RDS
}  // namespace Aws
