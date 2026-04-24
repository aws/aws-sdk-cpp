/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImagingServiceClientModel.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsRequest.h>
#include <aws/medical-imaging/model/ListDICOMImportJobsResult.h>

namespace Aws {
namespace MedicalImaging {
namespace Pagination {

template <typename Client = MedicalImagingClient>
struct ListDICOMImportJobsPaginationTraits {
  using RequestType = Model::ListDICOMImportJobsRequest;
  using ResultType = Model::ListDICOMImportJobsResult;
  using OutcomeType = Model::ListDICOMImportJobsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListDICOMImportJobs(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MedicalImaging
}  // namespace Aws
