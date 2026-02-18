/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettingsServiceClientModel.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsRequest.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsResult.h>

namespace Aws {
namespace TaxSettings {
namespace Pagination {

template <typename Client = TaxSettingsClient>
struct ListSupplementalTaxRegistrationsPaginationTraits {
  using RequestType = Model::ListSupplementalTaxRegistrationsRequest;
  using ResultType = Model::ListSupplementalTaxRegistrationsResult;
  using OutcomeType = Model::ListSupplementalTaxRegistrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListSupplementalTaxRegistrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TaxSettings
}  // namespace Aws
