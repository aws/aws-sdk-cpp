/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/s3/S3_EXPORTS.h>
#include <aws/s3/model/ChecksumAlgorithm.h>
#include <aws/s3/model/ReplicationStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Xml {
class XmlNode;
}  // namespace Xml
}  // namespace Utils
namespace S3 {
namespace Model {

/**
 * <p>Describes a single annotation attached to an object, including its name, last
 * modified time, size, ETag, checksum algorithm, and replication status. Returned
 * in the response from <code>ListObjectAnnotations</code>.</p><p><h3>See
 * Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/s3-2006-03-01/AnnotationEntry">AWS
 * API Reference</a></p>
 */
class AnnotationEntry {
 public:
  AWS_S3_API AnnotationEntry() = default;
  AWS_S3_API AnnotationEntry(const Aws::Utils::Xml::XmlNode& xmlNode);
  AWS_S3_API AnnotationEntry& operator=(const Aws::Utils::Xml::XmlNode& xmlNode);

  AWS_S3_API void AddToNode(Aws::Utils::Xml::XmlNode& parentNode) const;

  ///@{
  /**
   * <p>The name of the annotation.</p>
   */
  inline const Aws::String& GetAnnotationName() const { return m_annotationName; }
  inline bool AnnotationNameHasBeenSet() const { return m_annotationNameHasBeenSet; }
  template <typename AnnotationNameT = Aws::String>
  void SetAnnotationName(AnnotationNameT&& value) {
    m_annotationNameHasBeenSet = true;
    m_annotationName = std::forward<AnnotationNameT>(value);
  }
  template <typename AnnotationNameT = Aws::String>
  AnnotationEntry& WithAnnotationName(AnnotationNameT&& value) {
    SetAnnotationName(std::forward<AnnotationNameT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The date and time the annotation was last modified.</p>
   */
  inline const Aws::Utils::DateTime& GetLastModified() const { return m_lastModified; }
  inline bool LastModifiedHasBeenSet() const { return m_lastModifiedHasBeenSet; }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  void SetLastModified(LastModifiedT&& value) {
    m_lastModifiedHasBeenSet = true;
    m_lastModified = std::forward<LastModifiedT>(value);
  }
  template <typename LastModifiedT = Aws::Utils::DateTime>
  AnnotationEntry& WithLastModified(LastModifiedT&& value) {
    SetLastModified(std::forward<LastModifiedT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The entity tag of the annotation.</p>
   */
  inline const Aws::String& GetETag() const { return m_eTag; }
  inline bool ETagHasBeenSet() const { return m_eTagHasBeenSet; }
  template <typename ETagT = Aws::String>
  void SetETag(ETagT&& value) {
    m_eTagHasBeenSet = true;
    m_eTag = std::forward<ETagT>(value);
  }
  template <typename ETagT = Aws::String>
  AnnotationEntry& WithETag(ETagT&& value) {
    SetETag(std::forward<ETagT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checksum algorithm used for the annotation.</p>
   */
  inline const Aws::Vector<ChecksumAlgorithm>& GetChecksumAlgorithm() const { return m_checksumAlgorithm; }
  inline bool ChecksumAlgorithmHasBeenSet() const { return m_checksumAlgorithmHasBeenSet; }
  template <typename ChecksumAlgorithmT = Aws::Vector<ChecksumAlgorithm>>
  void SetChecksumAlgorithm(ChecksumAlgorithmT&& value) {
    m_checksumAlgorithmHasBeenSet = true;
    m_checksumAlgorithm = std::forward<ChecksumAlgorithmT>(value);
  }
  template <typename ChecksumAlgorithmT = Aws::Vector<ChecksumAlgorithm>>
  AnnotationEntry& WithChecksumAlgorithm(ChecksumAlgorithmT&& value) {
    SetChecksumAlgorithm(std::forward<ChecksumAlgorithmT>(value));
    return *this;
  }
  inline AnnotationEntry& AddChecksumAlgorithm(ChecksumAlgorithm value) {
    m_checksumAlgorithmHasBeenSet = true;
    m_checksumAlgorithm.push_back(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The size of the annotation payload, in bytes.</p>
   */
  inline long long GetSize() const { return m_size; }
  inline bool SizeHasBeenSet() const { return m_sizeHasBeenSet; }
  inline void SetSize(long long value) {
    m_sizeHasBeenSet = true;
    m_size = value;
  }
  inline AnnotationEntry& WithSize(long long value) {
    SetSize(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The replication status of the annotation.</p>
   */
  inline ReplicationStatus GetReplicationStatus() const { return m_replicationStatus; }
  inline bool ReplicationStatusHasBeenSet() const { return m_replicationStatusHasBeenSet; }
  inline void SetReplicationStatus(ReplicationStatus value) {
    m_replicationStatusHasBeenSet = true;
    m_replicationStatus = value;
  }
  inline AnnotationEntry& WithReplicationStatus(ReplicationStatus value) {
    SetReplicationStatus(value);
    return *this;
  }
  ///@}
 private:
  Aws::String m_annotationName;

  Aws::Utils::DateTime m_lastModified{};

  Aws::String m_eTag;

  Aws::Vector<ChecksumAlgorithm> m_checksumAlgorithm;

  long long m_size{0};

  ReplicationStatus m_replicationStatus{ReplicationStatus::NOT_SET};
  bool m_annotationNameHasBeenSet = false;
  bool m_lastModifiedHasBeenSet = false;
  bool m_eTagHasBeenSet = false;
  bool m_checksumAlgorithmHasBeenSet = false;
  bool m_sizeHasBeenSet = false;
  bool m_replicationStatusHasBeenSet = false;
};

}  // namespace Model
}  // namespace S3
}  // namespace Aws
