/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/medical-imaging/MedicalImagingServiceClientModel.h>
#include <aws/medical-imaging/MedicalImaging_EXPORTS.h>
#include <aws/medical-imaging/model/ListImageSetVersionsRequest.h>
#include <aws/medical-imaging/model/ListImageSetVersionsResult.h>

namespace Aws {
namespace MedicalImaging {
namespace Pagination {

template <typename Client = MedicalImagingClient>
struct ListImageSetVersionsPaginationTraits {
  using RequestType = Model::ListImageSetVersionsRequest;
  using ResultType = Model::ListImageSetVersionsResult;
  using OutcomeType = Model::ListImageSetVersionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListImageSetVersions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MedicalImaging
}  // namespace Aws
