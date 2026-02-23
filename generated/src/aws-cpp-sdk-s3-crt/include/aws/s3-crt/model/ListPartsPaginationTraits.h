/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3CrtServiceClientModel.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ListPartsRequest.h>
#include <aws/s3-crt/model/ListPartsResult.h>

namespace Aws {
namespace S3Crt {
namespace Pagination {

template <typename Client = S3CrtClient>
struct ListPartsPaginationTraits {
  using RequestType = Model::ListPartsRequest;
  using ResultType = Model::ListPartsResult;
  using OutcomeType = Model::ListPartsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListParts(request); }

  static bool HasMoreResults(const ResultType& result) { return result.GetNextPartNumberMarker() != 0; }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetPartNumberMarker(result.GetNextPartNumberMarker());
  }
};

}  // namespace Pagination
}  // namespace S3Crt
}  // namespace Aws
