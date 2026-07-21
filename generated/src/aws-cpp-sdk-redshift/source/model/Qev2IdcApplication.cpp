/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/Qev2IdcApplication.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Redshift {
namespace Model {

Qev2IdcApplication::Qev2IdcApplication(const XmlNode& xmlNode) { *this = xmlNode; }

Qev2IdcApplication& Qev2IdcApplication::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode idcInstanceArnNode = resultNode.FirstChild("IdcInstanceArn");
    if (!idcInstanceArnNode.IsNull()) {
      m_idcInstanceArn = Aws::Utils::Xml::DecodeEscapedXmlText(idcInstanceArnNode.GetText());
      m_idcInstanceArnHasBeenSet = true;
    }
    XmlNode qev2IdcApplicationNameNode = resultNode.FirstChild("Qev2IdcApplicationName");
    if (!qev2IdcApplicationNameNode.IsNull()) {
      m_qev2IdcApplicationName = Aws::Utils::Xml::DecodeEscapedXmlText(qev2IdcApplicationNameNode.GetText());
      m_qev2IdcApplicationNameHasBeenSet = true;
    }
    XmlNode qev2IdcApplicationArnNode = resultNode.FirstChild("Qev2IdcApplicationArn");
    if (!qev2IdcApplicationArnNode.IsNull()) {
      m_qev2IdcApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(qev2IdcApplicationArnNode.GetText());
      m_qev2IdcApplicationArnHasBeenSet = true;
    }
    XmlNode idcManagedApplicationArnNode = resultNode.FirstChild("IdcManagedApplicationArn");
    if (!idcManagedApplicationArnNode.IsNull()) {
      m_idcManagedApplicationArn = Aws::Utils::Xml::DecodeEscapedXmlText(idcManagedApplicationArnNode.GetText());
      m_idcManagedApplicationArnHasBeenSet = true;
    }
    XmlNode idcOnboardStatusNode = resultNode.FirstChild("IdcOnboardStatus");
    if (!idcOnboardStatusNode.IsNull()) {
      m_idcOnboardStatus = Aws::Utils::Xml::DecodeEscapedXmlText(idcOnboardStatusNode.GetText());
      m_idcOnboardStatusHasBeenSet = true;
    }
    XmlNode idcDisplayNameNode = resultNode.FirstChild("IdcDisplayName");
    if (!idcDisplayNameNode.IsNull()) {
      m_idcDisplayName = Aws::Utils::Xml::DecodeEscapedXmlText(idcDisplayNameNode.GetText());
      m_idcDisplayNameHasBeenSet = true;
    }
    XmlNode tagsNode = resultNode.FirstChild("Tags");
    if (!tagsNode.IsNull()) {
      XmlNode tagsMember = tagsNode.FirstChild("Tag");
      m_tagsHasBeenSet = !tagsMember.IsNull();
      while (!tagsMember.IsNull()) {
        m_tags.push_back(tagsMember);
        tagsMember = tagsMember.NextNode("Tag");
      }

      m_tagsHasBeenSet = true;
    }
  }

  return *this;
}

void Qev2IdcApplication::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_idcInstanceArnHasBeenSet) {
    oStream << location << index << locationValue << ".IdcInstanceArn=" << StringUtils::URLEncode(m_idcInstanceArn.c_str()) << "&";
  }

  if (m_qev2IdcApplicationNameHasBeenSet) {
    oStream << location << index << locationValue << ".Qev2IdcApplicationName=" << StringUtils::URLEncode(m_qev2IdcApplicationName.c_str())
            << "&";
  }

  if (m_qev2IdcApplicationArnHasBeenSet) {
    oStream << location << index << locationValue << ".Qev2IdcApplicationArn=" << StringUtils::URLEncode(m_qev2IdcApplicationArn.c_str())
            << "&";
  }

  if (m_idcManagedApplicationArnHasBeenSet) {
    oStream << location << index << locationValue
            << ".IdcManagedApplicationArn=" << StringUtils::URLEncode(m_idcManagedApplicationArn.c_str()) << "&";
  }

  if (m_idcOnboardStatusHasBeenSet) {
    oStream << location << index << locationValue << ".IdcOnboardStatus=" << StringUtils::URLEncode(m_idcOnboardStatus.c_str()) << "&";
  }

  if (m_idcDisplayNameHasBeenSet) {
    oStream << location << index << locationValue << ".IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }

  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << index << locationValue << ".Tags.Tag." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

void Qev2IdcApplication::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_idcInstanceArnHasBeenSet) {
    oStream << location << ".IdcInstanceArn=" << StringUtils::URLEncode(m_idcInstanceArn.c_str()) << "&";
  }
  if (m_qev2IdcApplicationNameHasBeenSet) {
    oStream << location << ".Qev2IdcApplicationName=" << StringUtils::URLEncode(m_qev2IdcApplicationName.c_str()) << "&";
  }
  if (m_qev2IdcApplicationArnHasBeenSet) {
    oStream << location << ".Qev2IdcApplicationArn=" << StringUtils::URLEncode(m_qev2IdcApplicationArn.c_str()) << "&";
  }
  if (m_idcManagedApplicationArnHasBeenSet) {
    oStream << location << ".IdcManagedApplicationArn=" << StringUtils::URLEncode(m_idcManagedApplicationArn.c_str()) << "&";
  }
  if (m_idcOnboardStatusHasBeenSet) {
    oStream << location << ".IdcOnboardStatus=" << StringUtils::URLEncode(m_idcOnboardStatus.c_str()) << "&";
  }
  if (m_idcDisplayNameHasBeenSet) {
    oStream << location << ".IdcDisplayName=" << StringUtils::URLEncode(m_idcDisplayName.c_str()) << "&";
  }
  if (m_tagsHasBeenSet) {
    unsigned tagsIdx = 1;
    for (auto& item : m_tags) {
      Aws::StringStream tagsSs;
      tagsSs << location << ".Tags.Tag." << tagsIdx++;
      item.OutputToStream(oStream, tagsSs.str().c_str());
    }
  }
}

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
