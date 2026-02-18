/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/pca-connector-ad/PcaConnectorAdServiceClientModel.h>
#include <aws/pca-connector-ad/PcaConnectorAd_EXPORTS.h>
#include <aws/pca-connector-ad/model/ListTemplatesRequest.h>
#include <aws/pca-connector-ad/model/ListTemplatesResult.h>

namespace Aws {
namespace PcaConnectorAd {
namespace Pagination {

template <typename Client = PcaConnectorAdClient>
struct ListTemplatesPaginationTraits {
  using RequestType = Model::ListTemplatesRequest;
  using ResultType = Model::ListTemplatesResult;
  using OutcomeType = Model::ListTemplatesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTemplates(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PcaConnectorAd
}  // namespace Aws
