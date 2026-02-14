/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for QApps pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/qapps/QAppsClientPagination.h>
#include <aws/qapps/QAppsPaginationBase.h>
#include <aws/qapps/model/ListLibraryItemsPaginationTraits.h>
#include <aws/qapps/model/ListQAppsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class QAppsPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(QAppsPaginationCompilationTest, QAppsPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
