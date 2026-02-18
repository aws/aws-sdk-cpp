/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

#pragma once
#include <aws/core/utils/pagination/Paginator.h>
#include <aws/taxsettings/TaxSettingsClient.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsPaginationTraits.h>
#include <aws/taxsettings/model/ListTaxExemptionsPaginationTraits.h>
#include <aws/taxsettings/model/ListTaxRegistrationsPaginationTraits.h>

namespace Aws {
namespace TaxSettings {

using ListSupplementalTaxRegistrationsPaginator =
    Aws::Utils::Pagination::Paginator<TaxSettingsClient, Model::ListSupplementalTaxRegistrationsRequest,
                                      Pagination::ListSupplementalTaxRegistrationsPaginationTraits<TaxSettingsClient>>;
using ListTaxExemptionsPaginator = Aws::Utils::Pagination::Paginator<TaxSettingsClient, Model::ListTaxExemptionsRequest,
                                                                     Pagination::ListTaxExemptionsPaginationTraits<TaxSettingsClient>>;
using ListTaxRegistrationsPaginator =
    Aws::Utils::Pagination::Paginator<TaxSettingsClient, Model::ListTaxRegistrationsRequest,
                                      Pagination::ListTaxRegistrationsPaginationTraits<TaxSettingsClient>>;

}  // namespace TaxSettings
}  // namespace Aws
