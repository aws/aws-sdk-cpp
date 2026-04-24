/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/utils/Outcome.h>
#include <aws/core/utils/crypto/Factories.h>
#include <aws/core/utils/crypto/Sha512.h>

using namespace Aws::Utils::Crypto;

Sha512::Sha512() : m_hashImpl(CreateSha512Implementation()) {}
Sha512::~Sha512() {}
HashResult Sha512::Calculate(const Aws::String& str) { return m_hashImpl->Calculate(str); }
HashResult Sha512::Calculate(Aws::IStream& stream) { return m_hashImpl->Calculate(stream); }
void Sha512::Update(unsigned char* buffer, size_t bufferSize) { m_hashImpl->Update(buffer, bufferSize); }
HashResult Sha512::GetHash() { return m_hashImpl->GetHash(); }
