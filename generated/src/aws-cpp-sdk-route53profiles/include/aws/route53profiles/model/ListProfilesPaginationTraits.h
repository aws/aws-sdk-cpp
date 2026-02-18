/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/route53profiles/Route53ProfilesServiceClientModel.h>
#include <aws/route53profiles/Route53Profiles_EXPORTS.h>
#include <aws/route53profiles/model/ListProfilesRequest.h>
#include <aws/route53profiles/model/ListProfilesResult.h>

namespace Aws {
namespace Route53Profiles {
namespace Pagination {

template <typename Client = Route53ProfilesClient>
struct ListProfilesPaginationTraits {
  using RequestType = Model::ListProfilesRequest;
  using ResultType = Model::ListProfilesResult;
  using OutcomeType = Model::ListProfilesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListProfiles(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Route53Profiles
}  // namespace Aws
