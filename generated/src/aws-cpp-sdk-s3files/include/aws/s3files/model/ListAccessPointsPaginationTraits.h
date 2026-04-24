/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3files/S3FilesServiceClientModel.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ListAccessPointsRequest.h>
#include <aws/s3files/model/ListAccessPointsResult.h>

namespace Aws {
namespace S3Files {
namespace Pagination {

template <typename Client = S3FilesClient>
struct ListAccessPointsPaginationTraits {
  using RequestType = Model::ListAccessPointsRequest;
  using ResultType = Model::ListAccessPointsResult;
  using OutcomeType = Model::ListAccessPointsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAccessPoints(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Files
}  // namespace Aws
