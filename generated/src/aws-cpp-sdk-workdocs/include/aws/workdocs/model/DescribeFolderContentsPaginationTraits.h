/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/workdocs/WorkDocsServiceClientModel.h>
#include <aws/workdocs/WorkDocs_EXPORTS.h>
#include <aws/workdocs/model/DescribeFolderContentsRequest.h>
#include <aws/workdocs/model/DescribeFolderContentsResult.h>

namespace Aws {
namespace WorkDocs {
namespace Pagination {

template <typename Client = WorkDocsClient>
struct DescribeFolderContentsPaginationTraits {
  using RequestType = Model::DescribeFolderContentsRequest;
  using ResultType = Model::DescribeFolderContentsResult;
  using OutcomeType = Model::DescribeFolderContentsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->DescribeFolderContents(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetMarker().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetMarker(result.GetMarker()); }
};

}  // namespace Pagination
}  // namespace WorkDocs
}  // namespace Aws
