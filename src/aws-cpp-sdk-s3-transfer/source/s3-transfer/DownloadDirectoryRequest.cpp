/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/DownloadDirectoryRequest.h>

#include <cassert>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

DownloadDirectoryRequest::DownloadDirectoryRequest(
    Aws::String bucket, Aws::String destinationDirectory,
    Aws::Vector<std::shared_ptr<DownloadDirectoryProgressListener>> transferListeners)
    : m_bucket(std::move(bucket)),
      m_destinationDirectory(std::move(destinationDirectory)),
      m_transferListeners(std::move(transferListeners)) {
  assert(!m_bucket.empty() && "DownloadDirectoryRequest bucket must not be empty");
  assert(!m_destinationDirectory.empty() &&
         "DownloadDirectoryRequest destination directory must not be empty");
}

DownloadDirectoryRequest& DownloadDirectoryRequest::SetS3Prefix(Aws::String v) {
  m_s3Prefix = std::move(v);
  return *this;
}

DownloadDirectoryRequest& DownloadDirectoryRequest::SetFilter(ObjectFilter v) {
  m_filter = std::move(v);
  return *this;
}

DownloadDirectoryRequest& DownloadDirectoryRequest::SetDownloadRequestTransformer(
    DownloadRequestTransformer v) {
  m_downloadRequestTransformer = std::move(v);
  return *this;
}

DownloadDirectoryRequest& DownloadDirectoryRequest::SetMaxConcurrency(uint64_t v) {
  m_maxConcurrency = v;
  return *this;
}

DownloadDirectoryRequest& DownloadDirectoryRequest::SetFailurePolicy(std::shared_ptr<FailurePolicy> v) {
  m_failurePolicy = std::move(v);
  return *this;
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
