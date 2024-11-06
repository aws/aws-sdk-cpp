/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/client/Checksum.h>
#include <aws/core/utils/crypto/CRC32.h>
#include <aws/core/utils/crypto/Sha1.h>
#include <aws/core/utils/crypto/Sha256.h>

using namespace Aws;
using namespace Aws::Client::Checksum;

const static char* LOG_TAG = "Checksum";
const static char* NOT_SUPPORTED_NAME = "not-supported";

using AlgorithmMappingEntry = std::pair<ChecksumAlgorithm, String>;
static const AlgorithmMappingEntry ALGORITHM_TO_NAME_MAPPING[] = {
    {ChecksumAlgorithm::CRC32, "crc32"},
    {ChecksumAlgorithm::CRC32C, "crc32c"},
    {ChecksumAlgorithm::SHA1, "sha1"},
    {ChecksumAlgorithm::SHA256, "sha256"},
};

using NameMappingEntry = std::pair<String, ChecksumAlgorithm>;
static const NameMappingEntry NAME_TO_ALGORITHM_MAPPING[] = {
    {"crc32", ChecksumAlgorithm::CRC32},
    {"crc32c", ChecksumAlgorithm::CRC32C},
    {"sha1", ChecksumAlgorithm::SHA1},
    {"sha256", ChecksumAlgorithm::SHA256},
};

Aws::String Client::Checksum::NameForAlgorithm(ChecksumAlgorithm algorithm) {
  const auto mapping = std::find_if(std::begin(ALGORITHM_TO_NAME_MAPPING), std::end(ALGORITHM_TO_NAME_MAPPING),
                                    [&algorithm](const AlgorithmMappingEntry& entry) -> bool { return entry.first == algorithm; });
  if (mapping == std::end(ALGORITHM_TO_NAME_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "unsupported algorithm");
    return NOT_SUPPORTED_NAME;
  }
  return mapping->second;
}

ChecksumAlgorithm Client::Checksum::AlgorithmForName(const Aws::String& name) {
  const auto mapping = std::find_if(std::begin(NAME_TO_ALGORITHM_MAPPING), std::end(NAME_TO_ALGORITHM_MAPPING),
                                    [&name](const NameMappingEntry& entry) -> bool { return entry.first == name; });
  if (mapping == std::end(NAME_TO_ALGORITHM_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "unsupported algorithm name");
    return ChecksumAlgorithm::NOT_SET;
  }
  return mapping->second;
}

using ModeToNameMappingEntry = std::pair<ChecksumMode, String>;
static const ModeToNameMappingEntry MODE_TO_NAME_MAPPING[] = {
    {ChecksumMode::NOT_SET, "NOT_SET"},
    {ChecksumMode::ENABLED, "ENABLED"},
};

using NameToModeMappingEntry = std::pair<String, ChecksumMode>;
static const NameToModeMappingEntry NAME_TO_MODE_MAPPING[] = {
    {"NOT_SET", ChecksumMode::NOT_SET},
    {"ENABLED", ChecksumMode::ENABLED},
};

Aws::String Client::Checksum::NameForMode(ChecksumMode mode) {
  const auto mapping = std::find_if(std::begin(MODE_TO_NAME_MAPPING), std::end(MODE_TO_NAME_MAPPING),
                                    [&mode](const ModeToNameMappingEntry& entry) -> bool { return entry.first == mode; });
  if (mapping == std::end(MODE_TO_NAME_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "unsupported mode");
    return NOT_SUPPORTED_NAME;
  }
  return mapping->second;
}

ChecksumMode Client::Checksum::ModeForName(const Aws::String& name) {
  const auto mapping = std::find_if(std::begin(NAME_TO_MODE_MAPPING), std::end(NAME_TO_MODE_MAPPING),
                                    [&name](const NameToModeMappingEntry& entry) -> bool { return entry.first == name; });
  if (mapping == std::end(NAME_TO_MODE_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "unsupported algorithm name");
    return ChecksumMode::NOT_SET;
  }
  return mapping->second;
}

using FactoryEntry = std::pair<ChecksumAlgorithm, std::function<std::shared_ptr<Aws::Utils::Crypto::Hash>()>>;
static const FactoryEntry HASH_FACTORY_MAPPING[] = {
    {ChecksumAlgorithm::CRC32,
     []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Utils::Crypto::CRC32>(LOG_TAG); }},
    {ChecksumAlgorithm::CRC32C,
     []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Utils::Crypto::CRC32C>(LOG_TAG); }},
    {ChecksumAlgorithm::SHA1, []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Utils::Crypto::Sha1>(LOG_TAG); }},
    {ChecksumAlgorithm::SHA256,
     []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Utils::Crypto::Sha256>(LOG_TAG); }},
};

HashFactory Client::Checksum::HashFactoryForAlgorithm(ChecksumAlgorithm algorithm) {
  const auto mapping = std::find_if(std::begin(HASH_FACTORY_MAPPING), std::end(HASH_FACTORY_MAPPING),
                                    [&algorithm](const FactoryEntry& entry) -> bool { return entry.first == algorithm; });

  if (mapping == std::end(HASH_FACTORY_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "could not find factory for algorithm");
  }
  return mapping->second;
}

HashFactory Client::Checksum::HashFactoryForAlgorithmName(const Aws::String& algorithmName) {
  const auto mapping = std::find_if(std::begin(ALGORITHM_TO_NAME_MAPPING), std::end(ALGORITHM_TO_NAME_MAPPING),
                                    [&algorithmName](const AlgorithmMappingEntry& entry) -> bool { return entry.second == algorithmName; });

  if (mapping == std::end(ALGORITHM_TO_NAME_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "checksum algorithm has a unsupported header");
  }

  const auto factory = std::find_if(std::begin(HASH_FACTORY_MAPPING), std::end(HASH_FACTORY_MAPPING),
                                    [&mapping](const FactoryEntry& entry) -> bool { return entry.first == mapping->first; });

  if (factory == std::end(HASH_FACTORY_MAPPING)) {
    AWS_LOGSTREAM_ERROR(LOG_TAG, "could not find factory for algorithm");
  }

  return factory->second;
}