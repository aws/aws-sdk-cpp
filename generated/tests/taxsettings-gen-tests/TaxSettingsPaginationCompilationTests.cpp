/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for TaxSettings pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/taxsettings/TaxSettingsClientPagination.h>
#include <aws/taxsettings/TaxSettingsPaginationBase.h>
#include <aws/taxsettings/model/ListSupplementalTaxRegistrationsPaginationTraits.h>
#include <aws/taxsettings/model/ListTaxRegistrationsPaginationTraits.h>
#include <aws/taxsettings/model/ListTaxExemptionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class TaxSettingsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(TaxSettingsPaginationCompilationTest, TaxSettingsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
