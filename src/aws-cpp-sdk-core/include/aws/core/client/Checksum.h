/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/crypto/Hash.h>
#include <aws/core/utils/logging/LogMacros.h>
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>

namespace Aws {
namespace Client {
namespace Checksum {
enum class ChecksumAlgorithm {
  NOT_SET,
  CRC32,
  CRC32C,
  SHA1,
  SHA256,
};

enum class ChecksumMode {
  NOT_SET,
  ENABLED,
};

AWS_CORE_API Aws::String NameForAlgorithm(ChecksumAlgorithm algorithm);
AWS_CORE_API ChecksumAlgorithm AlgorithmForName(const Aws::String& name);

AWS_CORE_API Aws::String NameForMode(ChecksumMode mode);
AWS_CORE_API ChecksumMode ModeForName(const Aws::String& name);

using HashFactory = std::function<std::shared_ptr<Aws::Utils::Crypto::Hash>()>;
AWS_CORE_API HashFactory HashFactoryForAlgorithm(ChecksumAlgorithm algorithm);
AWS_CORE_API HashFactory HashFactoryForAlgorithmName(const Aws::String& algorithmName);

class ChecksumInfo {
 public:
  ChecksumInfo() = default;

  void AddChecksumHeader(ChecksumAlgorithm algorithm, const Aws::String& value) {
    m_checksumHeaders.emplace("x-amz-checksum-" + NameForAlgorithm(algorithm), value);
  }

  Aws::String GetChecksumHeader(ChecksumAlgorithm algorithm) const {
    const auto header = m_checksumHeaders.find("x-amz-checksum-" + NameForAlgorithm(algorithm));
    if (header == m_checksumHeaders.end()) {
      AWS_LOGSTREAM_DEBUG("ChecksumInfo", "could not find header for checksum algorithm, returning empty string");
      return {};
    }
    return header->second;
  }

  Map<Aws::String, Aws::String> GetChecksumHeaders() const { return m_checksumHeaders; }

  void SetChecksumAlgorithm(ChecksumAlgorithm algorithm) {
    m_checksumAlgorithm = algorithm;
    m_checksumHash = HashFactoryForAlgorithm(algorithm)();
  }

  ChecksumAlgorithm GetChecksumAlgorithm() const { return m_checksumAlgorithm; }

  Aws::String GetChecksumAlgorithmName() const { return NameForAlgorithm(m_checksumAlgorithm); }

  std::shared_ptr<Aws::Utils::Crypto::Hash> GetChecksumHash() const { return m_checksumHash; }

  void AddResponseChecksum(ChecksumAlgorithm algorithm) {
    m_responseChecksums.emplace_back(algorithm, HashFactoryForAlgorithm(algorithm)());
  }

  using ResponseChecksumEntry = std::pair<ChecksumAlgorithm, std::shared_ptr<Aws::Utils::Crypto::Hash>>;
  using ResponseChecksums = Aws::Vector<ResponseChecksumEntry>;
  ResponseChecksums GetResponseChecksums() const { return m_responseChecksums; }

  ChecksumMode GetShouldValidateResponse() const { return m_shouldValidateResponse; }

  void SetShouldValidateResponse(ChecksumMode mode) { m_shouldValidateResponse = mode; }

 private:
  Aws::Map<Aws::String, Aws::String> m_checksumHeaders{};
  ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
  std::shared_ptr<Aws::Utils::Crypto::Hash> m_checksumHash{};
  ChecksumMode m_shouldValidateResponse{ChecksumMode::ENABLED};
  ResponseChecksums m_responseChecksums{};
};
}  // namespace Checksum
}  // namespace Client
}  // namespace Aws
