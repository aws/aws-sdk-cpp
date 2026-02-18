/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDSServiceClientModel.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersRequest.h>
#include <aws/rds/model/DescribeEngineDefaultClusterParametersResult.h>

namespace Aws {
namespace RDS {
namespace Pagination {

template <typename Client = RDSClient>
struct DescribeEngineDefaultClusterParametersPaginationTraits {
  using RequestType = Model::DescribeEngineDefaultClusterParametersRequest;
  using ResultType = Model::DescribeEngineDefaultClusterParametersResult;
  using OutcomeType = Model::DescribeEngineDefaultClusterParametersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeEngineDefaultClusterParameters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetEngineDefaults().GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetEngineDefaults().GetMarker()); }
};

}  // namespace Pagination
}  // namespace RDS
}  // namespace Aws
