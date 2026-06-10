/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/DownloadResponse.h>
#include <cstdint>
#include <memory>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * Immutable snapshot of download progress passed to DownloadProgressListener callbacks.
 * Captures bytes transferred, total bytes (known after the GetObject response is received),
 * and the response once available.
 */
class AWS_S3_TRANSFER_API DownloadProgressSnapshot {
 public:
  DownloadProgressSnapshot(uint64_t transferredBytes,
                           uint64_t totalBytes,
                           std::shared_ptr<DownloadResponse> response,
                           bool totalBytesHasBeenSet)
      : m_transferredBytes(transferredBytes),
        m_totalBytes(totalBytes),
        m_response(std::move(response)),
        m_totalBytesHasBeenSet(totalBytesHasBeenSet) {}

  inline uint64_t GetTransferredBytes() const { return m_transferredBytes; }
  inline uint64_t GetTotalBytes() const { return m_totalBytes; }
  inline bool TotalBytesHasBeenSet() const { return m_totalBytesHasBeenSet; }
  inline const std::shared_ptr<DownloadResponse>& GetResponse() const { return m_response; }
  inline bool ResponseHasBeenSet() const { return m_response != nullptr; }

 private:
  uint64_t m_transferredBytes = 0;
  uint64_t m_totalBytes = 0;
  std::shared_ptr<DownloadResponse> m_response;
  bool m_totalBytesHasBeenSet = false;
};

}
}
}
