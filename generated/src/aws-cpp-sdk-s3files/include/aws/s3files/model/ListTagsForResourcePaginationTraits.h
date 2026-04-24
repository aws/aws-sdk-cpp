/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3files/S3FilesServiceClientModel.h>
#include <aws/s3files/S3Files_EXPORTS.h>
#include <aws/s3files/model/ListTagsForResourceRequest.h>
#include <aws/s3files/model/ListTagsForResourceResult.h>

namespace Aws {
namespace S3Files {
namespace Pagination {

template <typename Client = S3FilesClient>
struct ListTagsForResourcePaginationTraits {
  using RequestType = Model::ListTagsForResourceRequest;
  using ResultType = Model::ListTagsForResourceResult;
  using OutcomeType = Model::ListTagsForResourceOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTagsForResource(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace S3Files
}  // namespace Aws
