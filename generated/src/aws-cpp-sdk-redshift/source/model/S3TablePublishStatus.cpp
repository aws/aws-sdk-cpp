/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/redshift/model/S3TablePublishStatus.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace Redshift {
namespace Model {

S3TablePublishStatus::S3TablePublishStatus(const XmlNode& xmlNode) { *this = xmlNode; }

S3TablePublishStatus& S3TablePublishStatus::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode s3TablesNode = resultNode.FirstChild("S3Tables");
    if (!s3TablesNode.IsNull()) {
      XmlNode s3TablesMember = s3TablesNode.FirstChild("member");
      m_s3TablesHasBeenSet = !s3TablesMember.IsNull();
      while (!s3TablesMember.IsNull()) {
        m_s3Tables.push_back(s3TablesMember.GetText());
        s3TablesMember = s3TablesMember.NextNode("member");
      }

      m_s3TablesHasBeenSet = true;
    }
    XmlNode s3TableNamespaceNode = resultNode.FirstChild("S3TableNamespace");
    if (!s3TableNamespaceNode.IsNull()) {
      m_s3TableNamespace = Aws::Utils::Xml::DecodeEscapedXmlText(s3TableNamespaceNode.GetText());
      m_s3TableNamespaceHasBeenSet = true;
    }
    XmlNode s3TableGranularityNode = resultNode.FirstChild("S3TableGranularity");
    if (!s3TableGranularityNode.IsNull()) {
      m_s3TableGranularity = Aws::Utils::Xml::DecodeEscapedXmlText(s3TableGranularityNode.GetText());
      m_s3TableGranularityHasBeenSet = true;
    }
    XmlNode enabledAllNode = resultNode.FirstChild("EnabledAll");
    if (!enabledAllNode.IsNull()) {
      m_enabledAll =
          StringUtils::ConvertToBool(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(enabledAllNode.GetText()).c_str()).c_str());
      m_enabledAllHasBeenSet = true;
    }
    XmlNode lastIngestionTimesNode = resultNode.FirstChild("LastIngestionTimes");

    if (!lastIngestionTimesNode.IsNull()) {
      XmlNode lastIngestionTimesEntry = lastIngestionTimesNode.FirstChild("entry");
      m_lastIngestionTimesHasBeenSet = !lastIngestionTimesEntry.IsNull();
      while (!lastIngestionTimesEntry.IsNull()) {
        XmlNode keyNode = lastIngestionTimesEntry.FirstChild("key");
        XmlNode valueNode = lastIngestionTimesEntry.FirstChild("value");
        m_lastIngestionTimes[keyNode.GetText()] = valueNode.GetText();
        lastIngestionTimesEntry = lastIngestionTimesEntry.NextNode("entry");
      }

      m_lastIngestionTimesHasBeenSet = true;
    }
  }

  return *this;
}

void S3TablePublishStatus::OutputToStream(Aws::OStream& oStream, const char* location, unsigned index, const char* locationValue) const {
  if (m_s3TablesHasBeenSet) {
    unsigned s3TablesIdx = 1;
    for (auto& item : m_s3Tables) {
      oStream << location << index << locationValue << ".S3Tables.member." << s3TablesIdx++ << "=" << StringUtils::URLEncode(item.c_str())
              << "&";
    }
  }

  if (m_s3TableNamespaceHasBeenSet) {
    oStream << location << index << locationValue << ".S3TableNamespace=" << StringUtils::URLEncode(m_s3TableNamespace.c_str()) << "&";
  }

  if (m_s3TableGranularityHasBeenSet) {
    oStream << location << index << locationValue << ".S3TableGranularity=" << StringUtils::URLEncode(m_s3TableGranularity.c_str()) << "&";
  }

  if (m_enabledAllHasBeenSet) {
    oStream << location << index << locationValue << ".EnabledAll=" << std::boolalpha << m_enabledAll << "&";
  }

  if (m_lastIngestionTimesHasBeenSet) {
    unsigned lastIngestionTimesIdx = 1;
    for (auto& item : m_lastIngestionTimes) {
      oStream << location << index << locationValue << ".LastIngestionTimes.entry." << lastIngestionTimesIdx
              << ".key=" << StringUtils::URLEncode(item.first.c_str()) << "&";
      oStream << location << index << locationValue << ".LastIngestionTimes.entry." << lastIngestionTimesIdx
              << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      lastIngestionTimesIdx++;
    }
  }
}

void S3TablePublishStatus::OutputToStream(Aws::OStream& oStream, const char* location) const {
  if (m_s3TablesHasBeenSet) {
    unsigned s3TablesIdx = 1;
    for (auto& item : m_s3Tables) {
      oStream << location << ".S3Tables.member." << s3TablesIdx++ << "=" << StringUtils::URLEncode(item.c_str()) << "&";
    }
  }
  if (m_s3TableNamespaceHasBeenSet) {
    oStream << location << ".S3TableNamespace=" << StringUtils::URLEncode(m_s3TableNamespace.c_str()) << "&";
  }
  if (m_s3TableGranularityHasBeenSet) {
    oStream << location << ".S3TableGranularity=" << StringUtils::URLEncode(m_s3TableGranularity.c_str()) << "&";
  }
  if (m_enabledAllHasBeenSet) {
    oStream << location << ".EnabledAll=" << std::boolalpha << m_enabledAll << "&";
  }
  if (m_lastIngestionTimesHasBeenSet) {
    unsigned lastIngestionTimesIdx = 1;
    for (auto& item : m_lastIngestionTimes) {
      oStream << location << ".LastIngestionTimes.entry." << lastIngestionTimesIdx << ".key=" << StringUtils::URLEncode(item.first.c_str())
              << "&";
      oStream << location << ".LastIngestionTimes.entry." << lastIngestionTimesIdx
              << ".value=" << StringUtils::URLEncode(item.second.c_str()) << "&";
      lastIngestionTimesIdx++;
    }
  }
}

}  // namespace Model
}  // namespace Redshift
}  // namespace Aws
