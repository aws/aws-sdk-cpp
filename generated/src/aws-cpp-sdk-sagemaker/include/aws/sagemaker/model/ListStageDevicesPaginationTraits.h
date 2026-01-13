/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker/SageMakerServiceClientModel.h>
#include <aws/sagemaker/SageMaker_EXPORTS.h>
#include <aws/sagemaker/model/ListStageDevicesRequest.h>
#include <aws/sagemaker/model/ListStageDevicesResult.h>

namespace Aws {
namespace SageMaker {
namespace Pagination {

template <typename Client = SageMakerClient>
struct ListStageDevicesPaginationTraits {
  using RequestType = Model::ListStageDevicesRequest;
  using ResultType = Model::ListStageDevicesResult;
  using OutcomeType = Model::ListStageDevicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListStageDevices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMaker
}  // namespace Aws
