/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workspaces/WorkSpacesServiceClientModel.h>
#include <aws/workspaces/WorkSpaces_EXPORTS.h>
#include <aws/workspaces/model/DescribeApplicationAssociationsRequest.h>
#include <aws/workspaces/model/DescribeApplicationAssociationsResult.h>

namespace Aws {
namespace WorkSpaces {
namespace Pagination {

template <typename Client = WorkSpacesClient>
struct DescribeApplicationAssociationsPaginationTraits {
  using RequestType = Model::DescribeApplicationAssociationsRequest;
  using ResultType = Model::DescribeApplicationAssociationsResult;
  using OutcomeType = Model::DescribeApplicationAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeApplicationAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace WorkSpaces
}  // namespace Aws
