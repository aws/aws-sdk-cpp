/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/crypto/Hash.h>

namespace Aws {
namespace Utils {
namespace Crypto {

/**
 * An implementation of Hash using SHA512.
 */
class AWS_CORE_API Sha512 : public Hash {
 public:
  Sha512();
  ~Sha512() override;
  virtual Aws::Utils::Crypto::HashResult Calculate(const Aws::String& str) override;
  virtual Aws::Utils::Crypto::HashResult Calculate(Aws::IStream& stream) override;
  virtual void Update(unsigned char* buffer, size_t bufferSize) override;
  virtual Aws::Utils::Crypto::HashResult GetHash() override;

 private:
  std::shared_ptr<Hash> m_hashImpl;
};

}  // namespace Crypto
}  // namespace Utils
}  // namespace Aws
