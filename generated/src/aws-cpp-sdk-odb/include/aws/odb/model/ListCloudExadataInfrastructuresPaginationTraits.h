/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresRequest.h>
#include <aws/odb/model/ListCloudExadataInfrastructuresResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListCloudExadataInfrastructuresPaginationTraits {
  using RequestType = Model::ListCloudExadataInfrastructuresRequest;
  using ResultType = Model::ListCloudExadataInfrastructuresResult;
  using OutcomeType = Model::ListCloudExadataInfrastructuresOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCloudExadataInfrastructures(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
