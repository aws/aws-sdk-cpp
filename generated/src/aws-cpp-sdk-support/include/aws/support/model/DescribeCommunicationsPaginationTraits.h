/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/support/SupportServiceClientModel.h>
#include <aws/support/Support_EXPORTS.h>
#include <aws/support/model/DescribeCommunicationsRequest.h>
#include <aws/support/model/DescribeCommunicationsResult.h>

namespace Aws {
namespace Support {
namespace Pagination {

template <typename Client = SupportClient>
struct DescribeCommunicationsPaginationTraits {
  using RequestType = Model::DescribeCommunicationsRequest;
  using ResultType = Model::DescribeCommunicationsResult;
  using OutcomeType = Model::DescribeCommunicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeCommunications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace Support
}  // namespace Aws
