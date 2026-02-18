/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sns/SNSServiceClientModel.h>
#include <aws/sns/SNS_EXPORTS.h>
#include <aws/sns/model/ListPlatformApplicationsRequest.h>
#include <aws/sns/model/ListPlatformApplicationsResult.h>

namespace Aws {
namespace SNS {
namespace Pagination {

template <typename Client = SNSClient>
struct ListPlatformApplicationsPaginationTraits {
  using RequestType = Model::ListPlatformApplicationsRequest;
  using ResultType = Model::ListPlatformApplicationsResult;
  using OutcomeType = Model::ListPlatformApplicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPlatformApplications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SNS
}  // namespace Aws
