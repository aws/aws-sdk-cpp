/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AppConfig pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/appconfig/AppConfigClientPagination.h>
#include <aws/appconfig/AppConfigPaginationBase.h>
#include <aws/appconfig/model/ListApplicationsPaginationTraits.h>
#include <aws/appconfig/model/ListEnvironmentsPaginationTraits.h>
#include <aws/appconfig/model/ListExtensionAssociationsPaginationTraits.h>
#include <aws/appconfig/model/ListHostedConfigurationVersionsPaginationTraits.h>
#include <aws/appconfig/model/ListConfigurationProfilesPaginationTraits.h>
#include <aws/appconfig/model/ListDeploymentStrategiesPaginationTraits.h>
#include <aws/appconfig/model/ListDeploymentsPaginationTraits.h>
#include <aws/appconfig/model/ListExtensionsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AppConfigPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AppConfigPaginationCompilationTest, AppConfigPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
