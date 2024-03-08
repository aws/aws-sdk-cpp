/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudfront/CloudFrontClient.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClient.h>

#include <aws/cloudfront/model/CreateKeyValueStore2020_05_31Request.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysRequest.h>


#define TEST_PREFIX "IntegrationTest_"

class CloudfrontKeyValueStoreTest : public ::testing::Test
{

public:

protected:
    virtual void SetUp() override
    {
    }

    virtual void TearDown() override
    {
    }
};

TEST_F(CloudfrontKeyValueStoreTest, TestListKeysUsesSigV4A)
{
  GTEST_SKIP() << "Test takes ~15 minutes, it is a manual test.";

  Aws::String kvsArn;

  {
    Aws::CloudFront::CloudFrontClientConfiguration cfConfig;
    Aws::CloudFront::CloudFrontClient cfClient(cfConfig);
    Aws::CloudFront::Model::CreateKeyValueStore2020_05_31Request request;
    request.SetName("Test3");
    Aws::CloudFront::Model::CreateKeyValueStore2020_05_31Outcome outcome = cfClient.CreateKeyValueStore2020_05_31(request);
    AWS_ASSERT_SUCCESS(outcome);

    kvsArn = outcome.GetResult().GetKeyValueStore().GetARN();
  }
  EXPECT_FALSE(kvsArn.empty());

  std::cout << "KVS ARN = " << kvsArn << "\n";

  // will have to wait here till creation

  {
    Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClientConfiguration kvsConfig;
    Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClient kvsClient(kvsConfig);
    Aws::CloudFrontKeyValueStore::Model::ListKeysRequest request;
    request.SetKvsARN(kvsArn);

    Aws::CloudFrontKeyValueStore::Model::ListKeysOutcome outcome = kvsClient.ListKeys(request);
    AWS_ASSERT_SUCCESS(outcome);

    //ASSERT_FALSE(outcome.GetResult().GetItems().empty());
    for(const auto& it : outcome.GetResult().GetItems())
    {
      std::cout << "Item = " << it.GetKey() << " val " << it.GetValue() << "\n";
    }
  }

}