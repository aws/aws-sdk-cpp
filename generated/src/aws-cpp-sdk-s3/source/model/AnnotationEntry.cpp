/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <aws/core/utils/StringUtils.h>
#include <aws/core/utils/memory/stl/AWSStringStream.h>
#include <aws/core/utils/xml/XmlSerializer.h>
#include <aws/s3/model/AnnotationEntry.h>

#include <utility>

using namespace Aws::Utils::Xml;
using namespace Aws::Utils;

namespace Aws {
namespace S3 {
namespace Model {

AnnotationEntry::AnnotationEntry(const XmlNode& xmlNode) { *this = xmlNode; }

AnnotationEntry& AnnotationEntry::operator=(const XmlNode& xmlNode) {
  XmlNode resultNode = xmlNode;

  if (!resultNode.IsNull()) {
    XmlNode annotationNameNode = resultNode.FirstChild("AnnotationName");
    if (!annotationNameNode.IsNull()) {
      m_annotationName = Aws::Utils::Xml::DecodeEscapedXmlText(annotationNameNode.GetText());
      m_annotationNameHasBeenSet = true;
    }
    XmlNode lastModifiedNode = resultNode.FirstChild("LastModified");
    if (!lastModifiedNode.IsNull()) {
      m_lastModified = DateTime(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(lastModifiedNode.GetText()).c_str()).c_str(),
                                Aws::Utils::DateFormat::ISO_8601);
      m_lastModifiedHasBeenSet = true;
    }
    XmlNode eTagNode = resultNode.FirstChild("ETag");
    if (!eTagNode.IsNull()) {
      m_eTag = Aws::Utils::Xml::DecodeEscapedXmlText(eTagNode.GetText());
      m_eTagHasBeenSet = true;
    }
    XmlNode checksumAlgorithmNode = resultNode.FirstChild("ChecksumAlgorithm");
    if (!checksumAlgorithmNode.IsNull()) {
      XmlNode checksumAlgorithmMember = checksumAlgorithmNode;
      m_checksumAlgorithmHasBeenSet = !checksumAlgorithmMember.IsNull();
      while (!checksumAlgorithmMember.IsNull()) {
        m_checksumAlgorithm.push_back(
            ChecksumAlgorithmMapper::GetChecksumAlgorithmForName(StringUtils::Trim(checksumAlgorithmMember.GetText().c_str())));
        checksumAlgorithmMember = checksumAlgorithmMember.NextNode("ChecksumAlgorithm");
      }

      m_checksumAlgorithmHasBeenSet = true;
    }
    XmlNode sizeNode = resultNode.FirstChild("Size");
    if (!sizeNode.IsNull()) {
      m_size = StringUtils::ConvertToInt64(StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(sizeNode.GetText()).c_str()).c_str());
      m_sizeHasBeenSet = true;
    }
    XmlNode replicationStatusNode = resultNode.FirstChild("ReplicationStatus");
    if (!replicationStatusNode.IsNull()) {
      m_replicationStatus = ReplicationStatusMapper::GetReplicationStatusForName(
          StringUtils::Trim(Aws::Utils::Xml::DecodeEscapedXmlText(replicationStatusNode.GetText()).c_str()));
      m_replicationStatusHasBeenSet = true;
    }
  }

  return *this;
}

void AnnotationEntry::AddToNode(XmlNode& parentNode) const {
  Aws::StringStream ss;
  if (m_annotationNameHasBeenSet) {
    XmlNode annotationNameNode = parentNode.CreateChildElement("AnnotationName");
    annotationNameNode.SetText(m_annotationName);
  }

  if (m_lastModifiedHasBeenSet) {
    XmlNode lastModifiedNode = parentNode.CreateChildElement("LastModified");
    lastModifiedNode.SetText(m_lastModified.ToGmtString(Aws::Utils::DateFormat::ISO_8601));
  }

  if (m_eTagHasBeenSet) {
    XmlNode eTagNode = parentNode.CreateChildElement("ETag");
    eTagNode.SetText(m_eTag);
  }

  if (m_checksumAlgorithmHasBeenSet) {
    XmlNode checksumAlgorithmParentNode = parentNode.CreateChildElement("ChecksumAlgorithm");
    for (const auto& item : m_checksumAlgorithm) {
      XmlNode checksumAlgorithmNode = checksumAlgorithmParentNode.CreateChildElement("ChecksumAlgorithm");
      checksumAlgorithmNode.SetText(ChecksumAlgorithmMapper::GetNameForChecksumAlgorithm(item));
    }
  }

  if (m_sizeHasBeenSet) {
    XmlNode sizeNode = parentNode.CreateChildElement("Size");
    ss << m_size;
    sizeNode.SetText(ss.str());
    ss.str("");
  }

  if (m_replicationStatusHasBeenSet) {
    XmlNode replicationStatusNode = parentNode.CreateChildElement("ReplicationStatus");
    replicationStatusNode.SetText(ReplicationStatusMapper::GetNameForReplicationStatus(m_replicationStatus));
  }
}

}  // namespace Model
}  // namespace S3
}  // namespace Aws
