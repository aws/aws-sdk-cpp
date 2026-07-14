/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/s3-transfer/S3Transfer_EXPORTS.h>
#include <aws/crt/s3/S3.h>
#include <cstdint>
#include <memory>

namespace Aws {
namespace S3 {
namespace Transfer {

/**
 * One part of a zero-copy download, delivered to DownloadDataReceiver::OnDataReceived. GetData()
 * returns a cursor into CRT-owned memory; this buffer holds an owning reference so the bytes stay
 * valid as long as this object (or a copy of it) is alive.
 */
class AWS_S3_TRANSFER_API S3DownloadBuffer final {
 public:
  // The cursor carries the per-part body delivered by the CRT; the ticket is an owning reference
  // that keeps the underlying CRT-owned buffer alive for as long as this object (or a copy) is alive.
  explicit S3DownloadBuffer(std::shared_ptr<Aws::Crt::S3::S3BufferTicket> ticket,
                            Aws::Crt::ByteCursor bytes, uint64_t rangeStart) noexcept;

  S3DownloadBuffer(const S3DownloadBuffer&) = delete;
  S3DownloadBuffer& operator=(const S3DownloadBuffer&) = delete;
  S3DownloadBuffer(S3DownloadBuffer&& other) noexcept;
  S3DownloadBuffer& operator=(S3DownloadBuffer&& other) noexcept;
  ~S3DownloadBuffer() = default;

  // Cursor into CRT-owned memory; empty if the part carried no bytes.
  inline Aws::Crt::ByteCursor GetData() const { return m_bytes; }
  // Byte offset within the object at which this part begins.
  inline uint64_t GetRangeStart() const { return m_rangeStart; }

 private:
  std::shared_ptr<Aws::Crt::S3::S3BufferTicket> m_ticket;
  Aws::Crt::ByteCursor m_bytes;
  uint64_t m_rangeStart;
};

}  // namespace Transfer
}  // namespace S3
}  // namespace Aws
