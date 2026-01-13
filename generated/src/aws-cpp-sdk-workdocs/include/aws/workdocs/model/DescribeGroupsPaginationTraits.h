/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocsServiceClientModel.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DescribeGroupsRequest.h>
#include <aws/workdocs/model/DescribeGroupsResult.h>

namespace Aws {
namespace WorkDocs {
namespace Pagination {

template <typename Client = WorkDocsClient>
struct DescribeGroupsPaginationTraits {
  using RequestType = Model::DescribeGroupsRequest;
  using ResultType = Model::DescribeGroupsResult;
  using OutcomeType = Model::DescribeGroupsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeGroups(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace WorkDocs
}  // namespace Aws
