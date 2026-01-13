/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/redshift/RedshiftServiceClientModel.h>
#include <aws/redshift/Redshift_EXPORTS.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerRequest.h>
#include <aws/redshift/model/DescribeDataSharesForConsumerResult.h>

namespace Aws {
namespace Redshift {
namespace Pagination {

template <typename Client = RedshiftClient>
struct DescribeDataSharesForConsumerPaginationTraits {
  using RequestType = Model::DescribeDataSharesForConsumerRequest;
  using ResultType = Model::DescribeDataSharesForConsumerResult;
  using OutcomeType = Model::DescribeDataSharesForConsumerOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeDataSharesForConsumer(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace Redshift
}  // namespace Aws
