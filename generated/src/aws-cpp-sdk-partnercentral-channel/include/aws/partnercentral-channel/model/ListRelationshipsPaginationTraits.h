/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/partnercentral-channel/PartnerCentralChannelServiceClientModel.h>
#include <aws/partnercentral-channel/PartnerCentralChannel_EXPORTS.h>
#include <aws/partnercentral-channel/model/ListRelationshipsRequest.h>
#include <aws/partnercentral-channel/model/ListRelationshipsResult.h>

namespace Aws {
namespace PartnerCentralChannel {
namespace Pagination {

template <typename Client = PartnerCentralChannelClient>
struct ListRelationshipsPaginationTraits {
  using RequestType = Model::ListRelationshipsRequest;
  using ResultType = Model::ListRelationshipsResult;
  using OutcomeType = Model::ListRelationshipsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRelationships(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace PartnerCentralChannel
}  // namespace Aws
