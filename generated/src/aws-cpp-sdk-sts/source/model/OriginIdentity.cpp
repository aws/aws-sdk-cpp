/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/OriginIdentity.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {

OriginIdentity::OriginIdentity(const XmlNode& xmlNode) { *this = xmlNode; }

OriginIdentity& OriginIdentity::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode subjectNode = resultNode.FirstChild("Subject");
    if (!subjectNode.IsNull()) {
      m_subject = Aws::Utils::Xml::DecodeEscapedXmlText(subjectNode.GetText());
      m_subjectHasBeenSet = true;
    }
    XmlNode subjectTypeNode = resultNode.FirstChild("SubjectType");
    if (!subjectTypeNode.IsNull()) {
      m_subjectType = Aws::Utils::Xml::DecodeEscapedXmlText(subjectTypeNode.GetText());
      m_subjectTypeHasBeenSet = true;
    }
    XmlNode issuerNode = resultNode.FirstChild("Issuer");
    if (!issuerNode.IsNull()) {
      m_issuer = Aws::Utils::Xml::DecodeEscapedXmlText(issuerNode.GetText());
      m_issuerHasBeenSet = true;
    }
    XmlNode federatedProviderArnNode = resultNode.FirstChild("FederatedProviderArn");
    if (!federatedProviderArnNode.IsNull()) {
      m_federatedProviderArn = Aws::Utils::Xml::DecodeEscapedXmlText(federatedProviderArnNode.GetText());
      m_federatedProviderArnHasBeenSet = true;
    }
  }

  return *this;
}

void OriginIdentity::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_subjectHasBeenSet) {
    oStream << location << index << locationValue << ".Subject=" << StringUtils::URLEncode(m_subject.c_str()) << "&";
  }

  if (m_subjectTypeHasBeenSet) {
    oStream << location << index << locationValue << ".SubjectType=" << StringUtils::URLEncode(m_subjectType.c_str()) << "&";
  }

  if (m_issuerHasBeenSet) {
    oStream << location << index << locationValue << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }

  if (m_federatedProviderArnHasBeenSet) {
    oStream << location << index << locationValue << ".FederatedProviderArn=" << StringUtils::URLEncode(m_federatedProviderArn.c_str())
            << "&";
  }
}

void OriginIdentity::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_subjectHasBeenSet) {
    oStream << location << ".Subject=" << StringUtils::URLEncode(m_subject.c_str()) << "&";
  }
  if (m_subjectTypeHasBeenSet) {
    oStream << location << ".SubjectType=" << StringUtils::URLEncode(m_subjectType.c_str()) << "&";
  }
  if (m_issuerHasBeenSet) {
    oStream << location << ".Issuer=" << StringUtils::URLEncode(m_issuer.c_str()) << "&";
  }
  if (m_federatedProviderArnHasBeenSet) {
    oStream << location << ".FederatedProviderArn=" << StringUtils::URLEncode(m_federatedProviderArn.c_str()) << "&";
  }
}

}  // namespace Model
}  // namespace STS
}  // namespace Aws
