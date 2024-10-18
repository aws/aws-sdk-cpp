/**
* Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once
#include <aws/core/utils/memory/stl/AWSMap.h>
#include <aws/core/utils/memory/stl/AWSString.h>


namespace Aws::Utils::Crypto
{
    class Hash;
}

namespace Aws
{
    namespace Client
    {
        namespace Checksum
        {
            enum class ChecksumAlgorithm
            {
                NOT_SET,
                CRC32,
                CRC32C,
                SHA1,
                SHA256,
            };

            class ChecksumInfo
            {
            public:
                static Aws::String NameForAlgorithm(ChecksumAlgorithm algorithm);

                using HashFactory = std::function<std::shared_ptr<Aws::Utils::Crypto::Hash>()>;
                static HashFactory HashFactoryForAlgorithm(ChecksumAlgorithm algorithm);
                static HashFactory HashFactoryForAlgorithmName(const Aws::String& algorithmName);

                ChecksumInfo() = default;

                void AddChecksumHeader(ChecksumAlgorithm algorithm, const Aws::String& value)
                {
                    m_checksumHeaders.emplace("x-amz-checksum" + NameForAlgorithm(algorithm), value);
                }

                Aws::String GetChecksumHeader(ChecksumAlgorithm algorithm) const
                {
                    const auto header = m_checksumHeaders.find("x-amz-checksum" + NameForAlgorithm(algorithm));
                    if(header == m_checksumHeaders.end())
                    {
                        AWS_LOGSTREAM_DEBUG("ChecksumInfo","could not find header for checksum algorithm, returning empty string");
                        return {};
                    }
                    return header->second;
                }

                Map<Aws::String, Aws::String> GetChecksumHeaders() const
                {
                    return m_checksumHeaders;
                }

                void AddResponseChecksum(ChecksumAlgorithm algorithm)
                {
                    m_responseChecksums.emplace_back(algorithm, HashFactoryForAlgorithm(algorithm)());
                }

                using ResponseChecksumEntry = std::pair<ChecksumAlgorithm, std::shared_ptr<Aws::Utils::Crypto::Hash>>;
                using ResponseChecksums = Aws::Vector<ResponseChecksumEntry>;
                ResponseChecksums GetResponseChecksums() const
                {
                    return m_responseChecksums;
                }

                void SetChecksumAlgorithm(ChecksumAlgorithm algorithm)
                {
                    m_checksumAlgorithm = algorithm;
                    m_checksumHash = HashFactoryForAlgorithm(algorithm)();
                }

                ChecksumAlgorithm GetChecksumAlgorithm() const
                {
                    return m_checksumAlgorithm;
                }

                Aws::String GetChecksumAlgorithmName() const
                {
                    return NameForAlgorithm(m_checksumAlgorithm);
                }

                std::shared_ptr<Aws::Utils::Crypto::Hash> GetChecksumHash() const
                {
                    return m_checksumHash;
                }

            private:
                Aws::Map<Aws::String, Aws::String> m_checksumHeaders{};
                ResponseChecksums m_responseChecksums{};
                ChecksumAlgorithm m_checksumAlgorithm{ChecksumAlgorithm::NOT_SET};
                std::shared_ptr<Aws::Utils::Crypto::Hash> m_checksumHash{};
            };
        }
    }
}
