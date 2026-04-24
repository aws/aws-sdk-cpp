/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/DateTime.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/mgn/Mgn_EXPORTS.h>
#include <aws/mgn/model/Checksum.h>
#include <aws/mgn/model/EnrichmentTargetS3Configuration.h>
#include <aws/mgn/model/ImportFileEnrichmentStatus.h>

#include <utility>

namespace Aws {
namespace Utils {
namespace Json {
class JsonValue;
class JsonView;
}  // namespace Json
}  // namespace Utils
namespace mgn {
namespace Model {

/**
 * <p>Details about an import file enrichment job.</p><p><h3>See Also:</h3>   <a
 * href="http://docs.aws.amazon.com/goto/WebAPI/mgn-2020-02-26/ImportFileEnrichment">AWS
 * API Reference</a></p>
 */
class ImportFileEnrichment {
 public:
  AWS_MGN_API ImportFileEnrichment() = default;
  AWS_MGN_API ImportFileEnrichment(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API ImportFileEnrichment& operator=(Aws::Utils::Json::JsonView jsonValue);
  AWS_MGN_API Aws::Utils::Json::JsonValue Jsonize() const;

  ///@{
  /**
   * <p>The unique identifier of the import file enrichment job.</p>
   */
  inline const Aws::String& GetJobID() const { return m_jobID; }
  inline bool JobIDHasBeenSet() const { return m_jobIDHasBeenSet; }
  template <typename JobIDT = Aws::String>
  void SetJobID(JobIDT&& value) {
    m_jobIDHasBeenSet = true;
    m_jobID = std::forward<JobIDT>(value);
  }
  template <typename JobIDT = Aws::String>
  ImportFileEnrichment& WithJobID(JobIDT&& value) {
    SetJobID(std::forward<JobIDT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the enrichment job was created.</p>
   */
  inline const Aws::Utils::DateTime& GetCreatedAt() const { return m_createdAt; }
  inline bool CreatedAtHasBeenSet() const { return m_createdAtHasBeenSet; }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  void SetCreatedAt(CreatedAtT&& value) {
    m_createdAtHasBeenSet = true;
    m_createdAt = std::forward<CreatedAtT>(value);
  }
  template <typename CreatedAtT = Aws::Utils::DateTime>
  ImportFileEnrichment& WithCreatedAt(CreatedAtT&& value) {
    SetCreatedAt(std::forward<CreatedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The timestamp when the enrichment job completed or failed.</p>
   */
  inline const Aws::Utils::DateTime& GetEndedAt() const { return m_endedAt; }
  inline bool EndedAtHasBeenSet() const { return m_endedAtHasBeenSet; }
  template <typename EndedAtT = Aws::Utils::DateTime>
  void SetEndedAt(EndedAtT&& value) {
    m_endedAtHasBeenSet = true;
    m_endedAt = std::forward<EndedAtT>(value);
  }
  template <typename EndedAtT = Aws::Utils::DateTime>
  ImportFileEnrichment& WithEndedAt(EndedAtT&& value) {
    SetEndedAt(std::forward<EndedAtT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The current status of the import file enrichment job.</p>
   */
  inline ImportFileEnrichmentStatus GetStatus() const { return m_status; }
  inline bool StatusHasBeenSet() const { return m_statusHasBeenSet; }
  inline void SetStatus(ImportFileEnrichmentStatus value) {
    m_statusHasBeenSet = true;
    m_status = value;
  }
  inline ImportFileEnrichment& WithStatus(ImportFileEnrichmentStatus value) {
    SetStatus(value);
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>Detailed status information about the enrichment job.</p>
   */
  inline const Aws::String& GetStatusDetails() const { return m_statusDetails; }
  inline bool StatusDetailsHasBeenSet() const { return m_statusDetailsHasBeenSet; }
  template <typename StatusDetailsT = Aws::String>
  void SetStatusDetails(StatusDetailsT&& value) {
    m_statusDetailsHasBeenSet = true;
    m_statusDetails = std::forward<StatusDetailsT>(value);
  }
  template <typename StatusDetailsT = Aws::String>
  ImportFileEnrichment& WithStatusDetails(StatusDetailsT&& value) {
    SetStatusDetails(std::forward<StatusDetailsT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The checksum of the enriched file for integrity verification.</p>
   */
  inline const Checksum& GetChecksum() const { return m_checksum; }
  inline bool ChecksumHasBeenSet() const { return m_checksumHasBeenSet; }
  template <typename ChecksumT = Checksum>
  void SetChecksum(ChecksumT&& value) {
    m_checksumHasBeenSet = true;
    m_checksum = std::forward<ChecksumT>(value);
  }
  template <typename ChecksumT = Checksum>
  ImportFileEnrichment& WithChecksum(ChecksumT&& value) {
    SetChecksum(std::forward<ChecksumT>(value));
    return *this;
  }
  ///@}

  ///@{
  /**
   * <p>The target S3 configuration for the enriched import file.</p>
   */
  inline const EnrichmentTargetS3Configuration& GetS3BucketTarget() const { return m_s3BucketTarget; }
  inline bool S3BucketTargetHasBeenSet() const { return m_s3BucketTargetHasBeenSet; }
  template <typename S3BucketTargetT = EnrichmentTargetS3Configuration>
  void SetS3BucketTarget(S3BucketTargetT&& value) {
    m_s3BucketTargetHasBeenSet = true;
    m_s3BucketTarget = std::forward<S3BucketTargetT>(value);
  }
  template <typename S3BucketTargetT = EnrichmentTargetS3Configuration>
  ImportFileEnrichment& WithS3BucketTarget(S3BucketTargetT&& value) {
    SetS3BucketTarget(std::forward<S3BucketTargetT>(value));
    return *this;
  }
  ///@}
 private:
  Aws::String m_jobID;

  Aws::Utils::DateTime m_createdAt{};

  Aws::Utils::DateTime m_endedAt{};

  ImportFileEnrichmentStatus m_status{ImportFileEnrichmentStatus::NOT_SET};

  Aws::String m_statusDetails;

  Checksum m_checksum;

  EnrichmentTargetS3Configuration m_s3BucketTarget;
  bool m_jobIDHasBeenSet = false;
  bool m_createdAtHasBeenSet = false;
  bool m_endedAtHasBeenSet = false;
  bool m_statusHasBeenSet = false;
  bool m_statusDetailsHasBeenSet = false;
  bool m_checksumHasBeenSet = false;
  bool m_s3BucketTargetHasBeenSet = false;
};

}  // namespace Model
}  // namespace mgn
}  // namespace Aws
