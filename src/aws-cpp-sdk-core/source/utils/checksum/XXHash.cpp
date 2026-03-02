/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/checksum/XXHash.h>
#include <aws/crt/Api.h>
#include <aws/crt/checksum/XXHash.h>

using namespace Aws::Utils::Checksum;
using namespace Aws::Utils::Crypto;
using namespace Aws::Crt::Checksum;

namespace {
const size_t XXHASH_64_DIGEST_LENGTH = 8;
const size_t XXHASH_128_DIGEST_LENGTH = 16;
const char* HASH_IMPL_LOG_TAG = "CrtXXHashImpl";

template <size_t DigestSize>
class CrtXXHashImpl : public Hash {
 public:
  CrtXXHashImpl(const std::function<XXHash()>& hashFactory) : m_xxHashImpl{hashFactory()} {}

  ~CrtXXHashImpl() override = default;

  HashResult Calculate(const Aws::String& str) override {
    if (!m_xxHashImpl.Update(Aws::Crt::ByteCursorFromArray(reinterpret_cast<const uint8_t*>(str.data()), str.size()))) {
      AWS_LOGSTREAM_ERROR(HASH_IMPL_LOG_TAG, "Failed to update hash " << Aws::Crt::ErrorDebugString(Aws::Crt::LastError()));
      return false;
    }
    return DigestHash();
  }

  HashResult Calculate(Aws::IStream& stream) override {
    if (stream.bad()) {
      AWS_LOGSTREAM_ERROR(HASH_IMPL_LOG_TAG, "XXHash stream in invalid state");
      return false;
    }
    stream.seekg(0, Aws::IStream::beg);
    if (stream.bad()) {
      AWS_LOGSTREAM_ERROR(HASH_IMPL_LOG_TAG, "XXHash stream in invalid state");
      return false;
    }
    const auto result = [this, &stream]() -> HashResult {
      uint8_t streamBuffer[INTERNAL_HASH_STREAM_BUFFER_SIZE];
      while (stream.good()) {
        stream.read((char*)streamBuffer, INTERNAL_HASH_STREAM_BUFFER_SIZE);
        std::streamsize const bytesRead = stream.gcount();
        if (bytesRead > 0) {
          Update(streamBuffer, static_cast<size_t>(bytesRead));
        }
      }

      if (!stream.eof()) {
        AWS_LOGSTREAM_ERROR(HASH_IMPL_LOG_TAG, "XXHash stream in invalid state");
        return false;
      }

      return DigestHash();
    }();
    stream.clear();
    stream.seekg(0, Aws::IStream::beg);
    return result;
  }

  void Update(unsigned char* buffer, size_t bufferSize) override {
    if (!m_xxHashImpl.Update(Aws::Crt::ByteCursorFromArray(buffer, bufferSize))) {
      AWS_LOGSTREAM_ERROR(HASH_IMPL_LOG_TAG, "Failed to update hash " << Aws::Crt::ErrorDebugString(Aws::Crt::LastError()));
    }
  }

  HashResult GetHash() override { return DigestHash(); }

 private:
  HashResult DigestHash() {
    Aws::Utils::ByteBuffer resultBuffer{DigestSize};
    Aws::Crt::ByteBuf outBuf = Aws::Crt::ByteBufFromEmptyArray(resultBuffer.GetUnderlyingData(), resultBuffer.GetSize());
    if (m_xxHashImpl.Digest(outBuf)) {
      resultBuffer.SetLength(DigestSize);
      return resultBuffer;
    }
    AWS_LOGSTREAM_ERROR(HASH_IMPL_LOG_TAG, "Failed to digest hash " << Aws::Crt::ErrorDebugString(Aws::Crt::LastError()));
    return false;
  }

  XXHash m_xxHashImpl;
};
}  // namespace

XXHash64::XXHash64()
    : m_hashImpl{Aws::MakeUnique<CrtXXHashImpl<XXHASH_64_DIGEST_LENGTH>>("XXHASH64", []() -> XXHash { return XXHash::CreateXXHash64(); })} {
}
XXHash64::~XXHash64() = default;
HashResult XXHash64::Calculate(const Aws::String& str) { return m_hashImpl->Calculate(str); }
HashResult XXHash64::Calculate(Aws::IStream& stream) { return m_hashImpl->Calculate(stream); }
void XXHash64::Update(unsigned char* buffer, size_t bufferSize) { m_hashImpl->Update(buffer, bufferSize); }
HashResult XXHash64::GetHash() { return m_hashImpl->GetHash(); }

XXHash3::XXHash3()
    : m_hashImpl{
          Aws::MakeUnique<CrtXXHashImpl<XXHASH_64_DIGEST_LENGTH>>("XXHASH3", []() -> XXHash { return XXHash::CreateXXHash3_64(); })} {}
XXHash3::~XXHash3() = default;
HashResult XXHash3::Calculate(const Aws::String& str) { return m_hashImpl->Calculate(str); }
HashResult XXHash3::Calculate(Aws::IStream& stream) { return m_hashImpl->Calculate(stream); }
void XXHash3::Update(unsigned char* buffer, size_t bufferSize) { m_hashImpl->Update(buffer, bufferSize); }
HashResult XXHash3::GetHash() { return m_hashImpl->GetHash(); }

XXHash128::XXHash128()
    : m_hashImpl{
          Aws::MakeUnique<CrtXXHashImpl<XXHASH_128_DIGEST_LENGTH>>("XXHASH128", []() -> XXHash { return XXHash::CreateXXHash3_128(); })} {}
XXHash128::~XXHash128() = default;
HashResult XXHash128::Calculate(const Aws::String& str) { return m_hashImpl->Calculate(str); }
HashResult XXHash128::Calculate(Aws::IStream& stream) { return m_hashImpl->Calculate(stream); }
void XXHash128::Update(unsigned char* buffer, size_t bufferSize) { m_hashImpl->Update(buffer, bufferSize); }
HashResult XXHash128::GetHash() { return m_hashImpl->GetHash(); }
