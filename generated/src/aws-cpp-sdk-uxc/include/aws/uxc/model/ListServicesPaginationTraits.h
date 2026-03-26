/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/uxc/UxcServiceClientModel.h>
#include <aws/uxc/Uxc_EXPORTS.h>
#include <aws/uxc/model/ListServicesRequest.h>
#include <aws/uxc/model/ListServicesResult.h>

namespace Aws {
namespace uxc {
namespace Pagination {

template <typename Client = UxcClient>
struct ListServicesPaginationTraits {
  using RequestType = Model::ListServicesRequest;
  using ResultType = Model::ListServicesResult;
  using OutcomeType = Model::ListServicesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListServices(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace uxc
}  // namespace Aws
