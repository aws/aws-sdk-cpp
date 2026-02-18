/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/CreateHubContentPresignedUrlsRequest.h>
#include <aws/sagemaker/model/CreateHubContentPresignedUrlsResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct CreateHubContentPresignedUrlsPaginationTraits {
  using RequestType = Model::CreateHubContentPresignedUrlsRequest;
  using ResultType = Model::CreateHubContentPresignedUrlsResult;
  using OutcomeType = Model::CreateHubContentPresignedUrlsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->CreateHubContentPresignedUrls(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
