/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/s3vectors/S3VectorsClient.h>
#include <aws/s3vectors/S3VectorsEndpointProvider.h>
#include <aws/s3vectors/S3VectorsEndpointRules.h>
#include <aws/s3vectors/S3VectorsErrorMarshaller.h>
#include <aws/s3vectors/S3VectorsErrors.h>
#include <aws/s3vectors/S3VectorsRequest.h>
#include <aws/s3vectors/S3VectorsServiceClientModel.h>
#include <aws/s3vectors/S3Vectors_EXPORTS.h>
#include <aws/s3vectors/model/CreateIndexRequest.h>
#include <aws/s3vectors/model/CreateIndexResult.h>
#include <aws/s3vectors/model/CreateVectorBucketRequest.h>
#include <aws/s3vectors/model/CreateVectorBucketResult.h>
#include <aws/s3vectors/model/DataType.h>
#include <aws/s3vectors/model/DeleteIndexRequest.h>
#include <aws/s3vectors/model/DeleteIndexResult.h>
#include <aws/s3vectors/model/DeleteVectorBucketPolicyRequest.h>
#include <aws/s3vectors/model/DeleteVectorBucketPolicyResult.h>
#include <aws/s3vectors/model/DeleteVectorBucketRequest.h>
#include <aws/s3vectors/model/DeleteVectorBucketResult.h>
#include <aws/s3vectors/model/DeleteVectorsRequest.h>
#include <aws/s3vectors/model/DeleteVectorsResult.h>
#include <aws/s3vectors/model/DistanceMetric.h>
#include <aws/s3vectors/model/EncryptionConfiguration.h>
#include <aws/s3vectors/model/GetIndexRequest.h>
#include <aws/s3vectors/model/GetIndexResult.h>
#include <aws/s3vectors/model/GetOutputVector.h>
#include <aws/s3vectors/model/GetVectorBucketPolicyRequest.h>
#include <aws/s3vectors/model/GetVectorBucketPolicyResult.h>
#include <aws/s3vectors/model/GetVectorBucketRequest.h>
#include <aws/s3vectors/model/GetVectorBucketResult.h>
#include <aws/s3vectors/model/GetVectorsRequest.h>
#include <aws/s3vectors/model/GetVectorsResult.h>
#include <aws/s3vectors/model/Index.h>
#include <aws/s3vectors/model/IndexSummary.h>
#include <aws/s3vectors/model/ListIndexesRequest.h>
#include <aws/s3vectors/model/ListIndexesResult.h>
#include <aws/s3vectors/model/ListOutputVector.h>
#include <aws/s3vectors/model/ListVectorBucketsRequest.h>
#include <aws/s3vectors/model/ListVectorBucketsResult.h>
#include <aws/s3vectors/model/ListVectorsRequest.h>
#include <aws/s3vectors/model/ListVectorsResult.h>
#include <aws/s3vectors/model/MetadataConfiguration.h>
#include <aws/s3vectors/model/PutInputVector.h>
#include <aws/s3vectors/model/PutVectorBucketPolicyRequest.h>
#include <aws/s3vectors/model/PutVectorBucketPolicyResult.h>
#include <aws/s3vectors/model/PutVectorsRequest.h>
#include <aws/s3vectors/model/PutVectorsResult.h>
#include <aws/s3vectors/model/QueryOutputVector.h>
#include <aws/s3vectors/model/QueryVectorsRequest.h>
#include <aws/s3vectors/model/QueryVectorsResult.h>
#include <aws/s3vectors/model/SseType.h>
#include <aws/s3vectors/model/ValidationException.h>
#include <aws/s3vectors/model/ValidationExceptionField.h>
#include <aws/s3vectors/model/VectorBucket.h>
#include <aws/s3vectors/model/VectorBucketSummary.h>
#include <aws/s3vectors/model/VectorData.h>

using S3VectorsIncludeTest = ::testing::Test;

TEST_F(S3VectorsIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::S3Vectors::S3VectorsClient>("S3VectorsIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
