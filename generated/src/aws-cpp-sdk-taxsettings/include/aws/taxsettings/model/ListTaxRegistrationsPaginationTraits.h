/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/taxsettings/TaxSettingsServiceClientModel.h>
#include <aws/taxsettings/TaxSettings_EXPORTS.h>
#include <aws/taxsettings/model/ListTaxRegistrationsRequest.h>
#include <aws/taxsettings/model/ListTaxRegistrationsResult.h>

namespace Aws {
namespace TaxSettings {
namespace Pagination {

template <typename Client = TaxSettingsClient>
struct ListTaxRegistrationsPaginationTraits {
  using RequestType = Model::ListTaxRegistrationsRequest;
  using ResultType = Model::ListTaxRegistrationsResult;
  using OutcomeType = Model::ListTaxRegistrationsOutcome;
  using ClientType = Client;

  static OutcomeType Invoke(Client* client, const RequestType& request) { return client->ListTaxRegistrations(request); }

  static bool HasMoreResults(const ResultType& result) { return !result.GetNextToken().empty(); }

  static void SetNextRequest(const ResultType& result, RequestType& request) { request.SetNextToken(result.GetNextToken()); }
};

}  // namespace Pagination
}  // namespace TaxSettings
}  // namespace Aws
