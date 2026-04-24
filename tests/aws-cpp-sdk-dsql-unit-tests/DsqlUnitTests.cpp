/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */
#include <aws/core/Aws.h>
#include <aws/core/auth/AWSCredentials.h>
#include <aws/dsql/DSQLClient.h>
#include <aws/testing/AwsTestHelpers.h>
#include <aws/testing/MemoryTesting.h>
#include <aws/testing/mocks/http/MockHttpClient.h>
#include <gtest/gtest.h>

using namespace Aws;
using namespace Aws::Auth;
using namespace Aws::Http;
using namespace Aws::DSQL;

const char* ALLOCATION_TAG = "DSQLUnitTest";

class DsqlUnitTest : public testing::Test {
 protected:
  static void SetUpTestSuite() {
#ifdef USE_AWS_MEMORY_MANAGEMENT
    testMemorySystem_.reset(new ExactTestMemorySystem(1024, 128));
    options_.memoryManagementOptions.memoryManager = testMemorySystem_.get();
#endif
    InitAPI(options_);
    mockClientFactory_ = Aws::MakeShared<MockHttpClientFactory>(ALLOCATION_TAG);
    mockHttpClient_ = Aws::MakeShared<MockHttpClient>(ALLOCATION_TAG);
    mockClientFactory_->SetClient(mockHttpClient_);
    SetHttpClientFactory(mockClientFactory_);
    AWSCredentials credentials{"mock", "credentials"};
    const auto epProvider = Aws::MakeShared<DSQLEndpointProvider>(ALLOCATION_TAG);
    DSQLClientConfiguration config;
    config.region = "us-east-1";
    client_ = Aws::MakeShared<DSQLClient>("ALLOCATION_TAG", credentials, epProvider, config);
  }

  static void TearDownTestSuite() {
    mockClientFactory_.reset();
    mockHttpClient_.reset();
    client_.reset();
    ShutdownAPI(options_);
#ifdef USE_AWS_MEMORY_MANAGEMENT
    EXPECT_EQ(testMemorySystem_->GetCurrentOutstandingAllocations(), 0ULL);
    EXPECT_EQ(testMemorySystem_->GetCurrentBytesAllocated(), 0ULL);
    EXPECT_TRUE(testMemorySystem_->IsClean());
    if (testMemorySystem_->GetCurrentOutstandingAllocations() != 0ULL) FAIL();
    if (testMemorySystem_->GetCurrentBytesAllocated() != 0ULL) FAIL();
    if (!testMemorySystem_->IsClean()) FAIL();
    testMemorySystem_.reset();
#endif
  }

  static SDKOptions options_;
  static std::shared_ptr<MockHttpClient> mockHttpClient_;
  static std::shared_ptr<MockHttpClientFactory> mockClientFactory_;
  static std::shared_ptr<DSQLClient> client_;
#ifdef USE_AWS_MEMORY_MANAGEMENT
  static std::unique_ptr<ExactTestMemorySystem> testMemorySystem_;
#endif
};

SDKOptions DsqlUnitTest::options_;
std::shared_ptr<MockHttpClient> DsqlUnitTest::mockHttpClient_ = nullptr;
std::shared_ptr<MockHttpClientFactory> DsqlUnitTest::mockClientFactory_ = nullptr;
std::shared_ptr<DSQLClient> DsqlUnitTest::client_ = nullptr;
#ifdef USE_AWS_MEMORY_MANAGEMENT
// this must be std:: because this is an utility to track allocations in the SDK and should not rely on SDK
std::unique_ptr<ExactTestMemorySystem> DsqlUnitTest::testMemorySystem_ = nullptr;
#endif

TEST_F(DsqlUnitTest, ShouldPresignUrlGenerateDBConnectAuthToken) {
  const auto urlOutcome = client_->GenerateDBConnectAuthToken("LaLiLuLelo.dsql.us-east-1.on.aws", "us-east-1");
  AWS_EXPECT_SUCCESS(urlOutcome);
  EXPECT_TRUE(urlOutcome.GetResult().find("dsql.us-east-1.on.aws?") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("Action=DbConnect") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Algorithm=AWS4-HMAC-SHA256") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Credential=mock") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("us-east-1%2Fdsql%2Faws4_request") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Expires=900") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-SignedHeaders=host") != Aws::String::npos);
}

