/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 *
 * Stream body upload + stream (DataReceiver) download coverage. Exercises the TM 2.0 API that
 * accepts a std::shared_ptr<Aws::IOStream> in place of a file path (upload) and a
 * std::shared_ptr<DownloadDataReceiver> in place of a destination file (download):
 *  - Seekable stream upload below/above the multipart threshold + non-seekable with explicit length.
 *  - Stream body pre-positioned via seekg / partially consumed by read — verify only the remainder
 *    is uploaded.
 *  - DataReceiver zero-copy download (single-part + multipart delivery, ordering + integrity).
 *  - Large stream (32 MiB) MPU round trip.
 */
#include "RecordingProgressListener.h"
#include "S3TransferTestFixture.h"

#include <aws/core/utils/HashingUtils.h>
#include <aws/s3-transfer/DownloadDataReceiver.h>
#include <aws/s3-transfer/S3DownloadBuffer.h>
#include <aws/s3-transfer/S3TransferManager.h>
#include <aws/s3/model/GetObjectRequest.h>
#include <aws/s3/model/HeadObjectRequest.h>
#include <aws/s3/model/PutObjectRequest.h>

#include <atomic>
#include <cstring>
#include <mutex>
#include <sstream>
#include <string>

using namespace Aws::S3::Transfer;
using namespace S3TransferIntegrationTests;

namespace {

// stringstream subclass whose seekoff/seekpos always fail — used to exercise the non-seekable
// upload path (customer must SetContentLength up front).
class NonSeekableStreamBuf : public std::stringbuf {
 public:
  explicit NonSeekableStreamBuf(const std::string& data) : std::stringbuf(data, std::ios_base::in) {}

 protected:
  pos_type seekoff(off_type, std::ios_base::seekdir, std::ios_base::openmode) override {
    return pos_type(off_type(-1));
  }
  pos_type seekpos(pos_type, std::ios_base::openmode) override { return pos_type(off_type(-1)); }
};

class NonSeekableIOStream : public Aws::IOStream {
 public:
  explicit NonSeekableIOStream(const std::string& data) : Aws::IOStream(&m_buf), m_buf(data) {}

 private:
  NonSeekableStreamBuf m_buf;
};

// Test receiver that accumulates delivered parts in call order (thread-safe; CRT may deliver
// concurrently). Used by the DataReceiver download tests.
class RecordingDataReceiver : public DownloadDataReceiver {
 public:
  struct DeliveredPart {
    uint64_t rangeStart;
    Aws::String bytes;
  };

  void OnDataReceived(S3DownloadBuffer buffer) override {
    Aws::Crt::ByteCursor cursor = buffer.GetData();
    Aws::String copy(reinterpret_cast<const char*>(cursor.ptr), cursor.len);
    std::lock_guard<std::mutex> lock(m_mutex);
    m_parts.push_back({buffer.GetRangeStart(), std::move(copy)});
  }

  Aws::Vector<DeliveredPart> Snapshot() const {
    std::lock_guard<std::mutex> lock(m_mutex);
    return m_parts;
  }

 private:
  mutable std::mutex m_mutex;
  Aws::Vector<DeliveredPart> m_parts;
};

class StreamTests : public S3TransferTestFixture {
 protected:
  S3TransferManagerConfiguration MakeConfig() {
    S3TransferManagerConfiguration config;
    config.region = Aws::Region::AWS_TEST_REGION;
    return config;
  }

  // Deterministic in-memory payload — same byte pattern as MakeLocalFileOfSize (i%251).
  static Aws::String MakeDeterministicPayload(uint64_t size) {
    Aws::String payload(static_cast<size_t>(size), '\0');
    for (size_t i = 0; i < payload.size(); ++i) {
      payload[i] = static_cast<char>(i % 251);
    }
    return payload;
  }

  // Same shape but with an offset fill byte, so different tests use distinguishable bytes.
  static Aws::String MakeShiftedPayload(uint64_t size, char fillByte) {
    Aws::String out(static_cast<size_t>(size), '\0');
    for (size_t i = 0; i < out.size(); ++i) {
      out[i] = static_cast<char>((static_cast<unsigned char>(fillByte) + (i % 251)) & 0xFF);
    }
    return out;
  }

