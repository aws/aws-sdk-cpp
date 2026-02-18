/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-contacts/SSMContactsServiceClientModel.h>
#include <aws/ssm-contacts/SSMContacts_EXPORTS.h>
#include <aws/ssm-contacts/model/ListRotationOverridesRequest.h>
#include <aws/ssm-contacts/model/ListRotationOverridesResult.h>

namespace Aws {
namespace SSMContacts {
namespace Pagination {

template <typename Client = SSMContactsClient>
struct ListRotationOverridesPaginationTraits {
  using RequestType = Model::ListRotationOverridesRequest;
  using ResultType = Model::ListRotationOverridesResult;
  using OutcomeType = Model::ListRotationOverridesOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListRotationOverrides(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SSMContacts
}  // namespace Aws
