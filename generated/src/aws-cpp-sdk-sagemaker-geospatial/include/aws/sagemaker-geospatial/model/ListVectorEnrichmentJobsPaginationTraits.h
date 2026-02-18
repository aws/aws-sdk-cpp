/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/sagemaker-geospatial/SageMakerGeospatialServiceClientModel.h>
#include <aws/sagemaker-geospatial/SageMakerGeospatial_EXPORTS.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsRequest.h>
#include <aws/sagemaker-geospatial/model/ListVectorEnrichmentJobsResult.h>

namespace Aws {
namespace SageMakerGeospatial {
namespace Pagination {

template <typename Client = SageMakerGeospatialClient>
struct ListVectorEnrichmentJobsPaginationTraits {
  using RequestType = Model::ListVectorEnrichmentJobsRequest;
  using ResultType = Model::ListVectorEnrichmentJobsResult;
  using OutcomeType = Model::ListVectorEnrichmentJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListVectorEnrichmentJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace SageMakerGeospatial
}  // namespace Aws
