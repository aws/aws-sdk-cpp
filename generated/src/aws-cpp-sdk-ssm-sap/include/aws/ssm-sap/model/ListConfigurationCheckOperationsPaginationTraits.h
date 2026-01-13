/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/ssm-sap/SsmSapServiceClientModel.h>
#include <aws/ssm-sap/SsmSap_EXPORTS.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsRequest.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsResult.h>

namespace Aws {
namespace SsmSap {
namespace Pagination {

template <typename Client = SsmSapClient>
struct ListConfigurationCheckOperationsPaginationTraits {
  using RequestType = Model::ListConfigurationCheckOperationsRequest;
  using ResultType = Model::ListConfigurationCheckOperationsResult;
  using OutcomeType = Model::ListConfigurationCheckOperationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListConfigurationCheckOperations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SsmSap
}  // namespace Aws
