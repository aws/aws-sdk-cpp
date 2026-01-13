/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for SsmSap pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/ssm-sap/SsmSapClientPagination.h>
#include <aws/ssm-sap/SsmSapPaginationBase.h>
#include <aws/ssm-sap/model/ListDatabasesPaginationTraits.h>
#include <aws/ssm-sap/model/ListConfigurationCheckDefinitionsPaginationTraits.h>
#include <aws/ssm-sap/model/ListSubCheckRuleResultsPaginationTraits.h>
#include <aws/ssm-sap/model/ListComponentsPaginationTraits.h>
#include <aws/ssm-sap/model/ListSubCheckResultsPaginationTraits.h>
#include <aws/ssm-sap/model/ListApplicationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListConfigurationCheckOperationsPaginationTraits.h>
#include <aws/ssm-sap/model/ListOperationEventsPaginationTraits.h>
#include <aws/ssm-sap/model/ListOperationsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class SsmSapPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(SsmSapPaginationCompilationTest, SsmSapPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
