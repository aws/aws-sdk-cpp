/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift-serverless/RedshiftServerlessServiceClientModel.h>
#include <aws/redshift-serverless/RedshiftServerless_EXPORTS.h>
#include <aws/redshift-serverless/model/ListSnapshotCopyConfigurationsRequest.h>
#include <aws/redshift-serverless/model/ListSnapshotCopyConfigurationsResult.h>

namespace Aws {
namespace RedshiftServerless {
namespace Pagination {

template <typename Client = RedshiftServerlessClient>
struct ListSnapshotCopyConfigurationsPaginationTraits {
  using RequestType = Model::ListSnapshotCopyConfigurationsRequest;
  using ResultType = Model::ListSnapshotCopyConfigurationsResult;
  using OutcomeType = Model::ListSnapshotCopyConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSnapshotCopyConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RedshiftServerless
}  // namespace Aws
