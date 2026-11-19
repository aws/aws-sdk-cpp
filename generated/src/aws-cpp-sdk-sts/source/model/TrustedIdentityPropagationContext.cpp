/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/TrustedIdentityPropagationContext.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {

TrustedIdentityPropagationContext::TrustedIdentityPropagationContext(const XmlNode& xmlNode) { *this = xmlNode; }

TrustedIdentityPropagationContext& TrustedIdentityPropagationContext::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode originIdentityNode = resultNode.FirstChild("OriginIdentity");
    if (!originIdentityNode.IsNull()) {
      m_originIdentity = originIdentityNode;
      m_originIdentityHasBeenSet = true;
    }
    XmlNode transactionContextNode = resultNode.FirstChild("TransactionContext");
    if (!transactionContextNode.IsNull()) {
      m_transactionContext = transactionContextNode;
      m_transactionContextHasBeenSet = true;
    }
  }

  return *this;
}

void TrustedIdentityPropagationContext::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index,
                                                       const char* locationValue) const {
  if (m_originIdentityHasBeenSet) {
    Aws::StringStream originIdentityLocationAndMemberSs;
    originIdentityLocationAndMemberSs << location << index << locationValue << ".OriginIdentity";
    m_originIdentity.OutputToStream(oStream, originIdentityLocationAndMemberSs.str().c_str());
  }

  if (m_transactionContextHasBeenSet) {
    Aws::StringStream transactionContextLocationAndMemberSs;
    transactionContextLocationAndMemberSs << location << index << locationValue << ".TransactionContext";
    m_transactionContext.OutputToStream(oStream, transactionContextLocationAndMemberSs.str().c_str());
  }
}

void TrustedIdentityPropagationContext::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_originIdentityHasBeenSet) {
    Aws::String originIdentityLocationAndMember(location);
    originIdentityLocationAndMember += ".OriginIdentity";
    m_originIdentity.OutputToStream(oStream, originIdentityLocationAndMember.c_str());
  }
  if (m_transactionContextHasBeenSet) {
    Aws::String transactionContextLocationAndMember(location);
    transactionContextLocationAndMember += ".TransactionContext";
    m_transactionContext.OutputToStream(oStream, transactionContextLocationAndMember.c_str());
  }
}

}  // namespace Model
}  // namespace STS
}  // namespace Aws
