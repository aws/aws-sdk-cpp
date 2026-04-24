/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAdServiceClientModel.h>
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesRequest.h>
#include <aws/pca-connector-ad/model/ListServicePrincipalNamesResult.h>

namespace Aws {
namespace PcaConnectorAd {
namespace Pagination {

template <typename Client = PcaConnectorAdClient>
struct ListServicePrincipalNamesPaginationTraits {
  using RequestType = Model::ListServicePrincipalNamesRequest;
  using ResultType = Model::ListServicePrincipalNamesResult;
  using OutcomeType = Model::ListServicePrincipalNamesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListServicePrincipalNames(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PcaConnectorAd
}  // namespace Aws
