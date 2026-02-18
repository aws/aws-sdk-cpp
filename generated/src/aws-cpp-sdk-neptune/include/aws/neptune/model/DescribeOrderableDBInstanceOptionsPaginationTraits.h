/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/NeptuneServiceClientModel.h>
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsRequest.h>
#include <aws/neptune/model/DescribeOrderableDBInstanceOptionsResult.h>

namespace Aws {
namespace Neptune {
namespace Pagination {

template <typename Client = NeptuneClient>
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
}  // namespace Neptune
}  // namespace Aws
