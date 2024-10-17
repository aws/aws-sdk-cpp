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

using MappingEntry = std::pair<ChecksumAlgorithm, String>;
static const MappingEntry AWS_CHECKSUM_ALGORITHM_MAP[] = {
    {ChecksumAlgorithm::CRC32, "crc32"},
    {ChecksumAlgorithm::CRC32C, "crc32c"},
    {ChecksumAlgorithm::SHA1, "sha1"},
    {ChecksumAlgorithm::SHA256, "sha256"},
};

using FactoryEntry = std::pair<ChecksumAlgorithm, std::function<std::shared_ptr<Aws::Utils::Crypto::Hash>()>>;
static const FactoryEntry HASH_FACTORY_MAPPING[] = {
    {ChecksumAlgorithm::CRC32, []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Crypto::CRC32>(LOG_TAG); }},
    {ChecksumAlgorithm::CRC32C, []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Crypto::CRC32C>(LOG_TAG); }},
    {ChecksumAlgorithm::SHA1, []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Crypto::Sha1>(LOG_TAG); }},
    {ChecksumAlgorithm::SHA256, []() -> std::shared_ptr<Aws::Utils::Crypto::Hash> { return Aws::MakeShared<Crypto::Sha256>(LOG_TAG); }},
};

Aws::String ChecksumInfo::NameForAlgorithm(ChecksumAlgorithm algorithm)
{
    const auto mapping = std::find_if(std::begin(AWS_CHECKSUM_ALGORITHM_MAP),
            std::end(AWS_CHECKSUM_ALGORITHM_MAP),
            [&algorithm](const MappingEntry& entry) -> bool {return entry.first == algorithm;});
    if(mapping == std::end(AWS_CHECKSUM_ALGORITHM_MAP))
    {
        AWS_LOGSTREAM_ERROR(LOG_TAG, "checksum algorithm has a unsupported header");
        return NOT_SUPPORTED_NAME;
    }
    return mapping->second;
}

ChecksumInfo::HashFactory ChecksumInfo::HashFactoryForAlgorithm(ChecksumAlgorithm algorithm)
{
    const auto mapping = std::find_if(std::begin(HASH_FACTORY_MAPPING),
            std::end(HASH_FACTORY_MAPPING),
            [&algorithm](const FactoryEntry& entry) -> bool {return entry.first == algorithm;});

    if(mapping == std::end(HASH_FACTORY_MAPPING))
    {
        AWS_LOGSTREAM_ERROR(LOG_TAG, "could not find factory for algorithm");
    }
    return mapping->second;
}

ChecksumInfo::HashFactory ChecksumInfo::HashFactoryForAlgorithmName(const Aws::String& algorithmName)
{
    const auto mapping = std::find_if(std::begin(AWS_CHECKSUM_ALGORITHM_MAP),
            std::end(AWS_CHECKSUM_ALGORITHM_MAP),
            [&algorithmName](const MappingEntry& entry) -> bool {return entry.second == algorithmName;});

    if(mapping == std::end(AWS_CHECKSUM_ALGORITHM_MAP))
    {
        AWS_LOGSTREAM_ERROR(LOG_TAG, "checksum algorithm has a unsupported header");
    }

    const auto factory = std::find_if(std::begin(HASH_FACTORY_MAPPING),
        std::end(HASH_FACTORY_MAPPING),
        [&mapping](const FactoryEntry& entry) -> bool {return entry.first == mapping->first;});

    if(factory == std::end(HASH_FACTORY_MAPPING))
    {
        AWS_LOGSTREAM_ERROR(LOG_TAG, "could not find factory for algorithm");
    }

    return factory->second;
}