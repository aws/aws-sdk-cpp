/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/DownloadResponse.h>
#include <aws/s3-transfer/UploadResponse.h>
#include <aws/s3-transfer/DownloadDirectoryResponse.h>
#include <aws/s3-transfer/UploadDirectoryResponse.h>
#include <cstdint>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Immutable snapshot of transfer progress passed to ProgressListener callbacks. Captures
 * bytes transferred, total bytes, and the response once available. Specialized via the
 * UploadProgressSnapshot and DownloadProgressSnapshot subclasses below.
 */
template <typename ResponseT>
class ProgressSnapshot {
 public:
  virtual ~ProgressSnapshot() = default;

  ProgressSnapshot(uint64_t transferredBytes,
                   uint64_t totalBytes,
                   std::shared_ptr<ResponseT> response,
                   bool totalBytesHasBeenSet)
      : m_transferredBytes(transferredBytes),
        m_totalBytes(totalBytes),
        m_response(std::move(response)),
        m_totalBytesHasBeenSet(totalBytesHasBeenSet) {}

  inline uint64_t GetTransferredBytes() const { return m_transferredBytes; }
  inline uint64_t GetTotalBytes() const { return m_totalBytes; }
  inline bool TotalBytesHasBeenSet() const { return m_totalBytesHasBeenSet; }
  inline const std::shared_ptr<ResponseT>& GetResponse() const { return m_response; }
  inline bool ResponseHasBeenSet() const { return m_response != nullptr; }

 private:
  uint64_t m_transferredBytes = 0;
  uint64_t m_totalBytes = 0;
  std::shared_ptr<ResponseT> m_response;
  bool m_totalBytesHasBeenSet = false;
};

/**
 * Immutable snapshot of upload progress passed to UploadProgressListener callbacks. Captures
 * bytes transferred, total bytes (known up-front for uploads), and the response once available.
 */
class AWS_S3_TRANSFER_API UploadProgressSnapshot final : public ProgressSnapshot<UploadResponse> {
 public:
  using ProgressSnapshot<UploadResponse>::ProgressSnapshot;
};

/**
 * Immutable snapshot of download progress passed to DownloadProgressListener callbacks.
 * Captures bytes transferred, total bytes (known after the GetObject response is received),
 * and the response once available.
 */
class AWS_S3_TRANSFER_API DownloadProgressSnapshot final : public ProgressSnapshot<DownloadResponse> {
 public:
  using ProgressSnapshot<DownloadResponse>::ProgressSnapshot;
};

// ---------------------------------------------------------------------------
// Directory transfer snapshots
// ---------------------------------------------------------------------------

/**
 * Immutable snapshot of directory transfer progress passed to the directory ProgressListener
 * callbacks. Extends the single-file ProgressSnapshot with a file axis: on top of the bytes
 * transferred and total bytes it inherits, it reports how many files have finished out of how many
 * there are. Per the SEP, a directory snapshot carries both axes — the byte counts aggregate across
 * the per-file transfers, and the file counts track "N of M" objects.
 *
 * Either total is only known once enumeration finishes — the local walk for an upload, the last
 * listing page for a download — so early snapshots carry a zero total alongside a false
 * known-total flag, mirroring how ProgressSnapshot reports a download's not-yet-known size.
 *
 * Specialized via the UploadDirectoryProgressSnapshot and DownloadDirectoryProgressSnapshot
 * subclasses.
 */
template <typename ResponseT>
class DirectoryProgressSnapshot : public ProgressSnapshot<ResponseT> {
 public:
  DirectoryProgressSnapshot(uint64_t transferredBytes,
                            uint64_t totalBytes,
                            std::shared_ptr<ResponseT> response,
                            bool totalBytesHasBeenSet,
                            uint64_t transferredFiles,
                            uint64_t totalFiles,
                            bool totalFilesHasBeenSet)
      : ProgressSnapshot<ResponseT>(transferredBytes, totalBytes, std::move(response),
                                    totalBytesHasBeenSet),
        m_transferredFiles(transferredFiles),
        m_totalFiles(totalFiles),
        m_totalFilesHasBeenSet(totalFilesHasBeenSet) {}

  // Byte-axis accessors (GetTransferredBytes / GetTotalBytes / TotalBytesHasBeenSet / GetResponse)
  // are inherited from ProgressSnapshot.
  inline uint64_t GetTransferredFiles() const { return m_transferredFiles; }
  inline uint64_t GetTotalFiles() const { return m_totalFiles; }
  inline bool TotalFilesHasBeenSet() const { return m_totalFilesHasBeenSet; }

 private:
  uint64_t m_transferredFiles = 0;
  uint64_t m_totalFiles = 0;
  bool m_totalFilesHasBeenSet = false;
};

/**
 * Immutable snapshot of directory-upload progress passed to UploadDirectoryProgressListener
 * callbacks. Counts files attempted against the total discovered by walking the source directory.
 */
class AWS_S3_TRANSFER_API UploadDirectoryProgressSnapshot final
    : public DirectoryProgressSnapshot<UploadDirectoryResponse> {
 public:
  using DirectoryProgressSnapshot<UploadDirectoryResponse>::DirectoryProgressSnapshot;
};

/**
 * Immutable snapshot of directory-download progress passed to DownloadDirectoryProgressListener
 * callbacks. Counts objects attempted; the total stays unknown until the listing is fully paged.
 */
class AWS_S3_TRANSFER_API DownloadDirectoryProgressSnapshot final
    : public DirectoryProgressSnapshot<DownloadDirectoryResponse> {
 public:
  using DirectoryProgressSnapshot<DownloadDirectoryResponse>::DirectoryProgressSnapshot;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
