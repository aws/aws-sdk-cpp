/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DescribeIntegrationsRequest.h>
#include <aws/redshift/model/DescribeIntegrationsResult.h>

namespace Aws {
namespace Redshift {
namespace Pagination {

template <typename Client = RedshiftClient>
struct DescribeIntegrationsPaginationTraits {
  using RequestType = Model::DescribeIntegrationsRequest;
  using ResultType = Model::DescribeIntegrationsResult;
  using OutcomeType = Model::DescribeIntegrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeIntegrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Redshift
}  // namespace Aws
