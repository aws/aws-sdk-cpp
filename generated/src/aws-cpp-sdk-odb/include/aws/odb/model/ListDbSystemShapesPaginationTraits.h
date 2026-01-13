/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/odb/OdbServiceClientModel.h>
#include <aws/odb/Odb_EXPORTS.h>
#include <aws/odb/model/ListDbSystemShapesRequest.h>
#include <aws/odb/model/ListDbSystemShapesResult.h>

namespace Aws {
namespace odb {
namespace Pagination {

template <typename Client = OdbClient>
struct ListDbSystemShapesPaginationTraits {
  using RequestType = Model::ListDbSystemShapesRequest;
  using ResultType = Model::ListDbSystemShapesResult;
  using OutcomeType = Model::ListDbSystemShapesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDbSystemShapes(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace odb
}  // namespace Aws
