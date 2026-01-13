/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3OutpostsServiceClientModel.h>
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/model/ListEndpointsRequest.h>
#include <aws/s3outposts/model/ListEndpointsResult.h>

namespace Aws {
namespace S3Outposts {
namespace Pagination {

template <typename Client = S3OutpostsClient>
struct ListEndpointsPaginationTraits {
  using RequestType = Model::ListEndpointsRequest;
  using ResultType = Model::ListEndpointsResult;
  using OutcomeType = Model::ListEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Outposts
}  // namespace Aws
