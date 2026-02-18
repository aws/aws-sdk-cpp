/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/mediaconvert/MediaConvertServiceClientModel.h>
#include <aws/mediaconvert/MediaConvert_EXPORTS.h>
#include <aws/mediaconvert/model/ListPresetsRequest.h>
#include <aws/mediaconvert/model/ListPresetsResult.h>

namespace Aws {
namespace MediaConvert {
namespace Pagination {

template <typename Client = MediaConvertClient>
struct ListPresetsPaginationTraits {
  using RequestType = Model::ListPresetsRequest;
  using ResultType = Model::ListPresetsResult;
  using OutcomeType = Model::ListPresetsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListPresets(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace MediaConvert
}  // namespace Aws
