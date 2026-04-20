/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/UnreferencedParam.h>
#include <aws/core/utils/local/stream/CloseableStreamBuf.h>
#include <aws/core/utils/stream/ConcurrentStreamBuf.h>
#include <aws/core/utils/stream/HttpWriteDataStreamBuf.h>

namespace {
const char* LOG_TAG = "CloseableStreamBuf";
}

bool Aws::Utils::Stream::CloseableStreamBuf::WaitForDrain(int64_t timeout) {
  AWS_UNREFERENCED_PARAM(timeout);
  return true;
}

void Aws::Utils::Stream::CloseableStreamBuf::Close(Aws::IOStream* pStreamToClose) { AWS_UNREFERENCED_PARAM(pStreamToClose); }

Aws::Utils::Stream::CloseableConcurrentStreamBuf::CloseableConcurrentStreamBuf(size_t bufferSize)
    : CloseableStreamBuf(Aws::MakeUnique<Aws::Utils::Stream::ConcurrentStreamBuf>(LOG_TAG, bufferSize)) {}

bool Aws::Utils::Stream::CloseableConcurrentStreamBuf::WaitForDrain(int64_t timeoutMs) {
  return static_cast<Aws::Utils::Stream::ConcurrentStreamBuf*>(GetStreamBufHandler())->WaitForDrain(timeoutMs);
}

void Aws::Utils::Stream::CloseableConcurrentStreamBuf::Close(Aws::IOStream* stream) {
  static_cast<Aws::Utils::Stream::ConcurrentStreamBuf*>(GetStreamBufHandler())->SetEofInput(stream);
}

Aws::Utils::Stream::CloseableHttpWriteDataStreamBuf::CloseableHttpWriteDataStreamBuf(
    std::shared_ptr<Aws::Utils::Stream::HttpWriteDataStreamBuf> streambuf)
    : CloseableStreamBuf(std::move(streambuf)) {}

void Aws::Utils::Stream::CloseableHttpWriteDataStreamBuf::Close(Aws::IOStream* stream) {
  AWS_UNREFERENCED_PARAM(stream);
  static_cast<Aws::Utils::Stream::HttpWriteDataStreamBuf*>(GetStreamBufHandler())->Close();
}
