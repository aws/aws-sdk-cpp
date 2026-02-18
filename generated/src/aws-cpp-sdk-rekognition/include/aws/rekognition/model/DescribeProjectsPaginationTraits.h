/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rekognition/RekognitionServiceClientModel.h>
#include <aws/rekognition/Rekognition_EXPORTS.h>
#include <aws/rekognition/model/DescribeProjectsRequest.h>
#include <aws/rekognition/model/DescribeProjectsResult.h>

namespace Aws {
namespace Rekognition {
namespace Pagination {

template <typename Client = RekognitionClient>
struct DescribeProjectsPaginationTraits {
  using RequestType = Model::DescribeProjectsRequest;
  using ResultType = Model::DescribeProjectsResult;
  using OutcomeType = Model::DescribeProjectsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeProjects(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Rekognition
}  // namespace Aws
