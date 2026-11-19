/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/ScopedSession.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {

ScopedSession::ScopedSession(const XmlNode& xmlNode) { *this = xmlNode; }

ScopedSession& ScopedSession::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode scopedSessionIdNode = resultNode.FirstChild("ScopedSessionId");
    if (!scopedSessionIdNode.IsNull()) {
      m_scopedSessionId = Aws::Utils::Xml::DecodeEscapedXmlText(scopedSessionIdNode.GetText());
      m_scopedSessionIdHasBeenSet = true;
    }
    XmlNode arnNode = resultNode.FirstChild("Arn");
    if (!arnNode.IsNull()) {
      m_arn = Aws::Utils::Xml::DecodeEscapedXmlText(arnNode.GetText());
      m_arnHasBeenSet = true;
    }
  }

  return *this;
}

void ScopedSession::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_scopedSessionIdHasBeenSet) {
    oStream << location << index << locationValue << ".ScopedSessionId=" << StringUtils::URLEncode(m_scopedSessionId.c_str()) << "&";
  }

  if (m_arnHasBeenSet) {
    oStream << location << index << locationValue << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
}

void ScopedSession::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_scopedSessionIdHasBeenSet) {
    oStream << location << ".ScopedSessionId=" << StringUtils::URLEncode(m_scopedSessionId.c_str()) << "&";
  }
  if (m_arnHasBeenSet) {
    oStream << location << ".Arn=" << StringUtils::URLEncode(m_arn.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace STS
}  // namespace Aws
