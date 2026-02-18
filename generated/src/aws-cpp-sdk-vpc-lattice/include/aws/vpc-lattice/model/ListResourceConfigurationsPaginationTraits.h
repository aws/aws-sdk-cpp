/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLatticeServiceClientModel.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsRequest.h>
#include <aws/vpc-lattice/model/ListResourceConfigurationsResult.h>

namespace Aws {
namespace VPCLattice {
namespace Pagination {

template <typename Client = VPCLatticeClient>
struct ListResourceConfigurationsPaginationTraits {
  using RequestType = Model::ListResourceConfigurationsRequest;
  using ResultType = Model::ListResourceConfigurationsResult;
  using OutcomeType = Model::ListResourceConfigurationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListResourceConfigurations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VPCLattice
}  // namespace Aws
