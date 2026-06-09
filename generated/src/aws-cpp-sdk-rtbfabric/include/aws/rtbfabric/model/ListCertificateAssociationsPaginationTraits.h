/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rtbfabric/RTBFabricServiceClientModel.h>
#include <aws/rtbfabric/RTBFabric_EXPORTS.h>
#include <aws/rtbfabric/model/ListCertificateAssociationsRequest.h>
#include <aws/rtbfabric/model/ListCertificateAssociationsResult.h>

namespace Aws {
namespace RTBFabric {
namespace Pagination {

template <typename Client = RTBFabricClient>
struct ListCertificateAssociationsPaginationTraits {
  using RequestType = Model::ListCertificateAssociationsRequest;
  using ResultType = Model::ListCertificateAssociationsResult;
  using OutcomeType = Model::ListCertificateAssociationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListCertificateAssociations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace RTBFabric
}  // namespace Aws
