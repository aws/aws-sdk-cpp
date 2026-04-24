/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3OutpostsServiceClientModel.h>
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/model/ListSharedEndpointsRequest.h>
#include <aws/s3outposts/model/ListSharedEndpointsResult.h>

namespace Aws {
namespace S3Outposts {
namespace Pagination {

template <typename Client = S3OutpostsClient>
struct ListSharedEndpointsPaginationTraits {
  using RequestType = Model::ListSharedEndpointsRequest;
  using ResultType = Model::ListSharedEndpointsResult;
  using OutcomeType = Model::ListSharedEndpointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSharedEndpoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Outposts
}  // namespace Aws
