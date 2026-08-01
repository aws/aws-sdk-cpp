/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/DownloadDirectoryResponse.h>
#include <aws/s3-transfer/UploadDirectoryResponse.h>
#include <cstdint>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Immutable snapshot of directory transfer progress passed to the directory ProgressListener
 * callbacks. A directory transfer reports progress in files rather than bytes: how many files have
 * finished out of how many there are. The per-file transfers report their own byte progress through
 * their own single-file listeners.
 *
 * The total is only known once enumeration finishes — the local walk for an upload, the last
 * listing page for a download — so early snapshots carry a zero total alongside a false
 * known-total flag, mirroring how ProgressSnapshot reports a download's not-yet-known size.
 *
 * Specialized via the UploadDirectoryProgressSnapshot and DownloadDirectoryProgressSnapshot
 * subclasses.
 */
template <typename ResponseT>
class DirectoryProgressSnapshot {
 public:
  virtual ~DirectoryProgressSnapshot() = default;

  DirectoryProgressSnapshot(uint64_t transferredFiles,
                            uint64_t totalFiles,
                            std::shared_ptr<ResponseT> response,
                            bool totalFilesHasBeenSet)
      : m_transferredFiles(transferredFiles),
        m_totalFiles(totalFiles),
        m_response(std::move(response)),
        m_totalFilesHasBeenSet(totalFilesHasBeenSet) {}

  inline uint64_t GetTransferredFiles() const { return m_transferredFiles; }
  inline uint64_t GetTotalFiles() const { return m_totalFiles; }
  inline bool TotalFilesHasBeenSet() const { return m_totalFilesHasBeenSet; }
  inline const std::shared_ptr<ResponseT>& GetResponse() const { return m_response; }
  inline bool ResponseHasBeenSet() const { return m_response != nullptr; }

 private:
  uint64_t m_transferredFiles = 0;
  uint64_t m_totalFiles = 0;
  std::shared_ptr<ResponseT> m_response;
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
