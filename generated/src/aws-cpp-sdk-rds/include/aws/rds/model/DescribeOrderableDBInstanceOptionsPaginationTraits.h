/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/rds/RDSServiceClientModel.h>
#include <aws/rds/RDS_EXPORTS.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/rds/model/DescribeOrderableDBInstanceOptionsResult.h>

namespace Aws {
namespace RDS {
namespace Pagination {

template <typename Client = RDSClient>
struct DescribeOrderableDBInstanceOptionsPaginationTraits {
  using RequestType = Model::DescribeOrderableDBInstanceOptionsRequest;
  using ResultType = Model::DescribeOrderableDBInstanceOptionsResult;
  using OutcomeType = Model::DescribeOrderableDBInstanceOptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeOrderableDBInstanceOptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace RDS
}  // namespace Aws
