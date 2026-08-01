/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/UploadDirectoryRequest.h>

#include <cassert>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

UploadDirectoryRequest::UploadDirectoryRequest(
    Aws::String bucket, Aws::String sourceDirectory,
    Aws::Vector<std::shared_ptr<UploadDirectoryProgressListener>> transferListeners)
    : m_bucket(std::move(bucket)),
      m_sourceDirectory(std::move(sourceDirectory)),
      m_transferListeners(std::move(transferListeners)) {
  assert(!m_bucket.empty() && "UploadDirectoryRequest bucket must not be empty");
  assert(!m_sourceDirectory.empty() && "UploadDirectoryRequest source directory must not be empty");
}

UploadDirectoryRequest& UploadDirectoryRequest::SetS3Prefix(Aws::String v) {
  m_s3Prefix = std::move(v);
  return *this;
}

UploadDirectoryRequest& UploadDirectoryRequest::SetFollowSymbolicLinks(bool v) {
  m_followSymbolicLinks = v;
  return *this;
}

UploadDirectoryRequest& UploadDirectoryRequest::SetMaxDepth(uint32_t v) {
  m_maxDepth = v;
  return *this;
}

UploadDirectoryRequest& UploadDirectoryRequest::SetMaxConcurrency(uint64_t v) {
  m_maxConcurrency = v;
  return *this;
}

UploadDirectoryRequest& UploadDirectoryRequest::SetUploadRequestTransformer(UploadRequestTransformer v) {
  m_uploadRequestTransformer = std::move(v);
  return *this;
}

UploadDirectoryRequest& UploadDirectoryRequest::SetFailurePolicy(std::shared_ptr<FailurePolicy> v) {
  m_failurePolicy = std::move(v);
  return *this;
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
