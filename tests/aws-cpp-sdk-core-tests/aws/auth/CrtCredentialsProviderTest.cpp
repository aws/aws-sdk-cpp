/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

#include <chrono>
#include <memory>
#include <thread>

namespace {
const char* CRT_CREDS_TEST_LOG = "CrtCredentialsProviderTest";
}

class MockCrtCredentialsProvider : public Aws::Crt::Auth::ICredentialsProvider {
 public:
  MockCrtCredentialsProvider() = default;
  ~MockCrtCredentialsProvider() override = default;

  void Clear() {
    m_numCalls = 0;
    Aws::Queue<std::shared_ptr<Aws::Crt::Auth::Credentials>>().swap(m_credentials);
  };

  int GetNumCalls() const { return m_numCalls; }

  void AddCredentialForReturn(std::shared_ptr<Aws::Crt::Auth::Credentials> credentials) { m_credentials.push(credentials); }

  bool GetCredentials(const Aws::Crt::Auth::OnCredentialsResolved& onCredentialsResolved) const override {
    m_numCalls++;
    if (m_credentials.empty()) {
      onCredentialsResolved({}, AWS_OP_ERR);
      return false;
    }
    const auto creds = m_credentials.front();
    onCredentialsResolved(creds, AWS_OP_SUCCESS);
    m_credentials.pop();
    return true;
  }
  aws_credentials_provider* GetUnderlyingHandle() const noexcept override { return nullptr; }
  bool IsValid() const noexcept override { return true; };

 private:
  mutable int m_numCalls = 0;
  mutable Aws::Queue<std::shared_ptr<Aws::Crt::Auth::Credentials>> m_credentials;
};

class MockedCredsProvider : public Aws::Auth::CrtCredentialsProvider {
 public:
  MockedCredsProvider(std::shared_ptr<MockCrtCredentialsProvider> provider)
      : Aws::Auth::CrtCredentialsProvider([provider]() -> std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> { return provider; },
                                          std::chrono::milliseconds(10000), Aws::Client::UserAgentFeature::CREDENTIALS_LOGIN,
                                          "MockedCredsProvider"),
        m_provider{provider} {}

 private:
  std::shared_ptr<MockCrtCredentialsProvider> m_provider;
};

class AsyncMockCrtCredentialsProvider : public Aws::Crt::Auth::ICredentialsProvider {
 public:
  explicit AsyncMockCrtCredentialsProvider(std::chrono::milliseconds callbackDelay,
                                           std::shared_ptr<Aws::Crt::Auth::Credentials> credentials)
      : m_callbackDelay{callbackDelay}, m_credentials{std::move(credentials)} {}

  ~AsyncMockCrtCredentialsProvider() override {
    if (m_worker.joinable()) {
      m_worker.join();
    }
  }

  bool GetCredentials(const Aws::Crt::Auth::OnCredentialsResolved& onCredentialsResolved) const override {
    const std::chrono::milliseconds delay = m_callbackDelay;
    const std::shared_ptr<Aws::Crt::Auth::Credentials> creds = m_credentials;
    m_worker = std::thread([delay, creds, onCredentialsResolved]() {
      std::this_thread::sleep_for(delay);
      onCredentialsResolved(creds, AWS_OP_SUCCESS);
    });
    return true;
  }

  aws_credentials_provider* GetUnderlyingHandle() const noexcept override { return nullptr; }
  bool IsValid() const noexcept override { return true; }

 private:
  std::chrono::milliseconds m_callbackDelay;
  std::shared_ptr<Aws::Crt::Auth::Credentials> m_credentials;
  mutable std::thread m_worker;
};

class AsyncMockedCredsProvider : public Aws::Auth::CrtCredentialsProvider {
 public:
  AsyncMockedCredsProvider(std::shared_ptr<AsyncMockCrtCredentialsProvider> provider, std::chrono::milliseconds timeout)
      : Aws::Auth::CrtCredentialsProvider([provider]() -> std::shared_ptr<Aws::Crt::Auth::ICredentialsProvider> { return provider; },
                                          timeout, Aws::Client::UserAgentFeature::CREDENTIALS_LOGIN, "AsyncMockedCredsProvider"),
        m_provider{provider} {}

 private:
  std::shared_ptr<AsyncMockCrtCredentialsProvider> m_provider;
};

class CrtCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite {};

TEST_F(CrtCredentialsProviderTest, ShouldNotUseFreedStateWhenRefreshOutlivesTimeout) {
  auto crtCreds = Aws::MakeShared<Aws::Crt::Auth::Credentials>(
      CRT_CREDS_TEST_LOG, Aws::Crt::ByteCursorFromCString("access"), Aws::Crt::ByteCursorFromCString("secret"),
      Aws::Crt::ByteCursorFromCString("token"), static_cast<uint64_t>((Aws::Utils::DateTime::Now() + std::chrono::minutes(100)).Seconds()));

  auto underlying_mock = Aws::MakeShared<AsyncMockCrtCredentialsProvider>(CRT_CREDS_TEST_LOG, std::chrono::milliseconds(300), crtCreds);

  {
    AsyncMockedCredsProvider provider(underlying_mock, std::chrono::milliseconds(50));
    EXPECT_TRUE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  }

  std::this_thread::sleep_for(std::chrono::milliseconds(400));
}

TEST_F(CrtCredentialsProviderTest, ShouldCache) {
  auto underlying_mock = Aws::MakeShared<MockCrtCredentialsProvider>(CRT_CREDS_TEST_LOG);
  underlying_mock->AddCredentialForReturn(Aws::MakeShared<Aws::Crt::Auth::Credentials>(
      CRT_CREDS_TEST_LOG, Aws::Crt::ByteCursorFromCString("access"), Aws::Crt::ByteCursorFromCString("secret"),
      Aws::Crt::ByteCursorFromCString("token"),
      static_cast<uint64_t>((Aws::Utils::DateTime::Now() + std::chrono::minutes(100)).Seconds())));
  MockedCredsProvider provider(underlying_mock);
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_EQ(underlying_mock->GetNumCalls(), 1);
}

TEST_F(CrtCredentialsProviderTest, ShouldRefreshIfNearExpiration) {
  auto underlying_mock = Aws::MakeShared<MockCrtCredentialsProvider>(CRT_CREDS_TEST_LOG);
  underlying_mock->AddCredentialForReturn(Aws::MakeShared<Aws::Crt::Auth::Credentials>(
      CRT_CREDS_TEST_LOG, Aws::Crt::ByteCursorFromCString("access"), Aws::Crt::ByteCursorFromCString("secret"),
      Aws::Crt::ByteCursorFromCString("token"), static_cast<uint64_t>((Aws::Utils::DateTime::Now() + std::chrono::minutes(3)).Seconds())));
  underlying_mock->AddCredentialForReturn(Aws::MakeShared<Aws::Crt::Auth::Credentials>(
      CRT_CREDS_TEST_LOG, Aws::Crt::ByteCursorFromCString("updated_access"), Aws::Crt::ByteCursorFromCString("updated_access"),
      Aws::Crt::ByteCursorFromCString("updated_access"),
      static_cast<uint64_t>((Aws::Utils::DateTime::Now() + std::chrono::minutes(3)).Seconds())));
  MockedCredsProvider provider(underlying_mock);
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_FALSE(provider.GetAWSCredentials().IsExpiredOrEmpty());
  EXPECT_EQ(underlying_mock->GetNumCalls(), 2);
}
