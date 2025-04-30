/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/mediastore-data/MediaStoreDataClient.h>
#include <aws/mediastore-data/MediaStoreDataEndpointProvider.h>
#include <aws/mediastore-data/MediaStoreDataEndpointRules.h>
#include <aws/mediastore-data/MediaStoreDataErrorMarshaller.h>
#include <aws/mediastore-data/MediaStoreDataErrors.h>
#include <aws/mediastore-data/MediaStoreDataRequest.h>
#include <aws/mediastore-data/MediaStoreDataServiceClientModel.h>
#include <aws/mediastore-data/MediaStoreData_EXPORTS.h>
#include <aws/mediastore-data/model/DeleteObjectRequest.h>
#include <aws/mediastore-data/model/DeleteObjectResult.h>
#include <aws/mediastore-data/model/DescribeObjectRequest.h>
#include <aws/mediastore-data/model/DescribeObjectResult.h>
#include <aws/mediastore-data/model/GetObjectRequest.h>
#include <aws/mediastore-data/model/GetObjectResult.h>
#include <aws/mediastore-data/model/Item.h>
#include <aws/mediastore-data/model/ItemType.h>
#include <aws/mediastore-data/model/ListItemsRequest.h>
#include <aws/mediastore-data/model/ListItemsResult.h>
#include <aws/mediastore-data/model/PutObjectRequest.h>
#include <aws/mediastore-data/model/PutObjectResult.h>
#include <aws/mediastore-data/model/StorageClass.h>
#include <aws/mediastore-data/model/UploadAvailability.h>

using MediaStoreDataIncludeTest = ::testing::Test;

TEST_F(MediaStoreDataIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MediaStoreData::MediaStoreDataClient>("MediaStoreDataIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
