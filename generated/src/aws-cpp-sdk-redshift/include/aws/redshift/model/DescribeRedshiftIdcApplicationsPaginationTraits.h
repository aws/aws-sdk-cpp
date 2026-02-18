/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsRequest.h>
#include <aws/redshift/model/DescribeRedshiftIdcApplicationsResult.h>

namespace Aws {
namespace Redshift {
namespace Pagination {

template <typename Client = RedshiftClient>
struct DescribeRedshiftIdcApplicationsPaginationTraits {
  using RequestType = Model::DescribeRedshiftIdcApplicationsRequest;
  using ResultType = Model::DescribeRedshiftIdcApplicationsResult;
  using OutcomeType = Model::DescribeRedshiftIdcApplicationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeRedshiftIdcApplications(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Redshift
}  // namespace Aws
