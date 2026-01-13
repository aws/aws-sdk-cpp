/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DescribeTableRestoreStatusRequest.h>
#include <aws/redshift/model/DescribeTableRestoreStatusResult.h>

namespace Aws {
namespace Redshift {
namespace Pagination {

template <typename Client = RedshiftClient>
struct DescribeTableRestoreStatusPaginationTraits {
  using RequestType = Model::DescribeTableRestoreStatusRequest;
  using ResultType = Model::DescribeTableRestoreStatusResult;
  using OutcomeType = Model::DescribeTableRestoreStatusOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeTableRestoreStatus(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Redshift
}  // namespace Aws
