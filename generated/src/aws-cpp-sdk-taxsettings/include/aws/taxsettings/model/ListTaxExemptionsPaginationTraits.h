/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettingsServiceClientModel.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/ListTaxExemptionsRequest.h>
#include <aws/taxsettings/model/ListTaxExemptionsResult.h>

namespace Aws {
namespace TaxSettings {
namespace Pagination {

template <typename Client = TaxSettingsClient>
struct ListTaxExemptionsPaginationTraits {
  using RequestType = Model::ListTaxExemptionsRequest;
  using ResultType = Model::ListTaxExemptionsResult;
  using OutcomeType = Model::ListTaxExemptionsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTaxExemptions(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TaxSettings
}  // namespace Aws
