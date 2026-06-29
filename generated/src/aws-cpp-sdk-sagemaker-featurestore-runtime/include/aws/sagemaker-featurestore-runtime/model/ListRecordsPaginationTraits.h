/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntimeServiceClientModel.h>
#include <aws/sagemaker-featurestore-runtime/SageMakerFeatureStoreRuntime_EXPORTS.h>
#include <aws/sagemaker-featurestore-runtime/model/ListRecordsRequest.h>
#include <aws/sagemaker-featurestore-runtime/model/ListRecordsResult.h>

namespace Aws {
namespace SageMakerFeatureStoreRuntime {
namespace Pagination {

template <typename Client = SageMakerFeatureStoreRuntimeClient>
struct ListRecordsPaginationTraits {
  using RequestType = Model::ListRecordsRequest;
  using ResultType = Model::ListRecordsResult;
  using OutcomeType = Model::ListRecordsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRecords(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMakerFeatureStoreRuntime
}  // namespace Aws
