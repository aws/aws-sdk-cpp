/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/ProgressListener.h>

#include <atomic>
#include <cstdint>

namespace S3TransferIntegrationTests {

/**
 * Records the ordering and byte counts of the SEP progress lifecycle so tests can assert that
 * OnTransferInitiated fires once before any bytes, OnBytesTransferred is monotonic, and exactly
 * one terminal event (complete OR failed) fires. Thread-safe: the CRT invokes these from its own
 * event-loop threads.
 */
template <typename ListenerBase, typename RequestT, typename SnapshotT>
class RecordingProgressListenerT : public ListenerBase {
 public:
  std::atomic<size_t> initiatedCount{0};
  std::atomic<size_t> bytesTransferredCount{0};
  std::atomic<size_t> completeCount{0};
  std::atomic<size_t> failedCount{0};
  std::atomic<uint64_t> lastTransferredBytes{0};
  std::atomic<uint64_t> maxTransferredBytes{0};
  std::atomic<bool> sawBytesBeforeInitiated{false};
  std::atomic<bool> sawNonMonotonic{false};

  void OnTransferInitiated(const RequestT&, const SnapshotT& snapshot) override {
    initiatedCount++;
    (void)snapshot;
  }

  void OnBytesTransferred(const RequestT&, const SnapshotT& snapshot) override {
    bytesTransferredCount++;
    if (initiatedCount.load() == 0) {
      sawBytesBeforeInitiated = true;
    }
    const uint64_t transferred = snapshot.GetTransferredBytes();
    if (transferred < lastTransferredBytes.load()) {
      sawNonMonotonic = true;
    }
    lastTransferredBytes = transferred;
    uint64_t prevMax = maxTransferredBytes.load();
    while (transferred > prevMax && !maxTransferredBytes.compare_exchange_weak(prevMax, transferred)) {
    }
  }

  void OnTransferComplete(const RequestT&, const SnapshotT&) override { completeCount++; }
  void OnTransferFailed(const RequestT&, const SnapshotT&) override { failedCount++; }
};

using RecordingUploadListener =
    RecordingProgressListenerT<Aws::S3::Transfer::UploadProgressListener, Aws::S3::Transfer::UploadRequest,
                               Aws::S3::Transfer::UploadProgressSnapshot>;

using RecordingDownloadListener =
    RecordingProgressListenerT<Aws::S3::Transfer::DownloadProgressListener, Aws::S3::Transfer::DownloadRequest,
                               Aws::S3::Transfer::DownloadProgressSnapshot>;

}  // namespace S3TransferIntegrationTests
