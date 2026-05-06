/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once

#include <aws/core/client/UserAgent.h>
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsPaginationTraits.h>
#include <aws/taxsettings/model/ListTaxExemptionsPaginationTraits.h>
#include <aws/taxsettings/model/ListTaxRegistrationsPaginationTraits.h>

#include <memory>

namespace Aws {
namespace TaxSettings {

template <typename DerivedClient>
class TaxSettingsPaginationBase {
 public:
  /**
   * Create a paginator for ListSupplementalTaxRegistrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupplementalTaxRegistrationsRequest,
                                    Pagination::ListSupplementalTaxRegistrationsPaginationTraits<DerivedClient>>
  ListSupplementalTaxRegistrationsPaginator(const Model::ListSupplementalTaxRegistrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListSupplementalTaxRegistrationsRequest,
                                             Pagination::ListSupplementalTaxRegistrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTaxExemptions operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaxExemptionsRequest,
                                    Pagination::ListTaxExemptionsPaginationTraits<DerivedClient>>
  ListTaxExemptionsPaginator(const Model::ListTaxExemptionsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaxExemptionsRequest,
                                             Pagination::ListTaxExemptionsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }

  /**
   * Create a paginator for ListTaxRegistrations operation
   */
  Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaxRegistrationsRequest,
                                    Pagination::ListTaxRegistrationsPaginationTraits<DerivedClient>>
  ListTaxRegistrationsPaginator(const Model::ListTaxRegistrationsRequest& request) {
    request.AddUserAgentFeature(Aws::Client::UserAgentFeature::PAGINATOR);
    return Aws::Utils::Pagination::Paginator<DerivedClient, Model::ListTaxRegistrationsRequest,
                                             Pagination::ListTaxRegistrationsPaginationTraits<DerivedClient>>{
        static_cast<DerivedClient*>(this), request};
  }
};
}  // namespace TaxSettings
}  // namespace Aws
