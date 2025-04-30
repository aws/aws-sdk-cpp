/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#include <gtest/gtest.h>
#include <aws/testing/AwsTestHelpers.h>

#include <aws/machinelearning/MachineLearningClient.h>
#include <aws/machinelearning/MachineLearningEndpointProvider.h>
#include <aws/machinelearning/MachineLearningEndpointRules.h>
#include <aws/machinelearning/MachineLearningErrorMarshaller.h>
#include <aws/machinelearning/MachineLearningErrors.h>
#include <aws/machinelearning/MachineLearningRequest.h>
#include <aws/machinelearning/MachineLearningServiceClientModel.h>
#include <aws/machinelearning/MachineLearning_EXPORTS.h>
#include <aws/machinelearning/model/AddTagsRequest.h>
#include <aws/machinelearning/model/AddTagsResult.h>
#include <aws/machinelearning/model/Algorithm.h>
#include <aws/machinelearning/model/BatchPrediction.h>
#include <aws/machinelearning/model/BatchPredictionFilterVariable.h>
#include <aws/machinelearning/model/CreateBatchPredictionRequest.h>
#include <aws/machinelearning/model/CreateBatchPredictionResult.h>
#include <aws/machinelearning/model/CreateDataSourceFromRDSRequest.h>
#include <aws/machinelearning/model/CreateDataSourceFromRDSResult.h>
#include <aws/machinelearning/model/CreateDataSourceFromRedshiftRequest.h>
#include <aws/machinelearning/model/CreateDataSourceFromRedshiftResult.h>
#include <aws/machinelearning/model/CreateDataSourceFromS3Request.h>
#include <aws/machinelearning/model/CreateDataSourceFromS3Result.h>
#include <aws/machinelearning/model/CreateEvaluationRequest.h>
#include <aws/machinelearning/model/CreateEvaluationResult.h>
#include <aws/machinelearning/model/CreateMLModelRequest.h>
#include <aws/machinelearning/model/CreateMLModelResult.h>
#include <aws/machinelearning/model/CreateRealtimeEndpointRequest.h>
#include <aws/machinelearning/model/CreateRealtimeEndpointResult.h>
#include <aws/machinelearning/model/DataSource.h>
#include <aws/machinelearning/model/DataSourceFilterVariable.h>
#include <aws/machinelearning/model/DeleteBatchPredictionRequest.h>
#include <aws/machinelearning/model/DeleteBatchPredictionResult.h>
#include <aws/machinelearning/model/DeleteDataSourceRequest.h>
#include <aws/machinelearning/model/DeleteDataSourceResult.h>
#include <aws/machinelearning/model/DeleteEvaluationRequest.h>
#include <aws/machinelearning/model/DeleteEvaluationResult.h>
#include <aws/machinelearning/model/DeleteMLModelRequest.h>
#include <aws/machinelearning/model/DeleteMLModelResult.h>
#include <aws/machinelearning/model/DeleteRealtimeEndpointRequest.h>
#include <aws/machinelearning/model/DeleteRealtimeEndpointResult.h>
#include <aws/machinelearning/model/DeleteTagsRequest.h>
#include <aws/machinelearning/model/DeleteTagsResult.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsRequest.h>
#include <aws/machinelearning/model/DescribeBatchPredictionsResult.h>
#include <aws/machinelearning/model/DescribeDataSourcesRequest.h>
#include <aws/machinelearning/model/DescribeDataSourcesResult.h>
#include <aws/machinelearning/model/DescribeEvaluationsRequest.h>
#include <aws/machinelearning/model/DescribeEvaluationsResult.h>
#include <aws/machinelearning/model/DescribeMLModelsRequest.h>
#include <aws/machinelearning/model/DescribeMLModelsResult.h>
#include <aws/machinelearning/model/DescribeTagsRequest.h>
#include <aws/machinelearning/model/DescribeTagsResult.h>
#include <aws/machinelearning/model/DetailsAttributes.h>
#include <aws/machinelearning/model/EntityStatus.h>
#include <aws/machinelearning/model/Evaluation.h>
#include <aws/machinelearning/model/EvaluationFilterVariable.h>
#include <aws/machinelearning/model/GetBatchPredictionRequest.h>
#include <aws/machinelearning/model/GetBatchPredictionResult.h>
#include <aws/machinelearning/model/GetDataSourceRequest.h>
#include <aws/machinelearning/model/GetDataSourceResult.h>
#include <aws/machinelearning/model/GetEvaluationRequest.h>
#include <aws/machinelearning/model/GetEvaluationResult.h>
#include <aws/machinelearning/model/GetMLModelRequest.h>
#include <aws/machinelearning/model/GetMLModelResult.h>
#include <aws/machinelearning/model/IdempotentParameterMismatchException.h>
#include <aws/machinelearning/model/InternalServerException.h>
#include <aws/machinelearning/model/InvalidInputException.h>
#include <aws/machinelearning/model/LimitExceededException.h>
#include <aws/machinelearning/model/MLModel.h>
#include <aws/machinelearning/model/MLModelFilterVariable.h>
#include <aws/machinelearning/model/MLModelType.h>
#include <aws/machinelearning/model/PerformanceMetrics.h>
#include <aws/machinelearning/model/PredictRequest.h>
#include <aws/machinelearning/model/PredictResult.h>
#include <aws/machinelearning/model/Prediction.h>
#include <aws/machinelearning/model/RDSDataSpec.h>
#include <aws/machinelearning/model/RDSDatabase.h>
#include <aws/machinelearning/model/RDSDatabaseCredentials.h>
#include <aws/machinelearning/model/RDSMetadata.h>
#include <aws/machinelearning/model/RealtimeEndpointInfo.h>
#include <aws/machinelearning/model/RealtimeEndpointStatus.h>
#include <aws/machinelearning/model/RedshiftDataSpec.h>
#include <aws/machinelearning/model/RedshiftDatabase.h>
#include <aws/machinelearning/model/RedshiftDatabaseCredentials.h>
#include <aws/machinelearning/model/RedshiftMetadata.h>
#include <aws/machinelearning/model/ResourceNotFoundException.h>
#include <aws/machinelearning/model/S3DataSpec.h>
#include <aws/machinelearning/model/SortOrder.h>
#include <aws/machinelearning/model/Tag.h>
#include <aws/machinelearning/model/TaggableResourceType.h>
#include <aws/machinelearning/model/UpdateBatchPredictionRequest.h>
#include <aws/machinelearning/model/UpdateBatchPredictionResult.h>
#include <aws/machinelearning/model/UpdateDataSourceRequest.h>
#include <aws/machinelearning/model/UpdateDataSourceResult.h>
#include <aws/machinelearning/model/UpdateEvaluationRequest.h>
#include <aws/machinelearning/model/UpdateEvaluationResult.h>
#include <aws/machinelearning/model/UpdateMLModelRequest.h>
#include <aws/machinelearning/model/UpdateMLModelResult.h>

using MachineLearningIncludeTest = ::testing::Test;

TEST_F(MachineLearningIncludeTest, TestClientCompiles)
{
  Aws::Client::ClientConfigurationInitValues cfgInit;
  cfgInit.shouldDisableIMDS = true;
  Aws::Client::ClientConfiguration config(cfgInit);
  AWS_UNREFERENCED_PARAM(config);
  // auto pClient = Aws::MakeUnique<Aws::MachineLearning::MachineLearningClient>("MachineLearningIncludeTest", config);
  // ASSERT_TRUE(pClient.get());
}
