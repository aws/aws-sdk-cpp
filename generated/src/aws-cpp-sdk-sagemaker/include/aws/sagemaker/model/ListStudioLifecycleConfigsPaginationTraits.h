/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsRequest.h>
#include <aws/sagemaker/model/ListStudioLifecycleConfigsResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListStudioLifecycleConfigsPaginationTraits {
  using RequestType = Model::ListStudioLifecycleConfigsRequest;
  using ResultType = Model::ListStudioLifecycleConfigsResult;
  using OutcomeType = Model::ListStudioLifecycleConfigsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStudioLifecycleConfigs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
