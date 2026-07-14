/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/s3-transfer/S3DownloadBuffer.h>
#include <utility>

namespace Aws {
namespace S3 {
namespace Transfer {

S3DownloadBuffer::S3DownloadBuffer(std::shared_ptr<Aws::Crt::S3::S3BufferTicket> ticket,
                                   Aws::Crt::ByteCursor bytes, uint64_t rangeStart) noexcept
    : m_ticket(std::move(ticket)), m_bytes(bytes), m_rangeStart(rangeStart) {}

S3DownloadBuffer::S3DownloadBuffer(S3DownloadBuffer&& other) noexcept
    : m_ticket(std::move(other.m_ticket)), m_bytes(other.m_bytes), m_rangeStart(other.m_rangeStart) {
  other.m_bytes = Aws::Crt::ByteCursor{0, nullptr};
}

S3DownloadBuffer& S3DownloadBuffer::operator=(S3DownloadBuffer&& other) noexcept {
  if (this != &other) {
    m_ticket = std::move(other.m_ticket);
    m_bytes = other.m_bytes;
    m_rangeStart = other.m_rangeStart;
    other.m_bytes = Aws::Crt::ByteCursor{0, nullptr};
  }
  return *this;
}

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
