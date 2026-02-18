/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/wisdom/ConnectWisdomServiceServiceClientModel.h>
#include <aws/wisdom/ConnectWisdomService_EXPORTS.h>
#include <aws/wisdom/model/ListAssistantAssociationsRequest.h>
#include <aws/wisdom/model/ListAssistantAssociationsResult.h>

namespace Aws {
namespace ConnectWisdomService {
namespace Pagination {

template <typename Client = ConnectWisdomServiceClient>
struct ListAssistantAssociationsPaginationTraits {
  using RequestType = Model::ListAssistantAssociationsRequest;
  using ResultType = Model::ListAssistantAssociationsResult;
  using OutcomeType = Model::ListAssistantAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListAssistantAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace ConnectWisdomService
}  // namespace Aws
