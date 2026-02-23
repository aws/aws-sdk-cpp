/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3CrtServiceClientModel.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ListObjectsV2Request.h>
#include <aws/s3-crt/model/ListObjectsV2Result.h>

namespace Aws {
namespace S3Crt {
namespace Pagination {

template <typename Client = S3CrtClient>
struct ListObjectsV2PaginationTraits {
  using RequestType = Model::ListObjectsV2Request;
  using ResultType = Model::ListObjectsV2Result;
  using OutcomeType = Model::ListObjectsV2Outcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListObjectsV2(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetNextContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3Crt
}  // namespace Aws
