/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3CrtServiceClientModel.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ListBucketsRequest.h>
#include <aws/s3-crt/model/ListBucketsResult.h>

namespace Aws {
namespace S3Crt {
namespace Pagination {

template <typename Client = S3CrtClient>
struct ListBucketsPaginationTraits {
  using RequestType = Model::ListBucketsRequest;
  using ResultType = Model::ListBucketsResult;
  using OutcomeType = Model::ListBucketsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListBuckets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3Crt
}  // namespace Aws
