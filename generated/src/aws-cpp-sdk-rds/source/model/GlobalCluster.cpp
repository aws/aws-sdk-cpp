/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/rds/model/GlobalCluster.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace RDS {
namespace Model {

GlobalCluster::GlobalCluster(const XmlNode& xmlNode) { *this = xmlNode; }

GlobalCluster& GlobalCluster::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode globalClusterIdentifierNode = resultNode.FirstChild("GlobalClusterIdentifier");
    if (!globalClusterIdentifierNode.IsNull()) {
      m_globalClusterIdentifier = Aws::Utils::Xml::DecodeEscapedXmlText(globalClusterIdentifierNode.GetText());
      m_globalClusterIdentifierHasBeenSet = true;
    }
    XmlNode globalClusterResourceIdNode = resultNode.FirstChild("GlobalClusterResourceId");
    if (!globalClusterResourceIdNode.IsNull()) {
      m_globalClusterResourceId = Aws::Utils::Xml::DecodeEscapedXmlText(globalClusterResourceIdNode.GetText());
      m_globalClusterResourceIdHasBeenSet = true;
    }
    XmlNode globalClusterArnNode = resultNode.FirstChild("GlobalClusterArn");
    if (!globalClusterArnNode.IsNull()) {
      m_globalClusterArn = Aws::Utils::Xml::DecodeEscapedXmlText(globalClusterArnNode.GetText());
      m_globalClusterArnHasBeenSet = true;
    }
    XmlNode statusNode = resultNode.FirstChild("Status");
    if (!statusNode.IsNull()) {
      m_status = Aws::Utils::Xml::DecodeEscapedXmlText(statusNode.GetText());
      m_statusHasBeenSet = true;
    }
    XmlNode engineNode = resultNode.FirstChild("Engine");
    if (!engineNode.IsNull()) {
      m_engine = Aws::Utils::Xml::DecodeEscapedXmlText(engineNode.GetText());
      m_engineHasBeenSet = true;
    }
    XmlNode engineVersionNode = resultNode.FirstChild("EngineVersion");
    if (!engineVersionNode.IsNull()) {
      m_engineVersion = Aws::Utils::Xml::DecodeEscapedXmlText(engineVersionNode.GetText());
      m_engineVersionHasBeenSet = true;
    }
    XmlNode engineLifecycleSupportNode = resultNode.FirstChild("EngineLifecycleSupport");
    if (!engineLifecycleSupportNode.IsNull()) {
      m_engineLifecycleSupport = Aws::Utils::Xml::DecodeEscapedXmlText(engineLifecycleSupportNode.GetText());
      m_engineLifecycleSupportHasBeenSet = true;
    }
    XmlNode databaseNameNode = resultNode.FirstChild("DatabaseName");
    if (!databaseNameNode.IsNull()) {
      m_databaseName = Aws::Utils::Xml::DecodeEscapedXmlText(databaseNameNode.GetText());
      m_databaseNameHasBeenSet = true;
    }
    XmlNode storageEncryptedNode = resultNode.FirstChild("StorageEncrypted");
    if (!storageEncryptedNode.IsNull()) {
      m_storageEncrypted = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptedNode.GetText()).c_str()).c_str());
      m_storageEncryptedHasBeenSet = true;
    }
    XmlNode storageEncryptionTypeNode = resultNode.FirstChild("StorageEncryptionType");
    if (!storageEncryptionTypeNode.IsNull()) {
      m_storageEncryptionType = StorageEncryptionTypeMapper::GetStorageEncryptionTypeForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(storageEncryptionTypeNode.GetText()).c_str()));
      m_storageEncryptionTypeHasBeenSet = true;
    }
    XmlNode deletionProtectionNode = resultNode.FirstChild("DeletionProtection");
    if (!deletionProtectionNode.IsNull()) {
      m_deletionProtection = StringUtils::ConvertToBool(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(deletionProtectionNode.GetText()).c_str()).c_str());
      m_deletionProtectionHasBeenSet = true;
    }
    XmlNode globalClusterMembersNode = resultNode.FirstChild("GlobalClusterMembers");
    if (!globalClusterMembersNode.IsNull()) {
      XmlNode globalClusterMembersMember = globalClusterMembersNode.FirstChild("GlobalClusterMember");
      m_globalClusterMembersHasBeenSet = !globalClusterMembersMember.IsNull();
      while (!globalClusterMembersMember.IsNull()) {
        m_globalClusterMembers.push_back(globalClusterMembersMember);
        globalClusterMembersMember = globalClusterMembersMember.NextNode("GlobalClusterMember");
      }

      m_globalClusterMembersHasBeenSet = true;
    }
    XmlNode endpointNode = resultNode.FirstChild("Endpoint");
    if (!endpointNode.IsNull()) {
      m_endpoint = Aws::Utils::Xml::DecodeEscapedXmlText(endpointNode.GetText());
      m_endpointHasBeenSet = true;
    }
    XmlNode failoverStateNode = resultNode.FirstChild("FailoverState");
    if (!failoverStateNode.IsNull()) {
      m_failoverState = failoverStateNode;
      m_failoverStateHasBeenSet = true;
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

void GlobalCluster::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_globalClusterIdentifierHasBeenSet) {
    oStream << location << index << locationValue
            << ".GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }

  if (m_globalClusterResourceIdHasBeenSet) {
    oStream << location << index << locationValue
            << ".GlobalClusterResourceId=" << StringUtils::URLEncode(m_globalClusterResourceId.c_str()) << "&";
  }

  if (m_globalClusterArnHasBeenSet) {
    oStream << location << index << locationValue << ".GlobalClusterArn=" << StringUtils::URLEncode(m_globalClusterArn.c_str()) << "&";
  }

  if (m_statusHasBeenSet) {
    oStream << location << index << locationValue << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }

  if (m_engineHasBeenSet) {
    oStream << location << index << locationValue << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }

  if (m_engineVersionHasBeenSet) {
    oStream << location << index << locationValue << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }

  if (m_engineLifecycleSupportHasBeenSet) {
    oStream << location << index << locationValue << ".EngineLifecycleSupport=" << StringUtils::URLEncode(m_engineLifecycleSupport.c_str())
            << "&";
  }

  if (m_databaseNameHasBeenSet) {
    oStream << location << index << locationValue << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }

  if (m_storageEncryptedHasBeenSet) {
    oStream << location << index << locationValue << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }

  if (m_storageEncryptionTypeHasBeenSet) {
    oStream << location << index << locationValue << ".StorageEncryptionType="
            << StringUtils::URLEncode(StorageEncryptionTypeMapper::GetNameForStorageEncryptionType(m_storageEncryptionType)) << "&";
  }

  if (m_deletionProtectionHasBeenSet) {
    oStream << location << index << locationValue << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }

  if (m_globalClusterMembersHasBeenSet) {
    unsigned globalClusterMembersIdx = 1;
    for (auto& item : m_globalClusterMembers) {
      Aws::StringStream globalClusterMembersSs;
      globalClusterMembersSs << location << index << locationValue << ".GlobalClusterMembers.GlobalClusterMember."
                             << globalClusterMembersIdx++;
      item.OutputToStream(oStream, globalClusterMembersSs.str().c_str());
    }
  }

  if (m_endpointHasBeenSet) {
    oStream << location << index << locationValue << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }

  if (m_failoverStateHasBeenSet) {
    Aws::StringStream failoverStateLocationAndMemberSs;
    failoverStateLocationAndMemberSs << location << index << locationValue << ".FailoverState";
    m_failoverState.OutputToStream(oStream, failoverStateLocationAndMemberSs.str().c_str());
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

void GlobalCluster::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_globalClusterIdentifierHasBeenSet) {
    oStream << location << ".GlobalClusterIdentifier=" << StringUtils::URLEncode(m_globalClusterIdentifier.c_str()) << "&";
  }
  if (m_globalClusterResourceIdHasBeenSet) {
    oStream << location << ".GlobalClusterResourceId=" << StringUtils::URLEncode(m_globalClusterResourceId.c_str()) << "&";
  }
  if (m_globalClusterArnHasBeenSet) {
    oStream << location << ".GlobalClusterArn=" << StringUtils::URLEncode(m_globalClusterArn.c_str()) << "&";
  }
  if (m_statusHasBeenSet) {
    oStream << location << ".Status=" << StringUtils::URLEncode(m_status.c_str()) << "&";
  }
  if (m_engineHasBeenSet) {
    oStream << location << ".Engine=" << StringUtils::URLEncode(m_engine.c_str()) << "&";
  }
  if (m_engineVersionHasBeenSet) {
    oStream << location << ".EngineVersion=" << StringUtils::URLEncode(m_engineVersion.c_str()) << "&";
  }
  if (m_engineLifecycleSupportHasBeenSet) {
    oStream << location << ".EngineLifecycleSupport=" << StringUtils::URLEncode(m_engineLifecycleSupport.c_str()) << "&";
  }
  if (m_databaseNameHasBeenSet) {
    oStream << location << ".DatabaseName=" << StringUtils::URLEncode(m_databaseName.c_str()) << "&";
  }
  if (m_storageEncryptedHasBeenSet) {
    oStream << location << ".StorageEncrypted=" << std::boolalpha << m_storageEncrypted << "&";
  }
  if (m_storageEncryptionTypeHasBeenSet) {
    oStream << location << ".StorageEncryptionType="
            << StringUtils::URLEncode(StorageEncryptionTypeMapper::GetNameForStorageEncryptionType(m_storageEncryptionType)) << "&";
  }
  if (m_deletionProtectionHasBeenSet) {
    oStream << location << ".DeletionProtection=" << std::boolalpha << m_deletionProtection << "&";
  }
  if (m_globalClusterMembersHasBeenSet) {
    unsigned globalClusterMembersIdx = 1;
    for (auto& item : m_globalClusterMembers) {
      Aws::StringStream globalClusterMembersSs;
      globalClusterMembersSs << location << ".GlobalClusterMembers.GlobalClusterMember." << globalClusterMembersIdx++;
      item.OutputToStream(oStream, globalClusterMembersSs.str().c_str());
    }
  }
  if (m_endpointHasBeenSet) {
    oStream << location << ".Endpoint=" << StringUtils::URLEncode(m_endpoint.c_str()) << "&";
  }
  if (m_failoverStateHasBeenSet) {
    Aws::String failoverStateLocationAndMember(location);
    failoverStateLocationAndMember += ".FailoverState";
    m_failoverState.OutputToStream(oStream, failoverStateLocationAndMember.c_str());
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
