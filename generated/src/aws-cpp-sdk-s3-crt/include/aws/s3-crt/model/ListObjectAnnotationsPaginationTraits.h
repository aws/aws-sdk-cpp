/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/s3-crt/S3CrtServiceClientModel.h>
#include <aws/s3-crt/S3Crt_EXPORTS.h>
#include <aws/s3-crt/model/ListObjectAnnotationsRequest.h>
#include <aws/s3-crt/model/ListObjectAnnotationsResult.h>

namespace Aws {
namespace S3Crt {
namespace Pagination {

template <typename Client = S3CrtClient>
struct ListObjectAnnotationsPaginationTraits {
  using RequestType = Model::ListObjectAnnotationsRequest;
  using ResultType = Model::ListObjectAnnotationsResult;
  using OutcomeType = Model::ListObjectAnnotationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListObjectAnnotations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextContinuationToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetContinuationToken(result.GetNextContinuationToken());
  }
};

}  // namespace Pagination
}  // namespace S3Crt
}  // namespace Aws
