/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for ConnectCases pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/connectcases/ConnectCasesClientPagination.h>
#include <aws/connectcases/ConnectCasesPaginationBase.h>
#include <aws/connectcases/model/GetCasePaginationTraits.h>
#include <aws/connectcases/model/ListCasesForContactPaginationTraits.h>
#include <aws/connectcases/model/ListDomainsPaginationTraits.h>
#include <aws/connectcases/model/ListLayoutsPaginationTraits.h>
#include <aws/connectcases/model/ListCaseRulesPaginationTraits.h>
#include <aws/connectcases/model/ListFieldOptionsPaginationTraits.h>
#include <aws/connectcases/model/SearchCasesPaginationTraits.h>
#include <aws/connectcases/model/GetCaseAuditEventsPaginationTraits.h>
#include <aws/connectcases/model/SearchAllRelatedItemsPaginationTraits.h>
#include <aws/connectcases/model/ListTemplatesPaginationTraits.h>
#include <aws/connectcases/model/ListFieldsPaginationTraits.h>
#include <aws/connectcases/model/SearchRelatedItemsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class ConnectCasesPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(ConnectCasesPaginationCompilationTest, ConnectCasesPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
