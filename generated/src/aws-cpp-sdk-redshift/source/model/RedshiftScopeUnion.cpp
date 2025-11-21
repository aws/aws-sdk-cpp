/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/RedshiftScopeUnion.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Redshift {
namespace Model {

RedshiftScopeUnion::RedshiftScopeUnion(const XmlNode& xmlNode) { *this = xmlNode; }

RedshiftScopeUnion& RedshiftScopeUnion::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode connectNode = resultNode.FirstChild("Connect");
    if (!connectNode.IsNull()) {
      m_connect = connectNode;
      m_connectHasBeenSet = true;
    }
  }

  return *this;
}

void RedshiftScopeUnion::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_connectHasBeenSet) {
    Aws::StringStream connectLocationAndMemberSs;
    connectLocationAndMemberSs << location << index << locationValue << ".Connect";
    m_connect.OutputToStream(oStream, connectLocationAndMemberSs.str().c_str());
  }
}

void RedshiftScopeUnion::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_connectHasBeenSet) {
    Aws::String connectLocationAndMember(location);
    connectLocationAndMember += ".Connect";
    m_connect.OutputToStream(oStream, connectLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
