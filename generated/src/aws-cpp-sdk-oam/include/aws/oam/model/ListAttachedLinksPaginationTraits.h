/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/oam/OAMServiceClientModel.h>
#include <aws/oam/OAM_EXPORTS.h>
#include <aws/oam/model/ListAttachedLinksRequest.h>
#include <aws/oam/model/ListAttachedLinksResult.h>

namespace Aws {
namespace OAM {
namespace Pagination {

template <typename Client = OAMClient>
struct ListAttachedLinksPaginationTraits {
  using RequestType = Model::ListAttachedLinksRequest;
  using ResultType = Model::ListAttachedLinksResult;
  using OutcomeType = Model::ListAttachedLinksOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAttachedLinks(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace OAM
}  // namespace Aws
