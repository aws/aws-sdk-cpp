/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/sts/model/TransactionContext.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace STS {
namespace Model {

TransactionContext::TransactionContext(const XmlNode& xmlNode) { *this = xmlNode; }

TransactionContext& TransactionContext::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode identityProviderNode = resultNode.FirstChild("IdentityProvider");

    if (!identityProviderNode.IsNull()) {
      XmlNode identityProviderEntry = identityProviderNode.FirstChild("entry");
      m_identityProviderHasBeenSet = !identityProviderEntry.IsNull();
      while (!identityProviderEntry.IsNull()) {
        XmlNode keyNode = identityProviderEntry.FirstChild("key");
        XmlNode valueNode = identityProviderEntry.FirstChild("value");
        m_identityProvider[keyNode.GetText()] = valueNode.GetText();
        identityProviderEntry = identityProviderEntry.NextNode("entry");
      }

      m_identityProviderHasBeenSet = true;
    }
  }

  return *this;
}

void TransactionContext::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_identityProviderHasBeenSet) {
    unsigned identityProviderIdx = 1;
    for (auto& item : m_identityProvider) {
      oStream << location << index << locationValue << ".IdentityProvider.entry." << identityProviderIdx
              << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      oStream << location << index << locationValue << ".IdentityProvider.entry." << identityProviderIdx
              << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      identityProviderIdx++;
    }
  }
}

void TransactionContext::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_identityProviderHasBeenSet) {
    unsigned identityProviderIdx = 1;
    for (auto& item : m_identityProvider) {
      oStream << location << ".IdentityProvider.entry." << identityProviderIdx << ".key=" << StringUtils::URLEncode(item.first.c_str())
              << "&";
      oStream << location << ".IdentityProvider.entry." << identityProviderIdx << ".value=" << StringUtils::URLEncode(item.second.c_str())
              << "&";
      identityProviderIdx++;
    }
  }
}

}  // namespace Model
}  // namespace STS
}  // namespace Aws
