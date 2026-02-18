/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/vpc-lattice/VPCLatticeServiceClientModel.h>
#include <aws/vpc-lattice/VPCLattice_EXPORTS.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsRequest.h>
#include <aws/vpc-lattice/model/ListServiceNetworkVpcAssociationsResult.h>

namespace Aws {
namespace VPCLattice {
namespace Pagination {

template <typename Client = VPCLatticeClient>
struct ListServiceNetworkVpcAssociationsPaginationTraits {
  using RequestType = Model::ListServiceNetworkVpcAssociationsRequest;
  using ResultType = Model::ListServiceNetworkVpcAssociationsResult;
  using OutcomeType = Model::ListServiceNetworkVpcAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListServiceNetworkVpcAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace VPCLattice
}  // namespace Aws