  static Aws::String Sha256OfBuffer(const Aws::String& buffer) {
    Aws::StringStream stream;
    stream.write(buffer.data(), static_cast<std::streamsize>(buffer.size()));
    return Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateSHA256(stream));
  }

  static Aws::String Sha256OfBytes(const char* data, size_t size) {
    Aws::StringStream s;
    s.write(data, static_cast<std::streamsize>(size));
    return Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateSHA256(s));
  }

  // Reassemble delivered stream-download parts in order → SHA256.
  static Aws::String ReassembledSha256(Aws::Vector<RecordingDataReceiver::DeliveredPart> parts) {
    std::sort(parts.begin(), parts.end(),
              [](const RecordingDataReceiver::DeliveredPart& a,
                 const RecordingDataReceiver::DeliveredPart& b) { return a.rangeStart < b.rangeStart; });
    Aws::StringStream stream;
    for (const auto& part : parts) {
      stream.write(part.bytes.data(), static_cast<std::streamsize>(part.bytes.size()));
    }
    return Aws::Utils::HashingUtils::Base64Encode(Aws::Utils::HashingUtils::CalculateSHA256(stream));
  }

  Aws::String SeedObject(uint64_t size, const Aws::String& key) {
    Aws::String sourcePath = MakeLocalFileOfSize(size, "seed-stream");
    Aws::S3::Model::PutObjectRequest put;
    put.SetBucket(s_bucketName);
    put.SetKey(key);
    put.SetBody(Aws::MakeShared<Aws::FStream>(ALLOCATION_TAG, sourcePath.c_str(),
                                              std::ios_base::in | std::ios_base::binary));
    auto outcome = s_s3Client->PutObject(put);
    EXPECT_TRUE(outcome.IsSuccess()) << outcome.GetError().GetMessage();
    return sourcePath;
  }

  // Upload a stream body pre-positioned at `offset` via seekg; verify the object S3 sees is the
  // source's tail slice starting at `offset`. Adapted from TM 1.0
  // TransferManager_MultipartTestWithStreamOffset (TransferTests.cpp:1475).
  void RunOffsetUpload(uint64_t totalSize, uint64_t offset) {
    ASSERT_LT(offset, totalSize);
    const Aws::String key = UniqueKey();
    const Aws::String payload = MakeDeterministicPayload(totalSize);
    const uint64_t expectedUploadedBytes = totalSize - offset;
    const Aws::String expectedHash =
        Sha256OfBytes(payload.data() + offset, static_cast<size_t>(expectedUploadedBytes));

    auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
    body->write(payload.data(), static_cast<std::streamsize>(payload.size()));
    body->seekg(static_cast<std::streamoff>(offset), std::ios_base::beg);
    ASSERT_EQ(static_cast<std::streampos>(offset), body->tellg());

    Aws::S3::Model::PutObjectRequest putRequest;
    putRequest.SetBucket(s_bucketName);
    putRequest.SetKey(key);
    UploadRequest request(putRequest, body);

    S3TransferManager manager(MakeConfig());
    UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
    AWS_ASSERT_SUCCESS(outcome);

    Aws::S3::Model::HeadObjectRequest head;
    head.SetBucket(s_bucketName);
    head.SetKey(key);
    auto headOutcome = s_s3Client->HeadObject(head);
    AWS_ASSERT_SUCCESS(headOutcome);
    EXPECT_EQ(static_cast<int64_t>(expectedUploadedBytes), headOutcome.GetResult().GetContentLength());

    Aws::String destPath = LocalTempPath("stream-offset-verify");
    Aws::S3::Model::GetObjectRequest getRequest;
    getRequest.SetBucket(s_bucketName);
    getRequest.SetKey(key);
    getRequest.SetResponseStreamFactory([destPath]() {
      return Aws::New<Aws::FStream>(ALLOCATION_TAG, destPath.c_str(),
                                    std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
    });
    auto getOutcome = s_s3Client->GetObject(getRequest);
    AWS_ASSERT_SUCCESS(getOutcome);
    EXPECT_EQ(expectedHash, FileSha256(destPath));
    Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
  }
};

