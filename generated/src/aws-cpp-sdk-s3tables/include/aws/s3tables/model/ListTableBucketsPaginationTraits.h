/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3tables/S3TablesServiceClientModel.h>
#include <aws/s3tables/S3Tables_EXPORTS.h>
#include <aws/s3tables/model/ListTableBucketsRequest.h>
#include <aws/s3tables/model/ListTableBucketsResult.h>

namespace Aws {
namespace S3Tables {
namespace Pagination {

template <typename Client = S3TablesClient>
struct ListTableBucketsPaginationTraits {
  using RequestType = Model::ListTableBucketsRequest;
  using ResultType = Model::ListTableBucketsResult;
  using OutcomeType = Model::ListTableBucketsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTableBuckets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3Tables
}  // namespace Aws
