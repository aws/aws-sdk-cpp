/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#pragma once

#include <aws/core/Core_EXPORTS.h>
#include <aws/core/utils/crypto/Hash.h>

namespace Aws {
namespace Utils {
namespace Checksum {

/**
 * An implementation of Hash using XXHash64.
 */
class AWS_CORE_API XXHash64 : public Aws::Utils::Crypto::Hash {
 public:
  XXHash64();
  ~XXHash64() override;
  virtual Aws::Utils::Crypto::HashResult Calculate(const Aws::String& str) override;
  virtual Aws::Utils::Crypto::HashResult Calculate(Aws::IStream& stream) override;
  virtual void Update(unsigned char* buffer, size_t bufferSize) override;
  virtual Aws::Utils::Crypto::HashResult GetHash() override;

 private:
  std::shared_ptr<Aws::Utils::Crypto::Hash> m_hashImpl;
};

/**
 * An implementation of Hash using XXHash3.
 */
class AWS_CORE_API XXHash3 : public Aws::Utils::Crypto::Hash {
 public:
  XXHash3();
  virtual ~XXHash3();
  virtual Aws::Utils::Crypto::HashResult Calculate(const Aws::String& str) override;
  virtual Aws::Utils::Crypto::HashResult Calculate(Aws::IStream& stream) override;
  virtual void Update(unsigned char* buffer, size_t bufferSize) override;
  virtual Aws::Utils::Crypto::HashResult GetHash() override;

 private:
  std::shared_ptr<Aws::Utils::Crypto::Hash> m_hashImpl;
};

/**
 * An implementation of Hash using XXHash128.
 */
class AWS_CORE_API XXHash128 : public Aws::Utils::Crypto::Hash {
 public:
  XXHash128();
  virtual ~XXHash128();
  virtual Aws::Utils::Crypto::HashResult Calculate(const Aws::String& str) override;
  virtual Aws::Utils::Crypto::HashResult Calculate(Aws::IStream& stream) override;
  virtual void Update(unsigned char* buffer, size_t bufferSize) override;
  virtual Aws::Utils::Crypto::HashResult GetHash() override;

 private:
  std::shared_ptr<Aws::Utils::Crypto::Hash> m_hashImpl;
};
}  // namespace Checksum
}  // namespace Utils
}  // namespace Aws