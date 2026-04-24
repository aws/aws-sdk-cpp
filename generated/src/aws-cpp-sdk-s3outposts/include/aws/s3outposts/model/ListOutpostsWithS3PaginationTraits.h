/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3outposts/S3OutpostsServiceClientModel.h>
#include <aws/s3outposts/S3Outposts_EXPORTS.h>
#include <aws/s3outposts/model/ListOutpostsWithS3Request.h>
#include <aws/s3outposts/model/ListOutpostsWithS3Result.h>

namespace Aws {
namespace S3Outposts {
namespace Pagination {

template <typename Client = S3OutpostsClient>
struct ListOutpostsWithS3PaginationTraits {
  using RequestType = Model::ListOutpostsWithS3Request;
  using ResultType = Model::ListOutpostsWithS3Result;
  using OutcomeType = Model::ListOutpostsWithS3Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListOutpostsWithS3(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Outposts
}  // namespace Aws
