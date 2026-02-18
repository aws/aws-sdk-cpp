/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListUltraServersByReservedCapacityRequest.h>
#include <aws/sagemaker/model/ListUltraServersByReservedCapacityResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListUltraServersByReservedCapacityPaginationTraits {
  using RequestType = Model::ListUltraServersByReservedCapacityRequest;
  using ResultType = Model::ListUltraServersByReservedCapacityResult;
  using OutcomeType = Model::ListUltraServersByReservedCapacityOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListUltraServersByReservedCapacity(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
