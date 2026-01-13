/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/qbusiness/QBusinessServiceClientModel.h>
#include <aws/qbusiness/QBusiness_EXPORTS.h>
#include <aws/qbusiness/model/ListWebExperiencesRequest.h>
#include <aws/qbusiness/model/ListWebExperiencesResult.h>

namespace Aws {
namespace QBusiness {
namespace Pagination {

template <typename Client = QBusinessClient>
struct ListWebExperiencesPaginationTraits {
  using RequestType = Model::ListWebExperiencesRequest;
  using ResultType = Model::ListWebExperiencesResult;
  using OutcomeType = Model::ListWebExperiencesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListWebExperiences(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace QBusiness
}  // namespace Aws
