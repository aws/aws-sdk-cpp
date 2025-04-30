/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreClient.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointProvider.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreEndpointRules.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreErrorMarshaller.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreErrors.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreRequest.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStoreServiceClientModel.h>
#include <aws/cloudfront-keyvaluestore/CloudFrontKeyValueStore_EXPORTS.h>
#include <aws/cloudfront-keyvaluestore/model/DeleteKeyRequest.h>
#include <aws/cloudfront-keyvaluestore/model/DeleteKeyRequestListItem.h>
#include <aws/cloudfront-keyvaluestore/model/DeleteKeyResult.h>
#include <aws/cloudfront-keyvaluestore/model/DescribeKeyValueStoreRequest.h>
#include <aws/cloudfront-keyvaluestore/model/DescribeKeyValueStoreResult.h>
#include <aws/cloudfront-keyvaluestore/model/GetKeyRequest.h>
#include <aws/cloudfront-keyvaluestore/model/GetKeyResult.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysRequest.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysResponseListItem.h>
#include <aws/cloudfront-keyvaluestore/model/ListKeysResult.h>
#include <aws/cloudfront-keyvaluestore/model/PutKeyRequest.h>
#include <aws/cloudfront-keyvaluestore/model/PutKeyRequestListItem.h>
#include <aws/cloudfront-keyvaluestore/model/PutKeyResult.h>
#include <aws/cloudfront-keyvaluestore/model/UpdateKeysRequest.h>
#include <aws/cloudfront-keyvaluestore/model/UpdateKeysResult.h>

using CloudFrontKeyValueStoreIncludeTest = ::testing::Test;

TEST_F(CloudFrontKeyValueStoreIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::CloudFrontKeyValueStore::CloudFrontKeyValueStoreClient>("CloudFrontKeyValueStoreIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
