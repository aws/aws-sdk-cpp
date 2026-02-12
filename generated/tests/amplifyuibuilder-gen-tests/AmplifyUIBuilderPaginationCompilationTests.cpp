/**
 * Copyright Amazon.com, Inc. or its affiliates. All Rights Reserved.
 * SPDX-License-Identifier: Apache-2.0.
 */

// Header compilation test for AmplifyUIBuilder pagination headers
// This test ensures all generated pagination headers compile successfully

#include <aws/amplifyuibuilder/AmplifyUIBuilderClientPagination.h>
#include <aws/amplifyuibuilder/AmplifyUIBuilderPaginationBase.h>
#include <aws/amplifyuibuilder/model/ExportFormsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ExportThemesPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListFormsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListCodegenJobsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ExportComponentsPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListThemesPaginationTraits.h>
#include <aws/amplifyuibuilder/model/ListComponentsPaginationTraits.h>

#include <aws/testing/AwsCppSdkGTestSuite.h>

class AmplifyUIBuilderPaginationCompilationTest : public Aws::Testing::AwsCppSdkGTestSuite
{
};

TEST_F(AmplifyUIBuilderPaginationCompilationTest, AmplifyUIBuilderPaginationHeadersCompile)
{
        // Test passes if compilation succeeds
        SUCCEED();
}
