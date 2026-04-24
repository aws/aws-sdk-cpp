/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/neptune/NeptuneServiceClientModel.h>
#include <aws/neptune/Neptune_EXPORTS.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersRequest.h>
#include <aws/neptune/model/DescribeEngineDefaultParametersResult.h>

namespace Aws {
namespace Neptune {
namespace Pagination {

template <typename Client = NeptuneClient>
struct DescribeEngineDefaultParametersPaginationTraits {
  using RequestType = Model::DescribeEngineDefaultParametersRequest;
  using ResultType = Model::DescribeEngineDefaultParametersResult;
  using OutcomeType = Model::DescribeEngineDefaultParametersOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeEngineDefaultParameters(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetEngineDefaults().GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetEngineDefaults().GetMarker()); }
};

}  // namespace Pagination
}  // namespace Neptune
}  // namespace Aws
