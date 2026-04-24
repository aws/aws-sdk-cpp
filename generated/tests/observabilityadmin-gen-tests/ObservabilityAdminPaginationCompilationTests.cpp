/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ObservabilityAdmin pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/observabilityadmin/ObservabilityAdminClientPagination.h>
#include <aws/observabilityadmin/ObservabilityAdminPaginationBase.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryPipelinesPaginationTraits.h>
#include <aws/observabilityadmin/model/ListS3TableIntegrationsPaginationTraits.h>
#include <aws/observabilityadmin/model/ListCentralizationRulesForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListResourceTelemetryForOrganizationPaginationTraits.h>
#include <aws/observabilityadmin/model/ListTelemetryRulesForOrganizationPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ObservabilityAdminPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ObservabilityAdminPaginationCompilationTest, ObservabilityAdminPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
