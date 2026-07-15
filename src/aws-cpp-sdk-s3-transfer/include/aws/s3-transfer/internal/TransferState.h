/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/s3-transfer/UploadRequest.h>
#include <aws/s3-transfer/UploadResponse.h>
#include <aws/s3-transfer/DownloadRequest.h>
#include <aws/s3-transfer/DownloadResponse.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/http/HttpTypes.h>
#include <aws/crt/s3/S3.h>
#include <atomic>
#include <cstdint>
#include <future>
#include <memory>
#include <mutex>

namespace Aws {
namespace S3 {
namespace Transfer {

// Per-transfer state shared by the CRT callbacks and the customer's handle. The promise is
// fulfilled exactly once, inside the finish callback. PublishMetaRequest and CancelMetaRequest
// synchronize through m_metaRequestLock so a cancel that races publication is never lost.
template <typename RequestT, typename OutcomeT>
struct TransferStateBase {
  std::promise<OutcomeT> promise;
  RequestT request;
  uint64_t totalBytes = 0;
  bool totalBytesHasBeenSet = false;
  std::atomic<uint64_t> transferredBytes{0};
  Aws::Http::HeaderValueCollection responseHeaders;
  int responseStatus = 0;
  std::atomic<bool> canceled{false};

  explicit TransferStateBase(const RequestT& req) : request(req) {}
  virtual ~TransferStateBase() = default;

  TransferStateBase(const TransferStateBase&) = delete;
  TransferStateBase& operator=(const TransferStateBase&) = delete;
  TransferStateBase(TransferStateBase&&) = delete;
  TransferStateBase& operator=(TransferStateBase&&) = delete;

  void PublishMetaRequest(std::shared_ptr<Aws::Crt::S3::S3MetaRequest> metaRequest) {
    std::lock_guard<std::mutex> lock(m_metaRequestLock);
    m_metaRequest = std::move(metaRequest);
    if (canceled.load() && m_metaRequest) {
      m_metaRequest->Cancel();
    }
  }

  void CancelMetaRequest() {
    std::lock_guard<std::mutex> lock(m_metaRequestLock);
    if (m_metaRequest) {
      m_metaRequest->Cancel();
    }
  }

 private:
  mutable std::mutex m_metaRequestLock;
  std::shared_ptr<Aws::Crt::S3::S3MetaRequest> m_metaRequest;
};

struct UploadTransferState : TransferStateBase<UploadRequest, UploadOutcome> {
  using TransferStateBase::TransferStateBase;
};

struct DownloadTransferState : TransferStateBase<DownloadRequest, DownloadOutcome> {
  using TransferStateBase::TransferStateBase;
  Aws::String destinationFilePath;
  Aws::String tempFilePath;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