TEST_F(DsqlUnitTest, ShouldPresignUrlGenerateDBConnectAuthTokenNonDefaultExpirse) {
  const auto urlOutcome = client_->GenerateDBConnectAuthToken("LaLiLuLelo.dsql.us-east-1.on.aws", "us-east-1", 1138);
  AWS_EXPECT_SUCCESS(urlOutcome);
  EXPECT_TRUE(urlOutcome.GetResult().find("LaLiLuLelo.dsql.us-east-1.on.aws?") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("Action=DbConnect") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Algorithm=AWS4-HMAC-SHA256") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Credential=mock") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("us-east-1%2Fdsql%2Faws4_request") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Expires=1138") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-SignedHeaders=host") != Aws::String::npos);
}

TEST_F(DsqlUnitTest, ShouldFailPresignUrlGenerateDBConnectAuthToken) {
  const auto emptyHostOutcome = client_->GenerateDBConnectAuthToken("", "us-east-1");
  EXPECT_FALSE(emptyHostOutcome.IsSuccess());
  EXPECT_EQ("all argments must be non-empty", emptyHostOutcome.GetError().GetMessage());

  const auto emptyRegionOutcome = client_->GenerateDBConnectAuthToken("LaLiLuLelo.dsql.us-east-1.on.aws", "");
  EXPECT_FALSE(emptyRegionOutcome.IsSuccess());
  EXPECT_EQ("all argments must be non-empty", emptyRegionOutcome.GetError().GetMessage());
}

TEST_F(DsqlUnitTest, ShouldPresignUrlGenerateDBConnectSuperuserAuthToken) {
  const auto urlOutcome = client_->GenerateDBConnectAdminAuthToken("LaLiLuLelo.dsql.us-east-1.on.aws", "us-east-1");
  AWS_EXPECT_SUCCESS(urlOutcome);
  EXPECT_TRUE(urlOutcome.GetResult().find("dsql.us-east-1.on.aws?") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("Action=DbConnectAdmin") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Algorithm=AWS4-HMAC-SHA256") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Credential=mock") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("us-east-1%2Fdsql%2Faws4_request") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Expires=900") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-SignedHeaders=host") != Aws::String::npos);
}

TEST_F(DsqlUnitTest, ShouldPresignUrlGenerateDBConnectSuperuserAuthTokenNonDefaultExpirse) {
  const auto urlOutcome = client_->GenerateDBConnectAdminAuthToken("LaLiLuLelo.dsql.us-east-1.on.aws", "us-east-1", 1138);
  AWS_EXPECT_SUCCESS(urlOutcome);
  EXPECT_TRUE(urlOutcome.GetResult().find("LaLiLuLelo.dsql.us-east-1.on.aws?") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("Action=DbConnectAdmin") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Algorithm=AWS4-HMAC-SHA256") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Credential=mock") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("us-east-1%2Fdsql%2Faws4_request") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-Expires=1138") != Aws::String::npos);
  EXPECT_TRUE(urlOutcome.GetResult().find("X-Amz-SignedHeaders=host") != Aws::String::npos);
}

TEST_F(DsqlUnitTest, ShouldFailPresignUrlGenerateDBConnectSuperuserAuthToken) {
  const auto emptyHostOutcome = client_->GenerateDBConnectAdminAuthToken("", "us-east-1");
  EXPECT_FALSE(emptyHostOutcome.IsSuccess());
  EXPECT_EQ("all argments must be non-empty", emptyHostOutcome.GetError().GetMessage());

  const auto emptyRegionOutcome = client_->GenerateDBConnectAdminAuthToken("LaLiLuLelo.dsql.us-east-1.on.aws", "");
  EXPECT_FALSE(emptyRegionOutcome.IsSuccess());
  EXPECT_EQ("all argments must be non-empty", emptyRegionOutcome.GetError().GetMessage());
}

TEST_F(DsqlUnitTest, CreateClusterShouldDefaultIdempotencyToken) {
  DSQL::Model::CreateClusterRequest request{};
  EXPECT_FALSE(request.GetClientToken().empty());
  EXPECT_TRUE(request.ClientTokenHasBeenSet());
}
