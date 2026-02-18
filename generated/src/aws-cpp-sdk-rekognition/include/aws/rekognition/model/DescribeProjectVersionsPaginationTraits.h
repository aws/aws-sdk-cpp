/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/RekognitionServiceClientModel.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DescribeProjectVersionsRequest.h>
#include <aws/rekognition/model/DescribeProjectVersionsResult.h>

namespace Aws {
namespace Rekognition {
namespace Pagination {

template <typename Client = RekognitionClient>
struct DescribeProjectVersionsPaginationTraits {
  using RequestType = Model::DescribeProjectVersionsRequest;
  using ResultType = Model::DescribeProjectVersionsResult;
  using OutcomeType = Model::DescribeProjectVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeProjectVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Rekognition
}  // namespace Aws
