/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/auth/CrtCredentialsProvider.h>
#include <aws/core/utils/memory/stl/AWSQueue.h>
#include <aws/crt/auth/Credentials.h>
#include <aws/testing/AwsCppSdkGTestSuite.h>

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

class CrtCredentialsProviderTest : public Aws::Testing::AwsCppSdkGTestSuite {};

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
