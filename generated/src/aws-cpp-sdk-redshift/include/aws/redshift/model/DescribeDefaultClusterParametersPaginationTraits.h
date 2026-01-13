/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersRequest.h>
#include <aws/redshift/model/DescribeDefaultClusterParametersResult.h>

namespace Aws {
namespace Redshift {
namespace Pagination {

template <typename Client = RedshiftClient>
struct DescribeDefaultClusterParametersPaginationTraits {
  using RequestType = Model::DescribeDefaultClusterParametersRequest;
  using ResultType = Model::DescribeDefaultClusterParametersResult;
  using OutcomeType = Model::DescribeDefaultClusterParametersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDefaultClusterParameters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetDefaultClusterParameters().GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) {
    request.SetMarker(result.GetDefaultClusterParameters().GetMarker());
  }
};

}  // namespace Pagination
}  // namespace Redshift
}  // namespace Aws
