/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3control/S3ControlServiceClientModel.h>
#include <aws/s3control/S3Control_EXPORTS.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsRequest.h>
#include <aws/s3control/model/ListMultiRegionAccessPointsResult.h>

namespace Aws {
namespace S3Control {
namespace Pagination {

template <typename Client = S3ControlClient>
struct ListMultiRegionAccessPointsPaginationTraits {
  using RequestType = Model::ListMultiRegionAccessPointsRequest;
  using ResultType = Model::ListMultiRegionAccessPointsResult;
  using OutcomeType = Model::ListMultiRegionAccessPointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListMultiRegionAccessPoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Control
}  // namespace Aws