// ============================================================================================
// Stream body upload
// ============================================================================================

// SEP: stream-based upload below the multipart threshold => single PutObject.
TEST_F(StreamTests, SeekableStreamUploadBelowThreshold) {
  const uint64_t size = 10485760;  // 10 MiB
  const Aws::String key = UniqueKey();
  Aws::String payload = MakeDeterministicPayload(size);
  Aws::String sourceHash = Sha256OfBuffer(payload);
  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  body->write(payload.data(), static_cast<std::streamsize>(payload.size()));

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadRequest request(putRequest, body, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::String downloadPath = LocalTempPath("stream-upload-small-verify");
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  getRequest.SetResponseStreamFactory([downloadPath]() {
    return Aws::New<Aws::FStream>(ALLOCATION_TAG, downloadPath.c_str(),
                                  std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
  });
  auto getOutcome = s_s3Client->GetObject(getRequest);
  AWS_ASSERT_SUCCESS(getOutcome);
  EXPECT_EQ(sourceHash, FileSha256(downloadPath));
  Aws::FileSystem::RemoveFileIfExists(downloadPath.c_str());
}

// SEP: stream-based upload above the multipart threshold => CRT runs MPU internally.
TEST_F(StreamTests, SeekableStreamUploadAboveThreshold) {
  const uint64_t size = 25165824;  // 24 MiB
  const Aws::String key = UniqueKey();
  Aws::String payload = MakeDeterministicPayload(size);
  Aws::String sourceHash = Sha256OfBuffer(payload);
  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  body->write(payload.data(), static_cast<std::streamsize>(payload.size()));

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadRequest request(putRequest, body, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::String downloadPath = LocalTempPath("stream-upload-mpu-verify");
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  getRequest.SetResponseStreamFactory([downloadPath]() {
    return Aws::New<Aws::FStream>(ALLOCATION_TAG, downloadPath.c_str(),
                                  std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
  });
  auto getOutcome = s_s3Client->GetObject(getRequest);
  AWS_ASSERT_SUCCESS(getOutcome);
  EXPECT_EQ(sourceHash, FileSha256(downloadPath));
  Aws::FileSystem::RemoveFileIfExists(downloadPath.c_str());
}

// Non-seekable stream: caller must announce content-length via UploadRequest::SetContentLength.
TEST_F(StreamTests, NonSeekableStreamUploadWithExplicitContentLength) {
  const uint64_t size = 1048576;
  const Aws::String key = UniqueKey();
  Aws::String body(size, '\0');
  for (uint64_t i = 0; i < size; ++i) {
    body[static_cast<size_t>(i)] = static_cast<char>(i % 251);
  }
  auto stream = Aws::MakeShared<NonSeekableIOStream>(ALLOCATION_TAG, std::string(body.c_str(), body.size()));

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  UploadRequest request(putRequest, stream, {listener});
  request.SetContentLength(size);
  ASSERT_TRUE(request.ContentLengthHasBeenSet());
  ASSERT_EQ(size, request.GetContentLength());

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_TRUE(ObjectExists(key));

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());
}

// ============================================================================================
// Stream offset / partial-read
// ============================================================================================

TEST_F(StreamTests, StreamOffsetSingleObjectUpload) {
  RunOffsetUpload(/*totalSize*/ 10ULL * 1024 * 1024, /*offset*/ 8);
}

TEST_F(StreamTests, StreamOffsetMultipartUpload) {
  RunOffsetUpload(/*totalSize*/ 24ULL * 1024 * 1024, /*offset*/ 1024);
}

// Partial read (extraction) before Upload — TM 2.0 must upload only the unread suffix.
TEST_F(StreamTests, PartiallyReadStreamUploadsOnlyRemainder) {
  const uint64_t size = 4ULL * 1024 * 1024;
  const size_t prefixToConsume = 128;
  const Aws::String key = UniqueKey();
  const Aws::String payload = MakeShiftedPayload(size, 'B');
  const Aws::String expectedHash =
      Sha256OfBytes(payload.data() + prefixToConsume, payload.size() - prefixToConsume);

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  body->write(payload.data(), static_cast<std::streamsize>(payload.size()));

  Aws::String scratch(prefixToConsume, '\0');
  body->read(&scratch[0], static_cast<std::streamsize>(prefixToConsume));
  ASSERT_EQ(static_cast<std::streamsize>(prefixToConsume), body->gcount());

  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, body);

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size - prefixToConsume), headOutcome.GetResult().GetContentLength());

  const Aws::String destPath = LocalTempPath("adv-stream-partial");
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  getRequest.SetResponseStreamFactory([destPath]() {
    return Aws::New<Aws::FStream>(ALLOCATION_TAG, destPath.c_str(),
                                  std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
  });
  auto getOutcome = s_s3Client->GetObject(getRequest);
  AWS_ASSERT_SUCCESS(getOutcome);
  EXPECT_EQ(expectedHash, FileSha256(destPath));
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// Large-stream MPU round trip (32 MiB) on the seekable stream path.
TEST_F(StreamTests, LargeSeekableStreamMultipartRoundTrip) {
  const uint64_t size = 32ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();
  const Aws::String payload = MakeShiftedPayload(size, 'A');
  const Aws::String sourceHash = Sha256OfBytes(payload.data(), payload.size());

  auto body = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  body->write(payload.data(), static_cast<std::streamsize>(payload.size()));

  auto listener = Aws::MakeShared<RecordingUploadListener>(ALLOCATION_TAG);
  Aws::S3::Model::PutObjectRequest putRequest;
  putRequest.SetBucket(s_bucketName);
  putRequest.SetKey(key);
  UploadRequest request(putRequest, body, {listener});

  S3TransferManager manager(MakeConfig());
  UploadOutcome outcome = manager.Upload(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::S3::Model::HeadObjectRequest head;
  head.SetBucket(s_bucketName);
  head.SetKey(key);
  auto headOutcome = s_s3Client->HeadObject(head);
  AWS_ASSERT_SUCCESS(headOutcome);
  EXPECT_EQ(static_cast<int64_t>(size), headOutcome.GetResult().GetContentLength());

  const Aws::String destPath = LocalTempPath("adv-stream-mpu");
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  getRequest.SetResponseStreamFactory([destPath]() {
    return Aws::New<Aws::FStream>(ALLOCATION_TAG, destPath.c_str(),
                                  std::ios_base::out | std::ios_base::binary | std::ios_base::trunc);
  });
  auto getOutcome = s_s3Client->GetObject(getRequest);
  AWS_ASSERT_SUCCESS(getOutcome);
  EXPECT_EQ(sourceHash, FileSha256(destPath));
  Aws::FileSystem::RemoveFileIfExists(destPath.c_str());
}

// ============================================================================================
// DataReceiver (zero-copy) download
// ============================================================================================

// Small object: fits in one CRT part, receiver sees a single delivery.
TEST_F(StreamTests, DataReceiverDownloadSingle) {
  const uint64_t size = 1048576;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);
  Aws::String sourceHash = FileSha256(sourcePath);

  auto receiver = Aws::MakeShared<RecordingDataReceiver>(ALLOCATION_TAG);
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  DownloadRequest request(getRequest, std::static_pointer_cast<DownloadDataReceiver>(receiver), {listener});

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  auto parts = receiver->Snapshot();
  ASSERT_FALSE(parts.empty());
  uint64_t totalBytes = 0;
  for (const auto& part : parts) totalBytes += part.bytes.size();
  EXPECT_EQ(size, totalBytes);
  EXPECT_EQ(sourceHash, ReassembledSha256(parts));

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// Multipart-sized object: CRT splits into several parts delivered in object order.
TEST_F(StreamTests, DataReceiverDownloadMultipart) {
  const uint64_t size = 25165824;
  const Aws::String key = UniqueKey();
  Aws::String sourcePath = SeedObject(size, key);
  Aws::String sourceHash = FileSha256(sourcePath);

  auto receiver = Aws::MakeShared<RecordingDataReceiver>(ALLOCATION_TAG);
  auto listener = Aws::MakeShared<RecordingDownloadListener>(ALLOCATION_TAG);
  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  DownloadRequest request(getRequest, std::static_pointer_cast<DownloadDataReceiver>(receiver), {listener});

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  auto parts = receiver->Snapshot();
  ASSERT_GE(parts.size(), 2u) << "Expected multipart delivery for a 24 MiB object";

  uint64_t totalBytes = 0;
  for (const auto& part : parts) totalBytes += part.bytes.size();
  EXPECT_EQ(size, totalBytes);
  EXPECT_EQ(sourceHash, ReassembledSha256(parts));
  EXPECT_EQ(size, listener->maxTransferredBytes.load());

  Aws::FileSystem::RemoveFileIfExists(sourcePath.c_str());
}

// A receiver that reassembles parts into a heap buffer indexed by rangeStart, then SHA256s the
// result. Confirms zero-copy delivery is byte-complete regardless of thread-scheduling order.
TEST_F(StreamTests, DataReceiverReassemblesMultipartInOrder) {
  const uint64_t size = 20ULL * 1024 * 1024;
  const Aws::String key = UniqueKey();
  const Aws::String payload = MakeShiftedPayload(size, 'C');
  const Aws::String sourceHash = Sha256OfBytes(payload.data(), payload.size());

  auto seedBody = Aws::MakeShared<Aws::StringStream>(ALLOCATION_TAG);
  seedBody->write(payload.data(), static_cast<std::streamsize>(payload.size()));
  Aws::S3::Model::PutObjectRequest seedPut;
  seedPut.SetBucket(s_bucketName);
  seedPut.SetKey(key);
  seedPut.SetBody(seedBody);
  AWS_ASSERT_SUCCESS(s_s3Client->PutObject(seedPut));

  class ReassemblingReceiver : public DownloadDataReceiver {
   public:
    explicit ReassemblingReceiver(uint64_t totalSize) : m_buffer(static_cast<size_t>(totalSize), '\0') {}
    void OnDataReceived(S3DownloadBuffer buffer) override {
      std::lock_guard<std::mutex> lock(m_mutex);
      const uint64_t offset = buffer.GetRangeStart();
      const Aws::Crt::ByteCursor cursor = buffer.GetData();
      if (offset + cursor.len > m_buffer.size()) {
        m_overflow = true;
        return;
      }
      std::memcpy(&m_buffer[static_cast<size_t>(offset)], cursor.ptr, cursor.len);
      m_bytesReceived += cursor.len;
    }
    const Aws::String& Buffer() const { return m_buffer; }
    uint64_t BytesReceived() const { return m_bytesReceived; }
    bool Overflow() const { return m_overflow; }

   private:
    std::mutex m_mutex;
    Aws::String m_buffer;
    std::atomic<uint64_t> m_bytesReceived{0};
    std::atomic<bool> m_overflow{false};
  };
  auto receiver = Aws::MakeShared<ReassemblingReceiver>(ALLOCATION_TAG, size);

  Aws::S3::Model::GetObjectRequest getRequest;
  getRequest.SetBucket(s_bucketName);
  getRequest.SetKey(key);
  DownloadRequest request(getRequest, receiver);

  S3TransferManager manager(MakeConfig());
  DownloadOutcome outcome = manager.Download(request).CompletionFuture().get();
  AWS_ASSERT_SUCCESS(outcome);
  EXPECT_FALSE(receiver->Overflow());
  EXPECT_EQ(size, receiver->BytesReceived());
  EXPECT_EQ(sourceHash, Sha256OfBytes(receiver->Buffer().data(), receiver->Buffer().size()));
}

}  // namespace
